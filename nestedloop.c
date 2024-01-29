#include <stdio.h>
#include <stdlib.h>

#define n 1000

int main()

{
    // float *a = (float *)malloc(n*n*sizeof(float));
    // float *b = (float *)malloc(n*n*sizeof(float));
    // float *c = (float *)malloc(n*n*sizeof(float));

    float a [n][n];
    float b [n][n];
    float c [n][n];


    for (int i=0; i<n; i++)
    {
        // a [i] = 1;
        // c[i] = a[i] + b[i];
        for (int j=0; j<n; j++)
        {
            c [i][j] = a[i][j] + b[i][j];
            // printf("%d ", a[i*j]);
        }
    }
    printf("%f", c[0]);
    return 0;
}