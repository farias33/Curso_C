#include <stdio.h>
#include<stdlib.h>

void main(){
     int opcao;

    while (opcao < 1 || opcao > 3){ //Esse cara valida a opcao, caso o usuario erre ele tera outra chance de tentar over n over
         printf("Escolha uma opcao:\n");
     printf("1 - Opcao 1\n");
     printf("2 - Opcao 2\n");
     printf("3 - Opcao 3\n");

    }  
       

     //Lendo a opcao

     scanf("%d",&opcao);
    //Resultado de acordo com a opcao escolhida
     switch (opcao){
         case 1:
         printf("\nOpcao 1 foi escolhida");
         break;
        case 2:
            printf("\nOpcao 2 foi escolhida");
            break;
        case 3: 
            printf("\nOpcao 3 foi escolhida");
            break;
        default:
            printf("\nOpcao invalida");
            break;

        return 0;
    
     }


/*


}
        


     //Interface de menu
     printf("Escolha uma opcao:\n");
     printf("1 - Opcao 1\n");
     printf("2 - Opcao 2\n");
     printf("3 - Opcao 3\n");

     //Lendo a opcao

     scanf("%d",&opcao);

     switch (opcao){
         case 1:
         printf("\nOpcao 1 foi escolhida");
         break;
        case 2:
            printf("\nOpcao 2 foi escolhida");
            break;
        case 3: 
            printf("\nOpcao 3 foi escolhida");
            break;
        default:
            printf("\nOpcao invalida");
            break;
    
     }





}
*/