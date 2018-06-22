#include<stdio.h>
#include<iostream>
#include"AbstractNumber.h"

using namespace std;

int main()
{
	Number* p;
	RealNumber obj1(15.6),obj2(17.0);
	RealNumber c=obj1.add(obj2);
	p=&c;
	(*p).print();
	c=obj1.mul(obj2);
	(*p).print();

	IntegerNumber obj3(8),obj4(11);
	IntegerNumber b=obj3.add(obj4);
	p=&b;
	(*p).print();
	b=obj3.mul(obj4);
	(*p).print();

	ComplexNumber obj5(8,11),obj6(19,4);
	ComplexNumber a=obj5+obj6;
	p=&a;
	(*p).print();
	a=obj5*obj6;
	(*p).print();
	return 0;
}
