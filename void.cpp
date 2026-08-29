#include <iostream>
#include <cstdlib>

void banner()
{
    std::cout << R"(
▗▄ ▄▖     ▗▄▖         █       ▗▄▄▄▖          ▗▄▖  
▐█ █▌     ▝▜▌   ▐▌    ▀       ▝▀█▀▘          ▝▜▌  
▐███▌▐▌ ▐▌ ▐▌  ▐███  ██         █   ▟█▙  ▟█▙  ▐▌  
▐▌█▐▌▐▌ ▐▌ ▐▌   ▐▌    █         █  ▐▛ ▜▌▐▛ ▜▌ ▐▌  
▐▌▀▐▌▐▌ ▐▌ ▐▌   ▐▌    █         █  ▐▌ ▐▌▐▌ ▐▌ ▐▌  
▐▌ ▐▌▐▙▄█▌ ▐▙▄  ▐▙▄ ▗▄█▄▖       █  ▝█▄█▘▝█▄█▘ ▐▙▄ 
▝▘ ▝▘ ▀▀▝▘  ▀▀   ▀▀ ▝▀▀▀▘       ▀   ▝▀▘  ▝▀▘   ▀▀
)";
}
void options()
{
    std::cout << "1.Wireshark\n";
    std::cout << "2.Spotify\n";
    std::cout << "3.Calculator\n";

}
int main()
{
    banner();
    options();
    int pt;
    std::cout << "\nEnter an option:";
    std::cin >> pt;

    switch (pt)
    {
        case 1:
            system("wireshark");
            break;
        case 2:
            system("spotify");
            break;
        case 3:
            system("galculator");
            break;
        default:
            std::cout << "Enter a valid option!";
    }
}
