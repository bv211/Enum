#include <iostream>
using namespace std;

enum WeaponType { Knife, Pistol, Ak47 };

void PrintWeapon(WeaponType weapon) {
	switch (weapon)
	{
	case Knife:
		cout << "Knife" << endl;
		break;
	case Pistol:
		cout << "Pistol" << endl;
		break;
	case Ak47:
		cout << "Ak-47" << endl;
		break;
	default:
		cout << "Wrong!" << endl;
		break;
	}
}
int main()
{
	WeaponType weapon{};

	cout << "Enter the weapon number" << endl;
	int tmpWeapon;

	cin >> tmpWeapon;
	weapon = (WeaponType)tmpWeapon;

	PrintWeapon(weapon);

	return 0;
}