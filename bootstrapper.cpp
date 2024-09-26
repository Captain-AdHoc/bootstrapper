#include <iostream>
#include <cstdlib>

int main(int argc, char** argv)
{
  if (argc < 2)
    return 0;

  std::cout << "Attempting to execute " << argv[1] << std::endl;

  int ret = system(argv[1]);

  if (ret == 0)
    std::cout << "Command executed successfully." << std::endl;
  else
    std::cout << "Command execution failed or returned non-zero: " << ret << std::endl;

  return 0;
}
