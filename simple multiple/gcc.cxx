/*
 * gcc.cxx
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
#include<stdio.h>
#include<bits/stdc++.h>

int gcd(int m, int n)
{
    int t;
    while(n!=0)
    {
        t=n;
        n=m%n;
        m=t;
    }
    return m;
}

int main()
{
    int i,n;
    int long long lcm=1;
    printf("Enter the range:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        lcm = (i*lcm)/gcd(i,lcm);
    }
    printf("smallest multiple : %uL",lcm);

}

