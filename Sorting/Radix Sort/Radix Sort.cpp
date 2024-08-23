/*Complete the implementation
Given a radixSort function that accepts an array as a parameter, sort the array using the Radix sort algorithm.

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

void countingsort(vector<int>& arr,int n,int exp){
    int output[n];
    int count[10]={0};
    
    for(int i=0;i<n;i++){
        count[(arr[i]/exp)%10]++;
    }
    
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    
    for(int i=n-1;i>=0;i--){
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

void radixsort(vector<int>& arr,int n){
    int maxu=maximun(arr,n);
    for(int exp=1;(maxu/exp)>0;exp*=10){
        countingsort(arr,n,exp);
    }
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int>  arr;
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    arr.push_back(x);
	}
	
	radixsort(arr,n);
	
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;

}
