#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void name(int arr[], int n) {

set<vector<long long int>> st;

for(int i = 0; i<n; i++) {
    for(int j = i+1; j<n; j++) {
      
        set<long long int> hSet;

        for(int k = j+1; k<n; k++) {
            long long int sum = arr[i] + arr[j];
            sum += arr[k];

            long long int fourth = -sum;

            if(hSet.find(fourth) != hSet.end()) {
                vector<long long int> temp {arr[i], arr[j], arr[k], fourth};

                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hSet.insert(arr[k]);
        }
    }
}

vector<vector<long long int>> ans (st.begin(), st.end()); 

cout<<"Required quads. are: "<<endl;
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