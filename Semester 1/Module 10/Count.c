#include<stdio.h>
#include<string.h>
int main()
{
    int sum=0;
    char S[1000000];
    scanf("%s",&S);
    int length = strlen(S);
    for(int i=0 ; i<length ; i++)
    {
        sum = sum + (S[i]-'0');
    }
    printf("%d",sum);
    return 0;
}
