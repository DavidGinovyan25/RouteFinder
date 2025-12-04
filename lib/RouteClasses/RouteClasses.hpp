#include <iostream> 
#include <string>
#include <vector>

struct Station {
    double latitude;
    double longitude;
    std::string code;
};

struct RoutePoint {
    std::string name;
    std::string code;
    std::vector<Station> stations;
    RoutePoint(std::string name) : name(name) {}
};

inline std::ostream& operator<<(std::ostream& os, const Station& s) {
    return os << "Station " << s.latitude << " " << s.longitude << " " << s.code;
}