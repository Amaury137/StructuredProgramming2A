import sys
import random as rd

my_list = list()
other_list= [] ##array no=lista, lista puede ser más o menos grand(modificable)
my_int=4


if __name__ == "__main__":
    print("Data structures")
    print(type(my_list))                 ##type dice el tipo del objeto
    print(type(other_list))
    print(type(my_int))

    my_list.append("data1")  ##<-agrega elementos a la lista
    my_list.append("data2")
    my_list.append("data3")
    my_list.append("data4")
    

    #for i in range(0, len(my_list)):
     #   print(my_list[1], i)
    
    for i in range(0, len(my_list)):
        print(f'my_list[{i}]:',my_list[i], "current index", i)
    
    for i in range(0, 11):
        other_list.append(rd.randint(0,100))  ##rd.radint() da números aleatoreos
        print(other_list)
    
    my_list.extend(other_list)  # en my_list, meter los datos de otherlist
    #my_list.pop
    my_list.reverse  #123 -> 321
    print(my_list)

    new_list = my_list[0:3]  #-> [0:3]] slicing, solo agarrar los elementos de a-b  a:b
    new_list_skip = my_list[0:3:4]  #->  agarrar los elementos de a-b  y saltar de c en c, a:b:c
    print(new_list)

    users_admin={"Pepe", "422", "Rafael", "Juan"}
    for  in users_admin:
        users_admin[i]=users_admin[i].lower()  #-> convertir en minúscula
    print(users_admin)

    for usuario in users_admin:
        print(usuario, type(usuario))
    
    for elemento in range(0, len(users_admin)):
        users_admin[elemento]=users_admin[elemento].lower()
        #print(users_admin[elemento], type usuario)


#------------------------------hacer-------------------------------




def isAnyUpper( str ):
        for element in str:
                if element.isupper():
                        return True
        return False

if __name__ ==  "__main__":
        print("DataStructures!")
        print( type( myList )  )
        print(  type( otherList)  )
        myList.append(  "Data1" )
        myList.append(  "Data2" )
        myList.append(  "Data3" )
        myList.append(  "Data4" )
        myList.append(  "Data5" )




        for index in range(0, len(myList)     ):
                print(f'myList[{index}]: ', myList[index], ", Current Index:"  ,index)


        for it in range(0, 11):
                otherList.append(  rd.randint(0, 100)  )
        print(otherList)



        myList.extend(otherList)
       
        


        print(myList)
        # myList.pop()
        myList.reverse()
        print(myList)

        newList  = myList[0::5]
        print(newList)
        
        usersAdmin = [
                "Luis",
                "RAFA",
                "Jose",
                "fernando",
                "ricardo"
                ##.....
        ]
        print(  usersAdmin   )

        print( usersAdmin[0].lower()    )
        # usersAdmin[0] = usersAdmin[0].lower() 



        for usuario in usersAdmin:
                print(usuario, type(usuario))
        
        for element in range(0, len(usersAdmin)  ) :
                if(  isAnyUpper( usersAdmin[ element  ] )      ):
                        print(f' usersAdmin[ {element}  ] modificated  ')
                        usersAdmin[ element  ] = usersAdmin[ element  ].lower()
        print(  usersAdmin   )


        sensor = "$GPGGA,134658.00,5106.9792,N,11402.3003,W,2,09,1.0,1048.47,M,16.27,M,08,AAAA*60"
        
        listaSensor =   sensor.split(   ","  )
        hr = listaSensor[1][:2]
        min =  listaSensor[1][2:4]
        sec = listaSensor[1][4:6]
        # print(f'hr: {hr}, min: {min}, sec: {sec}')

        listaSensor[1] = f'hr: {hr}, min: {min}, sec: {sec}'
        print(listaSensor)

        sensorFixed  = ",".join(listaSensor)
        print(sensorFixed)
