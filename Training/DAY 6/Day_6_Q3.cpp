// point out the error/warning in the program? 
#include<stdio.h>

int main()
{
    unsigned char ch;
    FILE *fp;
    fp=fopen("trial", "r");
    while((ch = getc(fp))!=EOF)
        printf("%c", ch);
    fclose(fp);
    return 0;
}
// A. Error: in unsigned char declaration      
// B. Error: while statement
// C. No error
// D. It prints all characters in file "trial"

// ANSWER --> A