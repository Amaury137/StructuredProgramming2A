import sys

tempF = [63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 
82, 64, 75 , 90, 64, -999, 99, 82, 95, 82]

def F_to_C(temp):
    temp_in_C=(temp-32)*(5/9)
    return temp_in_C



if __name__ == "__main__":
    
    tempC=[]

    for i in range(0, len(tempF)):
        if (tempF[i]> -999):
            tempC.append(F_to_C(tempF[i]))
    print(tempC)
    print(max(tempC))
    print(min(tempC))
        



