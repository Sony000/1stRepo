#include<stdio.h>
main()
{
	int arr[5]={2,2,2,2,2},sum,average;
	//int arr[5],i,sum,average;
	//printf("Enter the first array element:\t");
	//scanf("%d",&arr[0]);
	//printf("Enter the second array element:\t");
	//scanf("%d",&arr[1]);
	//printf("Enter the third array element:\t");
	//scanf("%d",&arr[2]);
	//printf("Enter the forth array element:\t");
	//scanf("%d",&arr[3]);
	//printf("Enter the fifth array element:\t");
	//scanf("%d",&arr[4]);
	for(int i=0;i<5;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
		//printf("%d\n",arr[i]);
		//sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]/5;
		sum=arr[5];
		average=sum/5;
		printf("%d",average);
	}
}

