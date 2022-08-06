#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v;
	v.push_back(1); // {1}
	v.push_back(8); // {1,8}
	v.push_back(3); // {1,8,3}
	cout<<v[1]<<endl;
	int n = v.size();
	cout<<n<<endl;
	v[1] = 6; // {1,6,3}
	cout<<v[1]<<endl;
}


/* OUTPUT.....
8
3
6
--------------------------------
Process exited after 0.02551 seconds with return value 0
Press any key to continue . . .

*/
