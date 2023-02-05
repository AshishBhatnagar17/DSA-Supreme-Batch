#include<iostream>

using namespace std;

float area(float r){
    float ans = 3.14 * r *r;
    return ans;
}

int main(){
    float r;
    cin>>r;
    float ans = area(r);
    cout<<ans;
    return 0;
}