#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
 
struct Queue
{
    int item[SIZE];
    int rear;
    int front;
};
     Queue Q;
  void  Initilase()
  {
        Q.rear=-1;
        Q.front=0;
    }
bool  IsEmpty()
{
        if(Q.rear-Q.front+1==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
 void EnQueue(int x)
 {
    int m=Q.item[SIZE];
    if(Q.rear==m-1){
        cout<<"Queue over flow";
        exit(1);
    }
    else{
    Q.rear++;
    Q.item[Q.rear]=x;
    }
}
int DeQueue(){
    if(Q.rear-Q.front+1==0)
    {
        cout<<"Queue is under flow";
        exit(1);
    }
    else{
    int x;
    x=Q.item[Q.front];
    Q.front++;
    return x;
    }
}

int main() {
	 	
Initilase();
EnQueue(1);
EnQueue(2);
EnQueue(3);
EnQueue(4);
EnQueue(5);
EnQueue(6);
EnQueue(7);
cout<<DeQueue()<<endl;
cout<<DeQueue()<<endl;
cout<<DeQueue()<<endl;
cout<<DeQueue()<<endl;
cout<<DeQueue()<<endl;


}