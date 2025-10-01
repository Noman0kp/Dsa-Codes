#include<iostream>
using namespace std;

int name(int arr[], int n) {

    if(n==1) return arr[0]; // IF THE ARRAY HAS ONLY ONE ELEMENT...

    // CHECKING FOR FIRST AND LST ELEMENT SEPARATELY...
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];

    // FIRST AND LAST ELEMENT NOT ADDED IN THE SEARCH SPACE SINCE THEY ARE ALREADY CHECKED ABOVE
    int l = 1, h = n-2;

    while(l <= h) {
        int m = l + (h-l)/2;

        if(arr[m-1] != arr[m] && arr[m] != arr[m+1]) return arr[m]; 

        if(m%2 == 0 && arr[m] == arr[m+1] || m%2 == 1 && arr[m] == arr[m-1]) {
            l = m+1;
        }

        else {
            h = m-1;
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

    cout<<"Single element is: "<<name(arr, n)<<endl;
    

    system("pause");
}