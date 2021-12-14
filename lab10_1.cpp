#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
#include <cmath>
using namespace std;

int main()
{

	float Interest, Payment, NewBalance, PrevBalance, rate, Total;
	int i = 1;

	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	do{
		cout << fixed << setprecision(2);
		cout << setw(13) << left << i;
		i++;
		//prebalance
		cout << setw(13) << left << PrevBalance;
		//interest
		Interest = PrevBalance * rate / 100;
		cout << setw(13) << left << Interest;
		//total
		Total = PrevBalance + Interest;
		cout << setw(13) << left << Total;
		//payment
		if (PrevBalance > Payment)
		{
			cout << setw(13) << left << Payment;
		}
		else
		{
			Payment = Total;
			cout << setw(13) << left << Payment;
		}
		//newbalance
		NewBalance = Total - Payment;
		cout << setw(13) << left << NewBalance;
		PrevBalance = NewBalance;
		cout << '\n';
	}while(PrevBalance!=0);

	return 0;
}
