#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 1000

void  merge(int A[], int sizeA, int B[], int sizeB, int C[])
{
  	// Your code here
    int i = 0, j = 0, k = 0;
    while(sizeA + sizeB > k) {
        if(!(sizeA-i)) C[k] = B[j++];
        else if(!(sizeB-j)) C[k] = A[i++];
        else {
            if(A[i] < B[j]) C[k] = A[i++];
            else C[k] = B[j++];
        }
        k++;
    }
}

void mergeTest()
{
    int A[size], B[size], C[2*size];
  	int sizeA, sizeB;
  	int i;
  
  	scanf("%d",&sizeA);
  	for(i=0;i<sizeA;i++)
      	scanf("%d",&A[i]);
  
  	scanf("%d",&sizeB);
  	for(i=0;i<sizeB;i++)
      	scanf("%d",&B[i]);  
  	
  
  
    merge(A, sizeA, B, sizeB, C);
    for(i=0;i<sizeA+sizeB;i++)
    {
        printf("%d ",C[i]);
    }
}
int main()
{
    mergeTest();
    return 0;
}