#include<stdio.h>
#include<string.h>
int is_palindrome(char s[],int len)
{
    int cnt=1;
    for(int i=0 ; i<=len/2 ; i++)
    {
        if(s[i]!=s[len-1-i])
        {
            cnt=0;
            break;
        }
    }
    return cnt;
}
int main()
{
    char S[1000];
    scanf("%s",S);
    int check,length = strlen(S);
    check = is_palindrome(S,length);
    if(check==1)
        printf("Palindrome");
    else if(check==0)
        printf("Not Palindrome");
    return 0;
}
