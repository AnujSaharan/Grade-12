//Lab Exercise 9.2
/*Queue*/
//Anuj Saharan

#include <iostream>
using namespace std;

const int MAX=3;
class queue
{
private:
    int a[MAX];
    int front;
    int rear;
public:
    queue()
        {
        front=-1;
        rear=-1;
        }
    void push()
        {
        if(rear==MAX-1)
            {
            cout<<"Queue is full\n";
            }
        if(front==-1)
            {
            front=0;
            rear=0;
            }
        else
            {
            rear++;
            cout<<"Enter value: ";
            cin>>a[rear];
            }

        }
        void pop()
        {
        if(front==-1)
            {
            cout<<"Queue is empty\n";
            }
        else if(front==rear)
            {
            front=-1;
            rear=-1;
            }
        else
            {
            cout<<"Popped Element: "<<a[front-1];
            front++;
            }
        }
        void display()
        {
        for(int i=front;i<=rear;i++)
            {
            cout<<a[i]<<" ";
            }
        }
};

int main()
{
queue q;
int choice=0;
cout<<"1.Push\n2.Pop\n3.Display\n";
for(;;)
    {
    cout<<"\nEnter your choice: ";
    cin>>choice;
    switch(choice)
        {
        case 1: q.push(); break;
        case 2: q.pop(); break;
        case 3: q.display(); break;
        default: cout<<"That is not a valid choice\n";
        }
    }
return 0;
}
