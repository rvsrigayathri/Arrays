#include<stdio.h>
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Even elements: ");
	for(i=0;i<n;i=i+2){
		printf("%d",arr[i]);
	}
	return 0;
}
