# To compile files from comman lins
>g++ -Wall -std=c++20 main.cpp -o main.exe

-Wall => enable warnings
-std=c++20 => uses the c++20 compiler
-o main.exe => creates an output file in the name "main.exe"
------------------
## Console project template
Category: Console
Type: Simple Executable (g++)
Compiler: MinGW
Debugger: GNU gdb debugger
Build system: default
------------------
## Basic Components:
90 Keywords in C++; C has 32, Python has 33, Java has 50
Keywords - try, true, return const, int, double, if, do, while
Identifiers - std, cout, cin, endl
Operators - >> (extraction), << (insertion), +, -, /, *
Comments - // & /*  */ 
Puctuations - ;
----------------
## name spaces
using namespaces std;
----------------
## Preprocessors
#include, #if, #elif #else #endif #ifdef #ifndef #define #undef #line #error #pragma
----------------
## Variable Types
int, double, string, 
Object Oriented variables: Account, Person
-------------------
## Global variable
When you have a same name for global variable & local variable, the local variable shields 
the global one (local variable will be used)
-------------------
## Primitive type variables
Character types - char, char16_t, char32_t, wchar_t
Integer types - signed short int, signed int, signed long int, signed long long int, 
				unsigned short int, unsigned int, unsigned long int, unsigned long long int,
Floating-point types - float, double, long double
Boolean types - bool
*** Size of these variable type is dependent on complier and the operating system.
------------------
## Variable initialization
uninitialized
with =  - C-like initialization
with () - constructor initialization
with {} - c++11 initialization (throws an error when over flow)
------------------------
## Sizeof
sizeof(int) returns the value of int in that particular machine
cout << CHAR_MIN << CHAR_MAX returns minimum and maximum vlaue for the variable char.
cout << LLONG_MIN << LLONG_MAX returns minimum and maximum vlaue for the variable long long.
--------------------------
## Constants
Literal constant => x=26, name="Dasa", x=26u (unsigned), x=26l (long integer), x=26.04f (float)
					\n - newline, \r - return, \t - tab, \b - backspace, \' - single quote, \"" - double quote, \\ - backlash
Declared constant const keyword => const int x={26}, const double x={2.6}
Constant Expression constexpr keyword
Enumerated Constant enum keyword
	enum Color {red, gree, blue};
	Color selected_color {green};
Defined constant #define => #define pi=3.14 "Pre processor will replce the word pi with 3.14" & Do not use this constant in modern c++
-----------------------------
## Vectors

vector <char> names;
vector <int> values;
vector <int> values(5);
vector <double> (365, 80.0) => 365 is number of doubles & 80.0 is the initial value.
vector <int> values {100, 90, 75, 50, 45}
values.at(0) => returns the vlaue at index 0
values[0] => returns the value at index 0
values.push_back(33) => adds the number 33 to the end of vector "values"

vector <vector<int>> values
{
	{1, 2, 3, 4},
	{10, 20, 30, 40},
	{100, 200, 300, 400}
} => this cretes a 2D vector of 3x4 size

values[0][1] => returns the value at 0,1 position
values.at(0).at(1) => returns the value at 0,1 position

values.size() => returns the size of the vector.
----------------
## Operators
unary => a++
binary => a * b
ternary => works with three operands and they are conditional operators
assignment => changing the value; lhs = rhs
arithmateic => mathematical operations
increment/decrement => arithmetic i++ / ++i OR assignment
relational => comparision ==/>/< />= /<=
logical => not / ! / and / && / or / ||
memebr access => array subscript arr[0][1]
other => 
----------------------
## conversion
convert a int variable "total" to double => static_cast<double>(total)
----------------------
## testing equality
cout << (num1 == num2) << endl;
this outputs 0 / 1
cout << (num1 == num2) << endl;
cout << std::boolalpha;
this outputs true / flase

cout << std::noboolalpha;
this gobacks to the standar output of 0 /1

--------------
## Operator precedence

[], (), /, *, %, +, -

------------------
## Operator associative

