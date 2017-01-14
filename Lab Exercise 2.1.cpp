//Lab Exercise 2.1
/*Program to store the details of a flight in a class*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>

class flight
{
private:
    unsigned int flight_number;
    char destination[25];
    float total_distance;
    float fuel_required;

    void calculate_fuel() //Calculates the total fuel required
    {
    if(total_distance<=1000) {fuel_required=500;}
    else if(total_distance>1000&&total_distance<=2000) {fuel_required=1100;}
    else if(total_distance>2000) {fuel_required=2200;}
    }

public:
    void input() //Obtains input from the user
    {
    cout<<"Flight Number: ";
    cin>>flight_number;
    cout<<"Destination: ";
    gets(destination);
    cout<<"Total Distance: ";
    cin>>total_distance;
    calculate_fuel();
    }

    void output() //Displays the output
    {
    cout<<"\nFlight Number: "<<flight_number;
    cout<<"\nDestination: ";
    puts(destination);
    cout<<"Total Distance: "<<total_distance;
    cout<<"\nTotal Fuel Required: "<<fuel_required;
    }
};

int main()
{
flight one;
one.input();
one.output();
return 0;
}