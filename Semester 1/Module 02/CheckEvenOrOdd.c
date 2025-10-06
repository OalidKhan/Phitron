#include<stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    if(N==0)
    {
       printf("%d is Zero",N);
    }
    else if(N%2==0)
    {
       printf("%d is Even Number",N);
    }
    else
    {
       printf("%d is Odd Number",N);
    }
   
    return 0;
}
