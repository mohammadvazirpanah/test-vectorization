#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#define N 1000000
#define T int



long long get_time() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000000) + tv.tv_usec;
}

// Returns the number of seconds elapsed between the two specified times
float elapsed_time(long long start_time, long long end_time) {
        return (float) (end_time - start_time) / (1000 * 1000);
}


int main ()
{
  	
  T* vect1 =(T*) malloc(N * sizeof(T));
  T* vect2 =(T*) malloc(N * sizeof(T));
  T* result = (T*) malloc(N * sizeof(T));

 for (int i = 0; i < N; i++){
    vect1[i] = i;
    vect2[i] = i;
  }

long long start = get_time();

 for (int i = 0; i < N; i++)
    result[i] = vect1[i] + vect2[i];

long long end = get_time();

	printf("Time [s]: %f\n", elapsed_time(start, end));
  printf ("Addition vector:\n");

  for (int i = 0; i < N; i++)
    if(result[i]!=i*2){
        printf("Test FAIL\n");
        return 0;
    }

  printf("Test TRUE\n");
  free(vect1);
  free(vect2);
  free(result);
  return 1;

} 
