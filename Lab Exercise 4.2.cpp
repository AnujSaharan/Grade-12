//Lab Exercise 4.2
/*Inheritance*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>
#include <string.h>

class student
{
private:
    char name[25];
    unsigned int roll_number;

protected:
    unsigned int cl;

public:

    student()
    {
    strcpy(name,"Nil");
    roll_number=0;
    cl=0;
    }

    void input()
    {
    cout<<"Name: ";
    cin>>name;
    cout<<"Roll Number: ";
    cin>>roll_number;
    cout<<"Class: ";
    cin>>cl;
    }

    void output()
    {
    cout<<"Name: "<<name;
    cout<<"\nRoll Number: "<<roll_number;
    cout<<"Class: "<<cl;
    }
};

class test: public student
{
private:
    float english,maths,physics,chemistry,computer_science;

    float calculate_total_marks()
    {
    return english+maths+physics+chemistry+computer_science;
    }

protected:
    float total_marks;

public:
    void marks_input()
    {
    input();
    cout<<"English: ";
    cin>>english;
    cout<<"Maths: ";
    cin>>maths;
    cout<<"Physics: ";
    cin>>physics;
    cout<<"Chemistry: ";
    cin>>chemistry;
    cout<<"Computer Science: ";
    cin>>computer_science;
    total_marks=calculate_total_marks();
    }

    void marks_output()
    {
    output();
    cout<<"English: "<<english;
    cout<<"Maths: "<<maths;
    cout<<"Physics: "<<physics;
    cout<<"Chemistry: "<<chemistry;
    cout<<"Computer Science: "<<computer_science;
    }
};

class result: public test
{
private:
    float percentage;
    char grade[25];

public:
    result()
    {
    percentage=0;
    strcpy(grade,"E");
    }

    void calculate_percentage()
    {
    percentage=(total_marks/500)*100;
    }

    void calculate_grade()
    {
    calculate_percentage();
    if(percentage>=90) {strcpy(grade,"A");}
    if(percentage>=75&&percentage<90) {strcpy(grade,"B");}
    if(percentage>=60&&percentage<75) {strcpy(grade,"C");}
    if(percentage>=40&&percentage<60) {strcpy(grade,"D");}
    if(percentage>40) {strcpy(grade,"E");}
    }

    void display_result()
    {
    cout<<"Percentage: "<<percentage;
    cout<<"\nGrade: "<<grade;
    }
};

int main()
{
result student_one;
student_one.marks_input();
student_one.display_result();
return 0;
}