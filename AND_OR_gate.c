#include<stdio.h>
#include<math.h>

int AND(int i, int j);

int OR(int i, int j);
 
int main(void)
{   
    
    int x, y; 
    
    scanf("%d %d", &x, &y);
    
    printf("X AND Y = %d\n", AND(x, y));
    
    printf("X OR Y = %d\n", OR(x, y));
    
    return 0;
}
 
int OR(int i, int j) {
    return i || j;
}

int AND(int i, int j) {
    return i & j;
}
