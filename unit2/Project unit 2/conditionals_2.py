import sys

if __name__ == "__main__":
    three=[]
    five=[]
    
    print("Hi, this program will help you find the multiples of 3 and 5 in a range")
    print("enter the start point")
    start=int(input())
    print("enter the end point")
    end=int(input())

    for i in range(start, end+1):
        if(i%3==0 and i%5==0):
            three.append(i)
            five.append(i)

        elif(i%3==0):
            three.append(i)
            
        elif(i%5==0):
            five.append(i)
    print("the multiples of 3 are:", three)
    print("the multiples of 5 are:", five)