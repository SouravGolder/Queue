#include <iostream>

using namespace std;
void Enqueue(int x);
void Deque();
void Display();
int Peek();
int n,Queue[10000],Front=-1,Rear=-1;
int main()
{
    int x,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        Enqueue(x);
    }
    Display();
    cout<<"Peek => ";
    int y=Peek();
    if(y==-1)cout<<"Underflow"<<endl;
    else cout<<y<<endl;
    Deque();
    cout<<"After Deque Peek => ";
    y=Peek();
    if(y==-1)cout<<"Underflow"<<endl;
    else cout<<y<<endl;
    return 0;
}

void Enqueue(int x)
{
    if(Rear==n-1)cout<<"Overflow"<<endl;
    else if(Front==-1 && Rear==-1){Front=Rear=0; Queue[Rear]=x;}
    else{
        Rear++;
        Queue[Rear]=x;
    }
}
void Deque(){
if(Front==-1 && Rear==-1)cout<<"Underflow"<<endl;
else if(Front==Rear){Front=Rear=-1;}
else{Front++;}
}
void Display(){
cout<<"Display => ";
if(Front==-1 && Rear==-1)cout<<"Underflow"<<endl;
else for(int i=Front;i<=Rear;i++)cout<<Queue[i]<<" ";
cout<<endl;
}
int Peek(){
if(Front==-1){return -1;}
else return Queue[Front];
}
