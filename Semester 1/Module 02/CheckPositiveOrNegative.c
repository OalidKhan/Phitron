#include<stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    if(N==0)
    {
       printf("%d is Zero",N);
    }
    else if(N>0)
    {
       printf("%d is Positive Number",N);
    }
    else
    {
       printf("%d is Negative Number",N);
    }
   
    return 0;
}
