#include<iostream>
using namespace std;

int name(int arr[], int n, int k) {

    int l = 0, h = n-1, ans  = n;

    while(l<=h) {
        int m = l + (h - l)/2 ;

        if(arr[m] >= k) {
            ans = m;
            h = m-1;
        }

        else { 
            l = m+1;
        }
    }
    return ans;

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
    
    cout<<"Index at which k could be placed: ";
    cout<<name(arr, n, k)<<endl;

    system("pause");

}