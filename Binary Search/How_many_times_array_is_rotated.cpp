#include<iostream>
#include<Climits>
using namespace std;

void name(int arr[], int n) {

    int l  = 0, h = n-1, mini = INT_MAX;
    int ind = -1;
    while(l <= h) {
        int m = l + (h-l)/2;

        if(arr[l] <= arr[h]) {
            if(arr[l] < mini) {
                ind = l;
                break;
            }
        }

        if(arr[l] <= arr[m]) {
            if(arr[l] < mini) {
                mini = arr[l];
                ind = l;
            }
             l = m+1;
        }

        else {
            if(arr[m] < mini) {
                mini = arr[m];
                ind = m;
            }
             h = m-1;
        }
    }

    cout<<"Array has been rotated "<<ind<<" times."<<endl;

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

    name(arr, n);

    system("pause");
}