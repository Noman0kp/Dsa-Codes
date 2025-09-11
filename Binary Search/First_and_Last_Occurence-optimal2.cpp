#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int F_occ(int arr[], int n, int k) {

    int l = 0, h = n-1, F = -1;
    
    while(l <= h) {
        int m = (l+h)/2;

        if(arr[m] == k) {
            F = m;
            h = m-1;
        }

        else if(arr[m] > k) {
            h = m-1;
        }

        else {
            l = m+1;
        }
    } 
    return F;

}

int L_occ(int arr[], int n, int k) {

    int l = 0, h = n-1, L = -1;
    
    while(l <= h) {
        int m = (l+h)/2;

        if(arr[m] == k) {
            L = m;
            l = m+1;
        }

        else if(arr[m] < k) {
            l = m+1;
        }

        else {
            h = m-1;
        }
    } 
    return L;

}




void name(int arr[], int n, int k) {

    pair<int,int> ans;

    int f = F_occ(arr, n , k);

    if(f == -1) {
        ans = {-1, -1};

        cout<<ans.first<<", "<<ans.second<<endl;
        return;

    /* IF WE GET THE FIRST OCC. AS -1, MEANS THE ELEMENT IS NOT PRESENT IN THE ARRAY. 
    HENCE RETURN {-1,-1}, NO NEED TO RUN THE L_occ() FXN. IT WILL SAVE US SOME T.C.
    */

    }
    int l = L_occ(arr, n, k);
    
    ans = {f, l};
    cout<<ans.first<<", "<<ans.second<<endl;


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
    
    cout<<"Index at which lower and upper bound appears is: ";
    name(arr, n, k);

    system("pause");

}