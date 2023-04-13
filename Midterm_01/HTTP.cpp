#include "HTTP.h"
#include <ctime>
#include <sstream>

string HTTP::gen_rnd()
{
	stringstream ss;
	for (int i = 0; i < 10; ++i) {
		char c(genNo(65, 90));
		ss << c;
	}
	return ss.str();
}

int HTTP::genNo(int min, int max)
{

	return rand()%(max-min+1)+min;
}

HTTP::HTTP(string url):HTTP(url,80)
{
	
}

HTTP::HTTP(string url, int port)
{
	this->url = url;
	this->port = port;
	srand(time(nullptr));
}

string HTTP::get()
{
	return gen_rnd();
}

string HTTP::post()
{
	return gen_rnd();
}
