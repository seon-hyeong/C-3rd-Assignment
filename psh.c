#include <stdio.h>
int main(){

 
float  x=1.0, sum=0.0, result=0.0;
for(result=x*x;result>=0.000001;x/=2)
{
	result=x*x;
	sum=sum+result;
	printf("x�� %f�϶� ������ ���̴� %f - %f = %f \n",x,sum,sum-result,result);	
}


printf("����� ������ ���� %f �Դϴ� \n",sum-result);
return 0;
}