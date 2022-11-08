#include <iostream>
#include <string>
#include <time.h>
#include <fstream>
#include <windows.h>

#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

using namespace std;

char clockText[8][111];
char clockBase[8][111];
string fontSelect;
bool clockIsSet = false;
string inFileName = "";
int line;
int charLine = 0;
//int charStart = 0;
struct charWidth
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num0, numColon;
} char1;
struct charStart
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num0, numColon;
} chars1;
char digit1, digit2, digit4, digit5, digit7, digit8;
const char digit3 = 58;
const char digit6 = 58;
int l;
int m;

void readData()
{
    ifstream inFile;
    inFile.open(inFileName);

    if (inFile.is_open())
    {
        while (!inFile.eof())
        {


            for (int i = 0; i < 8; i++)
            {

                for (int j = 0; j < 111; j++)
                {
                    inFile.get(clockBase[i][j]);
                }


            }
            inFile.close();
        }
    }
    else
    {
        //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
}

void setTextWidth()
{
    char1.num1 = 8;
    chars1.num1 = 0;
    char1.num2 = 10;
    chars1.num2 = 8;
    char1.num3 = 10;
    chars1.num3 = 19;
    char1.num4 = 10;
    chars1.num4 = 30;
    char1.num5 = 10;
    chars1.num5 = 41;
    char1.num6 = 10;
    chars1.num6 = 52;
    char1.num7 = 10;
    chars1.num7 = 62;
    char1.num8 = 10;
    chars1.num8 = 73;
    char1.num9 = 10;
    chars1.num9 = 84;
    char1.num0 = 10;
    chars1.num0 = 95;
    char1.numColon = 3;
    chars1.numColon = 106;


}

void setNumber()
{

}

void drawClock()
{
    for (int i = 0; i < 8; i++)
    {






        for (int drawNum = 1; drawNum < 9; drawNum++)
        {

            if (drawNum == 1)
            {
                switch (digit1)
                {
                case '1':
                    l = char1.num1;
                    m = chars1.num1;
                    break;
                case '2':
                    l = char1.num2;
                    m = chars1.num2;
                    break;
                case '3':
                    l = char1.num3;
                    m = chars1.num3;
                    break;
                case '4':
                    l = char1.num4;
                    m = chars1.num4;
                    break;
                case '5':
                    l = char1.num5;
                    m = chars1.num5;
                    break;
                case '6':
                    l = char1.num6;
                    m = chars1.num6;
                    break;
                case '7':
                    l = char1.num7;
                    m = chars1.num7;
                    break;
                case '8':
                    l = char1.num8;
                    m = chars1.num8;
                    break;
                case '9':
                    l = char1.num9;
                    m = chars1.num9;
                    break;
                case '0':
                    l = char1.num0;
                    m = chars1.num0;
                    break;
                }
            }
            else if (drawNum == 2)
            {
                switch (digit2)
                {
                case '1':
                    l = char1.num1;
                    m = chars1.num1;
                    break;
                case '2':
                    l = char1.num2;
                    m = chars1.num2;
                    break;
                case '3':
                    l = char1.num3;
                    m = chars1.num3;
                    break;
                case '4':
                    l = char1.num4;
                    m = chars1.num4;
                    break;
                case '5':
                    l = char1.num5;
                    m = chars1.num5;
                    break;
                case '6':
                    l = char1.num6;
                    m = chars1.num6;
                    break;
                case '7':
                    l = char1.num7;
                    m = chars1.num7;
                    break;
                case '8':
                    l = char1.num8;
                    m = chars1.num8;
                    break;
                case '9':
                    l = char1.num9;
                    m = chars1.num9;
                    break;
                case '0':
                    l = char1.num0;
                    m = chars1.num0;
                    break;
                }
            }
            else if (drawNum == 3)
            {
                l = char1.numColon;
                m = chars1.numColon;
            }
            else if (drawNum == 4)
            {
                switch (digit4)
                {
                case '1':
                    l = char1.num1;
                    m = chars1.num1;
                    break;
                case '2':
                    l = char1.num2;
                    m = chars1.num2;
                    break;
                case '3':
                    l = char1.num3;
                    m = chars1.num3;
                    break;
                case '4':
                    l = char1.num4;
                    m = chars1.num4;
                    break;
                case '5':
                    l = char1.num5;
                    m = chars1.num5;
                    break;
                case '6':
                    l = char1.num6;
                    m = chars1.num6;
                    break;
                case '7':
                    l = char1.num7;
                    m = chars1.num7;
                    break;
                case '8':
                    l = char1.num8;
                    m = chars1.num8;
                    break;
                case '9':
                    l = char1.num9;
                    m = chars1.num9;
                    break;
                case '0':
                    l = char1.num0;
                    m = chars1.num0;
                    break;
                }
            }
            else if (drawNum == 5)
            {
                switch (digit5)
                {
                case '1':
                    l = char1.num1;
                    m = chars1.num1;
                    break;
                case '2':
                    l = char1.num2;
                    m = chars1.num2;
                    break;
                case '3':
                    l = char1.num3;
                    m = chars1.num3;
                    break;
                case '4':
                    l = char1.num4;
                    m = chars1.num4;
                    break;
                case '5':
                    l = char1.num5;
                    m = chars1.num5;
                    break;
                case '6':
                    l = char1.num6;
                    m = chars1.num6;
                    break;
                case '7':
                    l = char1.num7;
                    m = chars1.num7;
                    break;
                case '8':
                    l = char1.num8;
                    m = chars1.num8;
                    break;
                case '9':
                    l = char1.num9;
                    m = chars1.num9;
                    break;
                case '0':
                    l = char1.num0;
                    m = chars1.num0;
                    break;
                }
            }
            else if (drawNum == 6)
            {
                l = char1.numColon;
                m = chars1.numColon;
            }
            else if (drawNum == 7)
            {
                switch (digit7)
                {
                case '1':
                    l = char1.num1;
                    m = chars1.num1;
                    break;
                case '2':
                    l = char1.num2;
                    m = chars1.num2;
                    break;
                case '3':
                    l = char1.num3;
                    m = chars1.num3;
                    break;
                case '4':
                    l = char1.num4;
                    m = chars1.num4;
                    break;
                case '5':
                    l = char1.num5;
                    m = chars1.num5;
                    break;
                case '6':
                    l = char1.num6;
                    m = chars1.num6;
                    break;
                case '7':
                    l = char1.num7;
                    m = chars1.num7;
                    break;
                case '8':
                    l = char1.num8;
                    m = chars1.num8;
                    break;
                case '9':
                    l = char1.num9;
                    m = chars1.num9;
                    break;
                case '0':
                    l = char1.num0;
                    m = chars1.num0;
                    break;
                }
            }
            else if (drawNum == 8)
            {
                switch (digit8)
                {
                case '1':
                    l = char1.num1;
                    m = chars1.num1;
                    break;
                case '2':
                    l = char1.num2;
                    m = chars1.num2;
                    break;
                case '3':
                    l = char1.num3;
                    m = chars1.num3;
                    break;
                case '4':
                    l = char1.num4;
                    m = chars1.num4;
                    break;
                case '5':
                    l = char1.num5;
                    m = chars1.num5;
                    break;
                case '6':
                    l = char1.num6;
                    m = chars1.num6;
                    break;
                case '7':
                    l = char1.num7;
                    m = chars1.num7;
                    break;
                case '8':
                    l = char1.num8;
                    m = chars1.num8;
                    break;
                case '9':
                    l = char1.num9;
                    m = chars1.num9;
                    break;
                case '0':
                    l = char1.num0;
                    m = chars1.num0;
                    break;
                }
            }

            //            cout << "\n";





            for (int j = m; j < (m + l); j++)
            {
                cout << clockBase[i][j];;

            }
            cout << "   ";
        }
        cout << "\n";
    }
}






void drawFull()
{
    cout << "\n";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 110; j++)
        {
            cout << clockBase[i][j];
        }
        cout << "\n";
    }
}

const string currentDateTime()
{
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

void setClock()
{
    digit1 = currentDateTime()[11];
    digit2 = currentDateTime()[12];
    digit4 = currentDateTime()[14];
    digit5 = currentDateTime()[15];
    digit7 = currentDateTime()[17];
    digit8 = currentDateTime()[18];
    setTextWidth();
}


void setFont()
{

}


int main()
{
    while (true)
    {
        inFileName = "AsciiColossal.txt";
        setClock();
        readData();
        drawClock();
        //    drawFull();


        cout << digit1 << digit2 << digit3 << digit4 << digit5 << digit6 << digit7 << digit8 << "\n\n\n\n\n\n";
        Sleep(1000);
        system("Cls");

    }
    return 0;

}


