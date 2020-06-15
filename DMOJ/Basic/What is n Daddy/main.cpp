/*
    What is n, Daddy?
    https://dmoj.ca/problem/ccc10j1

    Test case #1: 	AC 	[0.010s, 	1.63 MB] 	(10/10)
    Test case #2: 	AC 	[0.009s, 	1.63 MB] 	(10/10)
    Test case #3: 	AC 	[0.009s, 	1.63 MB] 	(10/10)
    Test case #4: 	AC 	[0.009s, 	1.63 MB] 	(10/10)
    Test case #5: 	AC 	[0.009s, 	1.63 MB] 	(10/10)
    Test case #6: 	AC 	[0.011s, 	1.63 MB] 	(10/10)
    Test case #7: 	AC 	[0.009s, 	1.63 MB] 	(10/10)
    Test case #8: 	AC 	[0.009s, 	1.63 MB] 	(10/10)
    Test case #9: 	AC 	[0.011s, 	1.63 MB] 	(10/10)

    Resources: 0.086s, 1.63 MB
    Final score: 90/90 (3.0/3 points) 
*/

#include <iostream>

int main()
{
    int num = 0;
    std::cin >> num;

    int a = num;
    int b = 0;
    int iter = 0;

    if (num >= 5)
    {
        b = num - 5;
        a = 5;
    }

    while (b != (num / 2) + 1)
    {
        iter++;
        a--;
        b++;
    }

    std::cout << iter;
}