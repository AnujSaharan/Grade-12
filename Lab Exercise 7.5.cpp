//Lab Exercise 7.5
/*Pointer to a structure*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>

struct game
{
long player_number;
char player_name[20];
float points;
};

int main()
{
int n=0;
cout<<"Enter the size of the array: ";
cin>>n;
game *p;
p=new game[n];
for(int i=0;i<n;i++)
    {
    cout<<"Player Number: ";
    cin>>(p+i)->player_number;
    cout<<"Player Name: ";
    cin>>(p+i)->player_name;
    cout<<"Points: ";
    cin>>(p+i)->points;
    }
for(int i=0;i<n;i++)
    {
    cout<<"Player Number: "<<(p+i)->player_number<<"\n";
    cout<<"Player Name: ";
    puts((p+i)->player_name);
    cout<<"Points "<<(p+i)->points<<"\n\n";
    }
delete [] p;
return 0;
}