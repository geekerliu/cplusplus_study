// strngbad.cpp -- StringBad class methods
#include <cstring>                    // string.h for some
#include "StringBad.hpp"
using std::cout;

// initializing static class member
int StringBad::num_strings = 0;

// class methods

// construct StringBad from C string
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);             // set size
    str = new char[len + 1];          // allot storage
    std::strcpy(str, s);              // initialize pointer
    num_strings++;                    // set object count
    cout << num_strings << ": \"" << str
    << "\" object created\n";    // For Your Information
}

StringBad::StringBad()                // default constructor
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");          // default string
    num_strings++;
    cout << num_strings << ": \"" << str
    << "\" default object created\n";  // FYI
}

StringBad::~StringBad()               // necessary destructor
{
    cout << "\"" << str << "\" object deleted, ";    // FYI
    --num_strings;                    // required
    cout << num_strings << " left\n"; // FYI
    delete [] str;                    // required
}

// 重写默认的复制构造函数
StringBad::StringBad(const StringBad &st)
{
    num_strings++;
    // 进行深度复制
    len = st.len;
    str = new char [len+1];
    std::strcpy(str, st.str);
    cout << num_strings << ": \"" << str
        << "\" object created\n";
}

// 重写默认的赋值运算符
StringBad & StringBad::operator=(const StringBad &st)
{
    if (this == &st) { // object assigned to itself
        return *this; // all done
    }
    delete [] str; //free old string
    len = st.len;
    str = new char [len+1];
    std::strcpy(str, st.str);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}