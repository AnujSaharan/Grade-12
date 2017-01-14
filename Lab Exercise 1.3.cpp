//Lab Exercise 1.3
/*Program to display the elements lying on the two diagonals of a 2D Array*/
//Anuj Saharan

#include <iostream.h>

void diagonal_array_elements(int arr[][3],unsigned int total_rows,unsigned int total_columns) //Displays the diagonal elements of a 2D array
{
unsigned int row_index=0,column_index=0;

cout<<"Elements in the major diagonal: ";
for(row_index=0,column_index=0;row_index<total_rows&&column_index<total_columns;row_index++,column_index++)
    {
    cout<<arr[row_index][column_index]<<" ";
    }
cout<<"\nElements in the minor diagonal: ";
for(row_index=0,column_index=total_columns-1;row_index<total_rows&&column_index>=0;row_index++,column_index--)
    {
    cout<<arr[row_index][column_index]<<" ";
    }
}

int main()
{
int arr[3][3];
unsigned int total_rows=0,total_columns=0;
cout<<"Enter the number of rows: ";
cin>>total_rows;
cout<<"Enter the number columns: ";
cin>>total_columns;
cout<<"\nEnter the values in the array\n";
for(unsigned int row_index=0;row_index<3;row_index++)
    {
    for(unsigned int column_index=0;column_index<3;column_index++)
        {
        cin>>arr[row_index][column_index];
        }
    }
diagonal_array_elements(arr,total_rows,total_columns);
return 0;
}