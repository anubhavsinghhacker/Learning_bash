#!/bin/bash
echo "Wait command" &
process_id=$!
wait $process_id
echo "Exited with status $?"
#include <iostream>

using namespace std;

#include "Complex.h"

using namespace std;

int main()

{

    Complex c(2, 2);

    cout << c.getReal() << "+" << c.getImg() << "j" << endl;

    Complex c1(3, 4);

    cout << "+" << endl;

    cout << c1.getReal() << "+" << c1.getImg() << "j" << endl;

    Complex c2;

    c2 = c + c1;

    cout << "_________\n";

    cout << c2.getReal() << "+" << c2.getImg() << "j" << endl

         << endl

         << endl;

    c2 = c - c1;

