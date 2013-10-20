/**
 * @describe Test variable
 * @author charmyin
 * @since 2013-10-20 18:24:37
 */

#include <stdio.h>
int a, b;
int c;
float f;
static int staticInt = 123;
#define LENGTH 1000-100

const int i = 1000;

int testCharConstants(){
	auto int k ;
	k = 12;
	printf("Hello\tboy,\vthat's me~");
	auto int j = LENGTH;
	printf("\nResult of define:%d\n",j);
	printf("Result of const:%d\n", i);
	printf("auto value:%d\n", k);
	printf("static value:%d\n", staticInt);
	return 0;
}
