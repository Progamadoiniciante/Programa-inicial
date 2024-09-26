#include <stdio.h>
int main() {

int idade;
int matricula;
float altura;

printf("ola aque é o mundo eu queria saber sua idade?\n");
scanf("%d", &idade);

printf("agora sua matricula:\n");
scanf("%d", &matricula);

printf("agora sua altura:\n");
scanf("%f", &altura);

printf("sua idade è:%d anos\nsua matricula é:%d\nsua altura é:%.2f\n", idade, matricula, altura);

    return 0;
}

