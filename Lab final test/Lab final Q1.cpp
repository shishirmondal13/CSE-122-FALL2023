#include<iostream>
#include<conio.h>
using namespace std;

class ManchesterUnited {
private:
    int coach;
    int player;

public:
    ManchesterUnited() : coach(0), player(0) {}

    // Overloading the prefix
    ManchesterUnited operator++() {
        coach++;
        player++;
        return *this;
    }

    // Overloading the postfix
    ManchesterUnited operator++(int) {
        ManchesterUnited temp = *this;
        coach++;
        player++;
        return temp;
    }

    // Getter functions for coach and player
    int getCoach() const {
        return coach;
    }

    int getPlayer() const {
        return player;
    }

    // Member function to set data
    void getData() {
        cout << "Coach: " << coach << ", Player: " << player <<endl;
    }

    //use Set for coach and player
    void setCoach(int c) {
        coach = c;
    }

    void setPlayer(int p) {
        player = p;
    }
};

int main() {
    ManchesterUnited ronaldo, fernandes;

    // Increment ronaldo using the overloaded prefix
    ++ronaldo;

    // Set values for ronaldo and fernandes
    ronaldo.setCoach(4);
    ronaldo.setPlayer(5);

    fernandes.setCoach(5);
    fernandes.setPlayer(6);

    // Compare ronaldo and fernandes before incrementing ronaldo
    if (ronaldo.getCoach() == fernandes.getCoach() && ronaldo.getPlayer() == fernandes.getPlayer()) {
            cout << "ronaldo is equal to fernandes." <<endl;
    } else {
            cout << "ronaldo is not equal to fernandes." <<endl;
    }

    // Increment ronaldo using the overloaded postfix
    ronaldo++;

    // Compare ronaldo and fernandes after incrementing ronaldo
    if (ronaldo.getCoach() == fernandes.getCoach() && ronaldo.getPlayer() == fernandes.getPlayer()) {
            cout << "ronaldo is equal to fernandes." <<endl;
    } else {
             cout << "ronaldo is not equal to fernandes." <<endl;
    }
    getch();
    return 0;
}
