#include<iostream>

using namespace std;

void fact(int n){
    int ans = 1;
    for(int i=n;i>=1;i--)
    {
        ans = ans * i;
    }
    cout<<ans;
}

int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}