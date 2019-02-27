#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the length of your DNA String: ");
    scanf("%d",&n);
    char A[n];
    printf("Enter the String:\n");
    getchar();
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
    }
    printf("\nThe RNA set for the given DNA set is:\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%c",A[i]);
    }
    printf("\n");

    return 0;
}
