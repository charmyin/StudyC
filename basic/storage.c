/**
 * @describe Test Storage Class
 * @author
 */

#include<stdio.h>

static int count = 5;

extern int k;

int storage(void){

	k = 50023;
	printf("extern int k=%d\n",k);
	while(count--){
		func();
	}

	return 0 ;
}

void func(void){
	static int i = 5;
	i++;

	printf("i is %d and count is %d\n", i, count);
}
