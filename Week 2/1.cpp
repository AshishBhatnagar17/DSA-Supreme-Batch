#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //numbers
        for(int j=0;j<i+1;j++){
            cout<<i+j+1;
        }

        //reverse counting
        for(int j=0;j<i;j++){
            int start = 2*i;
            for(int j=start;j>=1;j--){
                cout<<start;
                start--;
            }
            
        }
        cout<<endl;
    }
    return 0;
}