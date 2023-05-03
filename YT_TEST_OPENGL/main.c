
#include <YTMYLIB.h>

int main(void)
{
    logging("INFO : Creating Window");
    YT_CREATE_WINDOW(720, 720, "He everyone")
    {
        logging("INFO : Window Created");
        // This area can be the asset loading area
        YT_WHILE
        {
            YT_LOOP
        }
        YT_QUIT
    }

    logging("INFO : Program Ended");

    return 0;
}


