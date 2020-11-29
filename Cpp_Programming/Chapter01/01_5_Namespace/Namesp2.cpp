#include <iostream>

namespace BestComImp1 {
    void SimpleFunc(void);
}
namespace ProgComImp1 {
    void SimpleFunc(void);
}

int main(void) {
    BestComImp1::SimpleFunc();
    ProgComImp1::SimpleFunc();
    return 0;
}
void BestComImp1::SimpleFunc(void) {
    std::cout << "Function defined by BestCom" << std::endl;
}
void ProgComImp1::SimpleFunc(void) {
    std::cout << "Function defined by ProgCom" << std::endl;
}