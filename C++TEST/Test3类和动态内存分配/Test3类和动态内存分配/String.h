#ifndef STRING_H_
#define STRING_H_
#include <iostream>

using namespace std;

class String
{
private:
	char *str;
	int len;
	static int num_strings;
	static const int CLNLIM = 80;
public:
	String(const char *s);
	String();
	String(const String &);
	~String();
	int Length() const { return len; }
	
	String & operator=(const String &);
	String & operator=(const char *);
	char &operator[](int i);
	const char &operator[](int i) const;

	friend bool operator<(const String &st, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st, const String &st2);
	friend ostream &operator<<(ostream &os, const String &st);
	friend istream &operator>>(istream &is, String &st);

	static int HowMany();
};
#endif