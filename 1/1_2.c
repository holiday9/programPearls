#include<stdio.h> 
#include<stdlib.h>
#include"utils.h"
#include"bitVector.h"

#define N 100 

void inputAndOutputByBitmap();
int testNums[N]; 
void printArray(int * a, int n);

unsigned char bitVector[N / 8 + 1];

int main() {
    inputAndOutputByBitmap();  
    printArray(testNums, N);
    
    fillTestNumsToBitVector(bitVector, testNums, N);

    printBitVector(bitVector, N);
    return 0;
}

void inputAndOutputByBitmap() {
    fillRandomNumbs(testNums, N); 
}


void printArray(int * a, int n) {
    int i;
    for (i = 0;i < n; i++) {
	printf("%d,", a[i]);
    }
    printf("\n");
}
