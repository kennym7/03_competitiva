#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	long long n;
	cin>>n;
	
	int c=0;
	while(n>=5){
		n=n/5;
		c+=n;
	}
	
	cout<<c;
	cout<<"\n";
	
	return 0;
}

