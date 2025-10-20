#include<stdio.h>
int main()
{
    int N,X,V;
    scanf("%d",&N);
    int A[N];
    for(int s=0; s<N; s++)
    {
        scanf("%d", &A[s]);
    }
    scanf("%d %d",&X,&V);
    for(int r=0 ; r<N ; r++)
    {
        if(X==r)
        {
            A[r] = V;
        }
    }
    for(int c=0; c<N/2; c++)
    {
        int temp = A[c];
        A[c] = A[N-1-c];
        A[N-1-c] = temp;
    }
    for(int p=0; p<N ; p++)
    {
        printf("%d ",A[p]);
    }
    return 0;
}
