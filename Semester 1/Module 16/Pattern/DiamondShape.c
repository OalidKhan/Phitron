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
        for(int c=1 ; c<=((2*r)-1) ; c++)
        {
            if(r%2==0)
                printf("-");
            else
                printf("#");
        }
        printf("\n");
    }
    for(int r=N-1 ; r>=1 ;r--)
    {
        for(int s=N-r ; s>=1 ; s--)
        {
            printf(" ");
        }
        for(int c=1 ; c<=((2*r)-1) ; c++)
        {
            if(r%2==0)
                printf("-");
            else
                printf("#");
        }
        printf("\n");
    }

    return 0;
}
