#include <iostream>
#include <bits/stdc++.h> 
#include <chrono> 
#include <cmath> 
using namespace std; 

int main()
{
	 
	//Take in put here
	int basic;
	char grade;

	cin>>basic >> grade;


	auto start = chrono::high_resolution_clock::now();
	
	double hra;
	double da;
	double pf;
	double allow;
	double salary;
	hra=.2*basic;
	da=.5*basic;
	pf=.11*basic;

	if (grade=='A')
	{
		allow=1700.0;
	}else{
		if (grade=='B')
		{
			allow=1500.0;
		}else{
			allow=1300.0;
		}
	}

	salary=basic+hra+da+allow-pf;

	cout << salary << '\n';
	cout << round(salary) << '\n';

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