#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

int A[20],N,I;
float Sum;
Sum=0;
scanf("%d",&N);
for(I=1;I<=N;I++)
scanf("%d",&A[I]);
for(I=1;I<=N;I++)
Sum=Sum+A[I];
printf("\n Sum= %f",Sum);
printf("\n Average = %f",Sum/N);







}


