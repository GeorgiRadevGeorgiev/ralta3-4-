// gosho ralta 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{ 
	/*int dayOfWeek;
	cout << "Input number for day of week: ";
	cin >> dayOfWeek;

	switch (dayOfWeek) {
	case 1: cout << "\nmonday workday" << endl; break;
	case 2: cout << "\ntuesda workday" << endl; break;
	case 3: cout << "\nwednesday workday" << endl; break;
	case 4: cout << "\nthurstday workday" << endl; break;
	case 5: cout << "\nfriday workday" << endl; break;
	case 6: cout << "\nsaturday weekend" << endl; break;
	case 7: cout << "\nsunday weekend" << endl; break;
	default: cout << "error" << endl; 

	}
	*/	  

	/*char symb;
	cout << "Input Symbol: ";
	cin >> symb;
	while (symb != '*') {
		cout << "\nImput s: ";
		cin >> symb;
	}
	*/

	/*int S, a;
	S = 0;
	
	while (S < 30) {
		cout << "\nInput a value between 3 and 6 : ";
		cin >> a;
		if (a > 3 && a < 6) {
			S += a;
			cout << S << endl;

		}
		else cout << "error";

	}

	*/

	/*int n, i;
	i = 1;
	cout << "Input n ";
	cin >> n;
	while (i <= n) {
		if (i % 2 == 0)
			cout << i << endl;
		i++;
	}

	*/

	/*int n;
	cin >> n; 
	for (int i = 0; i < n; i++ ) {
		cout << i << endl;
	}

	*/

	int n;
	cout << "input number of \"*\" ";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		for (int j = 1 ; j <= i; j++) {
			cout<<'*';
			
		}cout << "\n";
	}

	for (int i = 0; i <= n; i++) {
		for (int j = i + 1; j <= n + 1; j++) {
			cout << '*';

		}cout << ' ' << endl;
	}
	
	system("pause");
    return 0;
}

