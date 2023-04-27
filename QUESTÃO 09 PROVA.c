#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int idade;
    int gotas_por_ml = 20;
    int mg_por_ml = 500;
    float peso, dosagem;

    printf("Digite sua idade e peso:\n");
    scanf("%d %f", &idade, &peso);

    if (idade >= 12) {
        if (peso >= 60) {
            dosagem = 1000;
        } else {
            dosagem = 875;
        }
    } else if (peso >= 5 && peso < 9.1) {
        dosagem = 125;
    } else if (peso >= 9.1 && peso < 16) {
        dosagem = 250;
    } else if (peso >= 16 && peso < 24.1) {
        dosagem = 375;
    } else if (peso >= 24.1 && peso < 30) {
        dosagem = 500;
    } else if (peso >= 30) {
        dosagem = 750;
    } else {
        printf("Peso inválido para crianças.\n");
        return 0;
    }

    float ml_por_dose = dosagem / mg_por_ml;
    float gotas_por_dose = ml_por_dose * gotas_por_ml;

    printf("Receita: Tomar %.0f gotas por dose, %.2f ml por dose.\n", gotas_por_dose, ml_por_dose);

    return (0);
}