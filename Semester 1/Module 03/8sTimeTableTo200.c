#include <stdio.h>

int main() {
    int N=8;
    for(int i=1 ; i<=200 ; i++)
    {
        printf("%d * %d = %d\n",N,i,N*i);
        if(N*i==200)
        {
            break;
        }
    }

    return 0;
}
