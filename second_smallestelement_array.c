#include<stdio.h>
int main()
{
	int arr[100],i,n,smallest,second;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]<arr[1]){
		smallest=arr[0];
		second=arr[1];
	}
	else{
		smallest=arr[1];
		second=arr[0];
	}
	for(i=2;i<n;i++){
		if(arr[i]<smallest){
			second=smallest;
			smallest=arr[i];
		}
		else if(arr[i]<second && arr[i]!=smallest){
			second=arr[i];
		}
	}
	printf("%d",second);
	return 0;
}
