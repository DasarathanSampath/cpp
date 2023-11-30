#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    float population;
    double cost;
};

struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main() {
    Tours tours {
        "Tours to Asia and America", {
            {"India",{
                {"Chennai", 2.4, 1000},
                {"Hyderabad", 2.0, 1200},
            },},
            {"China",{
                {"Beijing", 3.5, 1800},
                {"shangai", 1.8, 1700},
            },},
            {"USA",{
                {"Shrevport", 0.8, 3000},
                {"Houston", 0.6, 3500},
            },},
        },
    };
    std::cout << tours.title << std::endl;
    std::cout << "-------------------------" << std::endl;
    for(auto country:tours.countries){
        std::cout << country.name << std::endl;
        for(auto city:country.cities){
            std::cout   << "\t" << std::setw(12) << std::left << city.name 
                        << "\t" << std::setw(5) << std::left << city.population
                        << "\t" << std::setw(5) << std::left << city.cost
                        << std::endl;
        }
    }
}