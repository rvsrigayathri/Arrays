#include<stdio.h>
int main()
{
	int arr[100],i,n,sum=0;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum =sum+arr[i];
	}
	avg=(float)sum/n;
	printf("%.2f",avg);
	return 0;
}
