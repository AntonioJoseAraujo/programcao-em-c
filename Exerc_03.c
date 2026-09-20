#include    <stdio.h>

int notaValida(int n);
void mostrarSituacao (int nota);

int main (){

    int nota = 0;
do
{
    printf("Infome a nota: ");
    scanf("%d", &nota);

    if (!notaValida(nota)){
        printf("Nota invalida!\n");
    }
} while (!notaValida(nota));

    mostrarSituacao(nota);


    return 0;
}

int notaValida(int n){
    if (n >= 0 && n <= 10){
       return 1;
    }
    return 0;
}

void mostrarSituacao(int nota){
    if(nota >= 7){
        printf("APROVADO!!!\n");
    }
    else if (nota >= 5 && nota < 7){
        printf("Recuperacao...\n");
    }
    else {
        printf("Reprovado... Que pena.\n");
        
    }
}
    