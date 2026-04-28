#include "Game.h"

Game::Game(int id, std::string title, std::string genre)
    : id(id), title(title), genre(genre),
      playtimeHours(0), rating(0),
      installed(false), status(GameStatus::BACKLOG) {}

int Game::getId() const { return id; }
std::string Game::getTitle() const { return title; }
std::string Game::getGenre() const { return genre; }
int Game::getPlaytime() const { return playtimeHours; }
int Game::getRating() const { return rating; }
bool Game::isInstalled() const { return installed; }
GameStatus Game::getStatus() const { return status; }

void Game::setPlaytime(int hours) { playtimeHours = hours; }
void Game::setRating(int r) { rating = r; }
void Game::setInstalled(bool v) { installed = v; }
void Game::setStatus(GameStatus s) { status = s; }