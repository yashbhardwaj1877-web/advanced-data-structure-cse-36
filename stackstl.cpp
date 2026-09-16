#include<iostream>
#include<stack>
using namespace std;
int main()
{
//     stack<int>s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.push(6);
//     while(!s.empty())
//     {
// cout<<s.top()<<endl;
// s.pop();
// }
// }

    int decimal;
    cin>>decimal;
    stack<int> s;
    while(decimal !=0)
    {
        int r=decimal%2;
        s.push(r);
        decimal=decimal/2;
    }
    while (!s.empty())
    {
        int x=s.top();
        cout << x;
        s.pop();
    }
}