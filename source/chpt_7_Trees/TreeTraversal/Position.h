#pragma once
#include <list>

class Position;
class Tree;

class Position {
public:
    int& operator*();
    Position parent() const;
    std::list<Position> children() const;
    bool isRoot() const;
    bool isExternal() const;
};

class Tree {
public:
    class Position;

public:
    int size() const;
    bool empty() const;
    Position root() const;
    std::list<Position> positions() const;
};