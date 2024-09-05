#include <iostream>
using namespace std;

int main()
{

    /*
    cout << "Time of day calculator\n";
    cout << "Please, input your time (hour only): ";

    short user_input = 0;
    cin >> user_input;

    if (user_input > 6 && user_input < 13) {
        cout << "Good morning!";
    }
    else if (user_input > 12 && user_input < 18) {
        cout << "Good day!";
    }
    else if (user_input > 17 && user_input < 22) {
        cout << "Good evening!";
    }
    else if (user_input == 22 || user_input == 23 || user_input == 24 || user_input < 7) {
        cout << "Good night!";
    }
    else {
        cout << "Error";
    }
    */

    // ---

    /*
    cout << "\"Lucky\" ticket number calculator\n";
    cout << "Please, insert your tram number: ";

    int user_input = 0;
    cin >> user_input;

    if (user_input >= 100000 && user_input <= 999999) {
        int a = user_input % 10;
        int b = user_input / 10 % 10;
        int c = user_input / 100 % 10;
        int d = user_input / 1000 % 10;
        int e = user_input / 10000 % 10;
        int f = user_input / 100000;
        if ((a+b+c) == (d+e+f)) {
            cout << "Your tram ticket is \"Lucky\"\n";
        }
        else {
            cout << "Your tram ticket is not \"Lucky\"\n";
        }
    }
    else {
        cout << "Error";
    }
    */

    // ---

    /*
    cout << "Please, input day number: ";
    short user_input = 0;
    cin >> user_input;
    */

    /*
    if (user_input == 1) {
        cout << "Day of the week: Monday";
    }
    else if (user_input == 2) {
        cout << "Day of the week: Tuesday";
    }
    else if (user_input == 3) {
        cout << "Day of the week: Wednesday";
    }
    else if (user_input == 4) {
        cout << "Day of the week: Thursday";
    }
    else if (user_input == 5) {
        cout << "Day of the week: Friday";
    }
    else if (user_input == 6) {
        cout << "Day of the week: Saturday";
    }
    else if (user_input == 7) {
        cout << "Day of the week: Sunday";
    }
    else {
        cout << "Error";
    }
    */

    /*
    switch (user_input)
    {
    case 1:
        cout << "Day of the week: Monday";
        break;
    case 2:
        cout << "Day of the week: Tuesday";
        break;
    case 3:
        cout << "Day of the week: Wednesday";
        break;
    case 4:
        cout << "Day of the week: Thursday";
        break;
    case 5:
        cout << "Day of the week: Friday";
        break;
    case 6:
        cout << "Day of the week: Saturday";
        break;
    case 7:
        cout << "Day of the week: Sunday";
        break;
    default:
        cout << "Error";
        break;
    }
    */
    

    // ---

    
    /*
    cout << "Natural number check\n";
    double user_input = 0;

    cout << "Please, input number: ";
    cin >> user_input;
    
    int input_converted = (int)user_input; // Converting to int to get number before .
    int result = (user_input - input_converted) * 100; // Finding number after the .

    if (result > 0) { // If number after . is bigger then zero then input number was not natural
        cout << "Input value " << user_input << " is not a natural number\n";
    }
    else if (result == 0) { // If number after . is equal 0 then input number is natural
        cout << "Input value " << user_input << " is a natural number\n";
    }
    else {
        cout << "Error";
    }
    */
    
    // ---

    /*
    cout << "Line parallel calculator\n";
    
    cout << "Input X1: ";
    double x1 = 0;
    cin >> x1;
    cout << "Input Y1: ";
    double y1 = 0;
    cin >> y1;

    cout << "Input X2: ";
    double x2 = 0;
    cin >> x2;
    cout << "Input Y2: ";
    double y2 = 0;
    cin >> y2;

    if (x1 == x2) { // If x1 == x2 are equal - Parallel to Y
        cout << "Line is parallel to Y axis\n";
    }
    else if (y1 == y2) { // If y1 == y2 are equal - Parallel to X
        cout << "Line is parallel to X axis\n";
    }
    else {
        cout << "Error";
    }
    */
    
    // ---
    
    /*
    cout << "Modulo calculator\n";
    cout << "Input number: ";
    int number = 0;
    cin >> number;
    
    if (number > 0 && number != 0) { // If number is bigger then 0 and is positive, then the module is the input number
        cout << "Modulo is " << number;
    }
    else if (number < 0 && number != 0) { // If number is not 0 and is negative, then module is positive input number
        cout << "Modulo is " << abs(number); // abs(variable) for converting int to positive
    }
    else if (number == 0) { // Modulo for 0 is 0
        cout << "Modulo for 0 is 0";
    }
    else {
        cout << "Error";
    }
    */
    
    // ---
    
    /*
    short menu = 0;
    do {
        cout << "Calculator started.\nInput 1 - +\n      2 - -\n      3 - *\n      4 - /\n      5 - %\n      6 - Exit";
        cin >> menu;
        double number_1 = 0;
        double number_2 = 0;
        switch (menu) {
        case 1:
            cout << "Enter number 1: ";
            cin >> number_1;
            cout << "Enter number 2: ";
            cin >> number_2;
            cout << "Result: " << number_1 + number_2 << "\n";
            break;
        case 2:
            cout << "Enter number 1: ";
            cin >> number_1;
            cout << "Enter number 2: ";
            cin >> number_2;
            cout << "Result: " << number_1 - number_2 << "\n";
            break;
        case 3:
            cout << "Enter number 1: ";
            cin >> number_1;
            cout << "Enter number 2: ";
            cin >> number_2;
            cout << "Result: " << number_1 * number_2 << "\n";
            break;
        case 4:
            cout << "Enter number 1: ";
            cin >> number_1;
            cout << "Enter number 2: ";
            cin >> number_2;
            if (number_1 || number_2 == 0) {
                cout << "Can not divide by zero\n";
                break;
            }
            cout << "Result: " << number_1 / number_2 << "\n";
            break;
        case 5:
            cout << "Enter number 1: ";
            cin >> number_1;
            cout << "Enter number 2: ";
            cin >> number_2;
            cout << "Converting double to int\n"; // Converting to int because % can not be used for double type variables
            (int) number_1;
            (int) number_2;
            cout << "Result: " << number_1 % number_2 << "\n";
            break;
        case 6:
            cout << "Exiting...";
            break;
        default:
            cout << "Error";
            break;
        }
    } while (menu != 6);
    */
    
    // ---
    
    /*
    cout << "Positive / Negative / Zero number calculator\n";
    cout << "Please, enter a number: ";
    double number = 0;
    cin >> number;

    if (number > 0 && number != 0) {
        cout << "Number " << number << " is positive\n";
    }
    else if (number < 0 && number != 0) {
        cout << "Number " << number << " is negative\n";
    }
    else if (number == 0) {
        cout << "Number " << number << " is a zero\n";
    }
    else {
        cout << "Error\n";
    }
    */
    
    // ---
    
    /*
    cout << "Minimum number check\nPlease, enter 3 numbers\n";
    int number_1 = 0;
    cout << "1 number: ";
    cin >> number_1;
    int number_2 = 0;
    cout << "2 number: ";
    cin >> number_2;
    int number_3 = 0;
    cout << "3 number: ";
    cin >> number_3;

    if (number_1 < number_2 && number_1 < number_3) {
        cout << "Number " << number_1 << " is the minimum number.\n";
    }
    else if (number_2 < number_1 && number_2 < number_3) {
        cout << "Number " << number_2 << " is the minimum number.\n";
    }
    else if (number_3 < number_1 && number_3 < number_2) {
        cout << "Number " << number_3 << " is the minimum number.\n";
    }
    else {
        cout << "Error\n";
    }
    */
    
    // ---
    
    /*
    cout << "Even number check.\n" << "Please, enter a number: ";
    int Number = 0;
    cin >> Number;
    if (Number % 2 == 0) {
        cout << "Number " << Number << " is even\n";
    }
    else if ((Number % 2) != 0) {
        cout << "Number is not even!";
    }
    */
}