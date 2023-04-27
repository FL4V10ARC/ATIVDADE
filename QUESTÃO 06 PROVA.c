#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, area, pii;
	
	printf("digite o valor do raio:\n");
	scanf("%f", &raio);
	
	
	pii = 3.14;
	
	area = pii * pow(raio,2);
	
	printf("a area do circulo é: %.2f\n", area);
	
	return(0);
}