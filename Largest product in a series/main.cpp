// C program to read a large number digit by digit 
#include <stdio.h> 
int main() 
{ 
	// array to store digits 
	unsigned long int a[1000]; 
	unsigned long int c[1000];
	unsigned long int temp;
	int i,j,number_of_digits; 
	scanf("%d", &number_of_digits); 
	for (i = 0; i < number_of_digits; i++) { 

		// %1d reads a single digit 
		scanf("%1lu", &a[i]); 
	} 

	for (i = 0; i < number_of_digits; i++) 
		printf("%lu ", a[i]); 
	int d=0;
	for(i=0;i<=(1000-13);i++){
		unsigned long int b=1;
		for(j=i;j<(i+13);j++){
			//printf("%d\n",a[j]);
			b=b*a[j];
			}
		c[i]=b;
		d++;
		}
	//int n=sizeof(c)/sizeof(c[0]);
	for (i = 0; i < 987; i++) 
		printf("%lu ", c[i]); 		
	for(i=0; i<987; i++)
    {
        for(j=i+1; j<987; j++)
        {
            if(c[j] >c[i])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
	for (i = 0; i < 987; i++) 
		printf("%lu ", c[i]);    
    printf("\n%lu\n",c[0]);
   	printf("%d\n",d);
	return 0; 
} 
