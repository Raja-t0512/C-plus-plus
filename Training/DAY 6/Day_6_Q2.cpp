#include<stdio.h> 
int main() 
{ 
    FILE *fp; 
    fp=fopen("trial", "r");
    fseek(fp, "20", SEEK_SET); //fseek needs a *_File, long _Offset and int _Origin
    fclose(fp);
    return 0;
}
// A. Error: unrecognised Keyword SEEK_SET 
// B. Error: fseek() long offset value 
// C. No error 
// D. None of above

// Answer -->  B