#include <stdio.h>

void soma(){
    float number1, number2;

    printf("Me diga um número:\n");
    scanf("%f", &number1);
    printf("Me diga outro número:\n");
    scanf("%f", &number2);

    printf("A soma de %.2f mais %.2f é igual a: %.2f\n\n", number1, number2, number1+number2);
}

void subtracao(){}

void multiplicacao()
{
    float factor_a, factor_b;
    float product;

    printf("Descreva o Primeiro fator da multiplicação:\n");
    scanf("%f", &factor_a);

    printf("Descreva o Segundo fator da multiplicação:\n");
    scanf("%f", &factor_b);

    product = factor_a * factor_b;

    printf("O produto resultante é: %.2f\n\n", product);
}

void divisao(){}

void fibonacci(){}

int main() {
    int operacao = 1;
    while(operacao != 0) {
        printf("---------------Bem Vindo a Calculadora Czao!---------------\n\n");
        printf("Digite uma operacao:\n");
        printf("Digite 1, se quiser somar\n");
        printf("Digite 2, se quiser subtrair:\n");
        printf("Digite 3, se quiser multiplicar:\n");
        printf("Digite 4, se quiser dividir:\n");
        printf("Digite 5, se quiser calcular fibonacci:\n");
        printf("Para sair, digite 0\n");
        scanf("%d", &operacao);
        switch (operacao) {
            case 1:
                soma();
                break;
            case 2:
                subtracao();
                break;
            case 3:
                multiplicacao();
                break;
            case 4:
                divisao();
                break;
            case 5:
                fibonacci();
                break;
            case 0:
                printf("exit!\n");
                break;
            default:
                printf("Operacao Invalida\n");
                break;
        }
    }
}