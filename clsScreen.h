#pragma once
#include <iostream>
#include "clsCurrency.h"


using namespace std;

class clsScreen
{
private:
    
protected:
    static void _DrawScreenHeader(string Title, string SubTitle = "")
    {
        cout << "\t\t\t\t      _____________________________________";
        cout << "\n\n\t\t\t\t\t  " << Title;
        if (SubTitle != "")
        {
            cout << "\n\t\t\t\t\t" << SubTitle;
        }
        cout << "\n\t\t\t\t      _____________________________________\n\n";
        
    }

  

};
