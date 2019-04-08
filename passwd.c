			#include <stdlib.h>
			#include <stdio.h>
			#include <time.h>
			void swap(char a[], int i,int j)
			{
			int t;

			t  = a[j];
			a[j] = a[i];
			a[i] = t;
			}
			void shuffle(char a[],int n)
			{
			int k;
			while(n>1)
			{

			k=rand()%n;
			swap(a,k,n-1);
			n--;
        }
			}
			int main( ) {
			int i,h;
			char c;
			char A[25];
			//printf("d");
			for ( h =0;h<25;h++)
			{
			A[h]='X';
			}
			srand(time(0));
			printf("Your Random Password is: ");
			for (i = 0; i < 5; ++i) {
			    c = 'a' + rand() % ('z' - 'a' + 1);
			   // printf("%c", c);
			A[i]=c;
			}
			for (i = 5; i < 10; ++i) {
			    c = 'A' + rand() % ('Z' - 'A' + 1);
			    //printf("%c", c);
			A[i]=c;
			}
			for (i = 10; i <15; ++i) {
			    c = '0' + rand() % ('9' - '0' + 1);
			    //printf("%c", c);
			A[i]=c;
			}
shuffle(A,15); 
			for(i=0;i<15;i++)
			{
			printf("%c",A[i]);
			}
			printf("\n\n");
			 
			}