#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& rhs);
        DiamondTrap& operator=(const DiamondTrap& rhs);
        ~DiamondTrap(void);

        void attack(const std::string& target);
        void whoAmI(void);
    
    private:
        std::string _name;

};

#endif