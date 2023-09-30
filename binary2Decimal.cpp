#include <iostream>
using namespace std;

int main()
{
	char binaryNumber[] = "1001";
	
	cout << stoi(binaryNumber, 0, 2);

	return 0;
}




// C++ program to convert binary to decimal
// when input is represented as binary string.
#include <iostream>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string str)
{
	int dec_num = 0;
	int power = 0 ;
	int n = str.length() ;
	
	for(int i = n-1 ; i>=0 ; i--){
	if(str[i] == '1'){
		dec_num += (1<<power) ;
	}
	power++ ;
	}
	
	return dec_num;
}

// Driver program to test above function
int main()
{
	string num = "10101001";
	cout << binaryToDecimal(num) << endl;
}





// C++ program to convert binary to decimal
#include <iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
	int dec_num = 0 ;
	int power = 0 ;
	while(n>0){
	if(n%10 == 1){ // extracting the last digit
		dec_num += (1<<power) ;
	}
	power++ ;
	n = n / 10 ;
	}
	return dec_num ;
}

// Driver program to test above function
int main()
{
	int num = 10101001;

	cout << binaryToDecimal(num) << endl;
}






// C++ program to convert binary to decimal
// when input is represented as binary string.
#include <iostream>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string n)
{
	string num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}

// Driver program to test above function
int main()
{
	string num = "10101001";
	cout << binaryToDecimal(num) << endl;
}


