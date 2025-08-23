#include<iostream>
using namespace std;

void name(int arr[], int n) {
    
}

int main() {
     int n;
    cout<<"Enter size: "<<endl;
    cin>>n;
    
    int arr[15];
    cout<<"Enter array: "<<endl;
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }

    name(arr, n);

    system("pause");
}