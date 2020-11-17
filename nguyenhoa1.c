#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	i=0;
	printf("\nNhap vao mot so n: ");scanf("%d",&n);
		if(i*i==n)
		{
			printf("\n%d la so chinh phuong: ",n);
			return 0;
		}
		else
	printf("\n%d khong phai so chinh phuong",n);
	int a,b;
    printf("\nNhap a,b: "); scanf("%d%d",&a,&b);
	if(a>=0 && a<b){
		int i=sqrt(a);
		i=(i*i==a)?i:i+1;
		int j=sqrt(b);
		int c;
		for(c=i;c<=j;c++)
		{
			printf("%5d",c*c);
		}
	}
}
