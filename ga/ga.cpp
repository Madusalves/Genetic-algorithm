#include <iostream>
#include <math.h>
#include <random>
#include <vector>
#include <algorithm>

struct Solution
{
    double rank, x , y , z;
    void fitness()
    {
        double ans = (6 * x + -y + std::pow(z,200)) - 25;
        rank = (ans == 0 ) ? 9999 : std::abs(1/ans);
    } 

};


int main(){
    std::random_device device;
    std::uniform_int_distribution<double> unif(-100,100);

    std::vector<Solution> solutions;
    
    const int NUM = 900;
    for( int == 0; i< NUM; i++);
        solutions.push_back(Solution{0, unif(device),unif(device),unif(device)})

    for (auto& s : solutions) {s.fitness();}
    std::sort(solutions.begin(), solutions.end(),
    [](const auto& lhs, const auto& rhs ){
       return lhs.rank > rhs.rank;
    });
    //Print;
    std::for_each(solutions.begin(), solutions.end() + 10,
    [] (const auto& s){
        std::cout << std::fixed 
        << "Rank " << static_cast<int>(s.rank)
        << "\n x:" << s.x << "y: " << s.y << "z: " << s.z
        << "\n";
    });
    const int SAMPLE_SIZE = 1000;
    std::vector<Solution>sample;
    std::copy(
        solutions.begin(),
        solutions.begin() + SAMPLE_SIZE,    
        std::back_inserter(sample)
    );
 
   solutions.clear();
   
   
   }