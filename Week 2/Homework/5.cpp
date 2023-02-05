#include<iostream>

using namespace std;

bool checkPrime(int n){
    int cnt = 0;
    if(n < 1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            cnt++;
            break;
        }
    }
    if(cnt > 0){
        return false;
    }
    else{
        return true;
    }
}
void printPrime(int n){
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    printPrime(n);
    return 0;
}