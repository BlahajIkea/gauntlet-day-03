#include "Enemy.hpp"
#include <string>

Enemy::Enemy(std::string name, int hp) : Entity(name) 
{
        m_name = name;
        m_hp = hp;
}

std::string Enemy::describe() const {
    return "Enemy " + m_name + " " + "(hp " + std::to_string(m_hp) + ")";
}