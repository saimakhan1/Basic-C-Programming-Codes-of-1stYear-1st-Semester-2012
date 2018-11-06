#include<stdio.h>

int main()

{

	int i,n,a,rem,gcd,b,count;

	count=0;

	scanf("%d",&n);

	for(i=1;i<n;i++)
	{

		a=i;

		b=n;

		for(;rem!=0;)
		{

			rem=b%a;

	//		printf("rem=%d,a=%d,b=%d\n",rem,a,b);

			b=a;

			a=rem;

		}
		rem=1;

		gcd=b;

		if(gcd==1) count++;

	}

	printf("count=%d\n",count);

	return 0;

}
