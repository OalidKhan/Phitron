#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int r=1 ; r<=N;r++)
    {
        for(int s=N-r ; s>=1 ; s--)
        {
            printf(" ");
        }
        for(int c=r ; c>=1 ; c--)
        {
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}
