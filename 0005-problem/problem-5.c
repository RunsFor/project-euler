#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int arr[20] = { [0 ... 19] = 0 },
        buf = 0,
        sm_pos_number = 1;

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        buf = i + 1;
        arr[i] = buf;

        for (int j = 0; j < i; j++) {
            if ( !(buf % arr[j]) ) {
                buf /= arr[j];
            }
        }
        sm_pos_number *= buf;
        arr[i] = buf;
    }

    qsort(arr, 20, sizeof(int), cmpfunc);

    printf("Answer is: ");
    for (int i = 1, offset = 0; i < sizeof(arr)/sizeof(int); i++) {
        if (arr[i]!= 1) {
            if (arr[i-1] == 1) {
                printf("1");
            }

            printf(" x %d", arr[i]);
        }
    }
    printf(" = %d.\n", sm_pos_number);

    return 0;
}