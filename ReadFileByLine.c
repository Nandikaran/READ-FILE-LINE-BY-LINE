#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>


void main()
{
    FILE* fptr=fopen("data.txt","r");
    char* line=NULL;
    size_t len=0;
    size_t characters;

    while(characters=getline(&line, &len,fptr)!=-1)
    {
        printf("%zu characters were read");
    }

    fclose(fptr);
}
