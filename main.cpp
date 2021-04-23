#include <iostream>
using namespace std;
string ReduceString(string input, int position, int numOfChars);

int main() {
    string input;
    cout << "Enter a string to be reduced: ";
    cin >> input;
    int pos = 3;
    int numChars = 3;
    cout << "The last 3 characters of your string are: " << ReduceString(input, pos, numChars);
    return 0;
}

   /* position is used to pick where in the string to start from, and numOfChars is how many characters to "keep."
   In this example I use this to find the last 3 characters of my string. This can be useful for numbers, i.e. if
   you want to compare the last n digits of a student id to another number, you can take the reduced string
   and use stoi() to convert it back to an int. */

string ReduceString(string input, int position, int numOfChars) {
    string reduced = input.substr(input.size() - position, numOfChars);
    return reduced;
}