#include <iostream>

struct Warrior{
    int Health;
    int Armor;
    int Shield;
    int Weapon;

    bool operator<(Warrior Enemy) const{
        if (this->Health / (Enemy.Weapon - (this->Armor + this->Shield)) < (Enemy.Health / (this->Weapon - (Enemy.Armor + Enemy.Shield)))){
            return true;
        }
        else{
            return false;
        }
    }
};

void Fight(Warrior Attacker, Warrior Defender){
    if (Attacker<Defender){
        std::cout << "You Died!";
    }
    else{
        std::cout << "Enemy is Defeated!";
    }
}

int main() {
    Warrior Enemy{5800, 200, 50, 500};
    Warrior Player{2400, 180, 40, 600};
    Fight(Player, Enemy);
    return 0;
}
