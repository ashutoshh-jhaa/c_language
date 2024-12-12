#include "iostream"
using namespace std;
int findPower(int num, int power) {
  if (power == 0) {
    return 1;
  }
  num *= findPower(num, power - 1);
  return num;
}

int main() {
  int num, power;
  cout << "Enter any Number";
  cin >> num;
  cout << "Enter any Power";
  cin >> power;
  cout << findPower(num, power);
}
