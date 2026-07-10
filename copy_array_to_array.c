#include<stdio.h>
int main()
{
	int arr[100],arr1[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		arr1[i]=arr[i];
	}
	printf("Copied array\n");
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}
	return 0;
}
