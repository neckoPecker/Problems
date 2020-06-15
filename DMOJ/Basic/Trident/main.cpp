/*
    Trident
    https://dmoj.ca/src/1952615


    Test case #1: 	AC 	[0.002s, 	1.68 MB] 	(20/20)
    Test case #2: 	AC 	[0.003s, 	1.68 MB] 	(20/20)
    Test case #3: 	AC 	[0.002s, 	1.61 MB] 	(20/20)
    Test case #4: 	AC 	[0.002s, 	1.68 MB] 	(20/20)
    Test case #5: 	AC 	[0.003s, 	1.74 MB] 	(20/20)


    Resources: 0.012s, 1.74 MB
    Final score: 100/100 (3.0/3 points) 
*/

#include <iostream>

int main()
{
    int tineLength,
        tineSpace,
        tridentHeight;

    std::cin >> tineLength >> tineSpace >> tridentHeight;

    // Draw Tines and Width
    for (int i = 0; i < tineLength; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << "*";
            for (int k = 0; k < tineSpace; k++)
            {
                std::cout << " ";
            }
        }
        std::cout << "*\n";
    }

    // Draw Guard
    for (int i = 0; i < tineSpace * 2 + 3; i++)
    {
        std::cout << "*";
    }
    std::cout << "\n";

    // Draw handle
    for (int i = 0; i < tridentHeight; i++) 
    {
        for (int j = 0; j < tineSpace + 1; j++)
        {
            std::cout << " ";
        }
        std::cout << "*\n";
    }
} 
