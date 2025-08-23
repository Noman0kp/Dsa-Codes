 #include<iostream>

#include<vector>

#include<algorithm>

#include<utility>

using namespace std;



void name(vector<vector<int>> arr, int n) {

 

 sort(arr.begin(), arr.end());

 cout<<endl;

 cout<<"Here is our sorted seq: "<<endl;

 

 for(int i = 0; i<n; i++) {

        for(int j = 0; j<=1; j++) {

            cout<<arr[i][j]<<",";

        }

        cout<<" ";

    }

    // THE ABOVE LOOP IS ONLY FOR OUR UNDERSTANDING...THAT THE CODE IS RUNNING FINE. NO NEED OF IT IN INTERVIEW

    

    vector<vector<int>> ans;

    

    

    for(int i = 0; i<n; i++) {

        

        int start = arr[i][0];

        int end = arr[i][1];

        

        if(!ans.empty() && end <= ans.back()[1]) continue;

        // i.e. IF THE CURRENT INTERVAL IS ALREADY IN THE ans THEN MOVE i 

        

        for(int j = i+1; j<n; j++) {

            if(arr[j][0] <= end) {

                end = max(end, arr[j][1]); // UPDATING end IS IMP. AS IN THE LAST TWO ELEENT, WE HAVE (15,18) AND (16,17) SO MAX. OF 18 AND 17 IS TO BE TAKEN. AND THUS max() FXN. HELPS HERE

            }

            else break;

        }

        

        ans.push_back({start,end});

        

    }

    

    cout<<endl;

    cout<<endl;

    

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