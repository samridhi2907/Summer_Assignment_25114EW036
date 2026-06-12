#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int n);
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

  
    if (isPalindrome(num)) 
    {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}


bool isPalindrome(int n) 
{
    int original = n;
    int reversed = 0;
    int remainder;


    if (n < 0) 
    {
  
    while (n != 0) 
    {
        remainder = n % 10;
        reversed = (reversed * 10) + remainder;
        n /= 10;
    }

    
    return original == reversed;
}
