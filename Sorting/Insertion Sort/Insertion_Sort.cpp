// Complete the implementation
// Given a insertionSort function that accepts an array as a parameter, sort the array using the Insertion sort algorithm.

// Sample 1:
// Input

// 8
// 6 5 3 1 8 7 2 4
// output
//   1 2 3 4 5 6 7 8
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int  i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	for(int i=1;i<n;i++){
	    int key=arr[i];
	    int j=i-1;
	    while(j>=0 && arr[j]>key){
	        arr[j+1]=arr[j];
	        j--;
	    }
	    arr[j+1]=key;
	}
	
	
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}

}
