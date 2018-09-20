#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;
	cin >> first_name;
	cout << "Dear," << first_name << "!\n";
	cout << "How are you?Im fine. I miss you.\n When will you come back?\n";
	
	cout << "Please enter the name of another friend!\n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";

	char friend_sex = 0;
	cout << "Enter the sex of a friend!(f/m)\n";
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";

	int age;
	cout << "Please enter the age of the recipient\n";
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age <= 0) simple_error("You're kidding!");
	if (age >= 110) simple_error("You're kidding!");
	if (age <= 12)
		cout << "Next year you will be " << age+1 << ".\n";
	if (age == 17)
		cout << "Next year you will be able to vote.\n";
	if (age >= 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "\nYours sincerely, \n\n\nBenedek\n";
	return 0;
}
