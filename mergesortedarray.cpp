#include <iostream>
using namespace std;

void merge(int A[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    int B[high + 1];
    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= high) {
        B[k++] = A[j++];
    }
    for (i = low; i <= high; i++) {
        A[i] = B[i];
    }
}