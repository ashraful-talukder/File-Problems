#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("new.txt","w");
    fprintf(fp,"This is a test file where file management programming started");
    fclose(fp);
    return 0;
}
