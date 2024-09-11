#include <iostream>
using namespace std;

// Function that takes a pointer and modifies the value at that memory address
void modifyValue(int *ptr) {
    *ptr = 100; // Dereference the pointer and modify the value it points to
}

// Function demonstrating double pointers (pointer to pointer)
void doublePointerDemo(int **doublePtr) {
    **doublePtr = 200; // Dereference twice to modify the actual value
}

int main() {
    // 1. Basic Pointer Declaration and Initialization
    int num = 10;
    int *p = &num;  // p is a pointer to an integer (holds the address of num)

    cout << "Basic Pointer Declaration:" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer p stores the address: " << p << endl;
    cout << "Value at the address stored in p: " << *p << endl;

    // 2. Modifying Values via Pointers (Dereferencing)
    *p = 20;  // Changing value of num using pointer p
    cout << "\nAfter modifying value through pointer:" << endl;
    cout << "Value of num: " << num << endl;

    // 3. Pointers and Arrays
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr; // Arrays decay to pointers
    cout << "\nPointer and Array Demonstration:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(arrPtr + i) << endl;  // Using pointer arithmetic
    }

    // 4. Pointer Arithmetic
    cout << "\nPointer Arithmetic:" << endl;
    cout << "Address in arrPtr: " << arrPtr << endl;
    cout << "Address in arrPtr + 1: " << arrPtr + 1 << endl;
    cout << "Value at arrPtr + 1: " << *(arrPtr + 1) << endl;

    // 5. Pointers to Pointers (Double Pointers)
    int **doublePtr = &p;  // doublePtr is a pointer to pointer p
    cout << "\nDouble Pointer (Pointer to Pointer) Demonstration:" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value using double pointer: " << **doublePtr << endl;

    // Modify value using a double pointer
    doublePointerDemo(doublePtr);
    cout << "Value of num after doublePointerDemo: " << num << endl;

    // 6. Functions and Pointers (Passing by Reference)
    cout << "\nFunction and Pointer Demonstration:" << endl;
    modifyValue(p); // Pass pointer to modify the value
    cout << "Value of num after modifyValue(): " << num << endl;

    // 7. Dynamic Memory Allocation using Pointers
    int *dynamicPtr = new int;  // Dynamically allocate an integer
    *dynamicPtr = 50;
    cout << "\nDynamic Memory Allocation:" << endl;
    cout << "Value at dynamically allocated memory: " << *dynamicPtr << endl;
    delete dynamicPtr;  // Free dynamically allocated memory

    // 8. Dynamic Arrays with Pointers
    int *dynamicArray = new int[5];  // Dynamically allocate an array
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i + 10;  // Assign values to dynamic array
    }
    cout << "\nDynamically Allocated Array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "dynamicArray[" << i << "] = " << dynamicArray[i] << endl;
    }
    delete[] dynamicArray;  // Free dynamically allocated array memory

    return 0;
}
