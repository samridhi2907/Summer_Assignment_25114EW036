#include <stdio.h>

long long findFactorial(int n);

int main() 
{
    int num;
    long long factorial;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) 
    {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else 
    {
        
        factorial = findFactorial(num);
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}

long long findFactorial(int n) 
{
    long long fact = 1;
    
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;  
    }
    
    return fact;
}
