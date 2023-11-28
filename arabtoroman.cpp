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

int main() {
  char roman;
  int arabic = 0;
  cout << "Римское число: ";
  while (cin.get(roman)) {
    if (arabic > 100) {
      cout << "" << endl;
      return 0;
    }
  
    else if (roman == 'C') {
      roman = cin.peek();
      if (roman == 'M' || roman == 'D') {
        arabic = arabic - 100;
      } else {
        arabic = arabic + 100;
      }
    }

    else if (roman == 'L') {
      roman = cin.peek();
      if (roman == 'M' || roman == 'D' || roman == 'C') {
        arabic = arabic - 50;
        continue;
      } else {
        arabic = arabic + 50;
        continue;
      }
    }
    
    else if (roman == 'X') {
      roman = cin.peek();
      if (roman == 'M' || roman == 'D' || roman == 'C' || roman == 'L') {
        arabic = arabic - 10;
        continue;
      } else {
        arabic = arabic + 10;
        continue;
      }
    }
    
    else if (roman == 'V') {
      roman = cin.peek();
      if (roman == 'M' || roman == 'D' || roman == 'C' || roman == 'L' || roman == 'X') {
        arabic = arabic - 5;
        continue;
      } else {
        arabic = arabic + 5;
        continue;
      }
    }
    
    else if (roman == 'I') {
      roman = cin.peek();
      if (roman == 'M' || roman == 'D' || roman == 'C' || roman == 'L'|| roman == 'X' || roman == 'V') {
        arabic = arabic - 1;
        continue;
      } else {
        arabic = arabic + 1;
        continue;
      }
    } else {
    break;
    }
  }
  cout << arabic << endl;
  return 0;
}
