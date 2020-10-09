/*
 * c.c
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


#include <stdio.h>
#include <bits/stdc++.h>


int isPrime(int num){
    int sq = sqrt(num);
    
    for (int i = 2; i <= sq; i++){
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main(void){
    int counter = 1;
    int nextPrime = 2;
    for (int i = 2; counter != 10001; i++){
        if (i % 2 == 0)  //pass even numbers. For 2, counter starts as 1.
            continue;
        if (isPrime(i)){
            nextPrime = i;
            counter++;
        }
    }
    printf("10001th prime %d\n", nextPrime);
}



