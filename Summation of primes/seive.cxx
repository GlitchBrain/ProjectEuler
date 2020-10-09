/*
 * untitled.cxx
 * 
 * Copyright 2020 Karan Sinha <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
#include <iostream>
#include <vector>
using namespace std;
#define MAX 1000001
long long sum=4;
vector<int>* sieve(){
	bool isprime[MAX];
	for(int i=0;i<MAX;i++){
		isprime[i]=true;
	}
	for(int i=2;i*i<MAX;i++){
		if(isprime[i]){
			for(int j=i*i;j<MAX;j+=i){
				isprime[j]=false;
			}
		}
	}
	vector<int>* prime= new vector<int>();
	prime->push_back(2);
	for(int i=3;i<MAX;i+=2){
		if(isprime[i]){
			prime->push_back(i);
		}
	}
	return prime;
}
void printPrime(long long l,long long r,vector<int>* & prime){
	bool isprime[r-l+l];

	for (int i = 0; i <= r-l; ++i)
	{
		isprime[i]=true;
	}
	for(int i=0;prime->at(i)*(long long)prime->at(i)<=r;i++){
		int currPrime=prime->at(i);
		//just smaller or equal value to l
		long long base=(l/(currPrime))*(currPrime);
		if(base<l){
			base=base+currPrime;
		}
		//mark all multiples within L to R as false
		for(long long j=base;j<=r;j+=currPrime){
			isprime[j-l]=false;
		}
		//there maybe a case where base is itself prime
		if(base==currPrime){
			isprime[base-l]=true;
		}
	}
	for(int i=0;i<=r-l;i++){
		if(isprime[i]==true){
			cout<<i+l<<endl;
			sum=sum+i+l;
		}
	}
}
int main()
{
	vector<int>* prime =sieve();
	int t;
	cin>>t;
	while(t--){
		long long l,r;
		cin>>l>>r;
		printPrime(l,r,prime);
	}
	cout<<sum;
	return 0;
}

