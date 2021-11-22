#include<stdio.h>    
void print(int a[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
    }  
void bubble(int a[], int n) // function to implement bubble sort  
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  
int main ()    
{    
    int i, j,temp;     
    int a[5] = { 10, 35, 32, 13, 26};     
    int n = sizeof(a)/sizeof(a[0]);   
    printf("Before sorting array elements are - \n");  
    print(a, n);  
    bubble(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
} 

/*OUTPUT
Before sorting array elements are -
10 35 32 13 26
After sorting array elements are -
10 13 26 32 35
--------------------------------
Process exited after 0.2926 seconds with return value 0
Press any key to continue . . .*/   
