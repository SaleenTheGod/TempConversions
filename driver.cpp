#include "TempConversions.h"

using namespace std;

int main() {


	TempConversions tempMain;
	string ans = "";
	string return_to_menu;
	bool finished = false;

	cout << "*** TEMPERATURE CONVERSION MENU ***\n\n\n";

	while (finished == false)
	{

		cout << "Type in your response\n"
		<< "[FtC] -- Fahrenheit to Celsius\n"
		<< "[CtF] -- Celsius to Fahrenheit\n"
		<< "[FtK] -- Fahrenheit to Kelvin\n"
		<< "[KtF] -- Kelvin to Fahrenheit\n"
		<< "[CtK] -- Celsius to Kelvin\n"
		<< "[KtC] -- Kelvin to Celsius\n";
	cin >> ans;


		if (((ans[0] == 'f' || ans[0] == 'F') && (ans[2] == 'C' || ans[2] == 'c'))) //"[FtC] -- Fahrenheit to Celsius\n"
		{
			double Fahrenheit = 0;

			cout << "Enter Degrees in Fahrenheit\n";
			cin >> Fahrenheit;

			cout << Fahrenheit << " F is : " << tempMain.fahToCel(Fahrenheit) << " C\n";

			cout << "Would you like to return to the menu? Yes or No\n";
			cin >> return_to_menu;

			if (return_to_menu[0] == 'n' || return_to_menu[0] == 'N')
			{
				finished = true;
			}


		}
		else if (((ans[0] == 'c' || ans[0] == 'C') && (ans[2] == 'f' || ans[2] == 'F'))) //"[CtF] -- Celsius to Fahrenheit\n"
		{

			double Celsius = 0;

			cout << "Enter Degrees in Celsius\n";
			cin >> Celsius;

			cout << Celsius << " C is : " << tempMain.celToFah(Celsius) << " F\n";

			cout << "Would you like to return to the menu? Yes or No\n";
			cin >> return_to_menu;


			if (return_to_menu[0] == 'n' || return_to_menu[0] == 'N')
			{
				finished = true;
			}
		}
		else if (((ans[0] == 'F' || ans[0] == 'f') && (ans[2] == 'k' || ans[2] == 'K'))) //"[FtK] -- Fahrenheit to Kelvin\n"
		{

			double Fahren = 0;

			cout << "Enter Degrees in Fahrenheit\n";

			cin >> Fahren;

			cout << Fahren << " F is : " << tempMain.fahToKelvin(Fahren) << " K\n";

			cout << "Would you like to return to the menu? Yes or No\n";
			cin >> return_to_menu;


			if (return_to_menu[0] == 'n' || return_to_menu[0] == 'N')
			{
				finished = true;
			}
		}
		else if (((ans[0] == 'K' || ans[0] == 'k') && (ans[2] == 'f' || ans[2] == 'F'))) //"[KtF] -- Kelvin to Fahrenheit\n"
		{

			double Kelvin = 0;

			cout << "Enter Kelvin\n";

			cin >> Kelvin;

			cout << Kelvin << " K is : " << tempMain.kelvinToFah(Kelvin) << " F\n";

			cout << "Would you like to return to the menu? Yes or No\n";
			cin >> return_to_menu;


			if (return_to_menu[0] == 'n' || return_to_menu[0] == 'N')
			{
				finished = true;
			}
		}
		else if (((ans[0] == 'c' || ans[0] == 'C') && (ans[2] == 'k' || ans[2] == 'K'))) //"[CtK] -- Celsius to Kelvin\n"
		{

			double Celsius = 0;

			cout << "Enter Degrees in Calsius\n";

			cin >> Celsius;

			cout << Celsius << " C is : " << tempMain.celToKelvin(Celsius) << " K\n";


			cout << "Would you like to return to the menu? Yes or No\n";
			cin >> return_to_menu;


			if (return_to_menu[0] == 'n' || return_to_menu[0] == 'N')
			{
				finished = true;
			}
		}
		else if (((ans[0] == 'k' || ans[0] == 'K') && (ans[2] == 'c' || ans[2] == 'C'))) //"[KtC] -- Kelvin to Celsius\n";
		{

			double Kelvin = 0;

			cout << "Enter Kelvin\n";

			cin >> Kelvin;

			cout << Kelvin << " K is : " << tempMain.kelvinToCel(Kelvin) << " C\n";


			cout << "Would you like to return to the menu? Yes or No\n";
			cin >> return_to_menu;


			if (return_to_menu[0] == 'n' || return_to_menu[0] == 'N')
			{
				finished = true;
			}
		}
		else //invalid
		{

			cerr << "ERROR Invalid Input\n\n";

			cout << "Would you like to return to the menu? Yes or No\n";
			cin >> return_to_menu;


			if (return_to_menu[0] == 'n' || return_to_menu[0] == 'N')
			{
				finished = true;
			}
		}

	}//end While
}