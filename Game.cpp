#include<iostream>
#include "Game.h"

// complete the implementation of the Game class here
Game::Game() {
m_keno.generateNumbers();
    m_player = Player();
    std::vector <int> m_matches;

}
void Game::printMatches(std::vector<int> playerPicks, std::vector<int> kenoNumbers) {
    Player player;
    Game inputPlayerNumbers;

    printMatches = (playerPicks, kenoNumbers);



    std::cout << "Keno Numbers: ";
    for (int i = 0; i < kenoNumbers.size(); i++) {
        std::cout << kenoNumbers[i] << " ";
    }
    std::cout << "Player Picks: ";
    for (int i = 0; i < playerPicks.size(); i++) {
        std::cout<<playerPicks[i]<<" ";
std::vector<int> matches;

    }

void Game::displayResults() {
        bool choice;
        if(choice == 'y') {
            playGame();
        }
        else if(choice == 'n') {
            std::cout << "THANKS FOR PLAYING!!";
        }
        std::cout << "----------------------------------Results----------------------------------" << std::endl;
std::cout << "You matched: " << m_matches.size() << std::endl;
        for (int i = 0; i < m_matches.size(); i++) {
            std::cout << m_matches[i] << " ";
            std::cout << "Matching " << m_matches[i] << " of " << m_keno.getKenoNumbers << " numbers wins " <<  << std::endl;
            std::cout << "Play again? (y/n): " << choice << std::endl;
}
void Game::playGame() {

}

