#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int s=0 ; s<N ; s++)
    {
        scanf("%d",&A[s]);
    }
    for(int p=N-1 ; p>=0 ; p--)
    {
        if(p%2!=0)
        {
            printf("%d ",A[p]);
        }
    }

    return 0;
}
