#pragma once
#include <string>
using namespace std;

class HTTP
{
private:
	int port;
	string url;
	string gen_rnd();
	int genNo(int min, int max);
public:
	HTTP(string url);
	HTTP(string url, int port);
	string get();
	string post();

};

