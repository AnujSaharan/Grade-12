//Lab Exercise 7.3
/*Program to check if a string is a palindrome using pointers*/
//Anuj Saharan

#include <iostream.h>
#include <string.h>

int main()
{
char a[20];
cout<<"Enter a string: ";
cin>>a;
char *p;
p=a;
int n=strlen(a),palindrome=1;
for(int i=0,j=n-1;i<n;i++,j--)
    {
    if(*(p+i)!=(*(p+j)))
        {
        palindrome=0;
        break;
        }
    }
if(palindrome==1) {cout<<"The entered string is a palindrome\n";}
else {cout<<"The entered string is not a palindrome\n";}
return 0;
}
