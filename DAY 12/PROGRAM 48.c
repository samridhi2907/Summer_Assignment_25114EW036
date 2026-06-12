#include <stdio.h>
#include <math.h>
int isPerfect(int num);

int main() 
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    if (number <= 0) 
    {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

  
    if (isPerfect(number)) 
    {
        printf("%d is a perfect number.\n", number);
    } else 
    {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}


int isPerfect(int num) 
{
    
    if (num <= 1) 
    {
        return 0; 
    }

    int sum = 1; 
    int limit = (int)sqrt(num);
    for (int i = 2; i <= limit; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
            if (i != num / i) 
            {
                sum += num / i;
            }
        }
    }

  
    if (sum == num) 
    {
        return 1; 
    }
    else 
    {
        return 0; 
    }
}
