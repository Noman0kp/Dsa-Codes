#include<iostream>
using namespace std;

void name(int arr[], int n, int k) {

    int l = 0, h = n-1;

    while(l <= h) {
        int m = l + (h - l)/2;

        if(arr[m] == k) {
            cout<<"Yes"<<endl;
        }

        if(arr[l] == arr[m] && arr[m] == arr[h]) {
            l++; h--;       
        }

        if(arr[m] <= arr[h]) {
            if(arr[m] < k && k <= arr[h]) {
                l = m+1;
            }
            else h = m-1;
        }

        if(arr[l] <= arr[m]) {
            if(arr[l] <= k && k < arr[m]) {
                h = m-1;
            }
            else {
                l = m+1;
            }
        }



    }
    
}



int main() {
    int n;
    int arr[15];
    cout<<"Enter size: "<<endl;
    cin>>n;

    cout<<"Enter array: "<<endl;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter target: "<<endl;
    cin>>k;
    
    cout<<"Index at which target appears is: ";
    name(arr, n, k);

    system("pause");
}