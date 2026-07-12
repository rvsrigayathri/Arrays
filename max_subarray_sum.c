#include<stdio.h>
int main(){
	int arr[100],i,n;
	int max_sum,current_sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max_sum=arr[0];
	current_sum=arr[0];
	for(i=1;i<n;i++){
		if(current_sum+arr[i]>arr[i]){
			current_sum=current_sum+arr[i];
		}
		else{
			current_sum=arr[i];
		}
		if(current_sum>max_sum){
			max_sum=current_sum;
		}
	}
	printf("%d",max_sum);
	return 0;
}
