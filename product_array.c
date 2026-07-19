#include<stdio.h>
int main()
{
	int arr[100],i,n,product;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Product: ");
	for(i=0;i<n;i++){
		product=product*arr[i];
	}
	printf("%d",product);
	return 0;
}
