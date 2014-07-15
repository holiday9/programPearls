/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  二分查找的变体，如果有相同的查找元素，p返回的是最坐标
 *    				的索引
 *
 *        Version:  1.0
 *        Created:  2014年07月14日 20时13分39秒
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

int binary_search(int x[10], int t) {
	//loop invariant
	//x[l] < t <= x[h] && l < h
	//init 
	//l = -1, h = 10, p = (l + h) / 2;
	//
	//if (x[p] < t) l = p;
	//if (x[p] > t) h = p;
	//if (x[p] == t) h = p; l++;
	//
	//if x[p] == t return p;
	//return -1;
	//
	
	int l = -1;
	int h = 10;
	int p;
	while(l + 1 != h) {
		p = (l + h) / 2;
		
		if (x[p] < t) {
			l = p;
		} else if (x[p] > t) {
			h = p;
		} else {
			h = p;
			if (l + 1 < h) l++;	
		}
	}
	
	if (x[h] == t) {
		p = h;
	} else {
		p = -1;	
	}
	
	return p;	
}


int main () {
	int x1[10] = {1,2,3,5,5,5,7,9,9,10};
	int p1 = binary_search(x1, 9);
	printf("p = %d\n", p1);
	
	int x2[10] = {1,2,3,5,5,5,7,9,9,10};
	int p2 = binary_search(x2, 5);
	printf("p = %d\n", p2);
	
	int x3[10] = {1,2,3,5,5,5,7,9,9,10};
	int p3 = binary_search(x3, 0);
	printf("p = %d\n", p3);

	int x4[10] = {1,2,3,5,5,5,7,9,9,10};
	int p4 = binary_search(x4, 1);
	printf("p = %d\n", p4);



}
