#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int h, c1, c2;
	double c;

	scanf("%d", &n);
	for(h=1;h<=n;h++) {

		for(c1=1;c1<h;c1++) {
			c = sqrt(h*h-c1*c1);
			
			if( c>= c1 && c-(int)c == 0 ) {
				c2 = c;
			// for(c2=c1;c2<h;c2++) {
				// if(c1*c1 + c2*c2 > h) break;
				// if(c1*c1+c2*c2 == h*h) {
					printf("hipotenusa = %d, catetos %d e %d\n", h, c1, c2);
				// }
			}
			// }
		}
	}
	return 0;
}