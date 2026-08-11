#include <string>
#include "Player.hpp"


Player::Player(std::string name) : Entity(name) {}
 
std::string Player::describe() const {
    return "player " + m_name;
}