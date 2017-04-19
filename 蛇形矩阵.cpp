#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n,a[100][100];
	int xunhuan;
	int zengzhi=1;
	int temp=1;
	cin>>n;
	int L=(n-1)/2;int H=(n-1)/2;
	int total=n*n;
	xunhuan=L;
	a[L][H]=temp;
	temp++;
	for(int i=0; i<xunhuan; i++) {
		for(int m=1; m<=zengzhi; m++) {
			H++;
			a[L][H]=temp;
			temp++;
		}

		for(int m=1; m<=zengzhi; m++) {
			L--;
			a[L][H]=temp;
			temp++;
		}
		zengzhi++;
		for(int m=1;m<=zengzhi;m++)
		{
			H--;
			a[L][H]=temp;
			temp++;
		}
		for(int m=1;m<=zengzhi;m++){
			L++;
			a[L][H]=temp;
			temp++;
		}
		zengzhi++;

	}
	for(int m=(n-1);m>=0;m--)
	{
		a[n-1][m]=total;
		total--;
	}
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		cout<<a[x][y]<<' ';
		cout<<endl;
	}
	int duijiaoxian=0;
	for(int m=0;m<n;m++)
	{
		duijiaoxian=a[m][m]+duijiaoxian;
	}
	int duijiaoxian1=0;
	for(int m=0;m<n;m++)
	{
		duijiaoxian1=a[m][n-m]+duijiaoxian1;
	}
	cout<<duijiaoxian+duijiaoxian1<<endl;
	return 0;
}


