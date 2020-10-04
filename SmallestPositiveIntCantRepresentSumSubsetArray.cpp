/*
Given a sorted array (sorted in non-decreasing order) of positive numbers, find the smallest positive integer value that cannot be represented as sum of elements of any subset of given set.
Expected time complexity is O(n).

Examples:

5
6
1 3 6 10 11 15
4
1 1 1 1
4
1 1 3 4
6
1 2 5 10 20 40
6
1 2 3 4 5 6


2
5
10
4
22

1 1 3 4
1 2 5 9

arr: 2 3 4	            
*/

1. start from 1
2. how to increment if we have found number in arr
3. we were able to create 1 to res-1: therefore number = res
4. we encountered res:arr[i] then  arr[i] + 1 -> arr[i]+res-1
5. we set res: arr[i]+res
