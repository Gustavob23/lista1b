#include<stdio.h>
 
int main(){
    int i, i2;
    int n, n1;
    i=1;
 
    scanf("%d", &n);
    printf("%d = ", n);
 
    if(n<0) return 0;
    
    
    while(1){
        n1=n/i;
        if(n%i==0){ 
            if(i==1) printf("%d", i);
            else if(i!=1) printf(" + %d", i);
            i2+=i;
        }
        i++;
        //if(i<=n1) printf(" + ");
        if(i==n) break;
    }
    printf(" = %d", i2);
    if(i2==n) printf(" (NUMERO PERFEITO)\n");
    if(i2!=n) printf(" (NUMERO NAO E PERFEITO)\n");
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;
}