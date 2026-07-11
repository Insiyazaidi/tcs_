#include<bits/stdc++.h>
using namespace std;
int main(){
      int n ;
    cin>> n;
     char arr[n];
       for(int i =0;i<n;i++){  
       cin>>arr[i]; 
    }
char ans;
for(int i=0; i<n ;i++){
    ans = ans^arr[i];  // XOR only  works when the same element twice aarhe h aur ek hi element h jo ek baar aarha h 
}

cout << ans;

}