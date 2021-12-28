#include<stdio.h>

class complex
{int real,imag;
public:	
	complex(int r=0,int i=0)
	{
		real=r;
		imag=i;
	}
	void print()
	{
		printf("%d %d",real,"+i",&imag);
	}
	complex operator +(complex c)
	{
		complex temp;
		temp.real=real+c.real;
		temp.imag=imag+c.imag;
		return temp;
	}
};
int main()
{
	complex c1(3,4);
	complex c2(7,6);
    complex c3;
    c3=c1+c2;
    c3.print();
    
    return 0;
}
