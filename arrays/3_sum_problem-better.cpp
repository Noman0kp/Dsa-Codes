#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void name(int arr[], int n) {

set<vector<int>> st;

for(int i = 0; i<n; i++) {

    set<int> hSet;

    for(int j = i+1; j<n; j++) {

        int need = -(arr[i]+arr[j]);

        if(hSet.find(need) != hSet.end()) {
            vector<int> v = {arr[i], arr[j], need};
            sort(v.begin(), v.end());
            st.insert(v);
        }
        hSet.insert(arr[j]);
    }
    
}

vector<vector<int>> ans (st.begin(), st.end());

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

    

    name(arr, n);

    system("pause");


}