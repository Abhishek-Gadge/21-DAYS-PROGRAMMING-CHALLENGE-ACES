//kickstart
#include<iostream>
using namespace std;

int main()
{
    int t;
	cin >> t;
	string s;
	for(int j = 1; j <= t; j++) {
		cin >> s;
		int kick_count = 0, n = s.length();
		string k = "KICK", st = "START";
		int i = 0, count = 0;
		while(i < n) {
			if(s[i] == 'K' && i + k.length() - 1 < n && s.substr(i, k.length()) == k) {
				kick_count++;
			}
			if(kick_count && s[i] == 'S' && i + st.length() - 1 < n && s.substr(i, st.length()) == st) {
				count += kick_count;
			}
			i++;
		}
		cout << "Case #" << j << ": " << count << endl;
	}
	return 0;    
}
