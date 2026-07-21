#include<stdio.h>
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			arr[i]=0;
		}
	}
	printf("Modified array: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
