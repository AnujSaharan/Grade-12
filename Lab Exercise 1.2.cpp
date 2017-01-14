//Lab Exercise 1.2
/*Program to check if a string is a palindrome*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>
#include <ctype.h>

char palindrome_check(char input_string[]) //Checks if the input is a palindrome
{
unsigned int flag=1,index=0;
for(index;index<strlen(input_string);index++)
    {
    input_string[index]=tolower(input_string[index]);
    }
for(index=0;index<strlen(input_string)/2;index++)
    {
    if(input_string[index]!=input_string[strlen(input_string)-index-1])
        {
        flag=0;
        break;
        }
    else
        {
        flag=1;
        }
    }
if(flag==0) {return 'F';}
else {return 'T';}
}

int main()
{
char input_string[25];
cout<<"Enter a string: ";
gets(input_string);
if(palindrome_check(input_string)=='T') {cout<<"The string is a palindrome.";}
else {cout<<"The string is not a palindrome.";}
return 0;
}