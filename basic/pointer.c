/**
 * @describe Test pointer in c
 * @author charmyin
 * @since 2013-10-20 20:33:31
 *
 */

#include<stdio.h>

int pointer(){
	int *ptr = NULL;
	printf("The value of ptr is : %x\n", &ptr);
	return 0;
}
