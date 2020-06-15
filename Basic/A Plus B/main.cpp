/*
    A Plus B

    Test case #1: 	AC 	[0.005s, 	1.63 MB] 	(5/5)
    Test case #2: 	AC 	[0.004s, 	1.63 MB] 	(20/20)
    Test case #3: 	AC 	[0.411s, 	1.63 MB] 	(75/75)

    Resources: 0.420s, 1.63 MB
    Final score: 100/100 (3.0/3 points) 
*/

#include <iostream>

int main()
{
    long unsigned int numOfQuestions = 0;
    std::cin >> numOfQuestions;

    long long int a;
    long long int b;

    while(numOfQuestions != 0)
    {
        std::cin >> a >> b;
        std::cout << a + b << std::endl;

        numOfQuestions--;
    }
}