#include <stdio.h>
#include <math.h>

#define N 4
#define PI 3.141592650359

int input[N] = {1, 2, 3, 4};

float result_im[N];
float result_re[N];


float dft()
{
	for(int n = 0; n < N; n++)
	{
		for(int k = 0; k < N; k++)
		{
			result_im[n] = result_im[n] - input[k]*(sin(2*k*n*PI/N));
			result_re[n] = result_re[n] + input[k]*(cos(2*k*n*PI/N));
		}
	}	
	return 1;
}

void disp()
{
	for(int cnt = 0; cnt < N; cnt++)
	{
		printf("%f, %f\n",result_re[cnt], result_im[cnt]);
	}
}

int main()
{
	dft();
	disp();

}