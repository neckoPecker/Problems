/*
    16 BIT S/W ONLY
    https://dmoj.ca/problem/16bitswonly


    Test case #1: 	AC 	[0.004s, 	1.68 MB] 	(10/10)
    Test case #2: 	AC 	[0.003s, 	1.73 MB] 	(10/10)
    Test case #3: 	AC 	[0.004s, 	1.61 MB] 	(10/10)
    Test case #4: 	AC 	[0.002s, 	1.68 MB] 	(10/10)
    Test case #5: 	AC 	[0.005s, 	1.62 MB] 	(10/10)
    Test case #6: 	AC 	[0.009s, 	1.73 MB] 	(10/10)
    Test case #7: 	AC 	[0.007s, 	1.68 MB] 	(10/10)
    Test case #8: 	AC 	[0.010s, 	1.68 MB] 	(10/10)
    Test case #9: 	AC 	[0.007s, 	1.68 MB] 	(10/10)
    Test case #10: 	AC 	[0.009s, 	1.80 MB] 	(10/10)

    Resources: 0.061s, 1.80 MB
    Final score: 100/100 (3.0/3 points) 
*/

#include <iostream>

int main()
{
    int answerInput;
    long long int p1, p2, answer;

    std::cin >> answerInput;

    for (int i = 0; i < answerInput; i++)
    {
        std::cin >> p1 >> p2 >> answer;
        
        if (p1 * p2 == answer)
            std::cout << "POSSIBLE DOUBLE SIGMA" << std::endl;
        else 
            std::cout << "16 BIT S/W ONLY" << std::endl;
    }

    return 0;
}