#include <iostream>

using namespace std;
void Enqueue(int x);
void Deque();
int Peek();
void Display();
class node{
public:
    node *next;
    int data;
};
node  *Front=NULL, *Rear=NULL;
int main()
{
    int n,x,i,y;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>x;
            Enqueue(x);
        }
    //Display();
    for(i=0;i<n;i++){
    y=Peek();
    cout<<"Peek value => "<<y<<" "<<"Rear value => "<<Rear->data<<endl;
    cout<<"Display => ";
    Display();
    Deque();}
    return 0;
}
void Enqueue(int x)
{
node *newnode = new node;
newnode->data=x;
newnode->next=NULL;
if(Front==NULL && Rear==NULL){Front=Rear=newnode;}
else {Rear->next=newnode; Rear=newnode;}
}

void Deque(){
node *temp=new node;
if(Front==NULL && Rear==NULL)cout<<"Underflow"<<endl;
else {
    temp=Front;
    Front=Front->next;
    delete temp;
    }
}
int Peek()
{
    if(Front==NULL && Rear==NULL)return NULL;
    else return Front->data;
}
void Display()
{
    node *temp=new node;
    if(Front==NULL && Rear==NULL)cout<<"Empty Queue"<<endl;
    else{temp=Front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
    }
}
