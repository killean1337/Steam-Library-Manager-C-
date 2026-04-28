#pragma once
#include <vector>
#include "Game.h"

class Library {
private:
    std::vector<Game> games;
    int nextId = 1;

public:
    void addGame(const std::string& title, const std::string& genre);
    void removeGame(int id);
    Game* findGameById(int id);
    void listAllGames() const;
    std::vector<Game> searchByTitle(const std::string& title);
};