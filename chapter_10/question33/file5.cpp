
#include "Mirror.h"

extern Mirror &m4();
Mirror &m5() {
  static Mirror m5(m4());
  return m5;
}


bool result = m5().test();
int main(){
  std::cout.setf(std::ios::boolalpha);
    std::cout << result << std::endl;

return 0;
}
