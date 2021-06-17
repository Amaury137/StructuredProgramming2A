import sys
a=6
b=23

print(f'original values: a:{a}, b:{b}')
def swap(parameter1, parameter2):
	c=a
	a=b
	b=c

if __name__ == "__main__":
	print("swap program")
    #swap(a,b) #con función 
	a,b=b,a  #otra forma de hacer swap, solo en python#
	print(f'values: a:{a}, b:{b}')
