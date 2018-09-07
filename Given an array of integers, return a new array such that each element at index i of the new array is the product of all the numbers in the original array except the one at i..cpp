/* This problem was asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6]. */

#include<iostream>
using namespace std;

int new_array(int arr[], int i){
	int result = 1;
	for(int j=0; j<5; j++){
		if(j == i){
			continue;
		}
		result *= arr[j];
	}
	return result;
}

int main(){
	int org_arr[5] = {1, 2, 3, 4, 5};
	int trans_arr[5] = {1, 2, 3, 4, 5};
	for(int i=0; i<5; i++){
		trans_arr[i] = new_array(org_arr, i);
		cout<<trans_arr[i]<<" ";
	}
	return 0;
}
