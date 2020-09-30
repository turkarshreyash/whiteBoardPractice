#include<iostream>
using namespace std;

int findMin(int *arr,int i, int n){
	int l = 0, r = n;
	int m;  			// l = 0 r = 3
	while(l!=r && arr[l]>=arr[r]){      	// arr[l] = 4 > arr[r] = 8
    // cout<<"l: "<<l<<"r: "<<r<<"\n";
		m = (l+r)/2;      	// m = 3
		if(arr[l]>arr[m]){   	// arr[l] = 5 > arr[m] = 8 
			r = m;	        // 
		}else if(arr[r]<arr[m]){ // arr[r] = 4 < arr[m] = 8
			l = m+1; 	// 
		}else{
			break;
		}
	}
	return arr[l];
}


int main() 
{ 
    int arr1[] = {5, 6, 1, 2, 3, 4}; 
    int n1 = sizeof(arr1)/sizeof(arr1[0]); 
    cout << "The minimum element is " << findMin(arr1, 0, n1-1) << endl; 
 
    int arr2[] = {1, 2, 3, 4}; 
    int n2 = sizeof(arr2)/sizeof(arr2[0]); 
    cout << "The minimum element is " << findMin(arr2, 0, n2-1) << endl; 
 
    int arr3[] = {1}; 
    int n3 = sizeof(arr3)/sizeof(arr3[0]); 
    cout<<"The minimum element is "<<findMin(arr3, 0, n3-1)<<endl; 
 
    int arr4[] = {1, 2}; 
    int n4 = sizeof(arr4)/sizeof(arr4[0]); 
    cout<<"The minimum element is "<<findMin(arr4, 0, n4-1)<<endl; 
 
    int arr5[] = {2, 1}; 
    int n5 = sizeof(arr5)/sizeof(arr5[0]); 
    cout<<"The minimum element is "<<findMin(arr5, 0, n5-1)<<endl; 
 
    int arr6[] = {5, 6, 7, 1, 2, 3, 4}; 
    int n6 = sizeof(arr6)/sizeof(arr6[0]); 
    cout<<"The minimum element is "<<findMin(arr6, 0, n6-1)<<endl; 
 
    int arr7[] = {1, 2, 3, 4, 5, 6, 7}; 
    int n7 = sizeof(arr7)/sizeof(arr7[0]); 
    cout << "The minimum element is " << findMin(arr7, 0, n7-1) << endl; 
 
    int arr8[] = {2, 3, 4, 5, 6, 7, 8, 1}; 
    int n8 = sizeof(arr8)/sizeof(arr8[0]); 
    cout << "The minimum element is " << findMin(arr8, 0, n8-1) << endl; 
 
    int arr9[] = {3, 4, 5, 1, 2}; 
    int n9 = sizeof(arr9)/sizeof(arr9[0]); 
    cout << "The minimum element is " << findMin(arr9, 0, n9-1) << endl; 
 
    return 0; 
} 
 