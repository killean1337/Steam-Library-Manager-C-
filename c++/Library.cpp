#include "Library.h"
#include <iostream>

void Library::addGame(const std::string& title, const std::string& genre) {
    games.emplace_back(nextId++, title, genre);
}

void Library::removeGame(int id) {
    for (auto it = games.begin(); it != games.end(); ++it) {
        if (it->getId() == id) {
            games.erase(it);
            std::cout << "Game removed.\n";
            return;
        }
    }
    std::cout << "Game not found.\n";
}

Game* Library::findGameById(int id) {
    for (auto& game : games) {
        if (game.getId() == id) {
            return &game;
        }
    }
    return nullptr;
}

void Library::listAllGames() const {
    for (const auto& game : games) {
        std::cout << "ID: " << game.getId()
                  << " | " << game.getTitle()
                  << " | " << game.getGenre()
                  << " | Playtime: " << game.getPlaytime() << "h\n";
    }
}

std::vector<Game> Library::searchByTitle(const std::string& title) {
    std::vector<Game> results;

    for (const auto& game : games) {
        if (game.getTitle().find(title) != std::string::npos) {
            results.push_back(game);
        }
    }

    return results;
}