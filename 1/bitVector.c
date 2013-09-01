/*
 * =====================================================================================
 *
 *       Filename:  bitVector.c
 *
 *    Description:  位向量
 *
 *        Version:  1.0
 *        Created:  2013年06月22日 21时15分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */
#include<stdio.h>

void fillTestNumsToBitVector(unsigned char * bitVector, int * numbs, int count) {
    int i = 0;
    for (i = 0;i < count; i++) {
	int n = numbs[i];
	int byteIndex = n / 8;
	int bitIndex = n % 8;
	unsigned char b = bitVector[byteIndex];
	b |= (1 << bitIndex);     /*写的比较繁琐*/		
	bitVector[byteIndex] = b;
	printf("byte is %d\n", b);
    }
}

printBitVector(unsigned char *bitVector, int n) {
    int i;
    for (i = 0;i < n;i++) {
	int byteIndex = i / 8;
	int bitIndex = i % 8;
	unsigned char b = bitVector[byteIndex];
	int flag = b & (1 << bitIndex);
/*	printf("byteIndex = %d,bitIndex = %d,b = %d,flag = %d\n", byteIndex,
		bitIndex, b, flag);*/
	if(flag != 0) {
	   printf("%d,", i); 
	}	
    }
} 
