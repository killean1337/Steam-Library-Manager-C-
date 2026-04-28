#pragma once
#include <string>

enum class GameStatus {
    BACKLOG,
    PLAYING,
    COMPLETED
};

class Game {
private:
    int id;
    std::string title;
    std::string genre;
    int playtimeHours;
    int rating;
    bool installed;
    GameStatus status;

public:
    Game(int id, std::string title, std::string genre);

    int getId() const;
    std::string getTitle() const;
    std::string getGenre() const;
    int getPlaytime() const;
    int getRating() const;
    bool isInstalled() const;
    GameStatus getStatus() const;

    void setPlaytime(int hours);
    void setRating(int rating);
    void setInstalled(bool value);
    void setStatus(GameStatus status);
};