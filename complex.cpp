#include<iostream>
using namespace std;

class complex{
	public:
		int real;
		int imag;
		
		void getData()
		{
			cout<<"\nEnter Real part:";
			cin>>real;
			cout<<"\nEnter Imaginary part:";
			cin>>imag;
		}
		void putData()
		{
			cout<<real;
			cout<<" + ";
			cout<<" i ";
			cout<<imag;
			
		}
		
		complex add(complex a,complex b,complex c)
		{
			complex s;
			s.real=a.real+b.real+c.real;
			s.imag=a.imag+b.imag+c.real;
			return s;
		}
		complex subtract(complex a,complex b)
		{
			complex t;
			t.real=a.real-b.real;
			t.imag=a.imag-b.imag;
			return t;
		}
};

int main()
{
	complex c1,c2,c3,c4,c5;
	c1.getData();
	c2.getData();
	c3.getData();
	c4=c4.add(c1,c2,c3);
	cout<<"\nAddition result:";
	c4.putData();
	c5=c5.subtract(c1,c2);
	cout<<"\n\nSubtraction result:";
	c5.putData();	
}

	
	
			
			
			
			
				
			
			
		
