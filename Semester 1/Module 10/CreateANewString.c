#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000],T[1000];
    gets(S);
    gets(T);
    int s=strlen(S),t=strlen(T);
    printf("%d %d\n%s %s",s,t,S,T);

    return 0;
}
