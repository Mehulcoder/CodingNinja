#include <iostream>
using namespace std;

int main()
{ 
	int n;
	cin>>n;

	int a=2;
	int sum=0;

	while(a<=n){
		sum=sum+a;
		a=a+2;
	}

	cout << sum << '\n';

}