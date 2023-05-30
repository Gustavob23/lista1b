#include<stdio.h>

int main(){
	
	int num, qtd, i;
	
	scanf("%d %d", &num, &qtd);
	
	if(num % 2 !=0){
		printf("O PRIMEIRO NUMERO NAO E PAR\n");
	return 0;
	}
	else{
	printf("%d", num);
		
		for(i = 1; i < qtd; i ++){
			num = num + 2;
			printf(" %d", num);
		}
	printf("\n");
	}
return 0;
}
