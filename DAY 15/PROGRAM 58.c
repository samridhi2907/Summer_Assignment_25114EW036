#include<stdio.h>
void printarray(int arr[]);
void rotatebyone(int arr[]);
int main()
{
  int i,N;
  int arr[size];
  printf("enter 10 array elements");
  for(i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("enter number of times to left rotate:");
   scanf("%d",&N);
   N=N%size;
   printf("array before rotation");
   printarray(arr);
   for(i=1;i<=N;i++)
  {
       rotatebyone(arr);
  ]
  printf("\n\nArray after rotation\n");
  printarray(arr);
  return 0;
  }
void rotatebyone(int arr[])
{
  int i,first;
  first=arr[0];
  for(i=0;i<size-1;i++)
{
arr[i]=arr[i+1];
}
arr[size-1]=first;
}
void printarray(int arr[])
{
  int i;
  for(i=0;i<size;i++)
{
  printf("%d",arr[i]);
}
}
