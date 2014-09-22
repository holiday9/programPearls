/*
 * =====================================================================================
 *
 *       Filename:  o2.c
 *
 *    Description:  获取最大子向量的平方级量级的方法．
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

int getMaxValueOfVectorO2(int vector[], int size) {
	printf("getMaxValueOfVector.o2\n");
	
	int i;
	int j;
	int k;
	int maxsum = 0;
	int sum = 0;
	int last_sum; // sum[i,k]

	for (i = 0; i<size; i++) {
		last_sum = 0;
		for( j = i+1; j < size; j++) {
			/*
 			 * 改造这里,保存上一次的sum[i,j-1]
			 * sum[i,j] = sum[i,j-1] + vector[j]
 			 */
			sum = last_sum + vector[j];
			maxsum = max(sum, maxsum);
			
			last_sum = sum;
		}	
	}
	
	return maxsum;
}















