#include<stdio.h>
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Odd indicies:\n ");
	for(i=1;i<n;i=i+2){
		printf("%d ",arr[i]);
	}
	return 0;
}
