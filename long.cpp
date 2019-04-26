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
	long seq_term, seq_sum;
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
 * changed int to long to increase the memory for the variables
 * Term no. 1 = 1 and accumulated sum = 1.
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
Term no.16 = 32768 and accumulated sum = 65535.
Term no.17 = 65536 and accumulated sum = 131071.
Term no.18 = 131072 and accumulated sum = 262143.
Term no.19 = 262144 and accumulated sum = 524287.
Term no.20 = 524288 and accumulated sum = 1048575.
Term no.21 = 1048576 and accumulated sum = 2097151.
Term no.22 = 2097152 and accumulated sum = 4194303.
Term no.23 = 4194304 and accumulated sum = 8388607.
Term no.24 = 8388608 and accumulated sum = 16777215.
Term no.25 = 16777216 and accumulated sum = 33554431.
Term no.26 = 33554432 and accumulated sum = 67108863.
Term no.27 = 67108864 and accumulated sum = 134217727.
Term no.28 = 134217728 and accumulated sum = 268435455.
Term no.29 = 268435456 and accumulated sum = 536870911.
Term no.30 = 536870912 and accumulated sum = 1073741823.
Term no.31 = 1073741824 and accumulated sum = 2147483647.
Term no.32 = -2147483648 and accumulated sum = -1.
Term no.33 = 0 and accumulated sum = -1.
Term no.34 = 0 and accumulated sum = -1.
Term no.35 = 0 and accumulated sum = -1.
Term no.36 = 0 and accumulated sum = -1.
Term no.37 = 0 and accumulated sum = -1.
Term no.38 = 0 and accumulated sum = -1.
Term no.39 = 0 and accumulated sum = -1.
Term no.40 = 0 and accumulated sum = -1.
 */

