#include <stdio.h>

int somaQuadradoRecursivo(int num){
    if (num == 0) {
        return 0;
    }
    int digito = num % 10;
    if (digito % 2 == 0) {
        return digito * digito + somaQuadradoRecursivo(num / 10);
    }
    return somaQuadradoRecursivo(num / 10);
}

int somaQuadradoIterativo(int num){
    int soma = 0;
    while (num > 0){
        int digito = num % 10;
        if (digito % 2 == 0)
            soma += digito * digito;
        num /= 10;
    }
    return soma;
}

int main(){
    int num, somaRecursivo, somaIterativo;

    do{
        printf("Entre com o número de até 6 dígitos: ");
        scanf("%d", &num);

    } while ( num < 10 || num > 999999);

    somaRecursivo = somaQuadradoRecursivo(num);
    somaIterativo = somaQuadradoIterativo(num);

    printf("Soma dos quadrados dos dígitos pares (recursivo): %d\n", somaRecursivo);
    printf("Soma dos quadrados dos dígitos pares (iterativo): %d\n", somaIterativo);
    return 0;
}