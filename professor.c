#include <stdio.h>

int menu(void) {
	int op;
	printf(" 1) Soma\n");
	printf(" 2) Subtracao\n");
	printf(" 3) Multiplicacao\n");
	printf(" 4) Divisao\n");
	printf(" 5) Negativo\n");
	printf(" 6) Sair\n");
	scanf("%d", &op);
	return op;
}

void fsum(void) {
	int qtd;
	double n;
	double soma;
	printf("Digite a quantidade de numeros: ");
	do{
		scanf("%d", &qtd);
		if(qtd<1) printf("Digite um numero valido maior que 0: ");
	} while(qtd<1);
	soma = 0;
	while(qtd--) {
		scanf("%lf", &n);
		soma += n; // ==> soma = soma + n
	}
	printf("Valor da soma: %lf\n", soma);
}


void fsub(void) {
	int qtd;
	double n;
	double sub;
	printf("Digite a quantidade de numeros: ");
	do{
		scanf("%d", &qtd);
		if(qtd<1) printf("Digite um numero valido maior que 0: ");
	} while(qtd<1);
	sub = 0;
	while(qtd--) {
		scanf("%lf", &n);
		sub -= n; // ==> sub = sub - n
	}
	printf("Valor da subtracao: %lf\n", sub);
}
void fmul(void) {
	int qtd;
	double n;
	double mul;
	printf("Digite a quantidade de numeros: ");
	do{
		scanf("%d", &qtd);
		if(qtd<1) printf("Digite um numero valido maior que 0: ");
	} while(qtd<1);
	mul = 1;
	while(qtd--) {
		scanf("%lf", &n);
		mul = mul * n;
	}
	printf("Valor da multiplicacao: %lf\n", mul);
}
void fdiv(void) {
	int qtd;
	double n;
	double div;
	printf("Digite a quantidade de numeros: ");
	do{
		scanf("%d", &qtd);
		if(qtd<1) printf("Digite um numero valido maior que 0: ");
	} while(qtd<1);
	div = 1;
	while(qtd--) {
		scanf("%lf", &n);
		div = div / n ;
	}
	printf("Valor da div: %lf\n", div);
}
void fneg(void) {
	int qtd;
	double n;
	double neg;
	printf("Digite a quantidade de numeros: ");
	do{
		scanf("%d", &qtd);
		if(qtd<1) printf("Digite um numero valido maior que 0: ");
	} while(qtd<1);
	neg = 1;
	while(qtd--) {
		scanf("%lf", &n);
		neg = n * -1;
	}
	printf("Valor do negativo: %lf\n", neg);
}

int main() {
	int k; // opcao selecionada
	while(1) {
		k = menu();
		if(k==6) break;
		if(k==1) {
			fsum();
		} else if(k == 2) {
			fsub();
		} else if(k == 3) {
			fmul();
		}
		else if(k == 4){
			fdiv();
		}
		else if(k == 5){
			fneg();
		}
	}
	printf("Tchau!!!\n");
	return 0;
}
