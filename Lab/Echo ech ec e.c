#include <stdio.h>
#include <string.h>
#define size 1000

void printHelper(char str[], int n) {
    if(!n) return;
    puts(str);
    str[n-1] = '\0';
    return printHelper(str, --n);
}
void print(char str[])
{
  return printHelper(str, strlen(str));
}

void printTest() {
    char str[size];
    
    while(gets(str))
        print(str);
}

int main() {
    printTest();
    return 0;
}