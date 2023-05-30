#include <stdio.h>
int main(){
    int x, qtd, qtdi;
    double x1, x2;
    x=0;
    x1=0;
    qtd=0;
    qtdi=0;
    x2=0;
    	while(1){
        	scanf("%d", &x);
        	if(x == 0){
        	    	break;
        	}
        	if(x % 2 == 0){
        		x1 += x;
        		qtd++;
        	}
        	else{
        		x2 += x;
        		qtdi++;
        	}
    	}
	if(qtd == 0){
        	printf("MEDIA PAR: 0.000000\n");
	}
	else if(qtd !=0){
		x1 = x1 / qtd;
		printf("MEDIA PAR: %.6lf\n", x1);
        	
        }
    
        if(qtdi == 0){
        	printf("MEDIA IMPAR: 0.000000\n");
        }	
        else if(qtdi !=0){
            	x2 = x2 / qtdi;
		printf("MEDIA IMPAR: %.6lf\n", x2);
        }
        
return 0;
}
