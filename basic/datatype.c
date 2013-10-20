/*
 * variable.c
 *
 *  Created on: Oct 17, 2013
 *      Author: Charmyin
 */


#include <stdio.h>
#include <limits.h>
#include <float.h>


int dataTypeTest(){
	printf("Storage size for int : %d Bytes\n", sizeof(int));
	printf("Storage size for char: %d Bytes\n", sizeof(char));
	printf("Storage size for short : %d Bytes\n", sizeof(short));
	printf("Storage size for long : %d Bytes\n", sizeof(long));
	printf("Storage size for float : %d Bytes\n", sizeof(float));
	printf("Storage size for double : %d Bytes\n", sizeof(double));
	printf("Storage size for long double: %d Bytes\n", sizeof(long double));

	printf("Minimum float positive value : %E\n", FLT_MIN);
	printf("Maximum float positive value:%E\n",FLT_MAX);
	printf("Precision value: %d\n", FLT_DIG);

	printf("Minimum double positive value : %E\n", DBL_MIN);
	printf("Maximum double positive value:%E\n",DBL_MAX);
	printf("Precision value: %d\n", DBL_DIG);

	printf("Minimum long double positive value : %Le\n", LDBL_MIN);
	printf("Maximum long double positive value : %Le\n",LDBL_MAX);
	printf("Precision value: %d\n", LDBL_DIG);
}
