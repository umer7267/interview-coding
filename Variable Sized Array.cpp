/* Consider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the Explanation section below for a diagram.

Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array  and  denotes an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.

Click here to know more about how to create variable sized arrays in C++.

Input Format

The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  (the number of queries). 
Each line  of the  subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 � a[i]k-1 describing the -element array located at . 
Each of the  subsequent lines contains two space-separated integers describing the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.
 
Output Format

For each pair of  and  values (i.e., for each query), print a single integer denoting the element located at index  of the array referenced by . There should be a total of  lines of output.

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample Output

5
9 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{

	int n,q;
	cin >> n >> q;
	vector< vector<int> > a(n);
	
	for(int i=0; i<n; i++){
	    int k;
	    cin >> k;
	
	    for (int j=0;j<k;j++) {
	        int data;
	        cin >> data;
	        a[i].push_back(data);
	    }
	}
	
	for (int i=0; i<q; i++) {
	    int x,y;				
	    cin >> x >> y;
	    cout << a[x][y] << endl;
	}
	return 0;
}
