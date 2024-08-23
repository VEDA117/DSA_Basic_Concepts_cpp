/*Merging
You are given two sorted arrays of lengths n and m respectively. Your task is to merge these two arrays into a single array such that the resulting array is also sorted.

Write a function or algorithm that performs this task and prints the resulting sorted array.

Input Format
The first line contains an integer n denoting the length of the first array.
The second line contains n space-separated integers representing the elements of the first array.
The third line contains an integer m denoting the length of the second array.
The fourth line contains m space-separated integers representing the elements of the second array.
Output Format
Print a single line containing the merged sorted array.
Constraints
The lengths of the arrays, n and m, are positive integers.
Elements of the arrays can be any integers.
Sample 1:
Input

3
1 3 5
3
2 4 6
  Output
1 2 3 4 5 6*/
#include <bits/stdc++.h>

using namespace std;


int meragesort(int arr1[], int arr2[], int n, int m,int ans[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < n && j < m) {
        ans[k]=0;
        if (arr1[i] <= arr2[j]) {
            ans[k] = arr1[i];
            i++;
            k++;
        } else {
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n) {
        ans[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m) {
        ans[k] = arr2[j];
        k++;
        j++;
    }
    return ans[k];
}

int main() {
    // your code goes here
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];

    }

    int ans[n + m];
    meragesort(arr1, arr2, n, m,ans);

    for (int i = 0; i < n + m; i++) {
        cout << ans[i] << " ";
    }

}
