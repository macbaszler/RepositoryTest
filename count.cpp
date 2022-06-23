#include <iostream>
int main()
{
    int a;
        std::cout << "Enter a number: ";
        std::cin >> a;
            int s;
            int i;
                s=a;
                    do {
                        a = a-1;
                        s = a+s;
                        }
                    while(a>0);
        std::cout << "S= " << s << '\n';
        }