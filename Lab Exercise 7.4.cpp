//Lab Exercise 7.4
/*Program to dynamically allocate memory to an array*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int n=0,*p;
cout<<"Enter the size of the array: ";
cin>>n;
p=new int[n];
cout<<"Enter the values in the array: ";
for(int i=0;i<n;i++)
    {
    cin>>*(p+i);
    }
int maximum=*p,minimum=*p;
for(int i=0;i<n;i++)
    {
    if(*(p+i)>maximum) {maximum=*(p+i);}
    if(*(p+i)<minimum) {minimum=*(p+i);}
    }
cout<<"Maximum value: "<<maximum<<"\n";
cout<<"Minimum value: "<<minimum<<"\n";
delete [] p;
return 0;
}
