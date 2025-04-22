#include <iostream>

using namespace std;

/*

Task:

Create a simple calculator program

where the user can choose an option

between addition, subtraction,

multiplication, and division, and

the user can input two numbers

namely x and y!

Example:

Input: [Addition], 5, 10

Output: 15


*/

int main(int argc, char *argv[]) { int ops;

cout << "Welcome to calculator!\n";

cout << "What would you like to do?\n[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n\n>>> "; cin >> ops;

if (ops == 1) { float x, y, result;

cout << "\nEnter the first number: ";
cin >> x;
cout << "Enter the second number: ";
cin >> y;
result = x + y;

cout << "Here's your result:\n";
cout << x << " + " << y << " = " << result << endl;

} else if (ops == 2) { float x, y, result;

cout << "\nEnter the first number: ";
cin >> x;
cout << "Enter the second number: ";
cin >> y;
result = x - y;

cout << "Here's your result:\n";
cout << x << " - " << y << " = " << result << endl;

} else if (ops == 3) { float x, y, result;

cout << "\nEnter the first number: ";
cin >> x;
cout << "Enter the second number: ";
cin >> y;
result = x * y;

cout << "Here's your result:\n";
cout << x << " * " << y << " = " << result << endl;

} else if (ops == 4) { float x, y, result;

cout << "\nEnter the first number: ";
cin >> x;
cout << "Enter the second number: ";
cin >> y;

if (y == 0)
{
  cout << "Division by zero is not allowed." << endl;
}
else
{
  result = x / y;
  cout << "Here's your result:\n";
  cout << x << " / " << y << " = " << result << endl;
}

} else { cout << "Invalid option selected." << endl; }

return 0; }

