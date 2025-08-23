#include<iostream>
using namespace std;

void name(int arr[], int n) {
    
    long long int x, y; // REPEATING & MISSING NUMBERS

    long long int s = 0;
    long long int sn = (n*(n+1))/2;
    long long int s2 = 0;
    long long int s2n = (n*(n+1)*(2*n+1))/6;

    for(int i = 0; i<n; i++) {
        s += arr[i];
        s2 += arr[i]*arr[i]; 
    }

    long long int val1 = s - sn;   // THIS IS BASICALLY (x-y)

    long long int val2 = s2 - s2n; // THIS IS BASICALLY (x^2 - y^2)

    // BECAUSE (x+y)(x-y) = val2 & WE HAVE THE VALUE OF (x-y), HENCE WE WILL UPDATE val2 AS BELOW...

    val2 = val2/val1; // NOW val2 IS EQUAL TO (x+y) AND val1 IS EQUAL TO (x-y)...

    // AND ON ADDING val1 AND val2 AND DIVIDING IT BY 2, WE GET THE VALUE OF x i.e. THE REPEATING NUMBER...

    x = (val1 + val2)/2;

    y = x - val1;

    cout<<"Repeating no. is:  "<<x<<endl;
    cout<<"Missing no, is: "<<y<<endl;




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