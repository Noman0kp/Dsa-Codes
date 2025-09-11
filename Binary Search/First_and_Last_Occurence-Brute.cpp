#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
void name(int arr[], int n, int k) {

    int f = -1, l = -1;
    for(int i = 0; i<n; i++) {
        if(arr[i] == k) {

            if(f == -1) f = i;
            l = i;
        }
    }

    pair<int, int> ans = {f, l};
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