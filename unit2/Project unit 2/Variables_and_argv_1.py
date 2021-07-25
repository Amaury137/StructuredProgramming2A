from sys import argv 



if __name__ == "__main__":
    #numbers= [sys.argv[1], sys.argv[2], sys.argv[3], sys.argv[4]]
    # sumary=(sum(numbers))
    # size=(len(numbers))

    # average=sumary/size
    # print(average)
    
    numbers=[]
    for i in range(1, len(argv)):
        #print(argv[i])
        numbers.append(int(argv[i]))
        # sumary=(sum(numbers))
        # size=(len(numbers))
    
    average = (sum(numbers))/(len(numbers))
    print("The average is:", average) #27.5

    # x= (len(numbers))/2
    # print(x)
    
# def average(nums):
#     result=((sum(nums))/(len(nums)))
#     return result

    
    