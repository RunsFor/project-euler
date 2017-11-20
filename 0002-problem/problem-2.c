#include <stdio.h>

#define HIGH_BOUND 4000000

int main(int argc, char* argv[])
{
    float f, s, sum = 0;

    for (f = 1.0, s = 2.0; f/2 + s/2 < HIGH_BOUND; s+=f, f=s-f) {
        if ((int)s % 2 == 0) {
            printf("Even number detected: %d\n", (int)s);
            sum += s;
        }
    }

    printf("The total sum of even number is %d\n", (int)sum);

    return 0;
}