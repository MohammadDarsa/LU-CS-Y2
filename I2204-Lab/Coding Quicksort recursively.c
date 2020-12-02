#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void quicksort(int arr[], int l, int h)
{
    int pivot, i, j, temp;
    if (l < h) {
        pivot = l;
        i = l;
        j = h;
        while (i < j) {
            while (arr[i] <= arr[pivot] && i <= h) i++;
            while (arr[j] > arr[pivot] && j >= l) j--;
            if (i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        quicksort(arr, l, j - 1);
        quicksort(arr, j + 1, h);
    }
}

int main() {
    int n;
    int arr[10000];
    scanf("%d", &n);
    do{
        
        for(int i=0; i<n; i++) scanf("%d", &arr[i]);
        quicksort(arr, 0, n-1);
        for(int i=0; i<n; i++) printf("%d ", arr[i]);
        printf("\n");
        scanf("%d", &n);
    } while(n);
    return 0;
}
