#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    //attributes
    string name;
    int health;
    int xp;
    //methods
    void talk(string);
    bool is_dead();
};

int main() {
    Player dasa;
    Player kamalini;
    Player pranava;

    Player players[]{kamalini, pranava};

    vector<Player> player_vec{dasa};
    player_vec.push_back(kamalini);

    Player *enemy(nullptr);
    enemy = new Player;
    delete enemy;

    return 0;
}
