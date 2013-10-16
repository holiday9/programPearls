/*
 * =====================================================================================
 *
 *       Filename:  2_3.c
 *
 *    Description:  exerice 2-3
 *
 *        Version:  1.0
 *        Created:  2013年09月01日 21时45分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */
#include<stdio.h>

int gcd(int i, int j) {
	while(i != j) {
		if (i > j) {
			i -= j;	
		} else {
			j -= i;
		}
	}
	
	return i;
}

void rotate_str(char * x, int rotdist, int n) {
	int i;
	for (i = 0;i < gcd(rotdist, n); i++) {
		int t = x[i];
		int j = i;
		while (1) {
			int k = j + rotdist;
			if (k >= n) {
				k -= n;
			}
			if (k == i) 
				break;
			x[j] = x[k];
			j = k;	
		}
		x[j] = t;	
	}
}

void print_str(char a[], int length) {
	int i = 0;
	for (i = 0;i < length;i++) {
		putchar(a[i]);
	}
	putchar('\n');
}
int main() {
	char x[] = {'a','b','c','1','3','5','7'};
	
	print_str(x, sizeof(x));
	rotate_str(x, 1, sizeof(x));
	print_str(x, sizeof(x));
	
	return 0;
}
