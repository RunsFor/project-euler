#include <stdio.h>

int find_the_sum_of_multiples(int a, int b, int c);

int main(int argc, char *argv[])
{
    int a = 3, b = 5;
    int c = 1000;
    int sum = 0;

    sum = find_the_sum_of_multiples(a, b, c);
    printf("All multiples of %d and %d below %d = %d\n", a, b, c, sum);

    return 0;
}

int find_the_sum_of_multiples(int a, int b, int c)
{
    int sum = 0;

    for(int i = 1; i < c; i++) {
        if (i % a == 0 || i % b == 0) {
            sum += i;
        }
    }

    return sum;
}