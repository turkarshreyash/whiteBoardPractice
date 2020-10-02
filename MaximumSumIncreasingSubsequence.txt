/*
Given an array of n positive integers. Write a program to find the sum of maximum sum subsequence of the given array such that the integers in the subsequence are sorted in increasing order. For example, if input is {1, 101, 2, 3, 100, 4, 5}, then output should be 106 (1 + 2 + 3 + 100), if the input array is {3, 4, 5, 10}, then output should be 22 (3 + 4 + 5 + 10) and if the input array is {10, 5, 4, 3}, then output should be 10


1 101 2 3 100 4 5
106

3 4 5 10
22

10 5 4 3
10

i       j
arr[i] < num
arr[j]<num

arr[i] == arr[j]  we can choose i
arr[i] > arr[j]   we choose i 
arr[i] < arr[j]   we choose j
*/


#include<iostream>

int main(){
	int n;
	std::cin>>n;
	int *arr = new int[n];
	for(int i = 0 ; i < n ; i++){
		std::cin>>arr[i];
	}
	int *dp = new int[n];
	int max = 0;
	for(int i = 0 ; i < n ; i++){
		dp[i] = 0;
		for(int j = i-1; j >= 0 ; j--){
			if(arr[i]>arr[j]){
				dp[i] = std::max(dp[i],dp[j]);
			}
		}
		dp[i] += arr[i];
		max = std::max(dp[i],max);
	}
	std::cout<<max<<"\n";
}
