#include <iostream>
#include <bits/stdc++.h> 
#include <chrono> 
using namespace std; 

int main()
{
	 
	int n;
	cin>>n;

	auto start = chrono::high_resolution_clock::now();
	
	int i=1;
	int star=0;
	int count=0;

	while(i<=n){
		count=n-i;
		while(count>0){
			cout <<" "  ;
			count=count-1;
		}
		count=n-i;
		star=2*i-1;
		while(star>0){
			cout << "*" ;
			star=star-1;
		}
		count=n-i;
		while(count>0){
			cout << " " ;
			count=count-1;

		}
		i=i+1;
		cout << '\n';
		star=0;
		count=0;
	}
	auto end = chrono::high_resolution_clock::now();
	double time_taken =  
      chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
  
    time_taken *= 1e-9; 
  
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(9); 
    cout << " sec" << endl; 
    return 0; 
}