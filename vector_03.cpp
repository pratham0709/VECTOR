#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v(3);
	v[0] = 5;
	v[1] = 6;
	v[2] = 3;
	v.push_back(7);
	
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
		
	}
}

/* OUTPUT.....
5 6 3 7
--------------------------------
Process exited after 0.09547 seconds with return value 0
Press any key to continue . . .
*/
