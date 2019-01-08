package com.yj.algorithms;

import java.util.Scanner;

public class PascalTriangle {

	public PascalTriangle() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int M = sc.nextInt();
	
		
		// save pascal values 
		int[][] pascal = new int[N+1][];
		for(int i=1; i<=N;i++) {
			pascal[i] = new int[i+1];
		}
		
		for(int i=1;i<=N;i++) {
			for(int j=1;j<=i;j++) {
				if(j==1 || j==i) pascal[i][j]=1;
				else {
					pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
				}
			}
		}
		
		
		if(M==1) {
			for(int i=1;i<=N;i++) {
				for(int j=1;j<=i;j++) {
					System.out.print(pascal[i][j]+" ");
				}
				System.out.println();
			}
			
		}else if(M==2) {
			for(int i=N;i>=1;i--) {
				for(int j=1;j<N+1-i;j++) System.out.print(" ");
				for(int j=i;j>=1;j--) {
					System.out.print(pascal[i][j]+" ");
				}
				System.out.println();
			}
		}else if(M==3) {
			for(int i=1;i<=N;i++) {
				for(int j=1;j<=i;j++) {
					System.out.print(pascal[N+1-j][i+1-j]+" ");
				}
				System.out.println();
			}
		}
		
	}

}
