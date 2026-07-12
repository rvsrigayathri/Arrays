#include<stdio.h>
int main()
{
	int arr[100],i,n;
	int min_price,profit=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min_price=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]<min_price){
			min_price=arr[i];
		}
		if(arr[i]-min_price>profit){
			profit=arr[i]-min_price;
		}
	}
	printf("%d",profit);
	return 0;
}
