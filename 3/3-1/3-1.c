/*
 * =====================================================================================
 *
 *       Filename:  3-1.c
 *
 *    Description:  查表
 *
 *        Version:  1.0
 *        Created:  2013年11月18日 20时23分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */
#include<stdio.h>

float get_tax(float income);

int main() {
	float income = 3000;
	float tax;

	tax = get_tax(income);

	printf("tax = %lf\n", tax);
}

float get_tax(float income) {
	float tax;

	if (income <= 2200) {
		tax = 0;	
	} else if (income <= 2700) {
		tax = 	   0.14 * (income - 2200) ;
	} else if (income <= 3200) {
		tax = 70 + 0.15 * (income - 3200);
	} else if (income <= 3700) {
		tax = 145 + 0.16 * (income - 3700); 	
	} else if (income <= 4200) {
		tax = 225 + 0.17 * (income - 3700);
	} else {
		tax = 53090 + 0.70 * (income - 102200);
	}

	return tax; 
}
