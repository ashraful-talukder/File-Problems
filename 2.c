#include<stdio.h>

int main()
{
    char s[500];
    int add=0,mul=0,sub=0,div=0,n,i;
    printf("Enter your expression: ");
    gets(s);
    n=strlen(s);
    for(i=0 ; i<n ; i++)
    {
        if(s[i]=='+')
            add++;
        else if(s[i]=='-')
            sub++;
        else if(s[i]=='*')
            mul++;
        else if(s[i]=='/')
            div++;
    }
    printf("\t\tAddition operator: %d\n",add);
    printf("\t\tSubtraction operator: %d\n",sub);
    printf("\t\tMultiplication operator: %d\n",mul);
    printf("\t\tDivision operator: %d\n",div);
    return 0;
}
