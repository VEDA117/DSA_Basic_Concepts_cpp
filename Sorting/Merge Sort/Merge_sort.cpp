/*Complete the implementation
Given a mergeSort function that accepts an array as a parameter, sort the array using the Merge sort algorithm.

Sample 1:
Input
Output
8
6 5 3 1 8 7 2 4
1 2 3 4 5 6 7 8 */
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
