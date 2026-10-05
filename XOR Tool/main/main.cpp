/*
Main Goal:
Create a Exclusive OR tool that can encrypt any variable/type and decrypt it back to its original form using a specified key. 
The tool should support various data types, including integers, strings, and custom objects.
It should also provide a user-friendly interface for inputting data and keys, as well as displaying the encrypted and decrypted results.
*/
#include <Includes.h>

int main() {
	vars.choice = 0;

menu:
	printf("Logan's XOR TOOL\n");
	printf("----------------\n");
	printf("1. Encrypt\n");
	printf("2. Decrypt\n");
	printf("3. Exit\n");
	printf("Choice -> ");
	std::cin >> vars.choice;

	if (vars.choice == 1) {
		// Call the encrypt function

	}
	else if (vars.choice == 2) {
		// Call the decrypt function
	}
	else if (vars.choice == 3) {
		return 0;
	}
	else {
		printf("Invalid choice. Please try again.\n");
		Sleep(2000);
		system("cls");
		goto menu;
	}
}