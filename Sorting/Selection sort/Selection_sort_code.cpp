/*Complete the implementation
Given a selectionSort function that accepts an array as a parameter, sort the array using the Selection sort algorithm.

Sample 1:
Input
8
6 5 3 1 8 7 2 4
Output
1 2 3 4 5 6 7 8*/


#include <bits/stdc++.h>
using namespace std;


void selctionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[ind]){
                ind=j;
            }
        }
        if(ind!=i){
            swap(arr[i],arr[ind]);
        }
    }
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	selctionsort(arr,n);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	
}
