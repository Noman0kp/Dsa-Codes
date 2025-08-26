#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
 
    vector<int> temp;

    int left = low, right = mid+1;
    

    while(left <= mid && right <= high) {
        if(arr[left] < arr[right]) {

            temp.push_back(arr[left]);
            left++;           
        }
        
       

        else {
            temp.push_back(arr[right]);
             right++;
            }
            
        }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int countPairs(vector<int> &arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt = 0;
    for(int i = low; i<=mid; i++) {
        while(right <= high && arr[i] > 2*arr[right]) right++;
        
        cnt += (right - (mid+1));
    }
    return cnt;
}

int mS(vector<int> &arr, int low, int high) {
   
    int cnt = 0;
    if(low >= high) return cnt; 

    int mid = (low + high)/2;
    
   cnt += mS(arr, low, mid);
    
   cnt += mS(arr, mid+1, high);
    
   cnt += countPairs(arr, low, mid, high); // SINZE WE NEED TO CALCULATE OUR PAIRS BEFORE MERGING, WE CALL THIS FUNCTION BEFORE MERGE FUNCTION

    merge(arr, low, mid, high); 
   
   return cnt; 
}

int main() { 

    vector<int> arr;

    arr.push_back(40);
    arr.push_back(25);
    arr.push_back(19);
    arr.push_back(12);
    arr.push_back(9);
    arr.push_back(6);
    arr.push_back(2);

 
    for(auto it : arr) {

        cout<<it<<" ";

    }

    cout<<endl;

     cout<<endl;
    cout<<"No. of pairs/inversions: ";

   cout<< mS(arr, 0, arr.size()-1)<<endl;

   system("pause");
 
}