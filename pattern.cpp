#include <iostream>
using namespace std;

int main()
{ 
	int n;
	cin>>n;

	int i=1;
	int count=1;
	int cons=0;

	while(i<=n){
		while(count<=(n-i)){
			cout <<" ";
			count=count+1;
		}
		while(count<=n){
			cout<<i+cons;
			cons=cons+1;
			count=count+1;
		}
		count=1;
		cons=0;
		cout << '\n';
		i=i+1;
	}
}