/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  test entry of get max value of vector
 *
 *        Version:  1.0
 *        Created:  2014年09月16日 19时57分02秒
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
#include"o3.h"

int main(int argc, char * argv[]) {
	int result;
	int vector[10] = {1,-2,2,2,2,4,-5,6,1,9};
	int vector2[10] = {1,-2,2,2,2,4,-5,6,1,-9};

	result = getMaxValueOfVector(vector, 10);
	assertEqual(21, result);
	result = getMaxValueOfVector(vector2, 10);
	assertEqual(12, result);

}
