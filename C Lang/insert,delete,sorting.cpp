#include <stdio.h>
void show();
main()
{
	int ar[]={1,2,3,4}, i;
	int n=4;
	show(ar, n);
}
void show(int br[], int s)
{
	for(int i=0;i<s;i++){
		printf("%d", br[i]);
	}
}


for(i=0;i<4;i++)
{
	show(ar[]);
}
void show(int n)
{
	printf("%d", n);
}

// ------------------insert an element-----------------

#include <stdio.h>

int main()
{
int array[100], position, i, n, value, c;

printf("Enter number of elements in array\n");
scanf("%d", &n);

printf("Enter %d elements\n", n);

for (c = 0; c < n; c++)
scanf("%d", &array[c]);

printf("Enter the location where you wish to insert an element\n");
scanf("%d", &position);

printf("Enter the value to insert\n");
scanf("%d", &value);

for (c = n - 1; c >= position - 1; c--)
array[c+1] = array[c];

array[position-1] = value;

printf("Resultant array is\n");

for (c = 0; c <= n; c++)
printf("%d\n", array[c]);

return 0;
}

// -----------------------delete an element-----------------

#include <stdio.h>

int main()
{
int array[100], position, c, n;

printf("Enter the number of elements of the array : ");
scanf("%d", &n);

printf(�\nInput the array elements : �);

for (c = 0; c < n; c++)
scanf("%d", &array[c]);

printf(�\nEnter the position : �);
scanf(�%d�, &position);

if (position >= n+1)
printf(�\nDeletion not possible.\n�);
else
{
for (c = position � 1; c < n � 1; c++)
array[c] = array[c+1];

printf(�\nArray after deletion : �);

for (c = 0; c < n � 1; c++)
printf(�%d\n�, array[c]);
}

return 0;
}


//---------------- SORTING -------------

int main()
{
	int n, i, j, t, m;
	printf("Enter the Array size: ");
	scanf("%d", &n);
	
	int ar[n];
	
	for (m=0; m<n; m++)
	{
		printf("Enter %dst value: ", m);
		scanf("%d", &ar[m]);
	}
	
	for (j=0; j<n-1; j++)
	{
		for (i=0; i<n-1; i++)
		{
			if (ar[i]>ar[i+1])
			{
				t = ar[i];
				ar[i] = ar[i+1];
				ar[i+1] = t;
			}
		}
	}
	
	for (m=0; m<n; m++)
	{
		printf("%d  ", ar[m]);
	}
	
}

int main()
{
	int n, i, val;
	printf("Enter the Array size: ");
	scanf("%d", &n);
	int ar[n];
	
	printf("Enter the Value to search: ");
	scanf("%d", &val);
	
	int count=0
	
	for (i=0; i<n; i++)
	{
		if (ar[i]==val)
		{
			count++;
		}
	}
	
	
	
}
	
