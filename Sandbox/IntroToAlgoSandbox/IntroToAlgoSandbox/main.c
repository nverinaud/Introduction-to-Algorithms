//
//  main.c
//  IntroToAlgoSandbox
//
//  Created by Nicolas VERINAUD on 18/04/14.
//  Copyright (c) 2014 Nicolas VERINAUD. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double running_100n2(int n);
double running_2_pow_n(int n);

int main(int argc, const char * argv[])
{
	int n = 1;
	double hundred_n_2 = 0;
	double two_pow_n = 0;
	
	while (1)
	{
		n++;
		hundred_n_2 = running_100n2(n);
		two_pow_n = running_2_pow_n(n);
		
		if (hundred_n_2 < two_pow_n) break;
	}
	
	printf("100n2 is faster when n >= %d\n", n);
	printf("100n2 took %.f whereas 2^n took %.f.\n", hundred_n_2, two_pow_n);
	
    return 0;
}

double running_100n2(int n)
{
	return 100 * n * n;
}


double running_2_pow_n(int n)
{
	return pow(2, n);
}