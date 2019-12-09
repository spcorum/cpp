#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

inline void keep_window_open() {char ch; cin>>ch;}

int get_denomination(string coin) {

	// This function queries the user for a number of coins in a denomination.
	// Input: coin, a coin denomiation (string).
	// Returns: num_coin, the number of coins in the denomination (int)

	int num_coin = -1;
	while (num_coin < 0) {
		cout << "Enter number of " << coin << "'s (non-negative): ";
		cin >> num_coin;
	}
	return num_coin;
}

void print_denomination(int num_coin, string coin_string) {

	// This function prints the number of coins to output.
	// Input:
	//	num_coin (int)
	//	coin_string, name of denomiation (string)

	cout << "You have " << num_coin << " " << coin_string << "." << endl;
}

int main(int argc, const char *argv[]) {

	// This function queries the user for the number of pennies, nickels,
	// dimes, quarters, and half dollars and prints the results to output.

	int num_penny = get_denomination("pennies");
	int num_nickle = get_denomination("nickles");
	int num_dime = get_denomination("dimes");
	int num_quarter = get_denomination("quarters");
	int num_halfdollar = get_denomination("half dollars");
	int num_dollar = get_denomination("dollar coins");
	
	print_denomination(num_penny, (num_penny == 1 ? "penny" : "pennies"));
	print_denomination(num_nickle, (num_nickle == 1 ? "nickle" : "nickles"));
	print_denomination(num_dime, (num_dime == 1 ? "dime" : "dimes"));
	print_denomination(num_quarter, (num_quarter == 1 ? "quarter" : "quarters"));
	print_denomination(num_halfdollar, (num_halfdollar == 1 ? "half dollar" : "half dollars"));
	print_denomination(num_dollar, (num_dollar == 1 ? "dollar coin" : "dollar coins"));

	int total = num_penny + 5*num_nickle + 10*num_dime + 25*num_quarter +
				50*num_halfdollar + 100*num_dollar;

	cout << "You have " << total << (total == 1 ? " cent" : " cents") << "!" << endl;

    return 0;
}
