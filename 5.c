#include <stdio.h>
#include <string.h>

struct Car {
    char* brand;
    char* model;
    int price;
};

struct Car* longestCarModelName(struct Car cars[], int n) {
    int maxlen=0;
    struct Car *longest=0, *ptr;

    for (ptr = cars; ptr < cars+n; ptr++) {
        if (strlen(ptr->model) > maxlen) {
            maxlen=strlen(ptr->model);
            longest = ptr;
        }
    }
    return longest;
}


int main() {
    struct Car cars[] = {{"Hyundai", "Palisade", 5269000}, {"Mercedes-Benz", "Sprinter", 4957722}, {"Chevrolet", "Trailblazer", 2728376}, {"Hyundai", "Solaris", 500000}};
    int n = sizeof(cars) / sizeof(struct Car);

    struct Car *longest = longestCarModelName(cars, n);
    printf("Car with the longest model name is: %s %s", longest->brand, longest->model);

    return 0;
}