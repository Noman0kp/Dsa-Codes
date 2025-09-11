#include<iostream>
using namespace std;

int name(int arr[], int n, int k) {

    int l = 0, h = n-1, ans  = n;

    while(l<=h) {
        int m = l + (h - l)/2 ;

        if(arr[m] > k) {
            ans = m;
            h = m-1;
        }
        /* IT IS JUST A SLIGHT DIFFERENCE FROM LOWER-BOUND. JUST A SIGN CHANGE.
        LIKE, IF a[mid]>K THEN YOU CAN BE MY PROBABLE ANSWER SO STORE IT IN ans AND 
        CHECK OUT THE LEFT HALF FOR SMALLER INDEX. OR ELSE IF YOU ARE SMALLER OR EQUAL TO THE k, 
        YOU CANT BE THE ANSWER SO GO TO THE RIGHT HALF. SINCE WE NEED AN ELEMENT WHICH IS 
        GREATER THAN k */

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
    
    cout<<"Index at which lower-bound appears is: ";
    cout<<name(arr, n, k)<<endl;

    system("pause");

}