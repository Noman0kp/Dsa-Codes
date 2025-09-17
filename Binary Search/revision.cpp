#include<iostream>
using namespace std;

void name(int arr[], int n, int k) {

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