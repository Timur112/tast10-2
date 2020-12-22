#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char* norepeats(char *s)
{
    char s1[60], lw[60],p2[60], *sn;
    int i=0;
    strcpy(s1,s);
    char *p=strtok(s1," .");
    while (p != NULL)
    {
        strcpy(lw,p);
        p=strtok(NULL," .");
    }
    if(strrchr(s,'.') != NULL)
    {
        i=1;
    }
    p=strtok(s," .");
    sn=(char*) malloc(60*sizeof(char));
    strcpy(sn,"");
    while (p != NULL)
    {
        if(strcmp(p,lw) != 0)
        {
                strcat(sn,p);
                strcat(sn," ");
        }
        p=strtok(NULL," .");
    }
    p=strrchr(sn,' ');
    if(i==1)
    {
        if(strcmp(sn,"") == 0)
         {
             return ".";
         }
        *p='.';
    }
    else
    {
        if(strcmp(sn,"") == 0)
         {
             return "";
         }
        *p='\0';
    }
    return sn;
}
int main()
{
    char s[60];
    printf("¬ведите вашу строку\n");
    gets(s);
    printf("%s",norepeats(s));
    return 0;
}
