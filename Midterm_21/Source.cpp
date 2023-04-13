#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

void flush(queue<int>& q, ofstream& out) {
	while (!q.empty()) {
		out << q.front() << " ";
		q.pop();
	}
}

void copy(ifstream& in, ofstream& out) {
	queue<int> q;
	int n;
	while (in >> n) {
		q.push(n);
		if (q.size() == 5) {
			flush(q, out);
		}
	}
}

int main() {
	ofstream out("output.txt");
	ifstream in("numbers.txt");
	if (!in||!out) {

		cout << "404" << endl;
		return 1;
	}
	


	in.close();
	out.close();

	return 0;
}