#include "Song.h"

Song::Song(const std::string &name, const std::string &lyrics) : _name(name), _lyrics(lyrics) {}

std::string Song::sing() const{
    return _lyrics;
}

bool operator==(const Song &s1, const Song &s2) {
    return s1._name == s2._name && s1._lyrics == s2._lyrics;
}
