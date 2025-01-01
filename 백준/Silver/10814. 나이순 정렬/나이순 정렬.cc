#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct person {
    int age;
    string name;
};

int comp(person a, person b) {
    return a.age < b.age;
}

int main() {
	int n;
	cin >> n;
	person a[100000];
	
	for (int i = 0; i < n; i++) {
	    cin >> a[i].age >> a[i].name;
	}
	
	stable_sort(a, a + n, comp);
	
	for (int i = 0; i < n; i++) {
	    printf("%d %s\n", a[i].age, a[i].name.c_str());
	}
	
    return 0;
}