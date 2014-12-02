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
	
