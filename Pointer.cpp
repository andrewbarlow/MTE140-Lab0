/*Pointer variables and passing pointer parameters*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// Declare functions that we will define later on (so we can use them in main()).
void bad_charSwap(char v1, char v2);
void good_charSwap(char *v1, char *v2);
void bad_charPtrSwap(char *p1, char *p2);
void good_charPtrSwap(char **p1, char **p2);

int main() {
	char c1, c2;
	char *cPtr1, *cPtr2;
	c1 = 'A';
	c2 = 'B';
	cPtr1 = &c1;
	cPtr2 = &c2;

	cout << ">>> After the assignment statements:" << endl;
	cout << "c1 = " << c1 << ", c2 = " << c2 << endl;
	cout << "cPtr1 = " << static_cast<void*>(cPtr1) << " and references value "
			<< *cPtr1 << endl;
	cout << "cPtr2 = " << static_cast<void*>(cPtr2) << " and references value "
			<< *cPtr2 << endl << endl;

	/* --------------------Swapping char values------------------ */

	cout << ">>> Swapping char values ..." << endl;

	bad_charSwap(c1, c2);
	cout << ">>> After calling bad_charSwap(c1,c2):" << endl;
	cout << "c1 = " << c1 << ", c2 = " << c2 << endl;
	cout << "cPtr1 = " << static_cast<void*>(cPtr1) << " and references value "
			<< *cPtr1 << endl;
	cout << "cPtr2 = " << static_cast<void*>(cPtr2) << " and references value "
			<< *cPtr2 << endl;

	good_charSwap(cPtr1, cPtr2);
	cout << ">>> After calling good_charSwap(cPtr1, cPtr2):" << endl;
	cout << "c1 = " << *cPtr1 << ", c2 = " << *cPtr2 << endl;
	cout << "cPtr1 = " << static_cast<void*>(cPtr1) << " and references value "
			<< *cPtr1 << endl;
	cout << "cPtr2 = " << static_cast<void*>(cPtr2) << " and references value "
			<< *cPtr2 << endl << endl;

	/* -------------------Swapping Pointers to char  -----------------*/

	cout << ">>> Swapping pointers ..." << endl;
	bad_charPtrSwap(cPtr1, cPtr2);
	cout << ">>> After calling bad_charPtrSwap(cPtr1,cPtr2):" << endl;
	cout << "cPtr1 = " << static_cast<void*>(cPtr1) << " and references value "
			<< *cPtr1 << endl;
	cout << "cPtr2 = " << static_cast<void*>(cPtr2) << " and references value "
			<< *cPtr2 << endl << endl;
	good_charPtrSwap(&cPtr1, &cPtr2);
	cout << ">>> After calling good_charPtrSwap(&cPtr1,&cPtr2):" << endl;
	cout << "cPtr1 = " << static_cast<void*>(cPtr1) << " and references value "
			<< *cPtr1 << endl;
	cout << "cPtr2 = " << static_cast<void*>(cPtr2) << " and references value "
			<< *cPtr2 << endl << endl;
	system("pause");
}

void bad_charSwap(char v1, char v2) {
	char temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}
void good_charSwap(char *v1, char *v2) {
	char temp;
	temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

void bad_charPtrSwap(char *p1, char *p2) {
	char *temp;
	temp = p1;
	p1 = p2;
	p2 = temp;
}

void good_charPtrSwap(char **p1, char **p2) {
	char *temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*
 *
 >>> After the assignment statements:
c1 = A, c2 = B
cPtr1 = 0x62fe4f and references value A
cPtr2 = 0x62fe4e and references value B

>>> Swapping char values ...
>>> After calling bad_charSwap(c1,c2):
c1 = A, c2 = B
cPtr1 = 0x62fe4f and references value A
cPtr2 = 0x62fe4e and references value B
>>> After calling good_charSwap(cPtr1, cPtr2):
c1 = B, c2 = A
cPtr1 = 0x62fe4f and references value B
cPtr2 = 0x62fe4e and references value A

>>> Swapping pointers ...
>>> After calling bad_charPtrSwap(cPtr1,cPtr2):
cPtr1 = 0x62fe4f and references value B
cPtr2 = 0x62fe4e and references value A

>>> After calling good_charPtrSwap(&cPtr1,&cPtr2):
cPtr1 = 0x62fe4e and references value A
cPtr2 = 0x62fe4f and references value B

Press any key to continue . . .

 */
