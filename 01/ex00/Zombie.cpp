
#include "Zombie.hpp"

Zombie::Zombie( void ) {
    
    std::cout << "Constructed" << std::endl;
}

Zombie::~Zombie( void ) {
    
    std::cout << "Destructed " << this->_name << std::endl;
}

void Zombie::setName( std::string name ) {
    
    this->_name = name;
}

void    Zombie::announce( void ) {
    
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}