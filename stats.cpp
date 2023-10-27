/* Write a program stats.cpp which asks the user for two numbers and then outputs the following
basic statistics:
• the sum
• the difference
• the product
• the distance (the absolute value of the difference) [hint: use abs() to calculate the absolute
value]
• the mean average */
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, y;
    cout << "Please enter two numbers: ";
    cin >> x >> y;
    int sum = x + y;
    int subtract = x - y;
    int product = x * y;
    int distance = abs(subtract);
    int mean_average = sum / 2.0;; 
    cout << "The sum of " << x << " and " << y << " is: " << sum << endl;
    cout << "The difference between " << x << " and " << y << " is: " << subtract << endl;
    cout << "The product of " << x << " and " << y << " is: " << product << endl;
    cout << "The distance between " << x << " and " << y << " is: " << distance << endl;
    cout << "The mean average of " << x << " and " << y << " is: " << mean_average << endl;
    return 0;
}
