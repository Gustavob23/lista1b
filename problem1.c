#include<stdio.h>

	int main(){
	
	int i, qnt;
	double F, C;
	
	scanf("%d", &qnt);
	
	for(i = 1; i <= qnt; i++){
		
		scanf("%lf", &F);
		C = (5 * ( F - 32)) / 9;
	
	printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F, C);
	}
return 0;
}
