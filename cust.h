//Aaron Nicanor

#ifndef CUST_H_
#define CUST_H_
#include<iostream>

using namespace std;

class Cust{

	public:
    	Cust(string,bool,int,int);
    	bool m_robber;
    	void print(ostream &);
	private:
    	string m_name;
      int m_arrival;
      int m_items;
    	
    	
};

#endif
