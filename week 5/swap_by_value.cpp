// ============================================================
// ACTIVITY 1: PASS-BY-VALUE - THE SWAP THAT DOESN'T SWAP
// Learning Outcome: Apply pass-by-value
// ============================================================

// Include the input/output library for cout and cin
#include <iostream>
using namespace std;

// ------------------------------------------------------------
// FUNCTION: swapByValue
// Purpose: Attempts to swap two integers
// Parameters: a and b (passed by value - copies are made)
// Returns: void (nothing)
// ------------------------------------------------------------
void swapByValue(int&a, int&b) {
    // Display the values inside the function before swapping

    cout << "Inside function - Before swapping: a = " << a << ", b = " << b << endl;
    // Declare a temporary variable to hold 'a'
    int temp = a; // Store the value of a in a temporary variable to hold  ''a'   a = b;        
    // Assign the value of b to a
    a=b;
    b = temp;    // Assign the value of temp (original a) to b
    // Display the values inside the function after swapping
    cout << "Inside function - After swapping: a = " << a << ", b = " << b << endl;
}

int main() {

    // Declare two integer variables in main
    int x = 10;
    int y = 20;

    // Display the values before calling the function
    cout << " Before calling swapByValue: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << " After calling swapByValue: x = " << x << ", y = " << y << endl;

// Explain why the values did not change
cout << "\nExplanation: The function received COPIES of x and y." << endl;
cout << "Changes made inside the function do not affect the originals." << endl;

// Return 0 to signal successful completion




    return 0;
}