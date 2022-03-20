#include <stdio.h>
#include <math.h>

int main() {
    
    int n;
    
    while (scanf("%i", &n) != EOF)
        printf("%.lf\n", log2(n));

    return 0;
}
