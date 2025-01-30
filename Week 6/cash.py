from cs50 import get_float

def main():
    cents = get_change()
    coins = 0

    quarters = calculate_quarters(cents)
    coins += quarters
    cents -= quarters * 25

    dimes = calculate_dimes(cents)
    coins += dimes
    cents -= dimes * 10

    nickels = calculate_nickels(cents)
    coins += nickels
    cents -= nickels * 5
    
    pennies = calculate_pennies(cents)
    coins += pennies
    cents -=pennies

    print(f"{coins}")


def get_change():
    while True:
        n = get_float("Change owed: ")
        if n > 0:
            break
    return round(n * 100)

def calculate_quarters(cents):
    q = cents // 25
    return q

def calculate_dimes(cents):
    d = cents // 10
    return d

def calculate_nickels(cents):
    n = cents // 5
    return n

def calculate_pennies(cents):
    return cents

main()

