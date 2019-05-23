#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int k=0;
    int l=0;
    
    int i=1;
    for(i=1; i<=n;i++){
        int k=0;
        int l=0;
        int j=1;
        while(j>=1 && j<=n-i+1){
            
            cout<<1+k;
            k++;
            j++;
        }
        while(j>=n-i+2 && j<=n+i-1){
            cout<<"*";
            j++;
        }
        while(j>=n+i && j<=2*n){
            
            cout<<n-(i-1)-l;
            l++;
            j++;
        }
        cout<<"\n";
    }

}


