#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k , j , m ,p;
    cin >> k ;
      cin >> j;
        cin >> m ;
        cin>>p;
        int bananamonk = m/k;
        int leftbanana=m%k;
           int peanutmonk = p/j;
        int leftpeanut=p%j;
        int totalmondone =  bananamonk +peanutmonk;
        if(leftbanana!=0 || leftpeanut !=0){
            totalmondone = totalmondone + 1;
        }
        cout << n-totalmondone ;
}