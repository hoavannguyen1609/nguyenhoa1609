#include <stdio.h>
int demmotkitu(char *s, char ch)
{
	int dem=0,i;	
	for (i=0;s[i]!='\0';i++)
		if (s[i]==ch) dem++;
	return dem;
}
void main()
{
	char S[100],c;
	printf("\nNhap vao mot chuoi :");gets(S);
	printf("\nNhap vao mot ky tu:");scanf("%c",&c);
	printf("\nSo lan xuat hien cua %c trong chuoi la %d",c,demmotkitu(S,c));
	strupr(S);
	printf("\nChuoi sau khi da chuyen doi thanh chu in hoa: %s",S);
	strrev(S);
	printf("\nChuoi theo thu tu nguoc lai: %s",S);
}
