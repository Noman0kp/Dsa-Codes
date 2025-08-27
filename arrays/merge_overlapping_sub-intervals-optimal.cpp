#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void name(vector<vector<int>> arr, int n) {

    vector<vector<int>> ans;

    for(int i = 0; i<n; i++) {
        if(ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        }

        else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }

    cout<<endl;
    cout<<"Final intervals: "<<endl;
    for(int i = 0; i<ans.size(); i++) {
        for(int j = 0; j<=1; j++) {
            cout<<ans[i][j]<<",";
        }
        cout<<" ";
    }

}

int main() {
     int n;

    cout<<"Enter size: "<<endl;

    cin>>n;

    

    vector<vector<int>> arr(n, vector<int>(2)); // IF WE WANT TO ADD VALUES THROUGH LOOP, WE NEED TO PRE-SIZE THE VECTOR AS ABOEVE. IF WE DON'T DO THIS, THEN WE NEED TO ADD THE VALUES MANUALLY

    

    cout<<"Enter array: "<<endl;

    

    for(int i = 0; i<n; i++) {

        for(int j = 0; j<=1; j++) {

            cin>>arr[i][j];

        }

    }

    

    name(arr, n);
}