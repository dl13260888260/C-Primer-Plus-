#include <iostream>
#include <array>
#include <string>

using namespace std;

const int ArSize = 101;

struct car {
	string producer;
	int year;
};

void question1() 
{
	int x, y;
	int sum = 0;
	int temp = 0;
	cout << "please input two interger" << endl;
	cin >> x;
	cin >> y;

	if (x > y)
	{
		for (temp = y; temp <= x; temp++)
		{
			sum += temp;
		}
	}
	else {
		for (temp = x; temp <= y; temp++)
		{
			sum += temp;
		}
	}

	cout << sum << endl;
}

void question2() {
	array<long double, ArSize>factorials; //使用array创建16个long double
	factorials[1] = factorials[0] = (long double)1;

	for (int i = 2; i < ArSize; i++)
	{
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i < ArSize; i++)
	{
		cout << i << "!=" << factorials[i] << endl;
	}
}

void question3() {
	cout << "please input a interger" << endl;

	int x ;
	int sum = 0;
	while (1)
	{
		cin >> x;
		if (x != 0)
		{
			sum += x;
			cout << "The sum of all the numbers so far is:" << sum << endl;
		}
		else
		{
			break;
		}
	}
}

void question4()
{
	double principal = 100;
	double Daphne_total = principal;
	double Cleo_total = principal;

	int i = 1;

	while (Cleo_total <= Daphne_total)
	{
		Daphne_total += 10;
		Cleo_total = Cleo_total * (1 + 0.05);
		i++;
	}

	cout << i << " years later, Cleo has more money than Daphnne" << endl;
	cout << "Daphnne's money is " << Daphne_total << "$" << endl;
	cout << "Cleo's money is " << Cleo_total << "$" << endl;
}

void question5() {
	 const char *month[]= {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug",
		"Sept","Oct","Nov","Dec"};

	 int sales[12];
	 
	 int i = 0;
	 int total = 0;

	 while (i < 12)
	 {
		 cout << "please input " << month[i] << "'s sales: ";
		 cin >> sales[i];
		 i++;
	 }

	 i = 0;

	 while (i < 12)
	 {
		 total += sales[i];
		 i++;
	 }

	 cout << total << endl;
}

void question6() {
	const char *month[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug",
	   "Sept","Oct","Nov","Dec" };

	int sales[3][12];

	int i = 0;
	int y = 0;

	int total = 0;

	while (i < 3)
	{
		cout << "please input " << month[y] << "'s sales: ";
		cin >> sales[i][y];
		y++;
		
		if (y > 11)
		{
			y = 0;
			i++;			
		}
	}

	i = 0;
	y = 0;

	while (i < 3)
	{
		total += sales[i][y];
		y++;
		if (y > 11)
		{
			y = 0;
			i++;
		}
	}

	cout << total << endl;
}

void question7() {
	int total_car;
	int i = 0;

	cout << "How many cars do you wish catalog" << endl;
	cin >> total_car;

	car *car_information = new car [total_car]; //用new来创建动态数组、

	while (i < total_car)
	{
		cout << "Car #" << i+1 << ":\n";
		cout << "Please enter the make:\n";
		cin >> car_information[i].producer;
		cout << "Please enter the year made:";
		cin >> car_information[i].year;
		i++;
	}
	
	cout << "Here is your collection:\n";

	for (i = 0; i < total_car; i++)
	{
		cout << car_information[i].year << " " << car_information[i].producer << endl;
	}

	delete[] car_information;
}

void question8() {
	char word[10];
	int i = 0;
	cout << "Enter words (to stop, type the word done):\n";
	
	cin >> word;
	while (strcmp(word,"done") != 0)
	{
		i++;
		cin >> word;
	}

	cout << "You entered a total of " << i << " words\n";
}

void question9() {
	string word;
	int i = 0;
	cout << "Enter words (to stop, type the word done):\n";

	cin >> word;
	while (word != "done")
	{
		i++;
		cin >> word;
	}

	cout << "You entered a total of " << i << " words\n";
}

void question10() {
	int rows;
	cout << "Enter number of rows: ";
	cin >> rows;


	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= rows - i; j++)
		{
			cout << ".";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{

	question10();

	system("pause");
	
	return 0;
}