###You can run bash script from the terminal or by executing any bash file. Run the following command from the terminal to execute a very simple bash statement. The output of the command will be ‘Hello World’. 

$ echo "Hello World" 
#include "Complex.h"

Complex::Complex()

{

    this->img=0;

    this->real=0;

}

Complex::Complex(int real,int img)

{

    this->real=real;

    this->img=img;

}

Complex Complex::operator+(Complex c)

{

    Complex com(this->real+c.real,this->img+c.img);

    return com;

}

Complex Complex::operator-(Complex c)

{

    Complex com(this->real-c.real,this->img-c.img);

    return com;

}

int Complex::getImg()

{

    return this->img;

}

int Complex::getReal()

{

    return this->real;

}

