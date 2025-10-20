#include<stdio.h>
int main()
{
    int N,V,sum1=0,sum2=0;
    scanf("%d",&N);
    for(int s=1 ; s<=N ; s++)
    {
        scanf("%d",&V);
        if(V>0)
        {
            sum1 = sum1 + V;
        }
        else if(V<0)
        {
            sum2 = sum2 + V;
        }
    }
    printf("%d %d",sum1,sum2);
    return 0;
}
