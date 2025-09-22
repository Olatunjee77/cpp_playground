#include <iostream>
using namespace std;

void swapWord(string &x , string &y){
    string c;
    c = x;
    x = y;
    y = c;
}

int main(){
    string x, y;
    string firstName, lastName;

    cout << "Enter the first word: ";
    cin >> x;
    cout << "Enter the second word: ";
    cin >> y;
    cout << endl;
    cout <<"Enter your first name: ";
    cin >> firstName;
    cout << "Enter your second name: ";
    cin >> lastName;
    cout << endl;

    cout<< "Before swapping" << endl << "====================" << endl;
    cout << "First word: " << x << endl;
    cout << "Second word: " << y << endl;
    cout << "First name: " << firstName << endl;    
    cout << "Last name: " << lastName << endl << endl;

    swapWord(x, y);
    swapWord(firstName, lastName);

    cout<< "After swapping" << endl << "====================" << endl;
    cout << "First word: " << x << endl;
    cout << "Second word: " << y << endl;
    cout << "First name: " << firstName << endl;    
    cout << "Last name: " << lastName << endl;

    cout << "Testing pull request" << endl;
    cout << "Testing pull request" << endl;


    return 0;
}