#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    char anno[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviemre", "Diciembre"};

  
    for (int mes = 0; mes < 13; mes++){
        printf("mes: %s",anno[mes]);

        if (mes==1){
            for (int dia = 0; dia < 32; dia++){
                printf("día: %d", dia) ;
            }
        }


    }
    

    


    }
    //     elif (mes%2==0):
    //         for día in range(1,32):
    //             print("día: ",día)
                
        
    //     elif (mes%2!=0):
    //         for día in range(1,31):
    //             print("día: ",día)
    


    // #segunda  parte
    // for mes in range(7, len(año)):  #<-#len(año)
    //     print("mes: ",año[mes])

    //     if (mes%2==0):
    //         for día in range(1,31):
    //             print("día: ",día)
                
        
    //     elif (mes%2!=0):
    //         for día in range(1,32):
    //             print("día: ",día)
    

}