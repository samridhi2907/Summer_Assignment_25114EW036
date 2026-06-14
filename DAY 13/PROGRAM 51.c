#include <stdio.h>
void findMinMax(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main() 
{
    int arr[] = {5, 2, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    findMinMax(arr, n, &max, &min);

    printf("%d\n", max);
    printf("%d\n", min);
    return 0;
}
