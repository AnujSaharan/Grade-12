//Lab Exercise 2.3
/*Program to store a distance (in feet and inches) in a class*/
//Anuj Saharan

#include <iostream.h>

class Distance
{
private:
    unsigned int feet;
	float inches;

public:
	void input(unsigned int user_input_feet,float user_input_inches) //Obtains the input
	{
    feet=user_input_feet;
    inches=user_input_inches;
	}

	void output() //Displays the output
	{
    cout<<"Feet: "<<feet;
    cout<<"\nInches: "<<inches;
	}

    Distance add_two_distances(Distance);
};

Distance Distance::add_two_distances(Distance user_input) //Adds two distances
{
Distance total_distance;
total_distance.inches=inches+user_input.inches;
total_distance.feet=0;

if(total_distance.inches>=12.0)
	{
    total_distance.inches-=12.0;
    total_distance.feet++;
	}
total_distance.feet+=feet+user_input.feet;
return total_distance;
}

int main()
{
Distance one,two,three;
one.input(5,6.4);
two.input(7,3.2);
three=one.add_two_distances(two);
cout<<"Distance 1:\n";
one.output();
cout<<"\n\nDistance 2:\n";
two.output();
cout<<"\n\nDistance 3:\n";
three.output();
return 0;
}