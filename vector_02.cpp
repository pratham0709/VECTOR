#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v;
	v.push_back(1); // {1}
	v.push_back(8); // {1,8}
	v.push_back(3); // {1,8,3}
	v.push_back(6); // {1,8,3,6}
	v.push_back(9); // {1,8,3,6,9}
	cout<<*(v.end()-1)<<endl;
	v.insert(v.begin(),5); // {5,1,8,3,6,9}
	v.insert(v.begin()+2,6); // {1,8,6,3,6,9}
	v.insert(v.begin()+3,4); // {1,8,3,4,6,9}
	
	for(int i =0; i<v.size(); i++){
		cout<<v[i]<<" " ;
	}
}


