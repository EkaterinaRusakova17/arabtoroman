/************************************************************
* Русакова Екатерина Алексеевна, ПИ-231                     *
* Share-Link: https://www.onlinegdb.com/online_c++_compiler *
* Дата: 21.11.2023                                          *
*************************************************************/

#include <iostream>
#include <string>

using namespace std;

string ArabicToRoman(int num) {
  int Arabic[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
  string Roman[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
  int index = 12;
  string res = "";
  
  while (num > 0) {
    while (Arabic[index] > num) { 
      --index; 
    }
    num -= Arabic[index];
    res += Roman[index];
  }
  return res;
}

int main() {
  int number;
  cin >> number;
  cout << "Римское число: " << ArabicToRoman(number);
  cout << "Арабское число: " << number << endl;
  return 0;
}
