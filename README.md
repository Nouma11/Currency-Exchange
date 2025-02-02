Currency Exchange System - Object-Oriented Programming (OOP)
This is a Currency Exchange System implemented in C++ using Object-Oriented Programming (OOP) principles. The system allows users to manage currencies, perform currency conversions, and update exchange rates. It is designed to demonstrate clean code practices, modularity, and efficient data handling.

Features
1. Currency Management
List Currencies: View all available currencies with their details (country, code, name, and exchange rate).

Find Currency: Search for a currency by its code or country name.

Update Currency Rate: Modify the exchange rate of a specific currency.

2. Currency Conversion
Currency Calculator: Perform conversions between two currencies.

Convert to USD: Convert amounts to USD and vice versa.

3. File-Based Data Storage
All currency data is stored in a text file (Currencies.txt).

Easy to extend and maintain.

4. User-Friendly Interface
Clear and intuitive menu-driven interface.

Input validation to ensure correct user input.

5. Modular Design
The system is divided into multiple classes, each handling a specific functionality (e.g., clsCurrency, clsCalculator, clsListCurrencies, etc.).

Easy to extend and maintain.

Classes Overview
1. clsMainScreen
Displays the main menu with options for managing currencies, performing conversions, and updating exchange rates.

Navigates to different screens based on user input.

2. clsCurrency
Represents a currency in the system.

Handles currency-related operations such as finding, updating, and listing currencies.

Provides methods for currency conversion.

3. clsCalculator
Handles currency conversion calculations.

Allows users to convert amounts between two currencies.

4. clsUpdateCurrencyRate
Allows users to update the exchange rate of a specific currency.

5. clsListCurrencies
Displays a list of all available currencies with their details.

6. clsScreen
Base class for all screens.

Provides common functionality such as drawing screen headers.

7. clsInputValidation
Utility class for validating user input.

Main Menu Options
List Currencies:

View all available currencies with their details.

Find Currency:

Search for a currency by its code or country name.

Update Currency Rate:

Modify the exchange rate of a specific currency.

Currency Calculator:

Perform conversions between two currencies.

Exit:

Exit the program.

Example Usage
1. List Currencies
Copy
===========================================
            Currency List Screen
===========================================
| Country          | Code    | Name            | Rate($1) |
-----------------------------------------------------------
| United States    | USD     | US Dollar       | 1.0      |
| European Union   | EUR     | Euro            | 0.85     |
| United Kingdom   | GBP     | British Pound   | 0.75     |
===========================================
2. Find Currency
Copy
Enter Currency Code: EUR
Currency Found:
-----------------------------
Country: European Union
Code: EUR
Name: Euro
Rate: 0.85
3. Update Currency Rate
Copy
Enter Currency Code: GBP
Current Rate: 0.75
Enter New Rate: 0.80
Currency Rate Updated Successfully!
4. Currency Calculator
Copy
Enter Currency1 Code: USD
Enter Currency2 Code: EUR
Enter Amount: 100
100 USD = 85 EUR
Future Improvements
Enhanced Data Storage:

Replace file-based storage with a database (e.g., SQLite, MySQL).

Graphical User Interface (GUI):

Develop a GUI using frameworks like Qt or wxWidgets.

Real-Time Exchange Rates:

Integrate with an API to fetch real-time exchange rates.

Multi-User Support:

Allow multiple users to access the system simultaneously.

Audit Logs:

Add detailed audit logs for all actions performed in the system.

