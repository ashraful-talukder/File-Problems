#include<stdio.h>

int main()
{
    int s;
    FILE *fp;
    fp=fopen("Mode.txt","w");
    scanf("%d",&s);
    fprintf(fp,"%d",s);
    fclose(fp);

    int p;

    fp=fopen("Mode.txt","r");
    fscanf(fp,"%d",&p);
    printf("\n%d",p);
    fclose(fp);
    return 0;
}
