#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
vector<int> it;
void fib(int a, int b, int c){
	cout<<c<<endl;
	c=a+b;
	a=b;
	b=c;
	
	if (c<4000000){
		fib(a,b,c);}
	else{
		return;}
	if(c%2==0){
		it.push_back(c);}
	}
	
int main() 
{ 
    // Assign vector 
    int a=1; 
	int b=1;
	int c=0,d=0;
	fib(a,b,c);
	for(auto &k : it){
	d=d+k;
	cout<<k<<endl;
	}
	//for (long long i = 0; i < a.size(); i++) 
    //    c=c+a[i]; 
	cout<<d<<endl;
	return 0;
	}
	
	
