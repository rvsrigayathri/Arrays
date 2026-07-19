#include<stdio.h>
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",arr[n-1]);
	return 0;
}
