class Coordinate {
private:
    int degrees;
    int minutes;
    double seconds;

public:
    // Constructor
    Coordinate(int deg, int min, double sec) : degrees(deg), minutes(min), seconds(sec) {}

    // Destructor (if needed)
    ~Coordinate() {}

    // Accessor functions
    int getDegrees() const {
        return degrees;
    }

    int getMinutes() const {
        return minutes;
    }

    double getSeconds() const {
        return seconds;
    }

    // Mutator functions (optional)
    void setDegrees(int deg) {
        degrees = deg;
    }

    void setMinutes(int min) {
        minutes = min;
    }

    void setSeconds(double sec) {
        seconds = sec;
    }
};
