#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isSorted(int arr[], int n) {
    if(n <= 1) return 1;
    if(arr[n-1] < arr[n-2]) return 0;
    return isSorted(arr, n-1);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, i;
        scanf("%d", &n);
        int arr[n];
        for(i=0; i<n; i++) scanf("%d", &arr[i]);
        printf("%d\n", isSorted(arr, n));
    }
    return 0;
}
