/*
 * =====================================================================================
 *
 *       Filename:  3-4.c
 *
 *    Description:  compute calendar
 *
 *        Version:  1.0
 *        Created:  2014年06月05日 20时03分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */

int is_leap(int year) {
	if (year / 400 == 0) {
		return 1;	
	}
	if ((year / 4 == 0) && (year / 100 != 0)) {
		return 1;
	}

	return 0;
}

int days_of_month(int m, int y) {
	int days[2][12] = {31,28,31,30,31,30,30,31,30,31,30,31,
					   31,28,31,30,31,30,30,31,30,31,30,31};
	
	if (m <= 0 || m > 12)
		return 0;

	return days[is_leap(y)][m - 1];	
}

long days_of_year(int year) {
	int years = 0;

	int i = 1;
	for(;i <=year;i++) {
		years += 366;	
		if (is_leap(i)) {
			years += 1;
		}	
	}

	return years;
}

long get_diff_date1_and_date2(int y1,int m1, int d1, int y2,int m2,int d2) {
	long count1 = days_of_year(y1 - 1) + m1 * days_of_month(m1 - 1, y1) + d1;
	long count2 = days_of_year(y2 - 1) + m2 * days_of_month(m2 - 1, y2) + d2;

	return count1 - count2;
}


