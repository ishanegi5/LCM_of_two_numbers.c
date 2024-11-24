#include<stdio.h>
int main()
{ int n=2,i,j,max=0;
int result=1;
int arr[n];
printf("Enter two numbers to find LCM of: ");
for(i=0;i<n;i++)
{ printf("\n%d number: ",i+1);
scanf("%d",&arr[i]);
if(max<arr[i])
{
   max=arr[i];
}
}
for(i=2;i<max;i++)
{  int divided=0;  
for(j=0;j<n;j++)
{ 
  if(arr[j]%i==0)
  {   
    arr[j]/=i;
    divided=1;
  } 
}
if(divided==1)
{
    result*=i;
    i--;
}
}
printf("LCM= %d",result);
printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
return 0;
}    
