//Lab Exercise 7.2
/*Program to change even numbers to their squares and odd to their cubes*/
//Anuj Saharan

#include <iostream.h>

int main()
{
int arr[20],n=0,*ptr,*optr;
ptr=arr;
optr=arr;
cout<<"Enter the size of the array: ";
cin>>n;
cout<<"Enter the values in the array\n";
for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
for(int i=0;i<n;i++,ptr++)
    {
    if(*(ptr)%2==0) {*(ptr)=*ptr**ptr;}
    else {*(ptr)=*ptr**ptr**ptr;}
    }
cout<<"After modifying the values\n";
for(int i=0;i<n;i++)
    {
    cout<<*(optr+i)<<" ";
    }
return 0;
}
