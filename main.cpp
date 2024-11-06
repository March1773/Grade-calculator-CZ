#include <iostream>
int main(){
    double points = 0;
    double maxPoints = 0;
    double percentage = 0; 
    std::cout << "Kalkulačka Známek Od Viktora Pacholy\n";
    std::cout << "Prosím vložte pocet bodů... ";
    std::cin >> points;
    std::cout << "Prosím vložte maximalní počet bodů.. ";
    std::cin >> maxPoints;
    if (points > maxPoints){
        std::cout << "Počet bodů nemůže být více než maximální počet bodů vypínám program.";
        return 1;
    }
    percentage = (points / maxPoints) * 100;
    std::cout << "Žák získal " << percentage << " procent\n";
    return 0;
}