#include <iostream>
#include <format>

using namespace std;

int main() {
    string student{ "Brian" };
    int grade{ 97 };

    cout << format("{}'s grade is {}\n", student, grade);
}