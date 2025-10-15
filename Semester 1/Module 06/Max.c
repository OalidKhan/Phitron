#include <stdio.h>
int main() {
    int N,n,max=0;
    scanf("%d",&N);
    for(int s=1 ; s<=N ; s++)
    {
        scanf("%d",&n);
        if(n>max)
        {
            max = n;
        }
    }
    printf("%d",max);

    return 0;
}
