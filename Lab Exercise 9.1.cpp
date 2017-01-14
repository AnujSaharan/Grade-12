//Lab Exercise 9.1
/*Stack*/
//Anuj Saharan

#include <iostream>
using namespace std;

const int MAX=3;
class stack
{
private:
    int a[MAX];
    int top;
public:
    stack()
        {
        top=-1;
        }
    void push()
        {
        if(top==MAX-1)
            {
            cout<<"Stack is full\n";
            }
        else
            {
            top++;
            cout<<"Enter Value: ";
            cin>>a[top];
            }
        }
        void pop()
        {
        if(top==-1)
            {
            cout<<"Stack is empty\n";
            }
        else
            {
            cout<<"Popped Element: "<<a[top];
            top--;
            }
        }
        void display()
        {
        for(int i=top;i>=0;i--)
            {
            cout<<a[i]<<" ";
            }
        }
};

int main()
{
stack s;
int choice=0;
cout<<"1.Push\n2.Pop\n3.Display\n";
for(;;)
    {
    cout<<"\nEnter your choice: ";
    cin>>choice;
    switch(choice)
        {
        case 1: s.push(); break;
        case 2: s.pop(); break;
        case 3: s.display(); break;
        default: cout<<"That is not a valid choice\n";
        }
    }
return 0;
}