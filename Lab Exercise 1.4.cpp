//Lab Exercise 1.4
/*Program to store and add time in a structure*/
//Anuj Saharan

#include <iostream.h>

struct time //Structure to hold time entities
{
unsigned int hours;
unsigned int minutes;
unsigned int seconds;
};

void input(struct time &user_input) //Obtains the input
{
cout<<"\nHours: ";
cin>>user_input.hours;
cout<<"Minutes: ";
cin>>user_input.minutes;
cout<<"Seconds: ";
cin>>user_input.seconds;
}

void output(struct time user_input) //Displays the output
{
cout<<"\nHours: "<<user_input.hours;
cout<<"\nMinutes: "<<user_input.minutes;
cout<<"\nSeconds: "<<user_input.seconds;
}

int main()
{
struct time one,two,three;
cout<<"Time structure #1";
input(one);
cout<<"\nTime structure #2";
input(two);
three.hours=(one.hours+two.hours)+((one.minutes+two.minutes)/60);
three.minutes=((one.minutes+two.minutes)%60)+((one.seconds+two.seconds)/60);
three.seconds=((one.seconds+two.seconds)%60);
cout<<"\nTime structure #1";
output(one);
cout<<"\n\nTime structure #2";
output(two);
cout<<"\n\nTime structure #3";
output(three);
return 0;
}