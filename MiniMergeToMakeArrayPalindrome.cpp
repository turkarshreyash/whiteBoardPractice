/*
Given an array of positive integers. We need to make the given array a ‘Palindrome’. Only allowed operation on array is merge. Merging two adjacent elements means replacing them with their sum. The task is to find minimum number of merge operations required to make given array a ‘Palindrome’.

To make an array a palindromic we can simply apply merging operations n-1 times where n is the size of array (Note a single element array is alway palindrome similar to single character string). In that case, size of array will be reduced to 1. But in this problem we are asked to do it in minimum number of operations.

Example :

3
3
15 4 15
4
1 4 5 1
4
11 14 15 99

0
1
3
*/

#include<iostream>

const int maxN = 100;


int main(){

	int t,n;
	int count;
	int l,r;
	std::cin>>t;
	int arr[maxN];
	while(t--){
		std::cin>>n;
		for(int i = 0 ; i < n ; i++){
			std::cin>>arr[i];
		}
		l = 0;
		r = n-1;
		count=0;
		while(l<r){
			if(arr[l] == arr[r]){
				l++;
				r--;
			}
			
			else if(arr[l]<arr[r]){
				arr[l+1]+=arr[l];
				arr[l] = -1;
				count++;
				l++;
			}
			
			else if(arr[l]>arr[r]){
				arr[r-1]+=arr[r];
				arr[r] = -1;
				count++;
				r--;
			}
		}
		/*
		for(int i = 0 ;i < n ; i++){
			if(arr[i] != -1){
				std::cout<<arr[i]<<" ";
			}
		}
		*/
		std::cout<<count<<"\n";
	}

}


