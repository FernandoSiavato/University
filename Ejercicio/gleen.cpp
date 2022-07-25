#include<iostream>
using namespace std;
int main() {
int num, first, second, total = 0;

//28175423
cin >> num;
first = num % 10; // 3
num /= 10; // 2817542
second = num % 10; // 2
num /= 10; //281754
total += (first - second); // 1
first = num % 10; // 4
num /= 10; //28175
second = num % 10; // 5
num /= 10; //2817
total += (first - second); // -1
first = num % 10; //7
num /= 10; //281
second = num % 10; //1
num /= 10; //28
total += (first - second); // 6
first = num % 10; //8
num /= 10; // 2
second = num % 10; //2
num /= 10; //0
total += (first - second); // 6
cout << total << endl;
return 0;
}
