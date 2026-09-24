#include <iostream>

using namespace std;

int main()
{
      string brand[5]
    {
        "bmw",
        "audi",
        "mercedes",
        "porsche",
        "mazda"
    };

    string model[20]
    {
        "m4",
        "m8",
        "m2",
        "e96",
        "a3",
        "a1",
        "a7",
        "a5",
        "glc",
        "cla",
        "c-klasa",
        "b-klasa",
        "cayan",
        "911",
        "911 Carrera",
        "Panamera",
        "cx30",
        "cx50",
        "cx-60",
        "cx5"
    };


    for(int i = 0; i < 5; i++)
{
    cout << "Marka " << brand[i] << " Modeli: ";

    for(int j = 0; j < 4; j++)
    {
        cout << model[i * 4 + j] << " ";
    }

    cout << endl;
}



    return 0;
}
