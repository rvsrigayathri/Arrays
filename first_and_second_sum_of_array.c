#include<stdio.h>
int main()
{
	int arr[100],i,n;
	int f_sum,s_sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++){
		f_sum +=arr[i];
	}
	for(i=n/2;i<n;i++){
		s_sum +=arr[i];
	}
	printf("%d \n",f_sum);
	printf("%d",s_sum);
	return 0;
}
