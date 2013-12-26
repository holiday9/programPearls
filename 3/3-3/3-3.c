/*
 * =====================================================================================
 *
 *       Filename:  3-3.c
 *
 *    Description:  program prearls exercises 3.3 . 
 *    				detail desc at q.desc
 *
 *        Version:  1.0
 *        Created:  2013年12月26日 10时16分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */

#include<stdio.h>

static void print_character_desc(char c);

int main() {
	
	print_character_desc('c');
	print_character_desc('d');
	print_character_desc('e');
	print_character_desc('f');
}

static void print_character_desc(char c) {
	char *desc [4] = {
		"this is c",
		"this is d",
		"this is e",
		"this is f"
	};

	printf("%s\n", desc[c - 'c']);
}


















