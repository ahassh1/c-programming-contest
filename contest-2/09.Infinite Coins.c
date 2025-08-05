#include<stdio.h>

int main() {
    int n, a;
    scanf("%d %d", & n, & a);

    int c = n % 500;

    if (c <= a) printf("Yes\n");
    else printf("No\n");

    return 0;
}