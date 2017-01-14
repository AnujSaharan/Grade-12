//Lab Exercise 9.3
/*Dynamic Stack*/
//Anuj Saharan

#include<iostream.h>
#include<conio.h>

struct node
{
int data;
node *next;
};

class stack
{
node *top;

public:
      stack()
        {
        top=NULL;
        }
       void push();
       void pop();
       void display();
      ~stack();
};

void stack::push()
{
node *temp;
temp=new node;
cout<<"Enter data: ";
cin>>temp->data;
temp->next=top;
top=temp;
}

void stack::pop()
{
if(top!=NULL)
      {
      node *temp=top;
      top=top->next;
      cout<<temp->data<<"deleted";
      delete temp;
      }
      else
        {
        cout<<"Stack is empty";
        }
}

void stack::display()
{
node *temp=top;

while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}

stack::~stack()
{
while(top!=NULL)
    {
    node *temp=top;
    top=top->next;
    delete temp;
    }
}

int main()
{
stack st;
char ch;

do
    {
    cout<<"Stack options\nP for push \nO for Pop \nD for Display \nQ for quit";
    cin>>ch;
    switch(ch)
        {
        case 'P': st.push();break;
        case 'O': st.pop();break;
        case 'D': st.display();break;
        }
      }
      while(ch!='Q');
return 0;
}
