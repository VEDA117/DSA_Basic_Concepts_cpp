/*Complete the implementation
Given a countSort function that accepts an array as a parameter, sort the array using the count sort algorithm.

Sample 1:
Input
Output
8
6 5 3 1 8 7 2 4
1 2 3 4 5 6 7 8*/

#include <bits/stdc++.h>
using namespace std;


int maximun(vector<int>& arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxi<arr[i]) maxi=arr[i];
    }
    return maxi;
}

void countsort(vector<int>& arr,int n){
    int maxu=maximun(arr,n);
    vector<int> count(maxu+1,0);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    
    
    int index = 0;
    for (int i = 0; i <= maxu; i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    arr.push_back(x);
	    //cin>>arr[i];
	    
	}
	
	countsort(arr,n);
	
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	

}
