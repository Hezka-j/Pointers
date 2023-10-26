#include <iostream>
using namespace std;
//int main()
//{
//    double a;
//    double b;
//    double c;
//    double* pa = &a;
//    double* pb = &b;
//    double* pc = &c;
//    cout << "First number - ";
//    cin >> *pa;
//    cout << "Second number - ";
//    cin >> *pb;
//    *pc = *pa + *pb;
//    cout << "Number - " << *pc << "\n";
//}
//////////////////////////////////////////////////////////
int main()
{
	double height;
	double weight;
	double* pheight = &height;
	double* pweight = &weight;
	double** normal_weight = &pheight;
	cout << "Enter height - ";
	cin >> *pheight;
	cout << "Enter weight - ";
	cin >> *pweight;
	**normal_weight = *pheight - 110;
	if (**normal_weight > *pweight)
		cout << "You need to gain " << **normal_weight - *pweight << " kg\n";
	else if (**normal_weight < weight)
		cout << "You need to lose " << *pweight - **normal_weight << " kg\n";
	else
		cout << "You are in a normal weight)\n";

}