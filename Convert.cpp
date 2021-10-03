
#include<iostream>
#include<string>
#include<algorithm>
//Kiit Univ
using namespace std;

int main(){
    string str = "akitrajbhaiyaa";

    //convert into uppercase

    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -=32;
    }

    cout << str <<endl;
    //convert into Lowercase

    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] +=32;
    }

    cout << str <<endl;

    transform(str.begin(),str.end(),str.begin(),::toupper);

    cout <<str <<endl;

    transform(str.begin(),str.end(),str.begin(),::tolower);

    cout <<str <<endl;
    return 0;
}
