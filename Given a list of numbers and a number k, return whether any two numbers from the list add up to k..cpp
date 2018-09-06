/*This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.*/



#include<iostream>
using namespace std;

bool check(int arr[], int k){
	int check;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			check = arr[i] + arr[j];
			if(check == k){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int arr[5] = {10, 15, 3, 4, 7};
	int k = 17;
	bool result;
	
	result = check(arr, k);
	if(result == true)
		cout<<"True";
	else
		cout<<"False";
	return 0;
}
