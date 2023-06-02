#include <stdio.h>
int getSeconds(int k) {
    return k % 3600;
}

int main() {
    int k;

    printf("Enter how many seconds have passed: ");
    scanf("%d", &k);

    printf("%d seconds have passed since last hour.", getSeconds(k));

    return 0;
}