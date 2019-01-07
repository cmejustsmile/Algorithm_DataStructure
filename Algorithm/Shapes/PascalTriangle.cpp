/*
 * Author: YJ.P
 * Date: 190107
 * Description: Printing Pascal number in triangle with various shape
 * Input: %d %d (number of rows, 1 or 2 or 3 ->shape)
 * */
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
 int H=0;
 int K=0;
 cin >> H >> K;
 
 int number = H*(H+1)/2 +1;
 int array[number];
 int start, d, floor;

 for(int f =1;f<=H;f++){
 	int start = f*(f-1)+1;
 	for(int node = start;node<=node+(f-1);node++){
  		if(node == start || node == node+(f-1)) array[node] =1;
		else{
			array[node] = array[node/2]+array[node/2+1];
		}
  	}
 }

 for(int row=1;row<=H;row++){
 	for(int col=1;col<=H;col++){
		if(K==1){
			start = row*(row-1)/2 +1;
			d = col;
			if(col<=row){
				printf("%d ", array[start+d]);
			}
		}
//		}else if(K==2){
//			floor = (H+1)-row;
//			start = floor*(floor-1)/2 +1;
//			d = col; 
//			if(col<=floor) printf("%d ", array[start+d]);
//		}else if(K==3){
//			floor = (H+1)-col;
//			start = floor*(floor-1)/2 +1;
//			d = row;
//			if(col<=row) printf("%d ", array[start+d]);
//		}
	}
	printf("\n");
 }


}
