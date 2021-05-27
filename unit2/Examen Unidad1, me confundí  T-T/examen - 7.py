#Número más grande#

N1 = int(input("Enter a number:\n"))
N2 = int(input("Enter other number:\n"))
N3 = int(input("Enter other number again:\n"))


if(N1>N2):
    if(N1>N3):
        print("el más grande es", N1)
else:
    if(N2>N3):
        print("el más grande es", N2)
    else:
        print("el más grande es", N3)
