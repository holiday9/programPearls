/*
 * =====================================================================================
 *
 *       Filename:  1_1.c
 *
 *    Description:  a sort for 10000000 nums with c stand lib
 *
 *        Version:  1.0
 *        Created:  2013年06月12日 18时54分44秒
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

#define N 1000000

void swap(int *a, int k, int j);
int cmp(const void *, const void *);

int main() {
  /*
 *
 *  random 10 nums as input 
 */
 int nums[N];
 
 srand((unsigned)time(NULL));
 int i = 0;
 for (i = 0; i<N ;i++) {
  nums[i] = i;
 } 
 for (i = 0; i<N; i++) {
     int k = rand() % N;
     int j = rand() % N;
     swap(nums, k, j);
 }
 /*
 *
 *  sort
 */
 clock_t startTime = clock();
 qsort(nums, N, sizeof(int), cmp);
 clock_t endTime = clock();
 printf("take time = %ld\n", (endTime - startTime)); 
 /*
 * output
 */
/* for (i = 0; i<N ;i++) {
  printf("%d,", nums[i]);
 }*/ 
}


void swap(int *a , int k, int j) {
   int temp;

   temp = a[k];
   a[k] = a[j];
   a[j] = temp;
}


int cmp(const void *a, const void *b) {
   return (*(int *)a) - (*(int *)b);
}















