// C++ program for IP to
// hexadecimal conversion
#include <arpa/inet.h>
#include <iostream>
#include <string.h>
using namespace std;

// function for reverse hexadecimal number
void reverse(char* str)
{
	// l for swap with index 2
	int l = 2;
	int r = strlen(str) - 2;

	// swap with in two-2 pair
	while (l < r) {
		swap(str[l++], str[r++]);
		swap(str[l++], str[r]);
		r = r - 3;
	}
}

// function to conversion and print
// the hexadecimal value
void ipToHexa(int addr)
{
	char str[15];

	// convert integer to string for reverse
	sprintf(str, "0x%08x", addr);

	// reverse for get actual hexadecimal
	// number without reverse it will
	// print 0x0100007f for 127.0.0.1
	reverse(str);

	// print string
	cout << str << "\n";
}

// Driver code
int main()
{
	// The inet_addr() function convert string
	// in to standard IPv4 dotted decimal notation
	int addr = inet_addr("127.0.0.1");

	ipToHexa(addr);

	return 0;
}

