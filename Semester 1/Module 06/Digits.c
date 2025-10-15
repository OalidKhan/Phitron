#include <stdio.h>
int main() {
    int T,N,rem=0;
    scanf("%d",&T);
    for(int i=1 ; i<=T ; i++)
    {
        scanf("%d",&N);
        if(N==0)
        {
            printf("%d\n",N);
        }
        else if(N>0)
        {
           while(N!=0)
           {
               rem = N % 10;
               printf("%d ",rem);
               N = N / 10;
           }
           printf("\n");
        }
    }
    return 0;
}
