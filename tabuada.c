#include <stdio.h>

int main()
{
    int cont, num1, num2, num3, resul;
    
    printf("Qual tabuada deseja? \n");
    scanf("%d", &num1);
    
    printf("Por qual número deve começar? \n");
    scanf("%d", &num2);
    
    printf("Até que número deseja? \n");
    scanf("%d", &num3);
    
    cont = num2; //atribuindo valor
    
    while(cont <= num3){
        resul = cont * num1;
        printf("%d x %d = %d \n", num1, cont, resul);
        cont = cont + 1; //loop
    }
}