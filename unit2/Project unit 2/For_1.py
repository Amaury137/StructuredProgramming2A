import sys


if __name__ == "__main__":
    año=["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviemre", "Diciembre"]

    #primeros 6 meses
    for mes in range(0, 7):  #<-#len(año)
        print("mes: ",año[mes])
        
        if (mes==1):
            for día in range(1,30):
                print("día: ",día)


        elif (mes%2==0):
            for día in range(1,32):
                print("día: ",día)
                
        
        elif (mes%2!=0):
            for día in range(1,31):
                print("día: ",día)
    


    #segunda  parte
    for mes in range(7, len(año)):  #<-#len(año)
        print("mes: ",año[mes])

        if (mes%2==0):
            for día in range(1,31):
                print("día: ",día)
                
        
        elif (mes%2!=0):
            for día in range(1,32):
                print("día: ",día)


