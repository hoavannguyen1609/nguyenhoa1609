#include<stdio.h>
void main()
{
	int n,i,s;
	s=0;
	printf("\nNhap vao mot so n:");scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+(i*i);
	}
	printf("\nTong cua n so duong la: %d",s);
}
