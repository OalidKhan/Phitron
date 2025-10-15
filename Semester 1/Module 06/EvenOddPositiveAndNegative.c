#include <stdio.h>
int main() {
    int N,n,positive=0,negative=0,even=0,odd=0;
    scanf("%d",&N);
    for(int s=1 ; s<=N ; s++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            positive++;
        }
        if(n<0)
        {
            negative++;
        }
        if(n%2==0)
        {
            even++;
        }
        if(n%2!=0)
        {
            odd++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,positive,negative);

    return 0;
}
