#include<stdio.h>

int main()
{
    int i,n;
    printf("\t\t\t\tEnter the size of the DNA string:");
    scanf("%d",&n);
    char A[n];
    getchar();
    printf("\t\t\t\tEnter the DNA sequence:\n\t\t\t\t");
    for(i=0 ; i<n ; i++)
    {
        scanf("%c",&A[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        if(A[i]=='T')
        {
            A[i]='U';
        }
        else if(A[i]=='t')
        {
            A[i]='u';
        }
    }
    printf("\t\t\t\tAfter transcribing DNA into RNA we get:\n\t\t\t\t");
    for(i=0 ; i<n ; i++)
    {
        printf("%c",A[i]);
    }
    printf("\n");
    return 0;
}
