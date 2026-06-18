#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define MAX 10000
int main(int argc, const char *argv[]) {
    int nrofpeople;
    int array[MAX];
    int num = 0;
    int index;

    srand((unsigned int)time(NULL));

    printf("How many people?");
    scanf("%d", &nrofpeople);

    for (int i = 0; i < nrofpeople; i++) {
        array[i] = rand() % 3 + 1; 
    }

    int maxcount = 0;
    for (int i = 0; i < nrofpeople; i++) 
    {
        index = 1;

        for (int j = 1; j < nrofpeople; j++)
          {
            if (array[i] == array[j])
            {
                index++;
            }
        }
        if (index > maxcount)
        {
            maxcount = index;
            num = array[i];
        }
    }

    printf("Number: %d Occurred: %d times\n", num, maxcount);
    return 0;
}
