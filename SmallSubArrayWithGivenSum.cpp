/*
Given an array of integers and a number x, find the smallest subarray with sum greater than the given value.
arr[] = {1, 4, 45, 6, 0, 19}
   x  =  51
Output: 3
Minimum length subarray is {4, 45, 6}

arr[] = {1, 10, 5, 2, 7}

   x  = 9
Output: 1
Minimum length subarray is {10}

arr[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250}
    x = 280
Output: 4
Minimum length subarray is {100, 1, 0, 200}

arr[] = {1, 2, 4}
    x = 8

6
1 4 45 6 0 19

sum = 45+6+0

51

1. we need to have start pointer and stop pointer
2. does array countains only positive numbers??
*/
#include<iostream>
#define inf __INT_MAX__


int main(){
	int n;
	std::cin>>n;
	int *arr = new int[n];
	for(int i = 0 ; i < n ; i++){
		std::cin>>arr[i];
	}
	int x;
	std::cin>>x;	
	int l =  0;
	int minLen = inf;
	int sum =  0;
	for(int i = 0 ; i < n  ;i++){
		sum = sum+arr[i];
		if (sum>x){
			while(sum > x){
				sum-=arr[l];
				l++;
			}
			minLen = std::min(minLen,i-l+2);
		}		
	}
	if(minLen==inf){
		std::cout<<"Not Possible\n";	
	}else
	std::cout<<minLen<<"\n";
}	

