#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int cnt = 0; // WE MADE A GLOBAL VARIABLE AND CALCULATED ITS VALUE IN THE FUNCTION. BUT IT'S NOT AN GOOD IDEA TO USE A GLOBAL VARIABLE IN AN INTERVIEW. HENCE WE WILL MAKE A FEW TWEAKS IN THE CODE. 
int merge(vector<int> &arr, int low, int mid, int high) {
 
    vector<int> temp;

    int left = low, right = mid+1;
    
    int cnt = 0; // WE MAKE A SIMPLE CNT VBL. IN THE MERGE FUNCTION 

    while(left <= mid && right <= high) {
        if(arr[left] < arr[right]) {

            temp.push_back(arr[left]);
            left++;           
        }
        
        // BELOW, LEFT > RIGHT....WHICH MEANS PAIR COULD BE FORMED. HENCE WE UPDATE COUNT

        else {
            temp.push_back(arr[right]);
            
              cnt += (mid - left + 1); // WHENEVER IT MERGES TWO ARRAYS, IT UPDATES CNT AND RETURNS HOW MANY IT GOT. 
              
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
    
    return cnt;

}

int mS(vector<int> &arr, int low, int high) {
    int cnt = 0;
    
    if(low >= high) return cnt; // WHEN THE POINTERS ARE OUT OF SCOPE, WE RETURN THE FINAL ANSWER i.e. CNT

    int mid = (low + high)/2;
    
    // BELOW WE CALL THE DIVIDE FUNC. FOR BOTH LEFT AND RIGHT SIDE. AND FOR EACH OF THEM, MERGE WILL BE CALLED. 

    cnt += mS(arr, low, mid);
    
    
   cnt += mS(arr, mid+1, high);

   cnt += merge(arr, low, mid, high); // SINCE MERGE FUNC. RETURNS CNT, WE STORE IT IN A VARIABLE.
   
   return cnt; 
}

int main() { 

    vector<int> arr;

    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);

 
    for(auto it : arr) {

        cout<<it<<" ";

    }

    cout<<endl;

     cout<<endl;
    cout<<"No. of pairs/inversions: ";

   cout<< mS(arr, 0, arr.size()-1);
    cout<<endl;
   
    system("pause");
  
   

}