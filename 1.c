#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char id[12];
    char name[30];
    float cgpa;
};

int main()
{
    struct student s;
    int a;
    char sid[12];
    FILE *fp1,*fp2;
    while(1)
    {
        printf("\t\t\t1.Add student's information\n\t\t\t2.Search student's information\n\t\t\t3.Exit the program\nEnter your choice: ");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\tEnter student's ID: ");
            scanf("%s",s.id);
            printf("\tEnter student's name: ");
            scanf("%s",s.name);
            printf("\tEnter student's CGPA: ");
            scanf("%f",&s.cgpa);
            fp1=fopen("student.txt","a");
            fprintf(fp1,"%s %s %.2f\n",s.id,s.name,s.cgpa);
            fclose(fp1);
        }
        else if(a==2)
        {
            int f=0;
            fp2=fopen("student.txt","r");
            if(fp2==NULL)
            {
                printf("\t\t\tThe list is empty");
            }
            else
            {
                printf("\tEnter student's ID: ");
                scanf("%s",sid);
                while(!feof(fp2) && f==0)
                {
                    fscanf(fp2,"%s %s %f",s.id,s.name,&s.cgpa);
                    int c=strcmp(sid,s.id);
                    if(c==0)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1)
                    printf("\tStudent's name: %s\n\tStudent's CGPA: %.2f\n\n",s.name,s.cgpa);
                else
                    printf("\n\t\t***There is no student bearing ID %s***\n\n",sid);
            }
        }
        else
        {
            printf("\n");
            return 0;
        }
    }

    return 0;
}
