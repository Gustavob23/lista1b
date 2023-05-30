
#include<stdio.h>
int main() {
	
	unsigned long int x, num, num1, i;
	
	scanf("%lu", &num);
	x = num;
	num1 = 1;
	
	if(num < 0){
	return 0;
	}
	
	else{
		while(x){
		num1 *= x--;
		}
	printf("%lu! = %lu\n", num, num1); 
	}
return 0;
}
	
	
	
	
