#include<stdio.h>
#include<math.h>

int is_prime(int n);
 
int main(void)
{   
    
    int start, end;
    
    scanf("%d %d", &start, &end);
    
    for(int i = start; i < end; i++)
    {
        if(is_prime(i) && is_prime(i + 2))
        {            
            printf("{%d, %d}\n", i, i + 2);
            
            i += 2; 
        }                
    }    
    
    return 0;
}
 
int is_prime(int n)
{
    if(n == 1)
    {
        return 0;
    }
    
    if(n % 2 == 0) return 0;
    
    for(int i = 2; i <= (int)sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}
