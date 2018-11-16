#include "std_lib_facilities.h"
int main()
try {
		cout << "Success!\n"; // 1. eredeti:Cout << "Success!\n" , C helyett c
		keep_window_open();
		return 0;
}
catch (exception& e) {
	cerr << "error : " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception! \n";
	keep_window_open();
	return 2;
}