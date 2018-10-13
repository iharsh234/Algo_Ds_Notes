#include<stdio.h>
int fac(int x)
{
    int a[200],counter,temp,i,z=0;
    a[0]=1;
    counter=0;
    for(; x>=2; x--)
    {
        temp=0;
        for(i=0; i<=counter; i++)
        {
            temp=(a[i]*x)+temp;
            a[i]=temp%10;
            temp=temp/10;
        }
        while(temp>0)
        {
            a[++counter]=temp%10;
            temp=temp/10;
        }
    }
    for(i=counter; i>=0; i--)
       {printf("%d",a[i]);}
}
    int fac(int x);
    int main()
	{
	 int i,x,n;
	scanf("%d",&n);
		for(i=0;i<n;i++)
	{	scanf("%d",&x);
		fac(x);
		printf("\n");
		 
	}
	return 0;
}
    
    