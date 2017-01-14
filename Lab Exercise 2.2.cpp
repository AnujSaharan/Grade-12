//Lab Exercise 2.2
/*Program to store the details of a garment in a class*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>

class garment
{
private:
    char garment_code[25];
    char garment_type[25];
    unsigned int garment_size;
    char garment_fabric[25];
    float garment_price;

    void calculate_garment_price() //Calculates the total price of the garment
    {
    if(strcmpi(garment_fabric,"Cotton")==0)
        {
        if(strcmpi(garment_type,"Trouser")==0) {garment_price=1300;}
        else if(strcmpi(garment_type,"Shirt")==0) {garment_price=1100;}
        }
    else
        {
        if(strcmpi(garment_type,"Trouser")==0) {garment_price=1170;}
        else if(strcmpi(garment_type,"Shirt")==0) {garment_price=990;}
        }
    }

public:
    void input() //Obtains input from the user
    {
    cout<<"Garment Code: ";
    gets(garment_code);
    cout<<"Garment Type: ";
    gets(garment_type);
    cout<<"Garment Size: ";
    cin>>garment_size;
    cout<<"Garment Fabric: ";
    gets(garment_fabric);
    calculate_garment_price();
    }

    void output() //Displays the output
    {
    cout<<"\nGarment Code: ";
    puts(garment_code);
    cout<<"Garment Type: ";
    puts(garment_type);
    cout<<"Garment Size: "<<garment_size;
    cout<<"\nGarment Fabric: ";
    puts(garment_fabric);
    cout<<"Garment Price: "<<garment_price;
    }
};

int main()
{
garment one;
one.input();
one.output();
return 0;
}