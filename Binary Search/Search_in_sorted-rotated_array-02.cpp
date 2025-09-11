#include<iostream>
using namespace std;

void name(int arr[], int n, int k) {

    int l = 0, h = n-1;
    bool exist = 0;

    while(l <= h) {

        int m = (l+h)/2;

        if(arr[m] == k) {
            exist = 1;
        }

        if(arr[l] == arr[m] && arr[m] == arr[h]) {

            l++;
            h--;

        }

        // LEFT SORTED : 

        if(arr[l] <= arr[m]) {

            if(arr[l] <= k && k <= arr[m]) {
                h = m-1;
            }

            else {
                l = m+1;
            }
        }


        // RIGHT SORTED : 

        if(arr[m] <= arr[h]) {

            if(arr[m] <= k && k <= arr[h]) {
                l = m+1;
            }

            else {
                h = m-1;
            }
        }
        
    }

    if(exist) {
        cout<<"Yes!! Target "<<k<<" exists in the given array"<<endl;
    }
    else {
        cout<<"No!! Target "<<k<<" does not exists in the given array"<<endl;
    }

}

int main() {

    int n;
    int arr[15];
    int k;

    cout<<"Enter size: "<<endl;
    cin>>n;

    cout<<"Enter array: "<<endl;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<"Enter target: "<<endl;
    cin>>k;

    name(arr, n, k);

    system("pause");

}