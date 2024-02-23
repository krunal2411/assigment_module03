#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int num1 = 10;
    int num2 = 20;
    
    int max = MAX(num1, num2);
    
    printf("The maximum of %d and %d is: %d\n", num1, num2, max);
    
    return 0;
}

