#include "Enemy.hpp"
#include <string>


Enemy::Enemy(std::string name, int hp) : Entity(name) 
{
        m_name = name;
        m_hp = hp;
        Enemy e;
        e.describe();
}
