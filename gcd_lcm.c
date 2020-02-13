#include <stdio.h>  
  
int GCD(int a, int b, int *x, int *y) {  
    if (a == 0) {  
        *x = 0;  
        *y = 1;  
        return b;  
    }
    
    int x1, y1;
    int gcd = GCD(b%a, a, &x1, &y1);  
    
    *x = y1 - (b/a) * x1;  
    *y = x1;  
  
    return gcd;  
}  

int main() {  
    int x, y, a, b;
    scanf("%d %d", &a, &b);
    int gcd = GCD(a, b, &x, &y);
    int lcm = (a * b) / gcd;
    printf("%d %d\n", gcd, lcm);
    return 0;  
}  
