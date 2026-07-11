 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int row ;
    cin>>row;
    int col;
    cin>>col;
    int arr[row][col];
    int maxone =0;
int ans = 0;
int maxrow = -1;
    for(int i =0; i<row;i++){
         maxone =0;
        for(int j = 0; j<col;j++){
            cin>>arr[i][j]; // taking input row1 fill hogi then row2 
        if(arr[i][j]==1){
            maxone++;
           }    
        }
        if(maxone>ans){
    ans = maxone;
maxrow = i+1;
}
    }

cout << maxrow;
  
 }