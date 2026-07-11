#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n; // taking input
  //  int arr[n]; // defining array
vector<int>arr;

for(int i =0; i<n ;i++){
    int numb ;
    cin>>numb;
    arr.push_back(numb);
}

    // for(int i = 0;i<n;i++){
    //    cin>>arr[i];
    // }
    for(int i = 0 ; i<n ;i++){
        cout << arr[i] << " ";
    }

    return 0;
}