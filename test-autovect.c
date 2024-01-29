#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define N 1000000

void add_arrays(int *a, int *b, int *c) {
    for (int i = 0; i < N; ++i) {
        c[i] = a[i] + b[i];
    }
}

long long get_time() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000000) + tv.tv_usec;
}
// Returns the number of seconds elapsed between the two specified times
float elapsed_time(long long start_time, long long end_time) {
        return (float) (end_time - start_time) / (1000 * 1000);
}


int main() {

    long long start,end;
    

    int *a, *b, *c;

    
    a = (int *)malloc(N * sizeof(int));
    b = (int *)malloc(N * sizeof(int));
    c = (int *)malloc(N * sizeof(int));

    if (a == NULL || b == NULL || c == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

  
    for (int i = 0; i < N; ++i) {
        a[i] = i;
        b[i] = i;
    }

    start = get_time();

    add_arrays(a, b, c);

    end = get_time();

    for (int i = 0; i < N; i++)
        if(c[i]!=i*2){
        printf("Test FAIL\n");
        return 0;
    }

    printf("Test TRUE\n");

    printf("Time: %f\n", elapsed_time(start, end));


    free(a);
    free(b);
    free(c);

    return 0;
}
