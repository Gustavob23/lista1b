#include<stdio.h>
int main(){
    double n, rk, rk1=1, r, e, err=1;

    scanf("%lf", &n);
    scanf("%lf", &e);

	err = n - r*r;

	if(err<0) err = -err; 

	while(err > e){
    		err = n - (rk*rk);
    		rk = (rk1 + (n / rk1)) / 2.0;
    		rk1=rk;
    		printf("r: %.9lf, err: %.9lf\n", rk , err);

    		if(err < 0) err = -err;
    	}
return 0;
}
