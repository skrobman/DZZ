// Написать программу, которая будет складывать, вычитать, умножать или делить два числа. 
//Числа и знак операции вводятся пользователем. После выполнения вычисления программа не должна завершаться, а должна запрашивать новые данные для вычислений.
//Завершение программы должно выполняться при вводе символа ‘0’ в качестве знака операции. 
//Если пользователь вводит неверный знак (не ‘0’, ‘+’, ‘-‘, ‘*’, ‘/’), то программа должна сообщать ему об ошибке и снова запрашивать знак операции.
//Также сообщать пользователю о невозможности деления на ноль, если он ввел 0 в качестве делителя.

// Входные данные:
// 1. Ввод числа осуществляется с клавиатуры.
// 2. Ввод знака осуществляется с клавиатуры 
// 3. Проверка на неверные знаки

// Основная задача: провести алгоритм, выполненный пользователем . [x]

// Промежуточные этапы:
// 1. Ввод числа с клавиатуры. [x]
// 2. Ввод знака с клавиатуры. [x]
// 3. Вывод информации на экран. [x]

// a. Защитить программу от ввода неверных значений. [x]
// b. UI. [x]

#include <iostream>

using namespace std;

int main()
{
	while (true) {

        int var1, var2, var3;

        cout << "Please, input first var: ";
        cin >> var1;

        cout << "Please, input second var: ";
        cin >> var2;

		char coun;

		cout << "+: summ of numbers, -: difference of numbers, *: multiplication of numbers, /: division of numbers, 0:exit " << endl;
		cin >> coun;

        switch (coun) {

        case '+':
            var3 = var1 + var2;
            cout << "Summ of your numbers is equal to " << " " << var3 << endl;
            break;

        case '-':
            var3 = var1 - var2;
            cout << "Difference of your numbers is equal to " << " " << var3 << endl;
            break;

        case '*':
            var3 = var1 * var2;
            cout << "Multiplication of your numbers is equal to " << " " << var3 << endl;
            break;

        case '/':
            var3 = var1 / var2;
            cout << "Division of your numbers is equal to " << " " << var3 << endl;
            break;

        case '0':
            return 0;

        default:
            cout << "Wrong symbol" << endl;
            break;

        }
	}
}