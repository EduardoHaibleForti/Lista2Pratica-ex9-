#include <stdio.h>
#include <stdlib.h>

int soma_quadrados_digitos(int n) {
    int soma = 0, digito;

    while (n > 0) {
        digito = n % 10;
        soma += digito * digito;
        n /= 10;
    }

    return soma;
}

int main() {
    int numero, resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = numero;
     while (resultado != 1 && resultado != 4) {
        resultado = soma_quadrados_digitos(resultado);
    }
if (resultado == 1) {
        printf("O numero %d e um numero feliz!\n", numero);
    } else {
        printf("O numero %d nao e um numero feliz.\n", numero);
    }

    return 0;
}
