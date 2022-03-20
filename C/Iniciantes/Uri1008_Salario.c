#include <stdio.h>
 
int main() {
 
   int number, hours;
   float money, salary;

    scanf("%d", &number);
    scanf("%d %f", &hours, &money);
 
    salary = (hours * money);
 
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
 
    return 0;
}
