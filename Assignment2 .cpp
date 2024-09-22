#include <iostream>
using namespace std;
int main() {
    
    int numNotebooks = 15;
    int numPens = 20;
    
    double notebookCost = 2.25;
    
    double penCost = 0.75;
    
    double totalNotebookCost = numNotebooks * notebookCost;

    double totalPenCost = numPens * penCost;
    
    double totalCost = totalNotebookCost + totalPenCost;
    
    std::cout << "Total cost of notebooks: Rs. " << totalNotebookCost << std::endl;
    
    std::cout << "Total cost of pens: Rs. " << totalPenCost << std::endl;
    
    std::cout << "Total cost of all supplies: Rs. " << totalCost << std::endl;

return 0;
}
