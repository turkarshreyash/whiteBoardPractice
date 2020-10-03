/*
You are given an array of n-elements, you have to find the number of subsets whose product of elements is less than or equal to a given integer k.

Input : 2 4 5 3 
k = 12
Output : 8


1. numbers greater than k will not be considered
2. O(n^2)
3. use dp table

size of n*k
8%4
8/4 = 2

  1  2  3  4  5  6  7  8  9  10  11  12
N 1  0  0  0  0  0  0  0  0  0   0   0
2 1  1  0  0  0  0  0  0  0   0  0   0
4 1  1  0  1  0  0  0  1  0   0  0   0
5 1  1  0  1  1  0  0  1  0   1  0   0
3 1  1  1  1  1  1  0  1  0   0  0   1

count = 1
*/

#include<iostream>


int main(){

	int n;
	std::cin>>n;
	int *arr = new int[n];
	for(int i = 0 ; i < n ; i++){
		std::cin>>arr[i];
	}
	int k;
	std::cin>>k;
	int **dp = new int*[n+1];
	for(int i = 0  ; i <= n; i++){
		dp[i] = new int[k+1];
	}
	dp[0][1] = 1;

	int count = 0;

	for(int i = 1; i <= n ; i++){
		for(int j = 1; j <= k ; j++){
			if(j%arr[i-1] == 0){
				dp[i][j] = dp[i-1][j/arr[i-1]];
				count += dp[i][j];
			}
			dp[i][j] += dp[i-1][j];
		}
	}
	for(int i = 1 ; i <= n ; i++){
		std::cout<<arr[i-1]<<": ";
		for(int j = 1 ; j <= k ; j++){
			std::cout<<dp[i][j]<<" ";
		}
		std::cout<<"\n";
	}
	std::cout<<count<<"\n";
}




















