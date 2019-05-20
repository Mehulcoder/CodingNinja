#include <iostream>
using namespace std;

int main()
{ 
	int s,e,w;
	cin >> s >> e >> w;
	int cel;

	while(s<=e){
		cel=(s-32)/(1.8);
		cout << s << " " << cel <<'\n';
		s=s+w;
	}
}