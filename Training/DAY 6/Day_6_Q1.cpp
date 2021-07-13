// Point out the error in the program? 
#include<stdio.h>
int main() 
{ 
    char ch; 
    int i; 
    scanf("%c", &i);  // ERROR- %c is used to take character type value
    scanf("%d", &ch); // ERROR- %d is used to take int type value
    printf("%c %d", ch, i); 
    return 0; 
}
// A. Error: suspicious char to in conversion in scanf()
// B. Error: we may not get input for second scanf() statement
// C. No error
// D. None of above

// ANSWER -->  B 