left to right => when we have same level of precedense the associative moves from left to right
example1: [], (), 
example2: /, *, %, 
example3: +, -
right to left => when we have same level of precedense the associative moves from right to left
example1: ++, --, not, -(unary), *(de-ref), sizeof
example2: =, op=, ?:
----------------------
## Program flow
Sequence - ordering the statements sequentially
Selection - making decision if / if else/ switch / ?:(conditional operator)
Iteration - Looping or repeating for / while / do while/ continue & break/ infinite loops /Nested loops
---------------------
## Manipulators
#include <iomanip>
and enter the below statement before the output statement
cout << fixed << setprecision(2); 
---------------------
## range based for loop
for(var_type var_name: sequence){
	statements;
}
int var_names[]{100, 90, 80}
for(int var_name: var_names){
	statements;
}
when we have different types of collections
for(auto var_name: var_names){
	statements;
}
when we want to iterae over a string
for(auto c: "a String"){
	statements;
}
---------------------------------------------
## do while
do {

} while(slection != 'q' && selection != 'Q');

the above loop runs until we assign selection=q or selection=Q

-------------------------------------------
## continue & break statement
vector <int> values {1, 2, -1, 7, -3, -99, 0, 45, -1, 6}
for(auto val: values){
	if(val == -99){
		break;
	}
	else if(val == -1){
		continue;
	}
	else {
		cout << val << endl;
	}
}

it prints 1, 2 & then the loop continues to the beginning and prints 7, -3 and the loop breaks.
-----------------------------------------
## infinte loop
for(;;){
	statements;
}

while(ture){
	statements;
}

do {
	statements;
} while (true);

all above are infinite loops
--------------------------------------------
## nested loop

for(){
	for(){

	}
}
----------------------------------------
## Character function
#include <cctype>
isalpha(c) - True if 'c' is letter
isalnum(c) - True if 'c' is a letter or digit
isdigit(c)
islower(c)
isprint(c) - True if 'c' is a printable character
ispunct(c) - True if 'c' is a punctuation character
isupper(c)
isspace(c) - True if 'c' is a space
-------------------------------------
## C style strings
#include <cstring>
C style strings terminated with a null character
"C++ is fun"
c+'+'+'+'+' '+i+s+' '+f+u+n+'\0'

char my_name[8];
my_name ="Frank"; //wrong assingment and throws an error
strcpy(my_name, "Frank"); //good
strcat(my_name, "y");
strlen(my_name); returns the length of the string and the value type is "size_t"
strcmp(my_name, "Franky"); returns true if both strings are a same

When we enter "Dasarathan Sampath" from cin commandline it take only "Dasarathan"

When we enter "Dasarathan Sampath" from cin.getline(my_name, 50) it take all characters up to 50 characters

------------------------------
## C ++ string
#include <string>
std::string

unless c style, c++ strings are dynamic and it can grow dynamically
C++ string can work with most of the operators like +, -, <, >, <=, >=, =, ==, !=, etc.

string s1; //empty
string s1 {"Frank"} // Frank
string s3 {s2} // Frank
string s4 {"Frank", 3} // Fra
string s5 {s3, 0, 2} //Fr
string s6(3, 'x') // xxx

s1[0] gives the 0th char
s1.at(2) gives the 2nd char

s7 = s2 // s2 will be assigned to s7
s8 = s1 + s2 // will have concated string
s9 = "String a" + " String b" //Illegal, it will not compline, because we have two C style literals

let,
string s10 {"This is my best!"};
s10.substr(1,5) will give "his i"
s10.find("This") gives 0 //the index of the first character of the string
s10.find("is") gives 2 thes first is is in with in the text "This"
s10.find("is", 4) gives 5 // it strats to check the string from 4th place.
s10.erase(0,5) removes the string "This "
s10.clear() // removes all the strings
s10.length() gives the length of the string
s10 += "!!!" adds "!!!" to the string existing s10
cin >> s1 // takes the first word of the string from the command line
			// "Hello there" takes only the word "Hello"
getline(cin, s1) // takes the complete string until there is a new line
getline(cin, s1, 'x') /// takes the complete string and stops reading when it finds the first character "x"
-----------------------------
## cstdlib functions

RAND_MAX => global variable that returns the maximum random for that particular computer.

srand(time(nullptr)) => seeds/initiate a radom number at every time steps when it is called
If we dont seed we get the same requence random numbers every time

rand()%max+min //rand() function gives any random number, when I % that number by max & add min, I get random numbers between max & min
-------------------------------
## Pointers

int a{100};
int b{};

b = a => a is copied to b and it will have the value of a
b = &a => a is not copied but will have the value of a & pointing to the address of a

int *a_ptr{nullptr};

*a_ptr => shows the value at the addres
a_ptr => has the address of a value
&a_ptr => address of the pointer

