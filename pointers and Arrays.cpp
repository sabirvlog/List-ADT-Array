#include<iostream>
#include<conio.h>

using namespace std;
 
int main()
{
	int arr[5]={2,4,16,32,64};
	int *ptr;
	int sum;
	ptr=arr;
	for(int i=0;i<5;i++)
	{
		sum=sum+*(ptr+1);
	}
	cout<<"Sum of All Arrays Elements is :" <<sum<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"arr["<<i<<"]="<<*(ptr+1)<<"Address of Elements is :"<<(ptr+1)<<endl;
	}
        return 0;
}
