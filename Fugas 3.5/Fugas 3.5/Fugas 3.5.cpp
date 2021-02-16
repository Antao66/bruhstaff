#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
	srand(time(0u));        //for randomness

	const int N = 15;

	int arr[N] = {}; //main array
	int arr_of_count[10] = {}; //account array

	//Random filling of an array,
	//so as not to fill with the keyboard

	for (unsigned i = 0; i < N; i++) {
		arr[i] = rand() % 10; //Filling 0..9
		cout << arr[i] << ' ';
	}

	cout << '\n';

	//Filling the invoice array
	for (unsigned i = 0; i < N; i++) {
		arr_of_count[arr[i]]++;
	}
	/*
		//Displaying the count array on the screen
		for (unsigned i=0; i<10; i++){
			cout << arr_of_count[i] << ' ';
		}
	*/

	cout << '\n';

	//Looking for the maximum in the invoice array
	int max_el = arr_of_count[0]; //set the initial search value
								  //by the first element of the array

	for (unsigned i = 1; i < 10; i++) {
		if (max_el < arr_of_count[i]) max_el = arr_of_count[i];
	}

	//   cout << max_el << '\n';       //Display the largest number of appointments

	cout << '\n';

	cout << "Mod list: ";
	//We display the list on the screen:
	unsigned count_summary = 0; //counter fashion
	for (unsigned i = 0; i < 10; i++) {
		if (arr_of_count[i] == max_el) {
			cout << i << ' ';
			count_summary++; //increasing the counter
		}
	}
	cout << "\n\n";

	cout << "summary: " << count_summary << '\n';   //how many such elements
	cout << "how many: " << max_el << '\n';         //how many times occurs in the array
}