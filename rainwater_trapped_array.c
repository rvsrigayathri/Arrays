#include<stdio.h>
int main()
{
	int arr[100],left[100],right[100];
	int i,n,water=0,min;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	left[0]=arr[0];
	for(i=1;i<n;i++){
		if(left[i-1]>arr[i]){
			left[i]=left[i-1];
		}
		else{
			left[i]=arr[i];
		}
	}
	right[n-1]=arr[n-1];
	for(i=n-2;i>=0;i--){
		if(right[i+1]>arr[i]){
			right[i]=right[i+1];
		}
		else{
			right[i]=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if(left[i]<right[i]){
			min=left[i];
		}
		else{
			min=right[i];
		}
		water+=min-arr[i];
	}
	printf("Water trapped = %d",water);
	return 0;
}
