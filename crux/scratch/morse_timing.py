import sys
MORSE={ '.-':'A','-...':'B','-.-.':'C','-..':'D','.':'E','..-.':'F','--.':'G','....':'H','..':'I','.---':'J','-.-':'K','.-..':'L','--':'M','-.':'N','---':'O','.--.':'P','--.-':'Q','.-.':'R','...':'S','-':'T','..-':'U','...-':'V','.--':'W','-..-':'X','-.--':'Y','--..':'Z','-----':'0','.----':'1','..---':'2','...--':'3','....-':'4','.....':'5','-....':'6','--...':'7','---..':'8','----.':'9','..--.-':'_'}
rows=[]
for l in open('scratch/irc_msgs.txt'):
    p=l.rstrip('\n').split('\t')
    if len(p)<4: continue
    rows.append((float(p[1]),p[2],'\t'.join(p[3:])))
st=sys.argv[1] if len(sys.argv)>1 else '2'
intra=float(sys.argv[2]) if len(sys.argv)>2 else 0.15
letter=float(sys.argv[3]) if len(sys.argv)>3 else 0.36
ss=[r for r in rows if r[1]==st]
t=[r[0] for r in ss]
gaps=[t[i+1]-t[i] for i in range(len(t)-1)]
ev=[(i+1,gaps[i]) for i in range(len(gaps)) if gaps[i]>0.05]
marks=[];sil=[];prev=0
for idx,g in ev:
    marks.append((prev,idx-1)); sil.append(g); prev=idx
marks.append((prev,len(t)-1))
code='';out=''
for (a,b),g in zip(marks,sil):
    dur=t[b]-t[a]+0.010 if b>=a else 0
    code += '.' if dur<0.2 else '-'
    if g<intra: continue
    out+=MORSE.get(code,'?'); code=''
    out+=' ' if g<letter else '\n'
if code: out+=MORSE.get(code,'?')
print(out)
