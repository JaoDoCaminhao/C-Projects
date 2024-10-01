#include <stdio.h>
#include <unistd.h>

int main (){

printf("Pense em um número. \n");
sleep(2);

    int a;
    
    printf("Pensou? ");
    sleep(2);
    
    printf("Agora digite o número pensado aqui: ");

    scanf("%d",&a);
    sleep(1);

    printf("Deixa eu adivinhar então! \n");
    sleep(2);
    
    printf("O número que voce pensou foi");
    sleep(0.8);
    
    printf(".");
    sleep(1);
    
    printf(".");
    sleep(1);

    printf(".");
    sleep(1);

    printf(" %d !!",a);

    return 0;
}
