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

	int day_of_week = getDayOfWeek(2014,6,12);
	printf("2014,6,12 is %d day\n", day_of_week);
	day_of_week = getDayOfWeek(2014,6,1);
	printf("2014,6,1 is %d day\n", day_of_week);

	int calenday[7][5];
	memset(calenday, 0,sizeof(int) * 35);
	getCalenday(2014,6, calenday);
	int i = 0;
	for (;i < 7;i++) {
		int j;
		for (j = 0;j < 5;j++) { 
			printf("%d,",calenday[i][j]);	
		}
		printf("\n");
	}
}
