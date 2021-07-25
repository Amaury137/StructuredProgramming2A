from sys import argv 



if __name__ == "__main__":
    
    addition= int(argv[1])+ int(argv[2])
    substraction= int(argv[1])- int(argv[2])
    multiplication= int(argv[1])*int(argv[2])
    divition= int(argv[1])/int(argv[2])

    print("Your results are:")
    print(addition)
    print(substraction)
    print(multiplication)
    print(divition)
