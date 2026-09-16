#include<iostream>
#include<vector>
using namespace std;
// int sum(int n)   sum of two numbers
// {
//     if(n==0)
//     return 0;
//     return (n%10)+sum(n/10);
//     return 0;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
// }




// int factorial(int n)    factorial of a number
// {
//     if(n==0||n==1)
//         return 1;
//     return n*factorial(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<factorial(n)<<endl;
// }





// vector<int>dat(1001,0);    fibonacci series
// int fib(int n)
// {
//     if(n==1)
//     return 0;
//     if(n==2)
//     return 1;
//     if(dat[n]==0)
//     {
//         dat[n]=fib(n-1)+fib(n-2);
//     }
//     return dat[n];
// }
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     cout<<fib(n)<<endl;
// // }



// int main()
// {
//     for(int i=0;fib(i)<=100;i++)
//     {
//         cout<<fib(i)<<" ";
//     }

// }







// int gcd(int a,int b)       greatest common divisor
// {
//     if(b==0)
//     return a;
//     return gcd(b,a%b);
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<gcd(a,b)<<endl;
// }







// long long fib(int n, vector<long long> &dat) {     fibonacci series n
//     if (n == 0)
//         return 0;

//     if (n == 1)
//         return 1;

//     if (dat[n] == -1)
//         dat[n] = fib(n - 1, dat) + fib(n - 2, dat);

//     return dat[n];
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<long long> dat(n + 1, -1);

//     for (int i = 0; i <= n; i++) {
//         cout << i << " : " << fib(i, dat) << endl;
//     }

//     return 0;
// }




// void printarray(vector<int>arr,int i)   print array using recursion
// {
//     int n=arr.size();
//     if(i<n)
//     {
//         cout<<arr[i]<<" ";
//         printarray(arr,i+1);
//     }
// }
// int main()
// {
//     vector<int>arr;
//     arr.push_back(1);
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);
//     printarray(arr, 0);
// }






// void printarray(vector<int>arr,int i)  print array in reverse order using recursion
// {
//     int n=arr.size();
//     if(i<n)
//     {
//         printarray(arr,i+1);
//         cout<<arr[i]<<" ";
  
//     }
// }
// int main()
// {
//     vector<int>arr;
//     arr.push_back(1);
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);
//     printarray(arr, 0);
// }





// void decimalToBinary(int n)
//  {
//     if (n > 0) 
//     {
//         decimalToBinary(n / 2);
//         cout << n % 2;
//     }
// }
// int main()
//  {
//     int n;
//     cin >> n;
//     decimalToBinary(n);
// }



// class Solution {
// public:
// string decimalToBinary(int n) {
//     if (n == 0) {
//         return "0";
//     }
//     if (n == 1) {
//         return "1";
//     }
//     return decimalToBinary(n / 2) + to_string(n % 2);
// }
// };
// int main() {
//     Solution solution;
//     int n;
//     cin >> n;
//     cout << solution.decimalToBinary(n) << endl;
//     return 0;
// }



// int countOnesInBinary(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return (n % 2) + countOnesInBinary(n / 2);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << countOnesInBinary(n) << endl;
//     return 0;
// }






// int reverseBits(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     int lastBit = n % 2;
//     int remainingBits = reverseBits(n / 2);
//     return (lastBit << (sizeof(int) * 8 - 1)) | (remainingBits >> 1);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << reverseBits(n) << endl;
//     return 0;
// }



// power of three 

// bool ispowerofthree(int n) {
//     if (n <= 0) {
//         return false;
//     }
//     if (n == 1) {
//         return true;
//     }
//     if (n % 3 != 0) {
//         return false;
//     }
//     return ispowerofthree(n / 3);
// }







int i=1;
void TOH(int n,char s,char m,char d)
{
    if(n==1)
    cout<<i++<<":"<<s<<"--"<<d<<endl;
    else{
        TOH(n-1,s,d,m);
        coutr<<s<<""
    }
}