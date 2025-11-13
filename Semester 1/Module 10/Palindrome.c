#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000];
    gets(S);
    int count=0,length=strlen(S);
    for(int i=0 ; i<=length/2 ; i++)
    {
        if(S[i]!=S[length-1-i])
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
