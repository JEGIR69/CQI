#include "GreatSong.h"

GreatSong::GreatSong(const std::string &name, const std::string &lyrics) : Song(name, lyrics) {
    Song(name, lyrics);
}

std::string GreatSong::sing() const {
    std::string shoutedLyrics = "";
    for (auto & c: _lyrics) {
        shoutedLyrics += (char) toupper(c);
    }

    return shoutedLyrics;
}
