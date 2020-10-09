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

int main(int argc, char **argv)
{
	
	for(int a=1;a<1000;a++){

		for(int b=1;b<1000;b++){
			for(int c=1;c<1000;c++){
				//std::cout<<(a*a)+(b*b)<<std::endl;
				//std::cout<<(c*c);		
				if((a*a)+(b*b)==(c*c)){
					if(a+b+c == 1000){
						std::cout<<a<<" "<<b<<" "<<c<<" ";
						std::cout<<a*b*c;
						return 0;}}}}}
	return 0;
}

