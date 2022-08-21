// Question 2.2

    float number1 = 0, number2 = 0, greaterNumber = 0 ;

    std::cout << "Enter 2 numbers" << std::endl ;

    std::cin >> number1 >> number2 ;

    if (number1>number2)
    {
        std::cout << "The greater number is " << number1 << std::endl ;
    } else if (number2>number1)
    {
        std::cout << "The greater number is " << number2 << std::endl ;
    } else 
    {
        std::cout << "The 2 numbers are equal" << std::endl ;
    }
