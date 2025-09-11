#include<iostream>
using namespace std;

int name(int arr[], int l, int h, int k) {

    if(l > h) return -1;

    int m = (l+h)/2;
    
    if(arr[m] == k) return m;

    else if(arr[m] > k) return name(arr, l, m-1, k);

    else return name(arr, m+1, h, k);

    /* WE RETURN A VALUE EVERY TIME WE CALL A FXN BECAUSE OUR FXN HAS A RETURN TYPE OF 'int' HENCE 
    THE COMPILER EXPECTS EVERY PATH TO RETURN AN int. SECONDLY, ASSUME RECURSION AS A CHAIN OF 
    FUNCTIONS, LETS SAY THE ANS IS FOUND DEEP INSIDE RECURSION (LET'S SAY 5 LEVELS DOWN) 
    SO THIS ANS MUST BE BUBBLED BACK UP TO THE VERY FIRST CALL. WITHOUT RETURN, THE RESULT IS 
    DROPPED AT THAT LEVEL AND NEVER REACHES THE ORIGINAL CALLER */ 


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

    int k;
    cout<<"Enter target: "<<endl;
    cin>>k;
    
    cout<<"Index at which target appears is: ";
    cout<<name(arr, 0, n-1, k)<<endl;

    system("pause");
}