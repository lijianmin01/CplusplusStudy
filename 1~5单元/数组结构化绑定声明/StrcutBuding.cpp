#include <iostream>
#include<array>

using std::cout;
using std::endl;

int main_structBuding()
{
    int a[]{1, 2, 3};

    //对数组a的元素进行绑定
    auto [e1, e2, e3] = a;
    cout << e1 << " " << e2 << " " << e3 << endl;
    //使用const修饰符绑定元素怒
    auto const [f1, f2, f3]{a};

    //引用类型
    auto &[z1, z2, z3]{a};
    z1 = 10;
    cout << a[0] << " " << z2 << " " << z3 << endl;
    
    std::array<int,2> b{11,22};
    
    return 0;
}