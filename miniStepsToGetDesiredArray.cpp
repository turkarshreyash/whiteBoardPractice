/*
Consider an array with n elements and value of all the elements is zero. We can perform following operations on the array.

Incremental operations:Choose 1 element from the array and increment its value by 1.
Doubling operation: Double the values of all the elements of array.
We are given desired array target[] containing n elements. Compute and return the smallest possible number of the operations needed to change the array from all zeros to desired array.

Input: target[] = {2, 1}
Output: 3

Input: target[] = {16, 16, 16}
Output: 7

Examples:

Input: target[] = 2 1
Output: 

0 0
1. increament an element
2. double entire array

2 3
2 3
count=1+1+1+1

ODD. (1-i + many-d) OR (0-i + 0-d) + 1-i
EVEN. 1-i + 1/many-d
ZERO. do nothing

3  8

3 = i+d+i
d-ODD/EVEN = floor(log2(num))
i-ODD = 2
i-EVEN = 1
*/
#include<iostream>
#include<cmath>

int main(){
	int n;
	std::cin>>n;
	int *arr = new int[n];
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		std::cin>>arr[i];
		sum+=arr[i];
	}
	int count = 0;
	while(sum!=0){
		for(int i = 0 ; i < n ; i++){
			if(arr[i]%2){
				arr[i]--;
				sum--;
				count++;
			}
		}
		if(sum==0){
			break;
		}
		for(int i = 0 ; i < n ; i++){
			arr[i] /= 2;
		}
		sum /= 2;
		count++;
	}

	std::cout<<count<<"\n";
}
