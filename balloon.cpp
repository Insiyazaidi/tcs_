#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>> n;
     char arr[n];
unordered_map<char , int>mp;
    for(int i =0;i<n;i++){
          cin>> arr[i];
    }

for(int i =0 ; i<n;i++){
    mp[arr[i]]++;
}
for(int i =0 ; i<n;i++){
    if(mp[arr[i]]%2!=0){
        cout << arr[i];
        return 0;
    }
}

cout << "All are even";
return 0;
}