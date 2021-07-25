import sys


if __name__ == "__main__":
    a=[2,3,4,5]
    b=[]
    
    #i+4
    for i in range(0, len(a)):
        for j in range(0,4):
            b.append((a[i]+j))
    print(b)
