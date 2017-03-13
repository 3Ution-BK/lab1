#include <iostream>
using namespace std;

int main(){
	int numberN;

	cin >> numberN;
	cout << numberN;

	while(numberN > 1){
		if(numberN % 2 == 1){
			numberN = 3 * numberN + 1;

			cout << " ";
		}else{
			numberN /= 2;

			cout << " ";
		}

		cout << numberN;
	}

	cout << "\n";

	return 0;
}
