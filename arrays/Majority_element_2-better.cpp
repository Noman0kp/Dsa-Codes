#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

void name(int arr[], int n) {

map<int,int> hMap; // THIS MAP WILL STORE ELEMENTS AND THEIR OCCURENCES

vector<int> ans;

int nm = n/3 + 1;   /*SINCE WE NEED MINIMUM OCCURENCE OF MORE THAN n/3 TIMES,
                   'nm' IS THE MINIMUM OCCURENCE AN ELEMENT MUST HAVE TO BE THE ANSWER...
                   */ 


for(int i = 0; i<n; i++) {
    hMap[arr[i]] ++;

    if(hMap[arr[i]] == nm) {
        ans.push_back(arr[i]);
    }
    /* JESE HI KISI ELEMENT KI OCCURENCE 'nm' KE EQUAL HOGI...WE ADD IT IN THE ANSWER*/

    if(ans.size() == 2) break;
}

// WHY WE DIDN'T USE '>n/3' CONDITION INSTEAD OF '> mm'??

/*BECAUSE > n/3 ME AGR KOI ELEMENT n/3 +1 SE ZYADA BAR APPEAR HUA 
TO WO BHI LIST ME ADD KR DIYA JAYEGA AS WE ARE ITERATING AND ADDING IN THE LIST AT THE SAME TIME
... LET n = 8, THEN N/3 = 2, SO IF THERE IS AN ELEMENT THAT APPEARS FOR 4 TIMES...
THEN THEN IT WILL BE ADDED TO ANSWER TWICE. SINCE, >n/3 = 3 AS WELL AS 4

*/ 

cout<<"Required numbers are: "<<endl;

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