#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include"clsInputValidation.h"
#include <iomanip>
#pragma once
class clsUpdateCurrencyRate:protected clsScreen
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
public:
    static void UpdateCurrencyRate() {
        _DrawScreenHeader("  Update Currency Rate Screen");
        cout << "\nPlease enter Currency Code : ";
        string CurrencyCode = clsInputValidation::ReadString();
        while (!clsCurrency::IsCurrencyExist(CurrencyCode))
        {
            cout << "\nCurrency is not found, choose another one: ";
            CurrencyCode = clsInputValidation::ReadString();
        }
        clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
        _PrintCurrency(Currency);
        cout << "\nAre you sure you want to Update this Currency y/n? ";

        char Answer = 'n';
        cin >> Answer;

        if (Answer == 'y' || Answer == 'Y')
        {
            cout << "\nUpdate Currency Rate :\n";
            cout << "\n-------------------------------";
            cout << "\nEnter New Currency Rate : ";
            double Rate = clsInputValidation::ReadDBNumber("try Again");
            Currency.UpdateRate(Rate);
            cout << "\nCurrency Rate Updated Successfully :-)\n";
            _PrintCurrency(Currency);

        }
        else {
            cout << "\n Update Canceled!! \n";
        }
    }
};

