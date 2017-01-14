//Lab Exercise 6.2
/*File Handling - Binary Files*/
//Anuj Saharan

#include <fstream.h>
#include <string.h>

class admission
{
private:
    int admission_number;
    char name[30];
    int grade;
    float fees;

public:
    admission()
        {
        admission_number=0;
        strcpy(name,"NULL");
        grade=0;
        fees=0;
        }

    void input()
    {
    cout<<"\nAdmission Number: ";
    cin>>admission_number;
    cout<<"Name: ";
    cin>>name;
    cout<<"Class: ";
    cin>>grade;
    cout<<"Fees: ";
    cin>>fees;
    }

    void output()
    {
    cout<<"Admission Number: "<<admission_number<<"\n";
    cout<<"Name: "<<name<<"\n";
    cout<<"Class: "<<grade<<"\n";
    cout<<"Fees: "<<fees<<"\n\n";
    }

    int return_admission_number()
    {
    return admission_number;
    }

    int return_fees()
    {
    return fees;
    }
};

void add_n_records()
{
ofstream file;
file.open("student.dat",ios::binary|ios::app);
int n=0;
cout<<"Enter the number of records that you want to enter: ";
cin>>n;
admission one;
while(n--)
    {
    one.input();
    file.write((char *)&one,sizeof(one));
    }
file.close();
}

void display_records()
{
admission one;
ifstream file;
file.open("student.dat", ios::binary);
while(file.read((char *)&one,sizeof(one)))
    {
    if(one.return_fees()>1000&&one.return_fees()<3000) {one.output();}
    }
file.close();
}

void modify_record()
{
fstream file("student.dat",ios::binary|ios::in|ios::out);
int n=0;
cout<<"Enter the admission number to be modified: ";
cin>>n;
admission one;
while(file.read((char *)&one,sizeof(one)))
    {
    if(one.return_admission_number()==n)
        {
        file.seekp(-sizeof(one),ios::cur);
        one.input();
        file.write((char *)&one,sizeof(one));
        }
    }
file.close();
}

void delete_record()
{
fstream file1("student.dat",ios::binary|ios::in|ios::out);
fstream file2("temp.dat",ios::binary|ios::in|ios::out);
int n=0;
cout<<"Enter the admission number to be deleted: ";
cin>>n;
admission one;
while(file1.read((char *)&one,sizeof(one)))
    {
    if(one.return_admission_number()!=n)
        {
        file1.seekg(-sizeof(one),ios::cur);
        file2.write((char *)&one,sizeof(one));
        }
remove("student.dat");
rename("temp.dat","student.dat");
file1.close();
file2.close();
    }
}

void copy_record()
{
fstream file1("student.dat",ios::binary|ios::in|ios::out);
fstream file2("ews.dat",ios::binary|ios::in|ios::out);

admission one;
while(file1.read((char *)&one,sizeof(one)))
    {
    if(one.return_fees()<=1000)
        {
        file1.seekg(-sizeof(one),ios::cur);
        file2.write((char *)&one,sizeof(one));
        }
    }
file1.close();
file2.close();
}

int main()
{
while(1)
    {
    cout<<"\n1. Add n new records\n";
    cout<<"2. Display records with fees between 1000 and 3000\n";
    cout<<"3. Modify record by admission number\n";
    cout<<"4. Delete record by admission number\n";
    cout<<"5. Copy records with fees less than 1000 to a new file\n";
    int n=0;
    cout<<"\nEnter the desired option: ";
    cin>>n;
    switch(n)
        {
        case 1: add_n_records(); break;
        case 2: display_records(); break;
        case 3: modify_record(); break;
        case 4: delete_record(); break;
        case 5: copy_record(); break;
        default: cout<<"That is not a valid choice.\n";
        }
    }
return 0;
}
