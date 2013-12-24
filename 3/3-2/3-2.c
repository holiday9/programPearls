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

static long compute_use_arr();

int main() {
	long result1 = compute_use_arr();
	printf("arr_result = %ld\n", result1);
	int result2 = compute_rec(15);
	printf("rec_result = %d\n", result2);
	return 0;
}

// f(15) = f(14) + f(13) + f(12) + f(11) + f(10) + 1 
// f(1) = 1;
// f(2) = 2;
// f(3) = 3;
// f(4) = 4;
// f(5) = 5
int compute_rec(int m) {
	if (m == 1) {
		return 1;
	}
	if (m == 2) {
		return 2;
	}
	if (m == 3) {
		return 3;
	}
	if (m == 4) {
		return 4;
	}
	if (m == 5) {
		return 5;
	}
	

	return compute_rec(m - 1) + compute_rec(m - 2) + compute_rec(m - 3) 
		+ compute_rec(m - 4) + compute_rec(m - 5) + 1; 
}

static long compute_use_arr() {
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

	return A[14];
}






























