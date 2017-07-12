#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void main()
{
    //char const* const fname = 'data.txt';

    //FILE* fptr=fopen(fname, "r");
    FILE* fptr=fopen("data.txt", "r");
    char line[256];
    char* token;
    //char word[20];
    //char* wptr=&word[20];

    while(fgets(line,sizeof(line), fptr))
    {
        //printf("%s", line);
        //puts(line);
        token=strtok(line," ");
        while(token!=NULL)
        {
            //strcpy(*wptr,*token);
            printf("\n%s",token);
            token=strtok(NULL," ");
        }

    }
    //strcpy

    fclose(fptr);
}
