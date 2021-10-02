#include <iostream>
using namespace std;
int main(){
    int n,targ;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // cout starts here
    cout<<"enter the target number:";
    cin>> targ;
    for(int i=0; i<n; i++){
        // this is important change
        for(int j=i; j<n; j++){
            int sum = arr[i]+arr[j];
            if(sum==targ){
                cout<<arr[i]<<" "<<arr[j]<<" ";
            }
        }
    }
    return 0;
}
