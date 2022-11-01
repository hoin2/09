#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

void addMatrix(int A[][COLS],int B[][COLS],int C[][COLS]);
void printMatrix(int A[][COLS]);

int main() {
	
	int A[ROWS][COLS]={
	{2,3,0},
	{8,9,1},
	{7,0,5}};
	
	int B[ROWS][COLS]={
	{1,0,0},
	{0,1,0},
	{0,0,1}};

	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0;
}

void addMatrix(int A[][COLS],int B[][COLS],int C[][COLS]){
	int i,j;
	
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLS;j++)
			C[i][j]=A[i][j]+B[i][j];
	}
}

void printMatrix(int C[][COLS]){
	int i,j;
	
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLS;j++)
			printf("%d ",C[i][j]);
		printf("\n");
	}
}
