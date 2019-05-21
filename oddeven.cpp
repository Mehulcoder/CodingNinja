#include <iostream>
#include <bits/stdc++.h> 
#include <chrono> 
#include <cmath> 
using namespace std; 

int main()
{
	 
	//Take in put here
	int num,rem,odd=0,even=0,digit,input;
	cin>>num;
	input=num;
	num=abs(num);


	auto start = chrono::high_resolution_clock::now();

	while(num>0){
		digit = num%10;
		num=num/10;
		rem=digit%2;
		if(rem != 0){
			odd=odd+digit;
		}else{
			even=even+digit;
		}
	}

	cout <<even<<" "<<odd  << '\n';
	// Write your code here
	
	auto end = chrono::high_resolution_clock::now();
	double time_taken =  
      chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
  
    time_taken *= 1e-9; 
  
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(9); 
    cout << " sec" << endl; 
    return 0; 
}