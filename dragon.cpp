#include <iostream>
#include <string>

using namespace std;

struct dragon{
	string name;
	int wings;
	int claws;
	int fire;
};

int main(){

	dragon beast[4];

	dragon nightfury;
	nightfury.name = "Nightfury";
	nightfury.wings = 2;
	nightfury.claws = 4;
	nightfury.fire = 10;

	dragon trogdor;
	trogdor.name = "Burninator";
	trogdor.wings = 1;
	trogdor.claws = 3;
	trogdor.fire = 9000;

	dragon puff;
	puff.name = "Puff";
	puff.wings = 2;
	puff.claws = 4;
	puff.fire = 0;

	dragon smaug;
	smaug.name = "Smaug";
	smaug.wings = 2;
	smaug.claws = 4;
	smaug.fire = 90;
	

	beast[0] = nightfury;
	beast[1] = trogdor;
	beast[2] = puff;
	beast[3] = smaug;

	for (int i = 0; i <= 3; i++){
		cout << "Name: " << beast[i].name << endl;
		cout << "Wings: " << beast[i].wings << endl;
		cout << "Claws: " << beast[i].claws << endl;
		cout << "FIRE POWAAAA!1!!: " << beast[i].fire << endl;
		cout << endl;
	}

	return 0;
}
