
#include <iostream>
using namespace std;

int main()
{
	double shares=750;
	double shareCost=35;
	double priceOfStock;
	double commission;
	double total;
		priceOfStock=shares*shareCost;
		commission=priceOfStock*0.02;
		total=priceOfStock+commission;
	cout << "The amount paid for the stock is " << priceOfStock << " dollars." << endl;
	cout << "The amount of commission is " << commission << " dollars." << endl;
	cout << "The total amount spend is " << total << " dollars." << endl;
	return 0;
}
