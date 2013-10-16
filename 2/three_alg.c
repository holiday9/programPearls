/*
 * =====================================================================================
 *
 *       Filename:  three_alg.c
 *
 *    Description: implement three alg: jump, swap, reverse 
 *
 *        Version:  1.0
 *        Created:  2013年10月12日 17时16分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */

#include<stdio.h>

void jump(char *a, int rotate_index, int n);


int main() {
	char a[] = {'1','2','3','a','b','c','d'};
	int n = sizeof(a);

	// print array a before rotate
	int i ;
	for (i = 0;i < n;i++) {
		printf("%c ", a[i]);
	}	
	printf("\n");

	// rotate
	jump(a, 4, n);

	//print array a after roate
	for (i = 0;i < n;i++) {
		printf("%c ", a[i]);
	}	
	printf("\n");
}

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

void jump(char *a, int rotate_index, int n) {
	int i;
	for (i = 0;i < gcd(rotate_index, n); i++) {
		int j = i;
		int t = a[j];
		// ? how to compute left move
		int k = j;
		int l = k + rotate_index;
		while(j != l) {
			if (l >= n) {
				l -= n;
			}
			if (j == l) {
				break;	
			}		
			printf("j = %d, l = %d\n", j,l);
			a[k] = a[l];
			k = l;
			l += rotate_index;
		}
		a[k] = t;			
	}	

}
















