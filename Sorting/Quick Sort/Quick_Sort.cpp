/*Complete the implementation
Given a quickSort function that accepts an array as a parameter, sort the array using the Quick sort algorithm.

Sample 1:
Input
Output
8
6 5 3 1 8 7 2 4
1 2 3 4 5 6 7 8*/
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    
	}
	
	quicksort(arr,0,n-1);
	
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	

}
