#include <stdio.h>

int menorSomaDigitos() {
    int valor, soma, valorMinimo = 999;
    for (valor = 100; valor <= 999; valor++){
        soma = 0;
        int temp = valor;
        while (temp > 0){
            soma += temp % 10;
            temp /= 10;
        }

        if (soma < valorMinimo){
            valorMinimo = soma;
        }
    }
    return valorMinimo;
}

int main(){
    int resultado = menorSomaDigitos();
    printf("A menor soma de dígitos é: %d\n", resultado);
    return 0;
}

