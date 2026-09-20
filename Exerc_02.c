#include    <stdio.h>

float calcularDesconto (float i);

int main (){
    float valor = 0;

    printf("Informe o valor da sua compra: R$ ");
    scanf("%f", &valor);

    float total = calcularDesconto(valor);
    printf("Valor da compra: R$ %.2f\n", valor);
    printf("Valor a pagar: R$ %.2f\n", total);
  

    return 0;
}

float calcularDesconto(float i){
    float desc = 0;

    if (i < 100){
        printf("Sem desconto.\n");
        desc = i;
    }
    else if (i >= 100 && i <= 499.99)
    {
        desc = i - (i * 0.10);
        printf("Voce recebeu 10%%  de desconto.\n");
        
    }
    else if (i >= 500)
    {
        desc = i -(i * .15);
        printf("Voce recebeu 15%% de desconto.\n"); 
        
    }
    return desc;
}
