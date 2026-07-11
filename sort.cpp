#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n;i++){
        cin>>arr[i];
    }

//sort(arr , arr+n);
// for(int i =0 ; i<n ; i++){
//     for(int j =  i+1; j<n;j++ ){
//         if(arr[i]>arr[j]){
//             swap(arr[i] , arr[j]);
//         }
//     }
// }

//  Dutch National Flag Algorithm

int low=0;
int mid = 0;
int high = n-1;
while(mid<=high){
    if(arr[mid] == 0){
     swap(arr[low] , arr[mid]);
     low++;
    }
    else if(arr[mid]==1){
mid++;
    }
    else{
 swap(arr[mid] , arr[high]);
 high--;
    }
}




  for(int i =0 ; i<n;i++){
        cout<< arr[i]<< " ";
    }

}