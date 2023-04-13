#include <iostream>
#include "HTTP.h"

using namespace std;

int main() {
	HTTP bla("https://www.bla.com", 443);
	cout << bla.post() << endl;
	

	return 0;
}