#include<stdio.h>

int main() {
    int current = 1;
    int start = 1;
    int end = 1;
    int stop = 100;

    while (current < stop) {
        printf("%d\n", current);
        current = start + end;
        start = end;
        end = current;
    }

    return 0;
}
