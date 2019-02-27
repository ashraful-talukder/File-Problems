#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the size of your DNA strand: ");
    scanf("%d",&n);
    char A[n];
    getchar();
    printf("Enter the DNA sequence:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%c",&A[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        if(A[i]=='A')
        {
            A[i]='T';
        }
        else if(A[i]=='T')
        {
            A[i]='A';
        }
        else if(A[i]=='C')
        {
            A[i]='G';
        }
        else if(A[i]=='G')
        {
            A[i]='C';
        }
    }
    printf("The complementing strand of the DNA is:\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%c",A[i]);
    }
    printf("\n");
    return 0;
}
