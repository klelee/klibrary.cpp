#include "common.h"

int main()
{
    int ret = 0;
    KString url = "https://gitea.klelee.org/";
    std::cout << url;

    KString user = "klelee";

    KString access_url = url + user;

    std::cout << access_url;

    getchar();
    return ret;
}