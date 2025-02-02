#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include <iomanip>

class clsListCurrencies:protected clsScreen
{
private:
	static void _printCurrencies(clsCurrency Currency) {
        cout << setw(8) << left << "" << "| " << setw(28) << left << Currency.Country();
        cout << "| " << setw(13) << left << Currency.CurrencyCode();
        cout << "| " << setw(40) << left << Currency.CurrencyName();
        cout << "| " << setw(10) << left << Currency.Rate();
        
	}
public:
    static void CurrencyList() {
        vector <clsCurrency> vCurrency = clsCurrency::GetCurrenciesList();
        string Title = "\t  Currency List Screen";
        string SubTitle = "\t    (" + to_string(vCurrency.size()) + ") Currencie(s).";

        _DrawScreenHeader(Title, SubTitle);

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        cout << setw(8) << left << "" <<  "| " << left << setw(28) << "Country";
        cout << "| " << left << setw(13) << "CurrencyCode";
        cout << "| " << left << setw(40) << "CurrencyName";
        cout << "| " << left << setw(10) << "Rate($1)";
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        if (vCurrency.size() == 0)
            cout << "\t\t\t\tNo Currencies Available In the System!";
        else

            for (clsCurrency Currency : vCurrency)
            {

                _printCurrencies(Currency);
                cout << endl;
            }

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

    }
    
};

