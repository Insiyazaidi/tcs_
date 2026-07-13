#include<bits/stdc++.h>
using namespace std;

bool issubsequencesum(vector<int>&arr , int target , int currsum , int idx){
    if(currsum == target) return true;
    if(idx == arr.size()) return false;
    bool c1 = issubsequencesum(arr , target , currsum+arr[idx] , idx+1);
     bool c2= issubsequencesum(arr , target , currsum , idx+1);
     return c1|| c2;

} 


int main(){
    int n ;
    cin >> n;
    int target ;
    cin >> target;
    vector<int>arr(n);
 for(int i = 0 ;i<n;i++){ // taking input in array 
            cin>>arr[i];
        }

        if(issubsequencesum(arr , target , 0 ,0)==true){
            cout << "yes";
            return 0;
        }
        else {
           cout << "no";
            return 0;  
        }

}