#include <iostream>
#define BUFLEN 5
using namespace std;
void print result(int *arr, int idx) {
	coyt << "arr[" << idx << "] = "arr[idx] << endl;
}
int main(int argc, char "argv[])
{
	int arr[BUFLEN];
	int i;

	for (i=0, i<BUFLEN; i++){
		arr[i]= 10-i;
	}

	print result(arr,0);
	print result(arr,3);
	print result(arr,7);

	return 0;
}
