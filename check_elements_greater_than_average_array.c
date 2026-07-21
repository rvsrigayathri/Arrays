#include<stdio.h>
int main(){
	int arr[100],i,n;
	int sum=0,count=0;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=(float)sum/i;
	for(i=0;i<n;i++){
		if(arr[i]>avg){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
