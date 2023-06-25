#include <stdio.h>
int main()
{
	int n, s, low=0, mid, i, j, t;
	printf("enter size of array: ");
	scanf("%d", &n);
	
	int ar[n], high = n-1;
	
	for(i=0;i<n;i++)
	{
		printf("ar[%d]: ",i);
		scanf("%d",&ar[i]);
	}
	
	printf("enter the value u want to search: ");
	scanf("%d", &s);
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(ar[i]>ar[i+1])
			{
				t=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=t;
			}
		}
	}

	
	while(low<=high)
	{
		mid = (low+mid)/2;
		if(ar[mid]==s)
		{
			printf("value found at %d", mid);
			break;
		}
		else if(s<ar[mid])
		{
			high=mid-1;
		
		}
		else if(s>ar[mid])
		{
			low=mid+1;	
		}
	}
	
}
