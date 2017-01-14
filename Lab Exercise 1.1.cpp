//Lab Exercise 1.1
/*Program to check and display the first 50 prime numbers*/
//Anuj Saharan

#include <iostream.h>

char prime_number_check(unsigned int input) //Checks if the input is a prime number
{
unsigned int flag=1;

for(unsigned int index=2;index<input/2;index++)
    {
    if(input%index!=0) {flag=1;}
    else
        {
        flag=0;
        break;
        }
    }
if(flag==0) {return 'F';}
else {return 'T';}
}

int main()
{
unsigned int counter=0;

for(unsigned current_number=2;counter<50;current_number++)
    {
    if(prime_number_check(current_number)=='T')
        {
        cout<<current_number<<" ";
        counter++;
        }
    }
return 0;
}