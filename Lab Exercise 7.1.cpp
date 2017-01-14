//Lab Exercise 7.1
/*Program to swap variables using pointers*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int a=0,b=0,*x,*y,temp=0;
cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<"Before Swapping\n"<<"a: "<<a<<"\nb: "<<b;
x=&a;
y=&b;
temp=*y;
*y=*x;
*x=temp;
cout<<"\nAfter Swapping\n"<<"a: "<<a<<"\nb: "<<b;
}
