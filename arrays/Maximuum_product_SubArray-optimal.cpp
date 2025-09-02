#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void name(int arr[], int n) {
    
    int maxi = INT_MIN;
    int pre = 1, suf = 1;
    
    for(int i = 0; i<n; i++) {
       
        if(pre == 0) pre = 1;  
        if(suf == 0) suf = 1;
         /* i.e. AGR KAHI BEECH ME ZERO SE MULTIPLY HO JAYE 
            TO START A NEW SUB-ARRAY  */ 

        pre *= arr[i];
        suf *= arr[i];

        maxi = max(maxi, max(pre,suf));
}
    cout<<"The maximum produt is: ";
    cout<<maxi<<endl;

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

    name(arr, n);

    system("pause");
}