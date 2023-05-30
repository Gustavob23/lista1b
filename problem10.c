
#include <stdio.h>

int main() {
	int nl, nc; // numero de linhas e numero de colunas
	int l, c; // contadores de linha e coluna

	scanf("%d %d", &nl, &nc);

	for(l=2;l<=nl;l++) {
		for(c=1;c<l&&c<=nc;c++) {
			if(c>1) printf("-");
			printf("(%d,%d)", l, c);
		}
		printf("\n");
	}

	return 0;
}	
