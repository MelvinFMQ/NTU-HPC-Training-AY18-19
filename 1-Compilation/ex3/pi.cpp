#include <iostream>
#include <time.h>

// try different num_steps and compare the results
// note the range and precision of data type

static long num_steps = 100000;
long double step;

int main ()
{ 
    clock_t begin = clock();

    int i; 
    long double x, pi, sum = 0.0;
    step = 1.0/(double) num_steps;
    for (i=0;i< num_steps; i++)
    {
        x = (i+0.5)*step;
        sum = sum + 4.0/(1.0+x*x);
    }
    pi = step * sum;
    std::cout.precision(20);
    std::cout<<"Pi = "<< pi <<std::endl;

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Elapsed CPU time is %f\n",time_spent);

    return 0;
}
