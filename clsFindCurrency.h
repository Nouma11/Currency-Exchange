#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include"clsInputValidation.h"
#include <iomanip>
class clsFindCurrency:protected clsScreen
{
private:
    static void _PrintCurrency(clsCurrency Currency)
    {
        cout << "\nCurrency Card:\n";
        cout << "_____________________________\n";
        cout << "\nCountry    : " << Currency.Country();
        cout << "\nCode       : " << Currency.CurrencyCode();
        cout << "\nName       : " << Currency.CurrencyName();
        cout << "\nRate(1$) = : " << Currency.Rate();

        cout << "\n_____________________________\n";

    }
    enum _enChoice{eCode=1,eCountry=2};
    static void _FindByCode() {
        cout << "\nPlease enter Currency Code : ";
        string CurrencyCode = clsInputValidation::ReadString();
        clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
        if (!Currency.IsEmpty()) {
            cout << "\n Currency Found";
            
        }
        else {
            cout << "\Currency Was not Found :-(\n";
        }
        _PrintCurrency(Currency);
    }
    static void _FindByCountry() {
        cout << "\nPlease enter Country : ";
        string Country = clsInputValidation::ReadString();
        clsCurrency Currency = clsCurrency::FindByCountry(Country);
        if (!Currency.IsEmpty()) {
            cout << "\n Currency Found";

        }
        else {
            cout << "\Currency Was not Found :-(\n";
        }
        _PrintCurrency(Currency);
    }
public:
    static void FindCurrency() {
        _DrawScreenHeader("\tFind Currency Screen");
        cout << "Find By: [1] Code or [2] Country ?";
        _enChoice Choice = (_enChoice)clsInputValidation::ReadNumberBetwen(1, 2, "try Again");
        switch (Choice)
        {
        case clsFindCurrency::eCode:
            _FindByCode();
            break;
        case clsFindCurrency::eCountry:
            _FindByCountry();
            break;
        default:
            break;
        }

    }
};

