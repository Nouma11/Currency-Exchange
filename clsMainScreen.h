#pragma once
#include<iostream>
#include<string>
#include "clsCurrency.h"
#include"clsScreen.h"
#include<iomanip>
#include"clsListCurrencies.h"
#include"clsFindCurrency.h"
#include"clsUpdateCurrencyRate.h"
#include"clsCalculator.h"
#include"clsInputValidation.h"
class clsMainScreen:protected clsScreen
{
private:
	enum _enMainMenueOptions {
		eListCurrencies = 1, eFindCurrency = 2, eUpdateCurrency = 3,
		eCurrencyCalculator = 4, eExit = 5
	};
	static short _ReadMainMenueOption()
	{
		cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
		short Choice = clsInputValidation::ReadNumberBetwen(1, 5, "Enter Number between 1 to 5? ");
		return Choice;
	}
	static void _ShowListCurrencies() {
		clsListCurrencies::CurrencyList();
	}
	static void _ShowFindCurrency() {
		clsFindCurrency::FindCurrency();
	}
	static void _ShowUpdateCurrency() {
		clsUpdateCurrencyRate::UpdateCurrencyRate();
	}
	static void _ShowCurrencyCalculator() {
		clsCalculator::ShowCurrencyCalculatorScreen();
	}
    static void _PerfromMainMenueOption(_enMainMenueOptions MainMenueOption)
    {
		switch (MainMenueOption)
		{
		case clsMainScreen::eListCurrencies:
			system("cls");
			_ShowListCurrencies();
			_GoBackToMainMenue();
			break;
		case clsMainScreen::eFindCurrency:
			system("cls");
			_ShowFindCurrency();
			_GoBackToMainMenue();
			break;
		case clsMainScreen::eUpdateCurrency:
			system("cls");
			_ShowUpdateCurrency();
			_GoBackToMainMenue();
			break;
		case clsMainScreen::eCurrencyCalculator:
			system("cls");
			_ShowCurrencyCalculator();
			_GoBackToMainMenue();
			break;
		case clsMainScreen::eExit:
			_GoBackToMainMenue();
			break;
		
		}
       

    }
    static  void _GoBackToMainMenue()
    {
        cout << setw(37) << left << "" << "\n\tPress any key to go back to Main Menue...\n";

        system("pause>0");
        ShowMainMenue();
    }
public:
	static void ShowMainMenue() {
		system("cls");
		_DrawScreenHeader(" Currency Exchange Main Screen ");
		cout << setw(37) << left << "" << "#######################################" << endl;
		cout << setw(37) << left << "" << "\t      Currency Exchange Menue" << endl;
		cout << setw(37) << left << "" << "#######################################" << endl;
		cout << setw(37) << left << "" << "\t[1] List Currencies.\n";
		cout << setw(37) << left << "" << "\t[2] Find Currency.\n";
		cout << setw(37) << left << "" << "\t[3] Update Currency.\n";
		cout << setw(37) << left << "" << "\t[4] Currency Calculator.\n";
		cout << setw(37) << left << "" << "\t[5] Find Currency.\n";
		cout << setw(37) << left << "" << "#######################################" << endl;
		_PerfromMainMenueOption((_enMainMenueOptions)_ReadMainMenueOption());
	}

};