a_ptr = &a;
Then,
a_ptr = has the address of variable a
*a_ptr = shows the value at the address of variable a
&a_ptr = is the address of the pointer.

*a_ptr = 200; This statement chnages thw value at the address of variable a to 200.

vector<string> names{"dasa", "bharathi", "kamali", "pranava"};
vectro<string> *names_ptr{&names};
to get the names by location
(*names_ptr).at(0) => give "dasa"

for(auto name: *names_ptr)
	cout << name << "";

int *p{nullptr};

p = new int; //allocates memory on the heap for int
p =new int[size] //allocates memory on the heap for int array

...

delete p; //delete the pointer on the heap, so that it will be available for the other programs.
delete [] p; //deletes the pointer on the heap.
------------------
## array & pointers

int scores[]{100, 98, 87};

cout << scores; => address of the first element
count<< *scores; => value of the first element

int *score_ptr = {scores};
then,

cout << score_ptr; => address of the first element
count<< *score_ptr; => value of the first element
-----------
## pointer arithmetic

int scores[]{100, 98, 87};
int *score_ptr = {scores};

cout << score_ptr; //0x61ff10
cunt << score_ptr + 1; //ox61ff14 - increases the address by 4 bit.

cout << *score_ptr; //100
cunt << *score_ptr + 1; //98 - gives the second value from the array

scores[index] ==> same as *(scores + index) ==> and gives the same value at that index
score_ptr[index] ==> same as *(score_ptr + index) ==> and gives the same value at that index

score_ptr++; => increment to the next location

if n the size of the variable type

score_ptr += n; will take to the next location
---------
## pointer const

const int *score_ptr {scores};

then 
we can not do *score_ptr = 200/// But
we can change the point to some other address score_ptr = &another_variable;
-------
## Passing pointer to function
Usually
void swap(int &a, int &b){}
swap(a, b)
with pointers

void swap(int *a, int *b){}
swap(&a, &b) OR
a_ptr = &a
b_ptr = &b
swap(a_ptr, b_ptr)

### To retunr a pointer from function

int main() {
	int a{100};
	int b{200};

	int *largest_ptr {nullptr};
	largest_ptr = largest_int(&a, &b);
	cout << *largest_ptr << endl;
	return 0;
}

int *largest_int(int *a, int *b){
	if(*a > *b)
		return a;
	else
		retunr b;
}

### dynamic memory allocation in heap
int main() {
	int *my_array;
	my_array = create_array(100, 20);
	delete [] my_array;
	return 0;
}
int *creat_array(size_t size, int init_value = 0){
	int *new_storage{nullptr};
	new_storage = new int[size];
	for(size_t i{0}; i<size; ++i>)
		*(new_storage + i) = init_value;
	return new_storage;
}
### ***** Do not return a pointer to local variable. Since it will be vanished when the local funciton is finished.
int func(){
	int size{};
	...
	return &size
} OR
int func(){
	int size{};
	int *size_ptr{&size};
	...
	return size_ptr;
} Both are serious problems
---------------
## Pointer pitfalls

uninitialized pointer
int *int_ptr;
*int_ptr = 100; /// It is a crash

dangling pointers
2 pointers referring to same address & one pointer is released

not checking if new fails to allocate.
We need to add a exception

Memory leak
when we do not delete the pointer.
----------------

## Object oriented programming
Encapsulation => Objects contain data and operations that work on the data/// 
				=> It is the Absrtact Data Types (ADT)
				=> Implementation-specific logic with in the class & it is hidden
				=> user of the class not aware of the implementation
				=> Hiding is done by public, private, and protected access modifier
Reusability 	=> using data from one program to another porgram

Inheritance 	=> create a new based on a existing class

Polimorphisam 	=> 

example classes:
Account
Image
Employee
c++ classes are
std::vector
std::string
but int & double are primitive types in c++

:: => is called the scope resolution operator.

in Classes
data - are attributes
functions - are methods

Objects are created from class definition

Examples of Objects
1. Dasa's account is an intance of the class Account
2. Each object has its own balances, can make trasactions, and withdrawls.
xxx
------------------
## Syntax of class

class Account{
	//attributes
	std::string name;
	double balance;

	//methods
	bool withdraw(double amount);
	bool deposit(double amount);
}

using the class object

Account dasa;
Account bharathi;

Account accounts[] {dasa, bharathi};
std::vector<Account> accounts {dasa};
account.push_back(bharathi);

Account *accounts{nullptr};
accounts = new Account;

delete accounts;

