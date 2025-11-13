#include<stdio.h>
#include<string.h>
int main()
{
    char S[100000];
    gets(S);
    int length=strlen(S);
    for(int i=0 ; i<length ; i++)
    {
        if(S[i]==',')
            printf(" ");
        else if(S[i]>='a' && S[i]<='z')
            printf("%c",S[i]-32);
        else if(S[i]>='A' && S[i]<='Z')
            printf("%c",S[i]+32);
    }

    return 0;
}
