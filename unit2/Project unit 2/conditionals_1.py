import sys


if __name__ == "__main__":
    print("Hello, what's your name mate?")
    name= input()
    print("Hello", name, "How old are you?")
    age= int(input())

    if (age<18):
        years=18-age
        print("sorry ", name, "come back in ", years, "years  ¯\_(ツ)_/¯")

    else:
        print("Welcome to our site", name, ":D")