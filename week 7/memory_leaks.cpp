// ============================================================
// ACTIVITY 3A: THE MEMORY LEAK
// Learning Outcome: Evaluate memory leak risks
// ============================================================

#include <iostream>
using namespace std;

// A function that allocates memory but forgets to delete it
void createLeak() {
    // 'new int' allocates memory on the HEAP (dynamic memory) for one integer.
    // It returns the memory address, which we store in 'ptr'.
    int* ptr = new int(42);

    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    // The local variable 'ptr' is destroyed, but the memory on the heap
    // it was pointing to is NEVER freed. We have lost the address,
    // and the memory is now unreachable but still reserved by the OS.
}

// A corrected version that frees the allocated heap memory
void fixLeak() {
    int* ptr = new int(42);

    cout << "Inside fixed function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    delete ptr; // Free the heap memory
    ptr = nullptr; // Good practice to avoid dangling pointer

    cout << "Memory has been deleted successfully." << endl;
}

int main() {
    cout << "Calling function that leaks memory..." << endl;
    createLeak();
    cout << "Function finished. The memory is now leaked." << endl;
    cout << "--- Testing the Fix ---" << endl;
    fixLeak();
    // If we called createLeak() in a loop a million times,
    // the program would consume gigabytes of RAM and crash.

    return 0;
}