 #include<bits/stdc++.h>
 using namespace std;

 int countoperation(int p , int q , int r){
if(p==q && q==r ){  // means theeno  equal hh 
    return 0; 
}
vector<int>arr={p,q,r};
sort(arr.begin() , arr.end());
int count =0;
while(true){
  arr[0]+=1;  
    arr[1]+=1;  
      arr[2]-=1; 
      count++;
      if(arr[0]==arr[1] && arr[1]==arr[2]){
        return count;
      } 

      sort(arr.begin() , arr.end());

      if  (   (arr[0] == arr[1] && arr[1]+1 == arr[2])   ||  (arr[1] ==arr[2]  && arr[0]+1 == arr[2] )   ){
        return -1;
      }

}
 }

 int main(){
    int t ;
    cin>>t;
    while(t!=0){
        int p,q,r;
        cin>>p,q,r;
        t--;
   int ans =   countoperation(p ,q,r);
   cout << ans;
    }


 }