/*
 * =====================================================================================
 *
 *       Filename:  assert.c
 *
 *    Description:  implements assert
 *
 *        Version:  1.0
 *        Created:  2014年09月22日 21时38分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<stdlib.h>

void assertEqual(int expected, int result) {
	if (expected != result) {
		printf("expected %d, result = %d\n", expected, result);
		exit(0);
	}
}
