#include<iostream>
using namespace std;

void name(int arr[], int n) {
    
    int repeating = -1, missing = -1;
    int m = n+1;
    int hash_arr[m] = {0};

    for(int i = 0; i<n; i++){
      hash_arr[arr[i]]++;
    }

    for(int i = 1; i<m; i++){
        if(hash_arr[i] == 2) {
            repeating = i;
        }

        else if(hash_arr[i] == 0) {
            missing = i;
        }
        if(missing != -1 && repeating != -1) {
            break;
        }
    }

    cout<<"Repeating: "<<repeating<<endl;
    cout<<"Missing: "<<missing<<endl;

}

int main() {
     int n;
    cout<<"Enter size: "<<endl;
    cin>>n;
    
    int arr[15];
    cout<<"Enter array: "<<endl;
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }

    name(arr, n);

    system("pause");
}