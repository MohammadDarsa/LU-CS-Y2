#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// hackerrank submission https://www.hackerrank.com/contests/i2204-lab-doreid/challenges/polynomial-evaluation-2/submissions/code/1328874688

double evalHelper(double x, int *arr, int n, double res) {
    if(n == 0) return res + *(arr+n);
    return evalHelper(x, arr, n-1, x*(res + *(arr+n)));
}

double eval(double x, int *arr, int n) {
    return evalHelper(x, arr, n, 0);
}

int main() {
    while(1) {
        double x;
        int n;
        scanf("%lf%d", &x, &n);
        if(x == 0.0 && n == -1) break;
        int arr[101];
        for(int i=0; i<n; i++) scanf("%d", arr+i);
        printf("%.2lf\n", eval(x, arr, n-1));
    } 
    
    return 0;
}