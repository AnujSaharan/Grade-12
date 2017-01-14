//Lab Exercise 8.1
/*Sorting and Searching in an Array*/
//Anuj Saharan

#include <iostream>
#include <stdio.h>
using namespace std;

struct game
{
long player_number;
char player_name[20];
float points;
};

void bubble_sort(int a[30],int n)
{
int flag=1;
for(int i=0;i<n-1&&flag==1;i++)
    {
    flag=0;
    for(int j=0;j<n-1-i;j++)
        {
        if(a[j]>a[j+1])
            {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
            }
        }
    }
}

void binary_search(int a[30],int n,int k)
{
int mid=0,lower_bound=0,upper_bound=0,flag=0;
while(lower_bound<=upper_bound&&flag==0)
    {
    int i=0;
    mid=(lower_bound+upper_bound)/2;
    if(k>a[mid])
        {
        upper_bound=mid-1;
        }
    else if(k<a[mid])
        {
        lower_bound=mid+1;
        }
    else
        {
        cout<<"Element found at "<<i+1<<"th position\n";
        }
    i++;
    }
}

int main()
{
int n=0,a[30],x;
cout<<"Enter the size of the array: ";
cin>>n;
cout<<"Enter the values in the array\n";
for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
bubble_sort(a,n);
cout<<"Sorted Array\n";
for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
cout<<"\nEnter an element to be searched in the array: ";
cin>>x;
binary_search(a,n,x);
return 0;
}