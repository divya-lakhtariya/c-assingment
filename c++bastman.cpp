/*
Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) 
*/

#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string name;
public:
    Cricketer(const std::string& playerName) : name(playerName) {}
};

class Batsman : public Cricketer {
private:
    int total_runs;
    double average_runs;
    int best_performance;
public:
    Batsman(const std::string& playerName) : Cricketer(playerName), total_runs(0), average_runs(0), best_performance(0) {}

    void inputData(int runs, int best) 
	{
        total_runs = runs;
        best_performance = best;
        calculateAverageRuns();
    }

    void calculateAverageRuns() {
        // Calculate the average runs using the total runs
        // and any other necessary information
        // Example implementation:
        // Assuming total_matches is known
        int total_matches = 20;
        average_runs = static_cast<double>(total_runs) / total_matches;
    }

    void displayData() {
        std::cout << "Batsman: " << name << std::endl;
        std::cout << "Total Runs: " << total_runs << std::endl;
        std::cout << "Average Runs: " << average_runs << std::endl;
        std::cout << "Best Performance: " << best_performance << std::endl;
    }
};

int main() {
    Batsman batsman("Sachin Tendulkar");
    batsman.inputData(18426, 248);
    batsman.displayData();

    return 0;
}

