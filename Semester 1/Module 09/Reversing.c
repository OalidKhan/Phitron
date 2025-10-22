#include<stdio.h>
int main()
{
    int N,max,min;
    scanf("%d",&N);
    int A[N];
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0 ; i<N/2 ; i++)
    {
        int temp = A[i];
        A[i] = A[N-1-i];
        A[N-1-i] = temp;
    }
    for(int i=0 ; i<N ; i++)
    {
        printf("%d ",A[i]);
    }

    return 0;
}
