#include<stdio.h>
int main(){
	int x, qtd, num, num1, i;
	
	scanf("%d", &num);
	
	qtd = 0;
	x = 2;
	
	if(num <= 5 || num >= 2000){
	return 0;
	}
	else{
		for(i = 0;i < num/2; i++){
			qtd = qtd + 2;
			num1 = qtd * qtd;
			printf("%d^%d = %d\n", qtd, x, num1);
			
		}
	}
return 0;
}
	
