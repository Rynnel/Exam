#include <stdio.h>
int sumFoo(int *n) {
    int sum=0;
    for (int i=3; i<=*n; i++) {
        sum += (i-2)*(i-1)*i;
    }

    return sum;
}

int main() {
    int n;

    printf("Enter number not less than 3: ");
    scanf("%d", &n);

    printf("%d", sumFoo(&n));

    return 0;
}