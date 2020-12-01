#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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

int main() {
    int v, n;
    int arr[10000];
    scanf("%d%d", &v, &n);
    do{
        for(int i=0;i<n;i++) scanf("%d", &arr[i]);
        printf("%d\n", binarySearch(arr, n, v));
        scanf("%d%d", &v, &n);
    }while(v && n);
    return 0;
}