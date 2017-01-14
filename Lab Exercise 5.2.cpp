//Lab Exercise 5.2
/*File Handling - Text Files*/
//Anuj Saharan

#include <fstream.h>
#include <stdlib.h>

int main()
{
ifstream input_file("test.txt");
unsigned int digit_count=0,sum=0,x=0,product=1,temp=0;
char ch;
while(input_file>>ch)
    {
    if(isdigit(ch)) {digit_count++;}
    }
input_file.clear();
input_file.seekg(0,ios::beg);
while(!input_file.eof())
    {
    input_file>>x;
    sum+=x;
    product*=x;
    if(x>temp) {temp=x;}
    }
cout<<"Digits: "<<digit_count;
cout<<"\nSum of all numbers: "<<sum;
cout<<"\nProduct of all numbers: "<<product;
cout<<"\nLargest number present in the file: "<<temp;
input_file.clear();
input_file.seekg(0,ios::beg);
ofstream output_file("digit.txt");
while(!input_file.eof())
    {
    input_file>>x;
    output_file<<x<"\t";
    }
input_file.close();
output_file.close();
return 0;
}