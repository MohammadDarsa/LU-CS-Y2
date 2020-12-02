#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void changeOcc(int arr[], int n, int l1, int l2) {
    if(n==0) return;
    if(arr[n-1] == l1) arr[n-1] = l2;
    changeOcc(arr, n-1, l1, l2);
}



int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, l1, l2, i;
        scanf("%d", &n);
        if(n == 0) {
            printf("Array is empty");
            return 0;
        }
        int arr[n];
        for(i = 0; i<n; i++) scanf("%d", &arr[i]);
        scanf("%d%d", &l1, &l2);
        changeOcc(arr, n, l1, l2);
        for(i = 0; i<n; i++) printf("%d ", arr[i]);
        printf("\n"); 
    }
    return 0;
}
