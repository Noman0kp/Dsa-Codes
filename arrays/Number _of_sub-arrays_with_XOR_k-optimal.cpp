#include<iostream>
#include<map>
#include<algorithm> 
using namespace std;

void name(int arr[], int n, int k) {
map<int,int> mp;

mp[0] = 1; // SEE DRY RUN IN COPY FOR THIS EXPLANATION

int xr = 0;

int cnt = 0;

for(int i = 0; i<n; i++) {

xr = xr^arr[i];

cnt += mp[xr^k];

mp[xr] ++; 

}

cout<<"No. of such Sub-arrays are: ";
cout<<cnt<<endl;


}

    
int main() {

    int n;
    cout<<"Enter size: "<<endl;
    cin>>n;

    int k;
    cout<<"Enter k: "<<endl;
    cin>>k;

    int arr[15];
    cout<<"Enter array: "<<endl;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
   

    name(arr, n, k);

    system("pause");
 
}