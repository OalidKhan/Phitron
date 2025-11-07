#include<stdio.h>
int count_before_one(int a[],int n)
{
    int count=0;
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==1)
        {
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&A[i]);
    }
    int one = count_before_one(A,N);
    printf("%d",one);
    return 0;
}
