#include <stdio.h>
#include <stdarg.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

#define GCD_MULTI(...) gcd_multi(__VA_ARGS__, -1) 

int gcd_multi(int first, ...) {
    int result = first;  
    int next;
    va_list args;  
    va_start(args, first);  

    while ((next = va_arg(args, int)) != -1) { 
        result = gcd(result, next); 
    }

    va_end(args); 
    return result;  
}

int main(void) {
    puts("Program for calculating the greatest common divisor(GCD))");
    printf("GCD (24, 36, 60): %d\n", GCD_MULTI(24, 36, 60));
    printf("GCD (45, 15, 75, 105): %d\n", GCD_MULTI(45, 15, 75, 105));
    printf("GCD (14, 28, 56, 42): %d\n", GCD_MULTI(14, 28, 56, 42));
    printf("GCD (48, 18, 30, 12): %d\n", GCD_MULTI(48, 18, 30, 12));

    return 0;  
}
