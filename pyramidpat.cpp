#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    
    for(i=1; i<=n;i++){
        int j=1;
        int space=0;
        while(j<=(n-i)){
            cout<<" ";
            space++;
            j++;
        }
        while(j<=n){
            cout<<1+n-j;
            j++;
        }
        while(j>=n+1 && j<i+n){
            cout<<1+j-n;
            j++;
        }
        cout<<"\n";
    }
        
}

