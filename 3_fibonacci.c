#include<stdio.h>
int main(){
int n,i,a=0,b=1,c;     //first two numbers (0,1)are not included in the calculation of series
printf("enter the number of terms:");
scanf("%d",&n);
printf("The fibonacci series is :");
for(i=0;i<n;i++){  //for loop
    c=a+b;   
    printf("%d\n",c);
    a=b;   
    b=c;
}
printf("print");
    return 0;
}