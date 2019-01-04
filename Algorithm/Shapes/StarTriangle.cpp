/*
 * Author: YJ.P
 * Date: 190104
 * Description: Printing Triangles with stars
 * 		input: 1 - right triangle, 2 - reversed right triangle, 3 - centered triangle
 * Input: n(number of triangle.0<=n<=100), 1 or 2 or 3 (type of triangle)
 * What I Learned: a single blank is as same width as a char! 
 * */
#include <stdio.h>

int main(){

	int N=0;
	int M=0;
	scanf("%d %d",&N, &M);
	if(N<0 || N>100 || M<=0 || M>4){
		printf("INPUT ERROR!");
		return 0;
	}

	for(int i=1;i<=N;i++){
		if(M==1){
			// Right Triangle
			for(int j=1;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}else if(M==2){
			// Reversed Right Triangle
			for(int j=N;j>=i;j--){
				printf("*");
			}
			printf("\n");
		
		}else{
			// Centered Triangle
			int stars = (i-1)*2+1;
			int blanks = (2*N-stars)/2;
			for(int j=0;j<blanks;j++) printf(" ");
			for(int j=0;j<stars;j++) printf("*");
			printf("\n");
		}
	}

}

