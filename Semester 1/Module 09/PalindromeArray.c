#include<stdio.h>
int main()
{
    int N,count=0;
    scanf("%d",&N);
    int A[N],B[N];
    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0 ; i<N ; i++)
    {
        B[i] = A[i];
    }
    for(int i=0 ; i<N/2 ; i++)
    {
        int temp = A[i];
        A[i] = A[N-1-i];
        A[N-1-i] = temp;
    }
    for(int i=0 ; i<N ; i++)
    {
        if(A[i]!=B[i])
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
