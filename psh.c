#include <stdio.h>
int main(){

 
float  x=1.0, sum=0.0, result=0.0;
for(result=x*x;result>=0.000001;x/=2)
{
	result=x*x;
	sum=sum+result;
	printf("x가 %f일때 넓이의 차이는 %f - %f = %f \n",x,sum,sum-result,result);	
}


printf("계산한 넓이의 합은 %f 입니다 \n",sum-result);
return 0;
}