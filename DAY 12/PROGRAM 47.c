#include <stdio.h>
void printFibonacci(int terms);
int getFibonacciTerm(int position);

int main() 
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    j
    printf("\nFibonacci Sequence up to %d terms:\n", n);
    printFibonacci(n);
    if (n > 0) 
    {
        printf("\n\nThe Fibonacci number at position %d is: %d\n", 
               n, getFibonacciTerm(n - 1));
    }

    return 0;
}

void printFibonacci(int terms)
{
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 1; i <= terms; ++i)
      {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}


int getFibonacciTerm(int position) 
{
    if (position == 0) 
    {
        return 0;
    }
    if (position == 1) 
    {
        return 1;
    }
    return getFibonacciTerm(position - 1) + getFibonacciTerm(position - 2);
}
