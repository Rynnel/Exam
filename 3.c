#include <stdio.h>

int main() {
    int num, sum=0;
    
    while (num != 0) {
        scanf("%d", &num);
        if (num%10 == 3) {
            sum += num;
        }
    }
    printf("%d", sum);
    return 0;
}