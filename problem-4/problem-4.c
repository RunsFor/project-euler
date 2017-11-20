#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

bool is_palindrome(int number)
{
    char str[12];
    snprintf(str, sizeof(str)/sizeof(char), "%d", number);
    int j = strlen(str) - 1;
    for(int i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return FALSE;
        }
    }
    return TRUE;
}

int main()
{
    int largest_palindrome = 101 * 101;
    int buf = 0, a = 0, b = 0;

    for (int i = 102; i < 1000; i++) {
        for (int j = 102; j < 1000; j++) {
            buf = i*j;
            if (is_palindrome(buf)) {
                a = i;
                b = j;
                largest_palindrome = buf;
            }
        }
    }

    printf("The largest palindrome is %d = %d x %d.\n", largest_palindrome, a, b);

    return 0;
}