#include"stdint.h"
#include <list>
#include <iostream>

using namespace std;

int main()
{

	std::list<const char*> yamanotesen = { "Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
	"Uguisudani","Nippori","Tabata","Komagome","Sugamo",
	"Otsuka","IkeBukuro","Mejiro","Takadanobaba","Shin-Okubo",
	"Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu",
	"Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
	"Hamamatsucho","Shimbashi","Yurakucho" };

	printf("-----1970”N-----\n");

	for (auto itr = yamanotesen.begin(); itr != yamanotesen.end(); ++itr) {

		cout << *itr << "\n";
	}

	printf("-----2019”N-----\n");

	for (list<const char*>::iterator itr = yamanotesen.begin(); itr != yamanotesen.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = yamanotesen.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	for (auto itr = yamanotesen.begin(); itr != yamanotesen.end(); ++itr) {

		cout << *itr << "\n";
	}

	printf("-----2022”N-----\n");

	for (list<const char*>::iterator itr = yamanotesen.begin(); itr != yamanotesen.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanotesen.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	for (auto itr = yamanotesen.begin(); itr != yamanotesen.end(); ++itr) {

		cout << *itr << "\n";
	}

	return 0;
}