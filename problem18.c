#include<stdio.h>

int main() {
    int n; 
    int i;

    i=2;
    
    scanf("%d", &n);
    
    if(n<=1){
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
        scanf("%d", &n);
    }
    
    if(n>1) printf("%d = ", n);    
        
        while(1){

            if(n%i==0){
                n/=i;
                printf("%d", i);
                if(n!=1) printf(" x ");
            }
            else{
                
                i++;
            }
            if(n==1) break;
        }
    
    printf("\n");

return 0;
}