#include<stdio.h>

int main()
{
    FILE *fp;
    char s[10000];
    int p,i,k=0;
    fp=fopen("prog.txt","r");
    while(1)
    {
        fgets(s,sizeof(s),fp);
        p=strlen(s);
        for(i=0 ; i<p ; i++)
        {
            if(k==1)
            {
                if(s[i]=='*')
                {
                    if(s[i+1]=='/')
                    {
                        k=0;
                        printf("\n");
                        break;
                    }
                }
                else
                    continue;
            }
            else if(s[i]=='/')
            {
                if(s[i+1]=='/')
                {
                    printf("\n");
                    break;
                }
                else if(s[i+1]=='*')
                {
                    k=1;
                    continue;
                }
                else
                    printf("%c",s[i]);
            }
            else
                printf("%c",s[i]);


        }
        if(feof(fp))
            break;
    }
    printf("\n");
    fclose(fp);
    return 0;
}
