//Lab Exercise 3.1
/*Array of Objects, Constructor and Destructor*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>
#include <string.h>

class candidate
{
private:
    unsigned int roll_number;
    char name[25];
    float score;
    char remarks[25];

    void assign_remarks()
    {
    if(score<50) {strcpy(remarks,"Not Selected");}
    else {strcpy(remarks,"Selected");}
    }

public:

    void input()
    {
    cout<<"Roll Number: ";
    cin>>roll_number;
    cout<<"Name: ";
    cin>>name;
    cout<<"Score: ";
    cin>>score;
    assign_remarks();
    }

    void output()
    {
    cout<<"Roll Number: "<<roll_number;
    cout<<"\nName: ";
    puts(name);
    cout<<"Score: "<<score;
    cout<<"\nRemarks: ";
    puts(remarks);
    }

    void output_selected()
    {
    if(score>=50)
        {
        cout<<"Roll Number: "<<roll_number;
        cout<<"\nName: ";
        puts(name);
        cout<<"Score: "<<score;
        cout<<"\nRemarks: ";
        puts(remarks);
        }
    }

    float return_score()
    {
    return score;
    }
};

int main()
{
candidate arr[5];
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
cout<<"Selected Candidates\n\n";
for(unsigned int k=0;k<5;k++)
    {
    arr[k].output_selected();
    cout<<"\n";
    }
char search_name[25];
cout<<"Name of the candidate to be searched: ";
gets(search_name);
for(unsigned int l=0;l<5;l++)
    {
    if(strcmp(arr[l].name,search_name)==0)
        {
        arr[l].output();
        }
    }
return 0;
}