#include<stdio.h>
#include<iostream>
#include"AbstractNumber.h"

using namespace std;

/*virtual Number Number::add(const Number& other)
{
	
}
virtual Number Number::mul(const Number& other)
{

}*/

void RealNumber::print()
{
	cout<<realnum<<endl;
}
RealNumber RealNumber::add(const RealNumber& other)
{
	return RealNumber(realnum+other.getRealnum());
}
RealNumber RealNumber::mul(const RealNumber& other)
{
	return RealNumber(realnum*other.getRealnum());
}

IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
	return IntegerNumber(getIntnum()+other.getIntnum());
}
IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
	return IntegerNumber(getIntnum()*other.getIntnum());
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other)
{
	return ComplexNumber(getReal()+other.getReal(),getImage()+other.getImage());
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber& other)
{
	double _real=getReal()*other.getReal()-getImage()*other.getImage();
	double _image=getReal()*other.getImage()+getImage()*other.getReal();
	return ComplexNumber(_real,_image);
}
