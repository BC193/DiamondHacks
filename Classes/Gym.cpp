#include <string>
#include "Coordinate.cpp"

class Gym {
private:
    std::string name;
    Coordinate location;

public:
    // Constructor
    Gym(const std::string& n, const Coordinate& loc) : name(n), location(loc) {}

    // Destructor (if needed)
    ~Gym() {}

    // Accessor functions
    std::string getName() const {
        return name;
    }

    Coordinate getLocation() const {
        return location;
    }

    // Mutator functions (optional)
    void setName(const std::string& n) {
        name = n;
    }

    void setLocation(const Coordinate& loc) {
        location = loc;
    }
};