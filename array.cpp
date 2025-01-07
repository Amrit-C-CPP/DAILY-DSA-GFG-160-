#include<iostream>
using namespace std;
int max(int arr[],int n){
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    return ans;
}
int min(int arr[],int n){
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<ans)
        ans=arr[i];
    }
    return ans;
}
int max1max2(int arr[], int n){
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>ans)
         ans=arr[i];   
     }cout<<ans<<endl;
      int max2=arr[0];
      for(int i=0;i<n;i++) {
        if(arr[i]>max2 && arr[i]<ans)
        max2=arr[i];
      }
      return max2;
}

int main(){
    int n;
    int arr[]={2,5,3,6,76,455};
    int l=sizeof(arr)/sizeof(arr[0]);
    cout<<"max2 number is :"<<max1max2(arr,l);
    return 0;
}