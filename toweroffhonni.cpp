#include <bits/stdc++.h>
using namespace std;
// int i=1;
// void TOH(int n,char S,char M,char D){
//     if(n==1)
//    cout<<i++<<": ";
//     else{
        
//         TOH(n-1,S,D,M);
//         cout<<S<<"-->"<<D<<endl;

//       TOH(n-1,M,S,D);
//     }
// }
// int main() {
//   TOH(4,'S','D','M');

// }





int subset(int arr[],int n,int sum){
    if(sum==0)
    return 1;
    if(n==0)
    return 0;
    if(arr[n-1]>sum)
    return subset(arr,n-1,sum);
    return subset(arr,n-1,sum-arr[n-1])||subset(arr,n-1,sum);
}