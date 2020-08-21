#include<iostream>
#include <cmath>
using namespace std;

void checkForPalindrome(string s){
    int size=s.length();
    float half;
    int flage=0;
    half=ceil((float)size/2);
    for(int i=0;i<half;i++){
        if(s[i]==s[size-i-1]){
            flage=1;
        }
        else{
            flage=0;
            break;
        }
    }
    if(flage==1){
        cout<<s<<" "<<"String is Palrindrome";
    }
    else{
        cout<<s<<" "<<"String is Not Palrindrome";
    }
}
int main(){
    string s="abcddcba";

    checkForPalindrome(s);
    return 0;

}

