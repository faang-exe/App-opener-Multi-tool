#include <iostream>
#include <cstdlib>
#include <string>

// ==========================================
//            COLOR FUNCTIONS
// ==========================================

std::string rgb(int r, int g, int b)
{
    return "\033[38;2;" +
           std::to_string(r) + ";" +
           std::to_string(g) + ";" +
           std::to_string(b) + "m";
}

const std::string RESET = "\033[0m";
const std::string BOLD  = "\033[1m";

// ==========================================
//                 BANNER
// ==========================================

void banner()
{
    std::cout << "\033[2J\033[H"; // Clear terminal

    std::cout << BOLD;

    std::cout << rgb(10, 30, 90)
              << "▗▄ ▄▖     ▗▄▖         █       ▗▄▄▄▖          ▗▄▖\n";

    std::cout << rgb(15, 50, 125)
              << "▐█ █▌     ▝▜▌   ▐▌    ▀       ▝▀█▀▘          ▝▜▌\n";

    std::cout << rgb(20, 75, 165)
              << "▐███▌▐▌ ▐▌ ▐▌  ▐███  ██         █   ▟█▙  ▟█▙  ▐▌\n";

    std::cout << rgb(25, 105, 205)
              << "▐▌█▐▌▐▌ ▐▌ ▐▌   ▐▌    █         █  ▐▛ ▜▌▐▛ ▜▌ ▐▌\n";

    std::cout << rgb(40, 135, 235)
              << "▐▌▀▐▌▐▌ ▐▌ ▐▌   ▐▌    █         █  ▐▌ ▐▌▐▌ ▐▌ ▐▌\n";

    std::cout << rgb(80, 170, 255)
              << "▐▌ ▐▌▐▙▄█▌ ▐▙▄  ▐▙▄ ▗▄█▄▖       █  ▝█▄█▘▝█▄█▘ ▐▙▄\n";

    std::cout << rgb(130, 205, 255)
              << "▝▘ ▝▘ ▀▀▝▘  ▀▀   ▀▀ ▝▀▀▀▘       ▀   ▝▀▘  ▝▀▘   ▀▀\n";

    std::cout << RESET;
}

// ==========================================
//                  MENU
// ==========================================

void options()
{
    std::cout << "\n";

    std::cout << rgb(255, 45, 45)
              << "  [1]  "
              << RESET
              << "Wireshark\n";

    std::cout << rgb(255, 105, 25)
              << "  [2]  "
              << RESET
              << "Spotify\n";

    std::cout << rgb(255, 165, 20)
              << "  [3]  "
              << RESET
              << "Calculator\n";

    std::cout << rgb(255, 220, 40)
              << "  [0]  "
              << RESET
              << "Exit\n";

    std::cout << "\n";
}

// ==========================================
//                   MAIN
// ==========================================

int main()
{
    banner();
    options();

    int choice;

    std::cout
        << rgb(70, 170, 255)
        << "  ┌─["
        << rgb(150, 215, 255)
        << "Multi Tool"
        << rgb(70, 170, 255)
        << "]\n"

        << "  └──╼ "
        << RESET;

    std::cin >> choice;

    std::cout << "\n";

    switch (choice)
    {
        case 1:
            std::cout
                << rgb(80, 180, 255)
                << "[+] Launching Wireshark...\n"
                << RESET;

            system("wireshark &");
            break;

        case 2:
            std::cout
                << rgb(80, 180, 255)
                << "[+] Launching Spotify...\n"
                << RESET;

            system("spotify &");
            break;

        case 3:
            std::cout
                << rgb(80, 180, 255)
                << "[+] Launching Calculator...\n"
                << RESET;

            system("gnome-calculator &");
            break;

        case 0:
            std::cout
                << rgb(255, 200, 50)
                << "[*] Goodbye.\n"
                << RESET;
            break;

        default:
            std::cout
                << rgb(255, 60, 60)
                << "[!] Invalid option.\n"
                << RESET;
            break;
    }

    return 0;
}