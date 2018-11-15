#include <iostream>
using namespace std;

double expression();
double primary()
{
	Token t = get_token();
	switch (t.kind){
	case '(':
		{ double d = expression();
			t = get_token();
			if (t.kind != ')') error("')' expected");
			return d;
		}
		case '8':
			return t.value:
		default:
			error("primary expected");
	}
}
double term()
{
	double left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '*':
		left *=primary();
		break;
		case '/':
			{ double d = primary();
		if (d==0) error("divide by zero");
		left /= d; 
		break;
		}
		default:
		ts.putback(t);
		return left;
	}
	}
}
double expression()
{
	double left = term();
	while (true){
		Token t = get_token();
		switch (t.kind) {
		case '+': left += term(); break;
		case '-': left -= term(); break;
		default: 	ts.putback(t);
					return left;
		}
	}
}
int main()
{
	double val = 0;
	while (cin){
		Token t = ts.get();
		if (t.kind == 'q')break;
		if (t.kind == ';')
			cout << val << '\n';
		else
			ts.putback(t);
		val = expression();
	}
}