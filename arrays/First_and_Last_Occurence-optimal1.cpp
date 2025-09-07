#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

void name(int arr[], int n, int k) {

    pair<int,int> ans;

    int f = lower_bound(arr, arr+n, k) - arr;
    int l = upper_bound(arr, arr+n, k) - arr - 1;

    ans = {f,l};
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
    
    cout<<"Index at which lower-bound appears is: ";
    name(arr, n, k);

    system("pause");

}