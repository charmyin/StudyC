/**
 * @ describe Test union
 * @ author charmyin
 * @ since 2013-10-20 21:09:48
 */

#include <stdio.h>

union Data{
	int i;
	float j;
	char k;
};

int unionTest(){

	union Data data;

	data.i = 12;
	printf("i=%d\n", data.i);
	data.j = 23.23f;
	printf("j=%f\n", data.j);

	return 0;

}
