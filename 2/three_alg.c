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
void swap_rotate(char *arr, int rotate_index, int arr_size);

int main() {
	char a[] = {'1','2','3','a','b','c','d','e'};
	//char a[] = {'1','2','3'};
	int n = sizeof(a);

	// print array a before rotate
	int i ;
	for (i = 0;i < n;i++) {
		printf("%c ", a[i]);
	}	
	printf("\n");

	// rotate
	//jump(a, 4, n);
	swap_rotate(a,3,n);
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

void swap_arr(char * a, char * b, int size) {
		if (size <= 0) {
			return ;
		}	
		int i;
		char t;
		for (i = 0;i < size; i++) {
			t = a[i];
			a[i] = b[i];
			b[i] = t;	
		}
}

void swap_rotate(char *arr, int rotate_index, int arr_size) {
	//deal with the most simplest case
	if (arr_size <= 1 || rotate_index <= 0) {
		return ;
	}

	//确定要交换的向量a[m],b[n]
	char *a = arr;
	char *b = a + rotate_index;
	int m = rotate_index;
	int n = arr_size - m;
	p_arr(a, m);
	p_arr(b, n);
	//确定用来进行对等交换的向量p[min], q[min]
	char *p;
	char *q;
	int min;
	
	min = (m <= n ? m : n);
	if (m <= n) {
		p = a;
		q = b + n - min; //b + (n - 1) - (min - 1);
	} else {
		p = b;			
		q = a;
	}
	
	
	
	//交换向量 p,q
	swap_arr(p,q,min);
	p_arr(arr, arr_size);
	//确定新的arr, rotate_index, arr_size
		//上面的三个参数需要a[m], b[n]来确定
	char * arr_new;
	int rotate_index_new;
	int arr_size_new;
	if (m <= n) {
		arr_new = a;
		arr_size_new = arr_size - min;
		rotate_index_new = min;
	} else {
		arr_new = a + min;
		arr_size_new = arr_size - min;
		rotate_index_new = arr_size_new - min;
	}
	printf("rotate_index_new = %d, arr_size_new = %d\n", rotate_index_new,
			 arr_size_new);
	p_arr(arr_new, arr_size_new);	

	swap_rotate(arr_new, rotate_index_new, arr_size_new);

}

void p_arr(char *arr, int size) {
	int i;
	for (i = 0;i < size; i++) { 
		printf("%c ", arr[i]);
	}
	printf("\n");
}












