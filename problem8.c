#include<stdio.h>
int main() {
    
    int x, y, num, i;
    x=1;

    scanf("%d", &num);
    
    if(num < 2){
    printf("Campeonato invalido!\n");
    return 0;
    }
    
    else{
        for(i = 1; i <= num-1; i++){
            for(y = i+1; y <= num; y++){  
              printf("Final %d: Time%d X Time%d\n", x, i, y);
              x++;
            }
        }
    }
return 0;
}