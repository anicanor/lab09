//Aaron Nicanor
#include"cust.h"

Cust::Cust(string name, bool robber, int arrival, int items){

	m_name = name;
	m_robber = robber;
	m_arrival = arrival;
	m_items = items;
}

void Cust::print(ostream &os){

	os << m_name << " ";
	if (m_robber) os << "robber ";
	else os << "shopper ";
	os << m_arrival << " ";
	os << m_items << endl;
}
