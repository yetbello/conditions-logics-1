#include <iostream>

int main()
{
    // Equation (earthWeight * relative gravity of planet)

    double mRG = .38;
    double vRG = .91;
    double jRG = 2.34;
    double sRG = 1.06;
    double uRG = .92;
    double nRG = 1.19;

    double result = 0;
    double weightInput = 0;
    int num = 0;

    std::cout << "Enter Earth weight: \n";
    std::cin >> weightInput;
    std::cout << "Enter planet to find weight on chosen planet.\n";
    std::cout << "Planets to choose:\n 1. Mercury\n 2. Venus\n 3. Mars\n 4. Jupiter\n 5. Saturn\n 6. Uranus\n 7. Neptune\n"; 
    std::cin >> num;
    switch (num)
    {
        //Mercury
        case 1:
            result = weightInput * mRG;
            std::cout << "Weight on Mercury is: " << result;
            break;
        //Venus
        case 2:
            result = weightInput * vRG;
            std::cout << "Weight on Venus is: " << result;
            break;
        //Mars
        case 3:
            result = weightInput * mRG;
            std::cout << "Weight on Mars is: " << result;
            break;
        //Jupiter
        case 4:
            result = weightInput * jRG;
            std::cout << "Weight on Jupiter is: " << result;
            break;
        //Saturn
        case 5:
            result = weightInput * sRG;
            std::cout << "Weight on Saturn is: " << result;
            break;
        //Uranus
        case 6:
            result = weightInput * uRG;
            std::cout << "Weight on Uranus is: " << result;
            break;
        //Neptune
        case 7:
            result = weightInput * nRG;
            std::cout << "Weight on Neptune is: " << result;
            break;
        default:
            std::cout << "Not an option.\n";
            break;
    }

}
