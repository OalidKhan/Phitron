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
    max = A[0];
    min = A[0];
    for(int i=0 ; i<N ; i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
        if(A[i]<min)
        {
            min = A[i];
        }
    }
    for(int i=0 ; i<N ; i++)
    {
        if(A[i]==max)
        {
            printf("%d ",min);
        }
        else if(A[i]==min)
        {
            printf("%d ",max);
        }
        else
        {
            printf("%d ",A[i]);
        }
    }

    return 0;
}
