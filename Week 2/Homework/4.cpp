#include<iostream>

using namespace std;

void checkPrime(int n){
    int cnt = 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt>0) cout<<"Not Prime";
    else cout<<"Prime";
}

int main(){
    int n;
    cin>>n;
    checkPrime(n);

    return 0;
}