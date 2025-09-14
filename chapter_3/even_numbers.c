#include<stdio.h>

int sum_evens_for_loop(int stop);
int sum_evens_while_loop(int stop);
int sum_evens_while_goto_loop(int stop);

int main() {
    sum_evens_for_loop(5);
    sum_evens_while_loop(5);
    sum_evens_while_goto_loop(5);
    return 0;
}

/* Sum even numbers with for loop*/
int sum_evens_for_loop(int stop) {
    int sum = 0;
    for (int i = 0; i < stop; i++) {
        if ( i & 1) {
            continue;
        }
        sum += i;
    }

    printf("Sum of even numbers between 0 - %d is %d\n", stop, sum);
    return sum;
}

/* Sum even numbers with while loop*/
int sum_evens_while_loop(int stop) {
    int sum = 0;
    int i = 0;
    while(i < stop) {
        if (i & 1) {
            i++;
            continue;
        }
        sum += i;
        i++;
    }

    printf("Sum of even numbers between 0 - %d is %d\n", stop, sum);
    return sum;
}

/* Sum even numbers with while loop*/
int sum_evens_while_goto_loop(int stop) {
    int sum = 0;
    int i = 0;

    goto test;
    
    loop:
        if (i & 1) {
            i++;
            goto test;
        }
        sum += i;
        i++;

    test:
        if (i < stop) {
         goto loop;   
        }
        
    printf("Sum of even numbers between 0 - %d is %d\n", stop, sum);
    return sum;
}