#include<stdio.h>

int main()
{
    FILE *fp,fk,fo;
    int local=0,l=0;
    fp=fopen("prog.txt","r");
    fo=fopen("out.txt","w");
    while(1)
    {
        l++;
        fgets(s,sizeof(s),fp);
        k=strlen(s);
        for(i=0 ; i<k ; i++)
        {
            if(s[i]=='{')
                local++;
            else if(s[i]=='}')
                local--;
            else if(s[i]>='a' && s[i]<='z')
            {
                w[p]=s[i];
                p++;
            }
            else
            {
                q=strlen(w);
                if(w>0)
                {
                    fk=fopen("key.txt","r");
                    while(1)
                    {
                        fscanf("%s",m);
                        o=strcmp(s,w);
                        if(o==0)
                        {
                            for(j=q ; j<k ; j++)
                            {
                                if(s[i]>='a' && s[i]<='z')
                                {
                                    x[r]=s[i];
                                    r++;
                                    i++;
                                }
                                else
                                {

                                }
                            }
                        }
                        for(j=0 ; j<q ; j++)
                        {
                            w[j]='\0';
                        }
                    }
                }
            }
        }
    }

}
