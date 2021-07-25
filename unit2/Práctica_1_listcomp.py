import sys

def alternating_sums(parameter):
    first=[]
    second=[]
    for i in range(0, len(parameter)):
        # print(i)
        # print(parameter[i])
        if i%2==0:
            first.append(parameter[i])
        else:
            second.append(parameter[i])
    suma1=sum(first)
    suma2=sum(second)
    
    result=[suma1, suma2]
    return result


if __name__ == "__main__":
    a=[50,60,60,45,70]
    output=alternating_sums(a)
    print(output)
    


