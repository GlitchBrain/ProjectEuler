/*
 * main.cxx
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
//using namespace std;
unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
    return 1; 
    return n * factorial(n - 1); 
}
int main()
{
	long long multi;
	for(multi=(9*8*7*6*5*4);;multi++){
	/*for(int n=11;n<21;n++){
		if(multi%n==0){c = 1;}
		else{c=0;break;}}
	if(c==1){break;}}*/
	if (multi%11==0&&multi%13==0&&multi%14==0&&multi%15==0&&multi%16==0&&multi%17==0&&multi%18==0&&multi%19==0&&multi%12==0){
		break;}}
	std::cout<<multi<<std::endl;
	std::cout<<(9*8*7*6*5*4);
	return 0;
}

