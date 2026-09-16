#include <bits/stdc++.h>
using namespace std;
// class Queue
// {
//     vector<int> item;
//     int rear;
//     int front;
//     public:
//     Queue(int SIZE)
//     {
//         item.resize(SIZE);
//         rear=0;
//         front=-1;
//     }
//   bool  IsEmpty()
//   {
//         if(rear-front+1==0)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// void EnQueue(int x){
//     int m=item.size();
//     if(rear==m-1){
//         cout<<"Queue over flow";
//         exit(1);
//     }
//     else{
//     rear++;
//     item[rear]=x;
//     }
// }
// int DeQueue(){
//     if(rear-front+1==0)
//     {
//         cout<<"Queue is under flow";
//         exit(1);
//     }
//     else
//     {
//     int x;
//     x=item[front];
//     front++;
//     return x;
//     }
// }

// };

// int main() 
// {
// 	Queue Q(5);
// 	Q.EnQueue(1);
// 	Q.EnQueue(2);
// 	Q.EnQueue(3);
// 	Q.EnQueue(4);
// 	Q.EnQueue(5);
// 	Q.EnQueue(6);
	// cout<<Q.DeQueue()<<endl;
	// cout<<Q.DeQueue()<<endl;
	// cout<<Q.DeQueue()<<endl;
	// cout<<Q.DeQueue()<<endl;
	// cout<<Q.DeQueue()<<endl;
	// cout<<Q.DeQueue()<<endl;





class CQueue{
    vector<int> item;
    int rear;
    int front;
    public:
    
    // this is used to initilase the Queue
    CQueue(int SIZE){
        item.resize(SIZE);
        rear=SIZE-1;
        front=SIZE-1;
    }
  bool  IsEmpty(){
        if(rear==front){
            return true;
        }
        else{
            return false;
        }
    }
void EnQueue(int x){
    int m=item.size();
    if((rear+1)%m==front){
        cout<<"Queue over flow";
        exit(1);
    }
    else{
    rear=(rear+1)%m;
    item[rear]=x;
    }
}
int DeQueue(){
    int m=item.size();
    if((rear+1)%m==front){
        cout<<"Queue is under flow";
        exit(1);
    }
    else{
    front=(front+1)%m;
    int x=item[front];
    front++;
    return x;
    }
}

};

int main() {
	
	
	CQueue CQ(10);
	CQ.EnQueue(1);
	CQ.EnQueue(2);
	CQ.EnQueue(3);
	CQ.EnQueue(4);
	CQ.EnQueue(5);
	CQ.EnQueue(6);
// 	cout<<Q.DeQueue()<<endl;
// 	cout<<Q.DeQueue()<<endl;
// 	cout<<Q.DeQueue()<<endl;
// 	cout<<Q.DeQueue()<<endl;
// 	cout<<Q.DeQueue()<<endl;
// 	cout<<Q.DeQueue()<<endl;
	
}

