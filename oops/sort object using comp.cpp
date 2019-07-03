#include<bits/stdc++.h>

using namespace std;

class Person{
public:
	string name;
	int age;
	Person(){
		cin>>name>>age;
	}
	void print(){
		cout<<name<<" "<<age<<'\n';
	}
};

bool comp(Person a,Person b){
	return a.age < b.age;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	Person p[4];
	sort(p,p+4,comp);
	for(int i=0;i<4;i++){
	 	p[i].print();       
	}
}
        