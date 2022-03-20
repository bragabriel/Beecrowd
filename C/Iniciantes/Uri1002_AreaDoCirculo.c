#include <stdio.h>
#include <math.h>

int main() {

    double n, R, A;
    
    scanf("%lf", &R);
 
    n = 3.14159;
    
  //  A = (n * (R * R));
      A = (n * pow(R, 2));
    printf("A=%.4lf\n", A);
 
    return 0;
}

