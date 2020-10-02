/*
Given an array of integers where each element represents the max number of steps that can be made forward from that element. Write a function to return the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, they cannot move through that element.


  min = 1
                0  1  2  3  4  5  6  7  8  9      
Input: arr[] = {3,  0, 2, 3,  2,   6,  7,  6,   8,  9  }
	      [0   1  1   1   INF  INF INF INF  INF  INF]
	       
                        	          


O(n)
1. elements till maxReach can be reached in count
*/
#include<iostream>
#include<cstring>
#include<climits>
#define INF INT_MAX


int main(){
	int n;
	std::cin>>n;
	int *arr = new int[n];
	for(int i = 0 ; i < n ; i++){
		std::cin>>arr[i];
	}
	int *minJumps = new int[n];
	//memset((void*)minJumps, INF, n*sizeof(minJumps[0]));
	std::fill(minJumps,minJumps+n,INF);
	for(int i = 0 ; i < n ; i++){
		//minJumps[i] = INF;
		std::cout<<minJumps[i]<<" ";
	}
	minJumps[0] = 0;
	for(int i =  0; i  < n ; i++){
		for(int j = i+1; j < n && j <= arr[i]+i; j++){
			minJumps[j] = std::min(minJumps[j],minJumps[i]+1);
		}
	}
	for(int i = 0 ; i < n ; i++){
		std::cout<<minJumps[i]<<" ";
	}
	std::cout<<"\n"<<minJumps[n-1]<<"\n";
}
