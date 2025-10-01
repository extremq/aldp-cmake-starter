#include <stdio.h>
#include <omp.h>

#define NITER 16

int main(void) {
    int tid, iter;

    printf("for-schedule (static) sau cazul implicit\n");
    #pragma omp parallel private(tid)
    {
        tid = omp_get_thread_num();
        #pragma omp for
        for (iter = 0; iter < NITER; ++iter) {
            printf("%d proceseaza %d\n", tid, iter);
        }
    }

    printf("\n\nfor-schedule (static, chunk=2)\n");
    #pragma omp parallel private(tid)
    {
        tid = omp_get_thread_num();
        #pragma omp for schedule(static, 2)
        for (iter = 0; iter < NITER; ++iter) {
            printf("%d proceseaza %d\n", tid, iter);
        }
    }

    return 0;
}
