//
//  main.cpp
//  Parking3
//
//  Created by Jan Jagodziński on 08/10/2023.
//

#include <iostream>
#include <regex>
#include <vector>


bool isEnteringPaymentOk(std::string& s) {
    
    return std::regex_match(s, std::regex("\\s*([A-Z][A-Z0-9]{2,10})\\s*((0?[89]|1[0-9])\\.([0-5][0-9])|20\\.00)\\s*((0?[89]|1[0-9])\\.([0-5][0-9])|20\\.00)\\s*"));
    
}


int main() {
    std::string name{"TK56 20.00 10.56"};
    std::cout << isEnteringPaymentOk(name);
    return 0;
}
