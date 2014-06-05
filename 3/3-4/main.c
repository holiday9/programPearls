/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  test 3-4.c
 *
 *        Version:  1.0
 *        Created:  2014年06月05日 20时42分42秒
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

int main(int argc, char *argv[]) {
	long count = get_diff_date1_and_date2(2014,6,5,2014,6,1);
	printf("cound days between 2014,6,1,and 2014,06,05 equals :      %ld days\n", count);	
}
