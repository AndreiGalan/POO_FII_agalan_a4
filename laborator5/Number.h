class Number
{
	char* vector;
	int b;
	bool negative;

public:

	Number(const char* value, int base); // where base is between 2 and 16

	~Number();

	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

	Number(const Number& ex); //copy constructor

	Number& operator=(Number&& ex);

	Number(const Number&& ex); //move constructor

	Number& operator=(Number& ex);

	Number& operator=(int&& ex);

	Number(int&& ex);

	Number(int& ex);

	Number(const char*&& ex);

	friend Number operator-(Number ex, Number ex2);

	friend Number operator+(Number ex, Number ex2);

	Number operator+=(Number ex);

	Number operator-=(Number ex);

	bool operator<(Number ex);

	bool operator>(Number ex);

	bool operator<=(Number ex);

	bool operator>=(Number ex);

	bool operator==(Number ex);

	void operator++(); //pentru ++exemple

	void operator++(int numar); //pentru exemple++

	void operator--(); //pentru --exemple 

	void operator--(int numar); //pentru exemple--

	char operator[](int index);

};

