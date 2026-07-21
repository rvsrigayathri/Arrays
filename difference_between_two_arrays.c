#include<stdio.h>
int main()
{
	int arr[100],i,n,min,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min=max=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("%d",max-min);
	return 0;
}
