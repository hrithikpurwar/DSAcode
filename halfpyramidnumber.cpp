#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        //this is important change
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}
