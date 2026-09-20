#include <stdio.h>

float depositar(float saldo);
float sacar(float saldo);

int main(){
    float saldo = 1000;
    int op = 1;
    while (op != 0)
    {
        printf("\n --- Bem Vindo ao TC-Bank --- \n");
        printf("-------------------------------\n");
        printf("Selecio a opcao desejada:\n");
        printf(" 1-Depositar \n 2-Sacar \n 3-Consultar saldo \n 0-Sair \n Opc: ");
        scanf("%d", &op);

        if (op == 1)
        {
            printf("-*-*-* Depositar *-*-*-\n");
            saldo = depositar(saldo);
            printf("\n-------------------------------\n");
        }
        else if (op ==2)
        {
            printf("-*-*-* Sacar *-*-*-\n");
            saldo = sacar(saldo);
            printf("\n-------------------------------\n");
        }
        else if (op == 3)
        {
            printf("Seu saldo atual: R$ %.2f", saldo);
            printf("\n-------------------------------\n");
        }
        else{
            printf("Saindo do programa...");
            break;
        }

       
    }
    

    return 0;
}

float depositar(float saldo){
    float deposito=0;
  
    printf("Informe o valor do Deposito: R$ ");
    scanf("%f", &deposito);

    saldo = saldo + deposito;

    printf("Saldo Atual: R$ %.2f", saldo);
    return saldo;
}

float sacar (float saldo){
    float saque = 0;

    printf("Informe o valor do SAQUE: R$ ");
    scanf("%f", &saque);

    saldo = saldo - saque;

    printf("Saldo Atual: R$ %.2f", saldo);
    return saldo;

}