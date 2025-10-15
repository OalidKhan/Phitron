#include <stdio.h>
int main() {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A>=B && B>=C)
    {
        printf("%d %d",C,A);
    }
    else if(A>=C && C>=B)
    {
        printf("%d %d",B,A);
    }
    else if(B>=C && C>=A)
    {
        printf("%d %d",A,B);
    }
    else if(B>=A && A>=C)
    {
        printf("%d %d",C,B);
    }
    else if(C>=A && A>=B)
    {
        printf("%d %d",B,C);
    }
    else if(C>=B && B>=A)
    {
        printf("%d %d",A,C);
    }

    return 0;
}
