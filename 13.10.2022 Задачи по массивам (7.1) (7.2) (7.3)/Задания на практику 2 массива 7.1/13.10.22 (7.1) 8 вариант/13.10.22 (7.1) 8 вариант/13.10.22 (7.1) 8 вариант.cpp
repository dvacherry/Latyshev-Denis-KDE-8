#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>
#include <conio.h>
enum
{
    n = 1000
};
struct rander :
    public std::unary_function<void, unsigned int>
{
    enum
    {
        max = 9999,
        min = 1000
    };
    rander()
    {
        srand(static_cast<unsigned int>(time(NULL)));
    }
    unsigned int operator()(void) const
    {
        return rand() % (max - min + 1) + min;
    }
};
struct condition :
    public std::unary_function<unsigned int, bool>
{
    bool operator()(unsigned int value) const
    {
        return (value / 100 + value / 1000) == (value % 100 + value % 1000);
    }
};
int main()
{

    std::vector<int> vector(n);
    std::generate(vector.begin(), vector.end(), rander());
    std::copy_if(vector.begin(), vector.end(), std::ostream_iterator<unsigned int>(std::cout, " "), condition());
    getch();
    return EXIT_SUCCESS;
}