#include <iostream>
 using namespace std;
 
int A, B, C, rem,integer_division;
 void ex_1(){
 
     cout << "Введите целое число A: ";
     cin >> A;
     cout << "Введите целое число B: ";
     cin >> B;
     cout << "Введите целое число C: ";
     cin >> C;
     rem = (A - B) % C;
     cout << rem;
 }
 void ex_2(){
      cout << "Введите целое число A: ";
     cin >> A;
     cout << "Введите целое число B: ";
     cin >> B;
     cout << "Введите целое число C: ";
     cin >> C;
     integer_division = A / (B + C);
     cout << integer_division;
 }
 
 int main() {
     int choice;
     
     cout << "\nВыберите операцию:\n";
     cout << "1 - Остаток от деления (A - B) на C\n";
     cout << "2 - Целая часть от деления A на (B + C)\n";
     cout << "Ваш выбор: ";
     cin >> choice;
     
     switch (choice) {
         case 1: {
             ex_1();
             break;
         }
         case 2: {
             ex_2();
             break;
         }
         default:
             cout << "Некорректный выбор операции!" << endl;
     }
     
     return 0;
 }