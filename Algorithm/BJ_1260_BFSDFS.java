package com.yj.algorithm;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Stack;

public class BJ_1260_BFSDFS {

	private static void bfs(ArrayList<Integer>[] g, int M) {
		// queue
		LinkedList<Integer> q = new LinkedList<Integer>();
		q.clear();
		boolean[] isVisited = new boolean[g.length];	//if visited to put it in stack
		
		int v = M;
		q.add(v);
		
		while(!q.isEmpty()) {
			v = q.poll();
			if(isVisited[v]==false) {
				System.out.print(v+" ");
				isVisited[v] = true;
				for(int child : g[v]) q.add(child);
			}
		}
		return;
	}
	
	//dfs ¿Õ«Ù!!
	private static void dfs(ArrayList<Integer>[] g, int M) {
		// stack	
		Stack<Integer> s = new Stack<Integer>();
		s.clear();
		boolean[] isVisited = new boolean[g.length];
		
		int v = M;
		s.add(v);
		
		while(!s.isEmpty()) {
			v = s.peek();
			s.pop();

			if(isVisited[v]==false) {
				System.out.print(v+" ");
				isVisited[v] =true;
				
				for(int child=g[v].size()-1; child>=0;--child) s.add(g[v].get(child));
				
				
			}
		}
		
		return;
	}
	
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		int M = sc.nextInt();
		int node = sc.nextInt();
		ArrayList<Integer>[] a = (ArrayList<Integer>[]) new ArrayList[N+1];
		
		// Warning!!! need to declare a class
		for(int i=0;i<N+1;i++) {
			a[i] = new ArrayList<>();
		}
		
		for(int i=1;i<=M;++i) {
			int v1 = sc.nextInt();
			int v2 = sc.nextInt();
			
			a[v1].add(v2);
			a[v2].add(v1);
		}
		
		dfs(a, node);
		System.out.println();
		bfs(a, node);
		System.out.println();
	}

}
