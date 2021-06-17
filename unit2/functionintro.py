from sys import argv as ag

#def <-- function#
def add_two_numbers(number1, number2):
    result=number1+number2
    return result 

def isEven(numx):
    if(numx%2 == 0):
        return True
    else:
        return False

answer=False        


if __name__ == "__main__":
    n1 = int( input('Número 1:\t'))
    n2 = int( input('Número 2:\t'))
    #print( f'la suma de dos números= {addtwonumbers(int(ag[1]) ,int(ag[2]) )}') addTwoNumbers
    print( f'la suma de dos números= {add_two_numbers(n1, n2 )}')
    answer = isEven(add_two_numbers(n1, n2))
    print(answer)
