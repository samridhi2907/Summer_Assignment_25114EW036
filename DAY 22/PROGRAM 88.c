#include <stdio.h>
#include <string.h>

char* removeSpaces(char s[]) 
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
      {
        if (s[i] == ' ') 
        {
            for (int j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            n--;
            i--;
        }
    }

    
    s[n] = '\0';  
    return s;
}

int main() 
{
    char s[] = "g  eeks   for ge  eeks  ";
    printf("%s", removeSpaces(s));
    return 0;
}
