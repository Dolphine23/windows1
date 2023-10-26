#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *f;
    f= fopen("C:\\Users\\HOME\\Documents\\Practice\\Test.txt","w");
    if(f==NULL)
        printf("Error!");
    else    {
        fprintf(f,"%s\n","This the first program in file handling");
        fputc('A',f);
        fputs("\nDemonstration for fputs   ",f);
    }
    fclose(f);
    return 0;
}