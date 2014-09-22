/*
 * =====================================================================================
 *
 *       Filename:  n3.c
 *
 *    Description:  获取最大子向量最直接的想法．
 *
 *        Version:  1.0
 *        Created:  2014年09月16日 19时46分04秒
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
#include"mymath.h"

int getMaxValueOfVector(int vector[], int size) {
	//?我觉得是遍历２次，为什么书上说３次循环．
	printf("getMaxValueOfVector.o3\n");
	// transfer orderly, from head to tail. [0, n -1]
	// compute sum from i to j. j belong to [i + 1, n - 1]
	//     compute sum, and compare sum to maxsum
	//     maxsum = max(sum, maxsum)
	
	int i;
	int j;
	int k;
	int maxsum = 0;
	int sum = 0;

	for (i = 0; i<size; i++) {
		for( j = i+1; j < size; j++) {
			sum = 0;
			for (k = i; k<=j; k++) {
				sum += vector[k];
			}
			maxsum = max(sum, maxsum);
		}	
	}
	
	return maxsum;
}















