//============================================================================
// Name        : long.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define N_TERMS 40

int main()
{
	short seq_term, seq_sum;
	seq_term = seq_sum = 1;
	cout << "Term no. " << 1 << " = " << seq_term;
	cout << " and accumulated sum = " << seq_sum << "." << endl;
	for (int i = 1; i < N_TERMS; i++)
	{
		seq_term *= 2;  // double itself
		seq_sum += seq_term;  // add to tracking sum
		cout << "Term no." << i+1 << " = " << seq_term ;
		cout << " and accumulated sum = "<< seq_sum << ".\n";
	}
system("pause");  // pause so we can view output
}

/*
 * changed int to short to decrease the memory for the variables
Term no. 1 = 1 and accumulated sum = 1.
Press any key to continue . . .

Term no.2 = 2 and accumulated sum = 3.
Term no.3 = 4 and accumulated sum = 7.
Term no.4 = 8 and accumulated sum = 15.
Term no.5 = 16 and accumulated sum = 31.
Term no.6 = 32 and accumulated sum = 63.
Term no.7 = 64 and accumulated sum = 127.
Term no.8 = 128 and accumulated sum = 255.
Term no.9 = 256 and accumulated sum = 511.
Term no.10 = 512 and accumulated sum = 1023.
Term no.11 = 1024 and accumulated sum = 2047.
Term no.12 = 2048 and accumulated sum = 4095.
Term no.13 = 4096 and accumulated sum = 8191.
Term no.14 = 8192 and accumulated sum = 16383.
Term no.15 = 16384 and accumulated sum = 32767.
Term no.16 = -32768 and accumulated sum = -1.
Term no.17 = 0 and accumulated sum = -1.
Term no.18 = 0 and accumulated sum = -1.
Term no.19 = 0 and accumulated sum = -1.
Term no.20 = 0 and accumulated sum = -1.
Term no.21 = 0 and accumulated sum = -1.
Term no.22 = 0 and accumulated sum = -1.
Term no.23 = 0 and accumulated sum = -1.
Term no.24 = 0 and accumulated sum = -1.
Term no.25 = 0 and accumulated sum = -1.
Term no.26 = 0 and accumulated sum = -1.
Term no.27 = 0 and accumulated sum = -1.
Term no.28 = 0 and accumulated sum = -1.
Term no.29 = 0 and accumulated sum = -1.
Term no.30 = 0 and accumulated sum = -1.
Term no.31 = 0 and accumulated sum = -1.
Term no.32 = 0 and accumulated sum = -1.
Term no.33 = 0 and accumulated sum = -1.
Term no.34 = 0 and accumulated sum = -1.
Term no.35 = 0 and accumulated sum = -1.
Term no.36 = 0 and accumulated sum = -1.
Term no.37 = 0 and accumulated sum = -1.
Term no.38 = 0 and accumulated sum = -1.
Term no.39 = 0 and accumulated sum = -1.
Term no.40 = 0 and accumulated sum = -1.

 */

