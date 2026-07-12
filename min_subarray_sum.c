#include<stdio.h>
int main()
{
	int arr[100],i,n;
	int min_sum,current_sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min_sum=arr[i];
	current_sum=arr[i];
	for(i=0;i<n;i++){
		if(current_sum+arr[i]<arr[i]){
			current_sum=current_sum+arr[i];
		}
		else{
			current_sum=arr[i];
		}
		if(current_sum<min_sum){
			min_sum=current_sum;
		}
	}
	printf("%d",min_sum);
	return 0;
}
