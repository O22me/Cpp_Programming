#include <iostream>

namespace BestComImp1 {
    void SimpleFunc(void);
    void PrettyFunc(void);
}
namespace ProgComImp1 {
    void SimpleFunc(void);
}

int main(void) {
    BestComImp1::SimpleFunc();
    return 0;
}
void BestComImp1::SimpleFunc(void) {
    std::cout << "Function defined by BestCom" << std::endl;
    PrettyFunc();
    ProgComImp1::SimpleFunc();
}
void BestComImp1::PrettyFunc(void) {
    std::cout << "So Pretty" << std::endl;
}
void ProgComImp1::SimpleFunc(void) {
    std::cout << "Function defined by ProgCom" << std::endl;
}