#include <iostream>
#include <cstring>
#include <map>
using namespace std;
map<string, int>st;

int main() {
	int cnt = 0;
	string a = "0100110001010001";
	int len = a.length();
	for (int i = 0; i < len; i++) {
		for (int j = 1; j <= len; j++) {
			string ss = a.substr(i, j);
			if (st.count(ss) == 0) {
				st[ss] = 1;
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
