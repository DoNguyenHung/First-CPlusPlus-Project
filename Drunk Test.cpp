#include <iostream>
// for cout
#include <vector>
// for vector
#include <string>
// for string
#include <fstream>
// for fileio
#include <cstdlib>
#include <time.h>

int main() {
	
int age = 18;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;
	
	if ((age >= 1) && (age < 16)) {
		
		std::cout << "You can't drive" << std::endl;
		
	} else if (! isNotIntoxicated) {
		
		std::cout << "You can't drive" << std::endl;
	//If the person is over the age of 100, we're not gonna allow them to drive.
	//If they are going to be the age of 80, they have to take a driving exam every
	// 5 years to verify that they are still able to drive.
	} else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))) {
		
		std::cout << "You can't drive" << std::endl;
		
	} else {
		
		std::cout << "You can drive" << std::endl;
		
	}

return 0;
	
}
