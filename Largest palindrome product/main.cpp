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
#include<bits/stdc++.h>
using namespace std;

bool pal(int n){
	int rev=0;
	int m = n;
	while(n!=0){
		rev=rev*10+n%10;
		n /= 10;
	}
	if (rev == m){
		//cout<<m<<endl;
		return true;
	}else{
		return false;
		}
}

int main()
{
	vector<int> a;
	//int temp=0;
	for (int n=999;n>100;n--){
		for(int k=999;k>100;k--){
			if(pal(n*k)==true){
				//cout<<n<<" "<<k;
				a.push_back(n*k);
				break;
			}
		}
	}
    sort(a.begin(), a.end(), greater<int>()); 
	//show(a);
	cout<<a[0];
	return 0;
}

