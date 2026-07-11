 #include<bits/stdc++.h>
 using namespace std;
 int main(){
int firstno;
int lastno;
cin>>firstno;
cin>>lastno;
if(firstno>=lastno || firstno<=0 || lastno>=1000 ){
    cout << "invalid" ;  // make sure u copy the exact string with exact spaces as per the given ques 
return 0;
}
int n = lastno-firstno+1;
int sum = n*(firstno+lastno)/2;
cout << sum;
 }