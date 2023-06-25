#include <stdio.h>
main()
//declaration of array 
{
	int arr[10];
	printf("%d", sizeof(arr));
}

main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	for(int i=0;i<10;i++)
	{
		printf("%d", arr[i]);
	}
}

main()
{
	static int arr[3];
	for (int i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i=0;i<5;i++)
	{
		printf("%d", arr[i]);
	}
}

// -----------sum of all the elements----------
main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	for (int i=0;i<=10;i++)
	sum = sum + arr[i];
	{
		printf("%d", sum);
	}
}

// -----------sum of all even numbers-----------

main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	for (int i=1;i<10;i++)
	sum = sum + arr[i++];
	{
		printf("%d", sum);
	}
}






