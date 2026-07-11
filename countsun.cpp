 #include<bits/stdc++.h>
 using namespace std;
 int main(){
string day ;  // CHECK IF N INCLUDES CURRENT DAY OR FROM NEXT DAY
cin>>day;
int n;
cin>>n;
int ans =0 ;
unordered_map<string , int>mp;
mp["mon"] = 6;  // how many days we have to wait for next sunday 
mp["tue"] = 5;
mp["wed"] = 4;
mp["thur"] = 3;
mp["fri"] = 2;
mp["sat"] = 1;
mp["sun"] = 0;
   // eg - thur is the day
if(n>=mp[day]){  // 
 ans = ans+1;
 int leftdays = n-mp[day];
 ans = ans+(leftdays/7);
}

cout << ans;

 }


 //first occurrence kab milegi?

 //  Uske baad fixed interval (7) pe kitni aur occurrences aayengi?