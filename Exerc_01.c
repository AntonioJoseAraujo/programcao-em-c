#include <stdio.h>

int dobro(int i);

int main() {
    int n = 0;
    
    printf("Informe um valor: ");
    scanf("%d", &n);
    
    int monstra = dobro(n);
    printf("O dobro do numero e: %d", monstra);

return 0;


}
int dobro(int i){
    int resultado = 0;
    resultado = i *2;
    if (resultado == 0 )
    {
        printf("O resultado e ZERO.\n");
    }
    else if (resultado < 0)
    {
        printf("O resultado e NEGATIVO.\n");
    }
    else{
        printf("O resultado e POSITIVO.\n");
    }
    return resultado;

   
}
