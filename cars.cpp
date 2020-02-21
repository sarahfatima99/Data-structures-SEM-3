#include "cars.h"
#include<iostream>
using namespace std;
cars::cars(){}
 
 cars::cars(int i,int tyre,string colour):id(i),t(tyre),c(colour){ };
 cars& cars::operator =(const cars& c1){
 	id=c1.id;
 	t=c1.t;
 	c=c1.c;
 	return *this;
 }
 
  void cars::set(int i, int tyre, string colour){
    	id=i;
    	t=tyre;
    	c=colour;
	}
 void cars::print(){
    	cout<<id<<"\n"<<t<<"\n"<<c;
	}
	cars(const cars &p2) {id = p2.x; t = p2.t,c=p2.c; } 
	cars::~cars()
		{
			cout<<"\nDestructor";
		
		}
