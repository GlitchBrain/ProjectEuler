#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Assign vector 
    vector<int> a; 
	int b=0;
	//int c=0;
	for(int i=1;i<1000;i++){
	if (i%3==0){
	a.push_back(i);}
	else if(i%5==0){
	a.push_back(i);}
	}
	for(auto &k : a){
	b=b+k;
	//cout<<k<<endl;
	}
	//for (long long i = 0; i < a.size(); i++) 
    //    c=c+a[i]; 
	cout<<b<<endl;
	return 0;
	}
	
