
#include <stdio.h>
#include <stdbool.h>
int main()
{
   long long int sum=0;
   bool arr[2000000];
   for(int i=0;i<2000000;i++)
       arr[i]=true;

    for(int i=2;i<2000000;i++) {
        {
            if (arr[i] == true) {
                for (int j = i*2; j < 2000000; j += i) {
                    arr[j] = false;
                }
            }
        }
    }
    for(int j=2;j<2000000;j++)
    {
        if(arr[j]==true)
            sum+=j;
    }
    printf("%lld",sum);
}
