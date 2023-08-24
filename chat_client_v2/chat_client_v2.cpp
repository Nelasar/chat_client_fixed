#include <string>
#include <fstream>
#include "routine.cpp"

int main()
{
#ifdef _WIN32
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Failed to initialize Winsock" << std::endl;
        return 1;
    }
#endif

    std::cout << "CLIENT IS ESTABLISHING A CONNECTION WITH SERVER THROUGH PORT: " << PORT << std::endl;
    users.read_from_file("users.txt"); // считывем сохранённых пользователей для дальнейшей работы
    std::filesystem::create_directory("C:\\ChatUsers"); // создание директории для более удобного хранения ифнормации о личных чатах

    std::cout << "List of users:\n";
    std::cout << users;

    system("pause");

    main_loop();

    return 0;
}