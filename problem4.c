#include<stdio.h>
int main(){
	double x0, x1, xf, i;
	int x;
	
	scanf("%d", &x);
	
	if(x <= 1){
		printf("Numero invalido!");
	}
	else{
		for(i = 1; i <= x; i++){ 
			x1 += 1/i;
		
		}
		printf("%.6lf\n", x1);
	}
return 0;
}
