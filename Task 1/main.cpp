

#include <iostream>

enum months
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};



int main()
{
    setlocale(LC_ALL, "Russian");

    int m;
    std::cout << "������� ����� ������: ";
    std::cin >> m;

    while (m < 1 || m > 12 )
    {
        
        if (m == 0)
        {
            std::cout << "�� ��������" << std::endl;
            break;
        }
        else
        {
            std::cout << "������������ �����!" << std::endl;
            std::cin >> m;
        }
    }
     
        switch (m)
        {
        case Jan: std::cout << "������" << std::endl; break;
        case Feb: std::cout << "�������" << std::endl; break;
        case Mar: std::cout << "����" << std::endl; break;
        case Apr: std::cout << "������" << std::endl; break;
        case May: std::cout << "���" << std::endl; break;
        case Jun: std::cout << "����" << std::endl; break;
        case Jul: std::cout << "����" << std::endl; break;
        case Aug: std::cout << "������" << std::endl; break;
        case Sep: std::cout << "��������" << std::endl; break;
        case Oct: std::cout << "�������" << std::endl; break;
        case Nov: std::cout << "������" << std::endl; break;
        case Dec: std::cout << "�������" << std::endl; break;
        
        }
    
    return 0;

}


