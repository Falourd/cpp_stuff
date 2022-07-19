#include <iostream>
#include <string>

#include "basic.hpp"

void print(int i)
{
    std::cout << i << "\n";
}

void print(std::string msg)
{
    std::cout << msg << "\n";
}

void HelloWorld()
{
    print("Hello, World!");
    print(42);
    print(0b10101010); // binary format
    print(0xBAD1234); // Hexa format
    print(0334); // Octal format
}

void Arithmetic()
{
    int plus = 1 + 3;
    int unary_plus = +3;
    int minus = 1 - 3;
    int unary_minus = -3;
    int multiply = 2 * 3;
    int divide = 3 / 2;
    int remainder = 3 % 2;
}

void Comparaison()
{
    bool equal = 1 == 1;
    bool not_equal = 1 != 0;
    bool less_than = 1 < 2;
    bool greater_than = 2 > 1;
    bool less_than_equal = 2 <= 2;
    bool greater_than_equal = 2 >= 2;
}

void Logical()
{
    /*
    bitwise and             : x & y
    bitwise or              : x | y
    bitwise exclusive or    : x^y
    bitwise complement      : ~x
    logical and             : x && y
    logical or              : x || y
    logical not             : !x
    */
}

void Operation()
{
    int x = 0;
    int y = 1;
    x += y;
    ++x;
    x -= y;
    --x;
    x *= y;
    x /= y;
    x %= y;
}

void initialization()
{
    /*
    double d1 = 2.3;
    double d2 {2.3}
    double d3 = {2.3} // = is optionnal with braces
    complex<double> z = 1;
    complex<double> z2 {d1, d2};
    complex<double> z3 = {d1, d2};

    std::vector<int> v {1,2,3,4,5,6};
    int i1 = 7.8 // convert to 7
    int i2 {7.8} // error floating point conversion
    */
}

void Scope_and_Lifetime()
{
    /*
    Local scope     : A name declare in function
    Class scope     : member name
    Namespace scope : namespace member name
    Global          : global namespace
    */
}

const int var = 17;
constexpr double square(double x) { return x * x;}
constexpr double max = 1.4 * square(var);
void Constant()
{
    /*
    const : meaning -> not change this value
        use it at run time
    constexpr : meaning -> to be evaluated at compile time
        use it to specify constant,
        placement in read-only memory
        performance
    */
   print(max);
}

void pointer_array_reference()
{
    //[] array of
    char v[6]; // array of 6 characters
    // v[0] to v[5]
    // Size of an array must be always a constant
    //* pointer to
    char* p; // pointer to characters

    // A pointer variable can hold address of an object of the appropriate type
    p = &v[3];      // p point to v's fourth element
    char x = *p;    // *p is the object that p point to
    print(p);
    print(x);

    int v2[] = {0,1,2,3,4,5,6,7,8,9};
    for (auto&x : v2) ++x;
    for (auto&x : v2) print(x);
    // use const & (reference) when you don't want the cost of copying, but don't ant to modify an argument
    // double sum (const vector<double>&)

/* The Null Pointer */
// use nullptr and check if all variable is initialize
}

void Test()
{
    // if       statement
    // switch   statement
    // while    loops
    // for      loops
}

void chapOne()
{
    HelloWorld();
    Arithmetic();
    Constant();
    pointer_array_reference();
}
 

/************ utils function ************/
bool accept()
{
    std::cout << "Do you want to proceed (y or n)\n";
    char answer = 0;
    std::cin >> answer;

    if ('y' == answer) return true;
    return false;
}

bool accept2()
{
    std::cout << "Do you want to proceed (y or n)\n";
    char answer = 0;
    std::cin >> answer;

    switch(answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::cout << "I'll take that for a no.\n";
            return false;
    }
}

class Point {
    public:
        int x;
        int y;
};

void action()
{
    int i = 0;
    while(true) {
        std::cout << "enter action:\n";
        std::string act;
        std::cin >> act;
        Point delta {0,0};
        for (char ch : act) {
            switch(ch) {
                case 'u': //up
                case 'n': //north
                    ++delta.y;
                    break;
                case 'r': // right
                case 'e': // east
                    ++delta.x;
                    break;
                // ... more actions ...
                default:
                    std::cout << "I freeze!\n";
            }
            // move (current + delta*scale);
            // update_display();

        }
        i++;
        if (i > 100) break;
    }
}
