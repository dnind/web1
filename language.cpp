#include <stdio.h>
#include <iostream> 
#include <string>
#include <string.h>

using namespace std;

int main () {

	char a[100000] =
	int size = sizeof (a);
	bool kor = true;
	bool space = true;

	for (int i = 0; i < size; i++) {

		if (a[i] & 0x80) {
			kor = true;
			space = true;
		}
		else {
			kor = false;
			if (space == true) {
				printf (" ");
			}
			space = false;
		}
			;

			if (kor == true) {
				printf ("%c", a[i]);
			}
	}
}

