#include <iostream>


using namespace std;

int main() {
    
    int A, B;
    
    std::string login;
    std::cout << "Podaj login: ";
    std::cin >> login;
    
    std::cout <<"Pierwszą cyfra:"<<endl;
    std::cin >> A;
    std::cout <<"Druga cyfra:"<<endl;
    std::cin >> B;
    
    if (A - B > 0) {
    
    cout << "jest wieksza lub rowna zero";
    
    
    }
    else {
     cout << "jest wiesksza od zera";
    }
    
    std::cout << "|";
    std::cout << "wprowadzony login: " << login << endl;

    
    return 0;
}

