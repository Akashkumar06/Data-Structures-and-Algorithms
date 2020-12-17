#include <iostream>
using namespace std;
void rearrangeEvenAndOdd(int arr[], int n)

	int j = -1;

	// Quick sort method
	for (int i = 0; i < n; i++) {

		// If array of element
		// is odd then swap
		if (arr[i] % 2 == 0) {

			// increment j by one
			j++;

			// swap the element
			swap(arr[i], arr[j]);
		}
	}
}

int main()
{
	int arr[] = { 12, 10, 9, 45, 2, 10, 10, 45 };
	int n = sizeof(arr) / sizeof(arr[0]);

	rearrangeEvenAndOdd(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
// This code is contributed by devagarwalmnnit
