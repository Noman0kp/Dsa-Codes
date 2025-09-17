#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

void name(int arr[], int n) {

    int l = 0, h = n-1, ans = INT_MAX;

    //  SO BASICALLY WE WILL MAKE USE OF THE FACT THAT ONE HALF OF THE ARRAY IS SORTED. 

    while(l <= h) {
        int m = l + (h-l)/2;

        // IF THE SEARCH SPACE IS ALREADY SORTED, THEN THE MIN. ELEMENT WILL ALWAYS BE arr[l]...
        
        if(arr[l] <= arr[h]) {
            ans = min(ans, arr[l]);
            break;
        }



        /* IF LEFT HALF IS SORTED, THE FIRST ELEMENT i.e arr[l] WILL BE THE SMALLEST. SO TAKE IT AND ELEMINATE 
        THE WHOLE HALF BY (l = m+1) HENCE WE HAVE THE SMALLEST FROM SORTED PART...NOW GO FOR THE UNSORTED */  
        
        if(arr[l] <= arr[m]) {
            ans = min(arr[l], ans);
            l = m + 1;
        }

        /* SIMILARLY, IF RIGHT HALF IS SORTED, THE FIRST ELEMENT i.e arr[m] WILL BE THE SMALLEST. */

        else {
            ans  = min(arr[m], ans);
            h = m-1;
        }
           
    }

    cout<<"Minimum element: "<<ans<<endl;

}

int main() {
    int n;
    int arr[15];
    int k;

    cout<<"Enter size: "<<endl;
    cin>>n;

    cout<<"Enter array: "<<endl;
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    name(arr, n);

    system("pause");

}