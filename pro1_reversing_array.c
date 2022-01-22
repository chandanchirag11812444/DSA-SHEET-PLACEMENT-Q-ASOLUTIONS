// PROGRAM TO REVERSE AN ARRAY
#include<stdio.h>
void printA(int *A,int n)
{
   for(int i=0;i<n;i++)
   {
       printf("%d ",A[i]);
   }
   printf("\n");
}
int ArrayReverse(int A[],int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=temp;
    }
}
int main(){
    int A[]={1,2,5,7,8,97,7};
    int size=sizeof(A)/sizeof(int);
   printf("Array before reversing \n");
    printA(A,size);
    ArrayReverse(A,size);
     printf("Array after reversing \n");
     printA(A,size);
    return 0;
}