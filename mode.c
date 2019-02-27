#include<stdio.h>
#include<conio.h>

int main()
{
    char s[1000],p[1000];
    FILE *fp;
    fp=fopen("test.txt","w");
    gets(s);
    fprintf(fp,"%s",s);
    fclose(fp);

    fp=fopen("test.txt","r");
    fscanf(fp,"%s",p);
    printf("%s",p);
    fclose(fp);
    return 0;
}
