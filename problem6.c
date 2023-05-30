#include<stdio.h>
	
	int main(){
	
	int qtd;   // quantidade
	int n;     // numero atual 
	int ta;    // tamanho atual
	int tm;    // tamanho maximo
	int ant;   // numero anterior
	int i;     // base
	
	scanf("%d", &qtd);
	scanf("%d", &n);
	
	ta = 1;
	tm = 1;
	
	for(i = 2; i <= qtd; i++){
		ant = n;
		scanf("%d", &n);
		
		if(n > ant){
			ta++;
			if(ta > tm)
			tm = ta;
		}
		else{
		ta = 1;
		}
	}
		printf("O comprimento do segmento crescente maximo e: %d\n", tm);
	
return 0;
}
