#include<iostream>
using namespace std;
 
int name(int arr[], int n, int k) {

    int l = 0, h = n-1, ans = -1;

    while(l <= h) {
        int m = (l+h)/2;

        if(arr[m] == k) {
            return m;
        }

        // RIGHT HALF SORTED: 

        if(arr[m] <= arr[h]) {

            if(k >= arr[m] && k <= arr[h]) {
                l = m+1;

            }

            else {
                h = m-1;
            }
        }

        // LEFT HALF SORTED: 

        else {
            if(k >= arr[l] && k <= arr[m]) {
                h = m-1;
            }

        else {
            l = m+1;

        }

        }
    }

    return -1;

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
    
    cout<<"Index at which target appears is: "<<name(arr, n, k)<<endl;

    system("pause");

}