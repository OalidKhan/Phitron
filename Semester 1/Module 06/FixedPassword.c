#include <stdio.h>
int main() {
    int X=0;
    while(X!=1999)
    {
        scanf("%d",&X);
        if(X==1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
