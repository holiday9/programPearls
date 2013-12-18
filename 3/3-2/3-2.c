/*
 * =====================================================================================
 *
 *       Filename:  3-2.c
 *
 *    Description:  source code for question 3-2
 *
 *        Version:  1.0
 *        Created:  2013年11月21日 19时31分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */

#include <stdio.h>


int main() {
	int C[] = {1,1,1,1,1,1};  // c1,c2,c3,c4,c5,c6
	long A[15] = {1,2,3,4,5};  // a1,a2,a3,a4,a5
   	int m = 15;
	int k = 5;
	
	int i;
	// 假设这里不用数组这种数据结构会怎么样？
	// 很难想想程序会写的有多啰嗦，多难懂。甚至有点不会编程了。
	for (i = 6;i <= m; i++) {
		A[i - 1] = C[0] * A[i - 2] + C[1] * A[i - 3] + 
				   C[2] * A[i - 4] + C[3] * A[i - 5] + 
				   C[4] * A[i - 6] + C[5]; 
	}	
	for (i = 0;i < m; i++) {
		printf("A[%d] = %ld\n", (i), A[i]);
	}

	return 0;
}































