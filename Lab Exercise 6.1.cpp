//Lab Exercise 6.1
/*File Handling - Binary Files*/
//Anuj Saharan

#include <fstream.h>
#include <string.h>

class travel
{
private:
    long travel_code;
    char place[25];
    int number_of_travellers;
    int number_of_buses;

public:
    travel()
        {
        travel_code=201;
        strcpy(place,"Nainital");
        number_of_travellers=10;
        number_of_buses=1;
        }
    void input()
    {
    cout<<"\nTravel Code: ";
    cin>>travel_code;
    cout<<"Place: ";
    cin>>place;
    cout<<"Number of Travellers: ";
    cin>>number_of_travellers;

    if(number_of_travellers<20) {number_of_buses=1;}
    else if(number_of_travellers>20&&number_of_travellers<40) {number_of_buses=2;}
    else {number_of_buses=3;}
    }

    void output()
    {
    cout<<"Travel Code: "<<travel_code<<"\n";
    cout<<"Destination: "<<place<<"\n";
    cout<<"Number of Travellers: "<<number_of_travellers<<"\n";
    cout<<"Number of Buses: "<<number_of_buses<<"\n\n";
    }

    int return_number_of_buses()
    {
    return number_of_buses;
    }
};

void add_record()
{
ofstream file;
file.open("travel.dat", ios::binary|ios::app);
travel one;
one.input();
file.write((char *)&one,sizeof(one));
file.close();
}

void add_n_records()
{
int n=0;
cout<<"Enter the number of records that you want to enter: ";
cin>>n;
while(n--)
    {
    add_record();
    }
}

void display_all_records()
{
travel one;
ifstream file;
file.open("travel.dat", ios::binary);
while(file.read((char *)&one,sizeof(one)))
    {
    one.output();
    }
file.close();
}

void display_high_capacity_records()
{
travel one;
ifstream file;
file.open("travel.dat", ios::binary);
while(file.read((char *)&one,sizeof(one)))
    {
    if(one.return_number_of_buses()>=2) {one.output();}
    }
}

int main()
{
while(1)
    {
    cout<<"\n1. Add new record\n";
    cout<<"2. Add n new records\n";
    cout<<"3. Display all records\n";
    cout<<"4. Display records with more than 2 buses\n";
    int n=0;
    cout<<"\nEnter the desired option: ";
    cin>>n;
    switch(n)
        {
        case 1: add_record(); break;
        case 2: add_n_records(); break;
        case 3: display_all_records(); break;
        case 4: display_high_capacity_records(); break;
        default: cout<<"That is not a valid choice.\n";
        }
    }
return 0;
}