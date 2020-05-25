#include <iostream>
#include<array>

int main_test()
{
    // auto s{1};
    // std::cout << 666 << s << std::endl;

    std::array stdArr={'a','b','c'};
    //auto [d1,d2,d3]{stdArr};

    // for(int i=0;i<stderr.size();i++){
    //     std::cout<<stdArr[i]<<" "<<std::endl;
    // }
    std::cout<<stdArr[0];
    return 0;
}