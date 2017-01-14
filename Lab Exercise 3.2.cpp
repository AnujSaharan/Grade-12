//Lab Exercise 3.2
/*Array of Objects, Constructor and Destructor*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>
#include <string.h>

class outfit
{
private:
    unsigned int o_size;
    char o_type[25];
    char o_fabric[25];
    char o_code[25];
    float o_price;

    void assign_price()
    {
    if(strcmp(o_fabric,"DENIM")==0)
        {
        if(strcmp(o_type,"Trouser")==0) {o_price=1500;}
        else if(strcmp(o_type,"JACKET")==0) {o_price=2500;}
        }
    else
        {
        if(strcmp(o_type,"Trouser")==0) {o_price=0.75*1500;}
        else if(strcmp(o_type,"JACKET")==0) {o_price=0.75*2500;}
        }
    }

public:

    outfit()
    {
    strcpy(o_code,"Nil");
    strcpy(o_type,"Nil");
    strcpy(o_fabric,"Nil");
    o_size=0;
    o_price=0;
    }

    void input()
    {
    cout<<"Outfit Code: ";
    cin>>o_code;
    cout<<"Outfit Type: ";
    cin>>o_type;
    cout<<"Outfit Size: ";
    cin>>o_size;
    assign_price();
    }

    void output()
    {
    cout<<"Outfit Code: "<<o_code;
    cout<<"\nOutfit Type: "<<o_type;
    cout<<"\nOutfit Size: "<<o_size;
    cout<<"\nOutfit Price: "<<o_price;
    }
};

int main()
{
outfit arr[5];
for(unsigned int i=0;i<5;i++)
    {
    cout<<"Candidate #"<<i+1<<"\n\n";
    arr[i].input();
    cout<<"\n";
    }
for(unsigned int j=0;j<5;j++)
    {
    cout<<"Candidate #"<<j+1<<"\n\n";
    arr[j].output();
    cout<<"\n";
    }
return 0;
}