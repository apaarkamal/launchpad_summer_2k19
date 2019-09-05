#include<bits/stdc++.h>

using namespace std;

int main()
{
	//  code starts
	int start , end , diff;
	cin >> start >> end >> diff;
	for (int i = start ; i <= end; i += diff) {
		int cel = (i - 32) * 5;
		cel /= 9;
		cout << i << " " << cel << '\n';
	}
}
