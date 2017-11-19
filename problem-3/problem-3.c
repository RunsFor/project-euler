#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool is_prime(long int num)
{
    for (int i = 2; i <= (int)(floor(sqrt(num))); i++) {
        if ( !(num % i) ) {
            return FALSE;
        }
    }
    return TRUE;
}

int main()
{
    int largest_pf = 1;
    long int number = 600851475143;
    long int buf = 0;
    int i = 2;

    while (i < (int)(floor(sqrt(number))))
    {
        if ( is_prime(i) && !(number % i)) {
            buf = number;
            largest_pf = i;
            number /= i;
            printf("%5d x %12ld = %12ld\n", largest_pf, number, buf);
            if ( is_prime(number) ) {
                largest_pf = number;
                break;
            }
        }
        i++;
    }

    printf("Answer is %d\n", largest_pf);

    return 0;
}