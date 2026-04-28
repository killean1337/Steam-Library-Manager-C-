#include <iostream>
#include "Library.h"

int main() {
    Library library;
    int choice;

    while (true) {
        std::cout << "\n=== Steam Library Manager ===\n";
        std::cout << "1. Add Game\n";
        std::cout << "2. Remove Game\n";
        std::cout << "3. List Games\n";
        std::cout << "4. Search Game\n";
        std::cout << "0. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        if (choice == 0) break;

        if (choice == 1) {
            std::string title, genre;

            std::cout << "Enter title: ";
            std::cin.ignore();
            std::getline(std::cin, title);

            std::cout << "Enter genre: ";
            std::getline(std::cin, genre);

            library.addGame(title, genre);
        }

        else if (choice == 2) {
            int id;
            std::cout << "Enter game ID to remove: ";
            std::cin >> id;

            library.removeGame(id);
        }

        else if (choice == 3) {
            library.listAllGames();
        }

        else if (choice == 4) {
            std::string query;

            std::cout << "Search title: ";
            std::cin.ignore();
            std::getline(std::cin, query);

            auto results = library.searchByTitle(query);

            for (const auto& game : results) {
                std::cout << game.getId()
                          << " | " << game.getTitle()
                          << " | " << game.getGenre() << "\n";
            }
        }
    }

    return 0;
}