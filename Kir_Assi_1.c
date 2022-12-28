#include<stdio.h>
#include<omp.h>
#include<time.h>
#define N 10
int main()
{
    clock_t start,end;
    start=clock();
    int arr[N],i;
    //omp_set_num_threads(5);
    #pragma omp parallel for
    for(i=0; i<N/2; i++)
    {       

        arr[i]=i+(N-i);
        printf("thread %d sum of i=%d: array=%d\n",omp_get_thread_num(),i, arr[i]);      
      
    }
    end=clock();
    double t=((double)(end-start))/CLOCKS_PER_SEC;
printf("excution time=%lf",t);
    
    return 0;
}