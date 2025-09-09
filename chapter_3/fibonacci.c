#include<stdio.h>

long fibonacci_goto(long stop);

int main() {
    fibonacci_goto(100);
    return 0;
}

long fibonacci_goto(long stop) {
    long current = 1;
    long start = 1;
    long end = 1;
    goto test;
    loop:
        printf("%ld\n", current);
        current = start + end;
        start = end;
        end = current;
    test:
        if (current < stop) {
            goto loop;
        }
        return current;
}