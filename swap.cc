#include"bits/stdc++.h"
using namespace std;
int main(){
unsigned int i;
vector<int> first (3,100);
vector<int> second (5,200);
// three ints with a value of 100
// five ints with a value of 200
first.swap(second);
cout << "first contains:";
for (i=0; i<first.size(); i++) cout << " " << first[i];
cout << "\nsecond contains:";
for (i=0; i<second.size(); i++) cout << " " << second[i];
return 0;}
