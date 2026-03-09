from Crypto.Util.number import bytes_to_long, getPrime
import socketserver
import json

FLAG = open("flag.txt", "rb").read().strip()

class Hanxin_requirements():

    def __init__(self, msg):
        self.msg = msg
        self.bit_size = 1024
        self.e = 5

    def _get_new_key(self):
        while True:
            p = getPrime(self.bit_size // 2)
            q = getPrime(self.bit_size // 2)
            n = p * q
            phi = (p - 1) * (q - 1)
            try:
                pow(self.e, -1, phi)
                break
            except ValueError:
                pass

        return n, self.e

    def get_new_requirement(self):
        n, e = self._get_new_key()
        m = bytes_to_long(self.msg)
        m = pow(m, e, n)

        return {"requirement": f"{m:X}", "key": [f"{n:X}", f"{e:X}"]}


def challenge(req):
    requirement = Hanxin_requirements(FLAG)
    while True:
        try:
            req.sendall(
                b'Welcome to Hanxin\'s Military Camp. Would you like to enroll? (y/n) '
            )
            msg = req.recv(4096).decode().strip().upper()

            if msg == 'Y' or msg == 'YES':
                response = requirement.get_new_requirement()
                req.sendall(json.dumps(response).encode() + b'\n')
            elif msg == 'N' or msg == "NO":
                req.sendall(b'Baii:< Good luck in yours!\n')
                break
            else:
                req.sendall(b'What do you mean?\n')
        except:
            # Socket closed, bail
            return


class MyTCPRequestHandler(socketserver.BaseRequestHandler):

    def handle(self):
        req = self.request
        challenge(req)


class ThreadingTCPServer(socketserver.ThreadingMixIn, socketserver.TCPServer):
    pass


def main():
    socketserver.TCPServer.allow_reuse_address = True
    server = ThreadingTCPServer(("0.0.0.0", 7111), MyTCPRequestHandler)
    server.serve_forever()


if __name__ == '__main__':
    main()
