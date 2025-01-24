//
//  main.cpp
//  Activity one - cis 25
//
//  Created by Subigya Parajuli on 1/23/25.
//


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a, b, temp;
    
    cout << "Please enter a number (input for a): ";
    cin >> a;
    
    cout << "Please enter a second number (input for b): ";
    cin >> b;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "Your swapped values are: a = " << a << " & b = " << b << endl;
    
    return 0;
}
