# get_string and print, with concatenation

from cs50 import get_string

answer = get_string("What's your name? ")
print("Hello, " + answer)

# or
answer = get_string("What's your name? ")
print(f"Hello, {answer}")

# or
answer = input("What's your name? ")
print(f"Hello, {answer}")
