#include <iostream>
using namespace std;

void Insarray(int arr[],int i,int n,int x){
    for(int j=n;j>=i;j--){
        arr[j+1]=arr[j];
    }
}
void Insarray(int i=0;)