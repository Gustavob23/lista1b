#include <stdio.h>
#include <math.h>

int main() {
    double x, cos_x = 1.0, term = 1.0;
    int n, sign = -1;
	int i=1;
    
    scanf("%lf", &x);
    
    scanf("%d", &n);

    x = fmod(x, 2 * M_PI);  // Garante que x esteja entre 0 e 2π

    for (i; i <= n; i++) {
        term *= x * x / (2 * i * (2 * i - 1));
        cos_x += sign * term;
        sign *= -1;
    }

    printf("cos(%.2lf) = %.6lf\n", x, cos_x);

    return 0;
}

