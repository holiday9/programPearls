/*
 * ====================================================================================
 *
 *       Filename:  utils.c
 *
 *    Description:  一些工具函数
 *                  包括生成指定的个数的随即序列的函数
 *
 *        Version:  1.0
 *        Created:  2013年06月21日 22时18分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */
#include "stdio.h"
#include "stdlib.h" 
#include "time.h"

void swap(int *a , int k, int j);

void fillRandomNumbs(int *nums, int n) {
   
    srand((unsigned)time(NULL));
    int i = 0;
    for (i = 0; i<n ;i++) {
	nums[i] = i;
    }  
    for (i = 0; i<n; i++) {
	int k = rand() % n;
	int j = rand() % n;
	swap(nums, k, j);
    }
}

void swap(int *a , int k, int j) {
   int temp;

   temp = a[k];
   a[k] = a[j];
   a[j] = temp;
}

