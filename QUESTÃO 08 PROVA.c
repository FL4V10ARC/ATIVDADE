#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "pt_br");
	
	int ano;
	printf("digite um ano apartir de 1945\n");
	scanf("%d", &ano);
	
	if(ano >= 1945 && ano<=1959) {
		printf("Primeira geração\n");
	}
	else if(ano >= 1960 && ano <= 1965){
		printf("Segunda geração\n");
	}
	else if(ano >=1966 && ano<= 1972){
		printf("Terceira geração\n");
	}
	else if(ano >= 1973 && ano<= 1985){
		printf("Quarta geração\n");
	}
	else if(ano >= 1986){
		printf("Quinta geração\n");
	}
	else{
		printf("data invalida\n");
	}
	return(0);
	
}