#include<stdio.h> 
  int i;
int totalDigits(int n) 
{ 
    int digitcounting = 0; 
  
    for (i = 1; i <= n; i *= 10) 
        digitcounting += (n - i + 1); 
  
    printf("number_of_digits %d",digitcounting ); 
} 
  
int main() 
{ 
    int n ;
    printf("enter the number upto you want print");
	scanf("%d",&n); 
    totalDigits(n);

} 
