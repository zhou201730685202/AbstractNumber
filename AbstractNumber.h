#ifndef ABSTRACTNUMBER_H
#define ABSTRACTNUMBER_H

#include<stdio.h>
#include<iostream>

using namespace std;

class Number
{
public:
	Number(){value=0;}
	Number(double num){value=num;}
	virtual void print()=0;
	//virtual Number add(const Number& other);
	//virtual Number mul(const Number& other);
	double value;
};

class RealNumber:public Number
{
public:
	RealNumber(){realnum=0;}
	RealNumber(double rnum){realnum=rnum;}
	double getRealnum() const {return realnum;}
	virtual void print();
	virtual RealNumber add(const RealNumber& other);
	virtual RealNumber mul(const RealNumber& other);
private:
	double realnum;
};

class IntegerNumber:public RealNumber
{
public:
	IntegerNumber(){intnum=0;}
	IntegerNumber(int inum):RealNumber(inum){}
	int getIntnum() const {return intnum;}
	IntegerNumber add(const IntegerNumber& other);
	IntegerNumber mul(const IntegerNumber& other);
private:
	int intnum;
};

class ComplexNumber:public Number
{
public:
	ComplexNumber(){real=0;image=0;}
	ComplexNumber(double r,double i){real=r;image=i;}
	double getReal() const {return real;}
	double getImage() const {return image;}
	void print(){cout<<real<<"+"<<image<<"i"<<endl;}
	ComplexNumber operator+(const ComplexNumber& other);
	ComplexNumber operator*(const ComplexNumber& other);
private:
	double real;
	double image;
};

#endif
