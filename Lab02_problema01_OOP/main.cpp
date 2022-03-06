#include "NumberList.h"

int main()
{
    NumberList n;
    n.Init();
    n.Add(10);
    n.Add(5);
    n.Add(2);
    n.Print();
    n.Add(3);
    n.Add(7);
    n.Sort();
    n.Print();

    return 0;
}

