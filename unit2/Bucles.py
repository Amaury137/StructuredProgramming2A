from sys  import argv

my_name = "Amaury"
#método1 lista = []#
#método2 lista = lst()#



if __name__ == "__main__":
    lista= ["red", "blue", "green"]

    i=0
    print(f'Name: {argv[0]} \n)')
    print(lista, len(lista))  #len = lenght#

    ## lista2= [i for i in range(1,101)]   números del 1->(x-1)
    ## print(lista2)
    
    listaEven = [i for i in range(1,101) if i%2==0] #imprimir números pares#
    print(listaEven)

    listaOdd = [i for i in range(1,101) if i%2!=0] #imprimir números impares#
    print(listaOdd)


    
    while(i < len(lista)):
        print(lista[i])
        i=i+1


