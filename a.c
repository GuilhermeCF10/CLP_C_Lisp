#include <stdio.h>

int somaQuadrado(int num){
     int i, digitos[6], soma = 0;
      for (i = 0; i < 6; i++) {
        digitos[i] = num % 10;
        num /= 10;
    }
    for (i = 0; i < 6; i++) {
        if (digitos[i] % 2 == 0) {
            soma += digitos[i] * digitos[i];
        }
    }
    return soma;
}

int main() {
    int num, i, digitos[6], soma = 0;
    printf("\nEntre com o número de até 6 dígitos ");
    scanf("%d", &num);
    
    soma = somaQuadrado(num);
    printf("Soma dos quadrados do digitos: %d\n", soma);
    return 0;
}
