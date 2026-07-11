#include<stdio.h>
int main()
{
	int arr[100],i,n,key,found;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(arr[i]==key){
			found=1;
			printf("Element is found at %d position",i+1);
			break;
		}
	}
	if(arr[i]!=key){
		printf("Element is not found");
	}
	return 0;
}
