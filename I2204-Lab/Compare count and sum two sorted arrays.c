#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Binary Search from the binary search exercise
// Time complexity O(nlogm), I believe it can be O(n + m) but no one cares at this point.
int binarySearchHelper(int arr[], int s, int e, int key) {
    int mid = s + (e-s)/2;
    if(s > e) return -1;
    if(key == arr[mid]) return mid;
    if(key > arr[mid]) return binarySearchHelper(arr, ++mid, e, key);
    return binarySearchHelper(arr, s, --mid, key);
}

int binarySearch(int arr[], int n, int key) {
    return binarySearchHelper(arr, 0, n-1, key);
}

void compareNcount(int* arr1, int* arr2, int n, int m, int* sum,int* num) {
    if(n==0) return;
    int search = binarySearch(arr2, m, *(arr1+n-1));
    if(search == -1) {
        (*sum) += *(arr1+n-1);
        (*num)++;
    }
    compareNcount(arr1, arr2, n-1, m, sum, num);
}

int main() {
    while(1) {
        int n, m, i;
        scanf("%d%d", &n, &m);
        if(!n) break;
        int arr1[10001];
        int arr2[10001];
        for(i=0; i<n; i++) scanf("%d", arr1+i);
        for(i=0; i<m; i++) scanf("%d", arr2+i);
        int sum = 0, num = 0;
        compareNcount(arr1, arr2, n, m, &sum, &num);
        printf("%d %d\n", num, sum);
    }    
    return 0;
}