#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void compareNcount(int* arr1, int* arr2, int n, int m, int* sum,int* num) {
    if(n==0) return;
    if(m == 0 || *(arr1+n-1) > *(arr2+m-1)) {
        (*sum) += *(arr1+n-1);
        (*num)++;
        n--;
    }
    else if(*(arr1+n-1) < *(arr2+m-1)) m--;
    else {m--; n--;}
    compareNcount(arr1, arr2, n, m, sum, num);
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