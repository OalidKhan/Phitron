#include <stdio.h>
int main() {

    long long N;
    scanf("%lld",&N);
    if(N>1000)
    {
        printf("I will buy Punjabi\n");
        int n=N-1000;
        if(n>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
    else 
    {
        printf("Bad luck!");
    }
    return 0;
}
