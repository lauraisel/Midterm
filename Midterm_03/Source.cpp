#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct River {
	double WaterLevel;
	int year;
	River() {};
	River(double W, int Y) {
		WaterLevel = W;
		year = Y;
	}

};

template <typename T>
T convert(string& s) {
	stringstream ss(s);
	T  n;
	ss >> n;
	return n;

}

int main() {

	ifstream in("LakeHuron.csv");
	if (!in) {
		cout << "404" << endl;
	}

	string s;
	getline(in, s);
	vector<River> v;

	while (getline(in, s)) {
		stringstream ss(s);
		string s2;
		getline(ss, s2, ',');
		getline(ss, s2, ',');
		int year = convert<int>(s2);
		getline(ss, s2);
		double level = convert<double>(s2);
		v.push_back(River(level, year));
	}
	

	return 0;
}