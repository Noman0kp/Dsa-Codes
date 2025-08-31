#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

void name(int arr[], int n) {

    int el1 = INT_MAX; 
    int el2 = INT_MIN;
    int cnt1 = 0, cnt2 = 0;

    for(int i = 0; i<n; i++) {

        if(cnt1 == 0 && el2 != arr[i]) {
            el1 = arr[i];
            cnt1++;
        }

        else if(cnt2 == 0 & el1 != arr[i]) {
            el2 = arr[i];
            cnt2++;
        }

        else if(arr[i] == el1) {
            cnt1++;
        }

        else if(arr[i] == el2) {
            cnt2++;
        }
        else {
            cnt1--;
            cnt2--;
        }

    }

   // SO TILL NOW WE GET THE TWO MAJORITY ELEMENTS STORED IN el1 AND eL2...
   // NOW WE NEED TO CHECK OF THEY OCCUR FOR MORE THAN n/3 TIMES OR NOT.

   vector<int> ans; 

   int cnt01 = 0, cnt02 = 0;
   // WE WILL TRAVERSE THROUGH THE GIVEN ARRAY AND SAVE THE OCCURENCE OF el1 AND el2 IN cnt01 AND cnt02

   for(int i = 0; i<n; i++) {
    if(arr[i] == el1) cnt01++;

    else if(arr[i] == el2) cnt02++;
   }

   if(cnt01 > n/3) {
    ans.push_back(el1);
   }

   if(cnt02 > n/3) {
    ans.push_back(el2);
   }

   cout<<"The majority elements are: "<<endl;
   for(auto it : ans) {
    cout<<it<<" ";
   }
   cout<<endl;

}


int main() {

    int n;

    cout<<"Enter size: "<<endl;

    cin>>n;

    int arr[10];

    cout<<"Enter array: "<<endl;

    for(int i = 0; i<n; i++) {

        cin>>arr[i];

    }

    name(arr, n);

    system("pause");

}