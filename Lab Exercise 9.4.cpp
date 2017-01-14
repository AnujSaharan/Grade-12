//Lab Exercise 9.4
/*Dynamic Queue*/
//Anuj Saharan

#include<iostream.h>

struct node
{
int data;
node *next;
};

class queue
{
node *rear,*front;

public:
      queue()
        {
        rear=NULL;
        front=NULL;
        }
      void qinsert();
      void qdelete();
      void qdisplay();
      ~queue();
};

void queue::qinsert()
{
node *temp;
temp=new node;
cout<<"Data :";
cin>>temp->data;
temp->next=NULL;
if(rear==NULL)
    {
    rear=temp;
    front=temp;
    }
else
    {
    rear->next=temp;
    rear=temp;
    }
}

void queue::qdelete()
{
if(front!=NULL)
    {
    node *temp=front;
    cout<<front->data<<"deleted \n";
    front=front->next;
    delete temp;
    if(front==NULL)
        {
        rear=NULL;
        }
     }

     else
        {
        cout<<"Queue is empty";
        }
}

void queue::qdisplay()
{
node *temp=front;
while(temp!=NULL)
    {
    cout<<temp->data<<endl;
    temp=temp->next;
    }
}

queue::~queue()
{
while(front!=NULL)
    {
    node *temp=front;
    front=front->next;
    delete temp;
    }
}

int main()
{
queue obj;
int c;
    do
      {
      cout<< "1. Insert into queue\n2. Delete from queue\n3. Display\n4. Quit ";
      cin>>c;
      switch(c)
        {
        case 1: obj.qinsert();break;
        case 2: obj.qdelete();break;
        case 3: obj.qdisplay();
        }
      }
      while(c!='4');
return 0;
}
