#include<stdio.h>
int main(){
    int n, factorial =1;
printf("enter a number :");
scanf("%d",&n);
for(int i=1; i<=n; i++){     //for loop (initialiation,condition,updation)
    factorial *=i;   //pointer
}
printf("The factorial of %d is %d\n",factorial);
    return 0;
}