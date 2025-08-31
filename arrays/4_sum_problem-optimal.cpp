#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void name(int arr[], int n, int target) {

    sort(arr, arr+n);
    vector<vector<int>> ans;

    for(int i = 0; i<n; i++) {
        if(i>0 && arr[i] == arr[i-1]) continue;

        for(int j = i+1; j<n; j++) {
            if(j>i+1 && arr[j] == arr[j-1]) continue;

        int k = j+1, l = n-1;

        while(k<l) {

        long long int sum = arr[i] + arr[j];
        sum += arr[k];
        sum += arr[l]; 

            if(sum == target) {
                vector<int> v = {arr[i], arr[j], arr[k], arr[l]};
                
                ans.push_back(v);

                k++; l--;

                while(arr[k] == arr[k-1]) k++;
                while(arr[l] == arr[l+1]) l--;
            }

            if(sum > target) l--;
            else k++;

        }
        }
    }

    for(auto it : ans) {
        for(auto it1 : it) {
            cout<<it1<<" ";
        }
        cout<<endl;
    }


}

int main() {

    

    int arr[15];

    int n;

    cout<<"Enter size: "<<endl;

    cin>>n;

    

    cout<<"Enter array: "<<endl;

    for(int i = 0; i<n; i++) {

        cin>>arr[i];

    }
    
    int target;
    cout<<"Enter target: "<<endl;
    cin>>target;

    name(arr, n, target);

    system("pause");


}