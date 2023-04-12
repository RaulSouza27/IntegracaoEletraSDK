#include <iostream>
#include <vector>
#include <chrono>

struct ClasseTest
{
    ClasseTest() {}
    ClasseTest(int a, std::string b)
        : a(a), b(b)
    {
    }

    int a;
    std::string b;
};

std::chrono::steady_clock::time_point m_StartTime;
std::chrono::steady_clock::time_point m_EndTime;

int main()
{
    const int SIZE_LIST = 100000;

    std::vector<ClasseTest> test_list(SIZE_LIST);

    for (int i = 0; i < SIZE_LIST; i++)
    {
        test_list[i] = ClasseTest(i, "raul");
    }

    m_StartTime = std::chrono::steady_clock::now();

    for (int i = 0; i < SIZE_LIST; i++)
    {
        test_list[i].a;
        test_list[i].b;
    }

    m_EndTime = std::chrono::steady_clock::now();

    std::cout << "povoar a lista = " << std::chrono::duration_cast<std::chrono::microseconds>(m_EndTime - m_StartTime).count() << "[ms]" << std::endl;
    
    m_StartTime = std::chrono::steady_clock::now();

    for (auto it = test_list.begin(); it != test_list.end(); it++)
    {
        it->a;
        it->b;
    }

    m_EndTime = std::chrono::steady_clock::now();

    std::cout << "povoar a lista = " << std::chrono::duration_cast<std::chrono::microseconds>(m_EndTime - m_StartTime).count() << "[ms]" << std::endl;
    
    m_StartTime = std::chrono::steady_clock::now();

    for (const auto &class_a : test_list)
    {
        class_a.a;
        class_a.b;
    }

    m_EndTime = std::chrono::steady_clock::now();

    std::cout << "povoar a lista = " << std::chrono::duration_cast<std::chrono::microseconds>(m_EndTime - m_StartTime).count() << "[ms]" << std::endl;
    
    m_StartTime = std::chrono::steady_clock::now();

    for (const auto class_a : test_list)
    {
        class_a.a;
        class_a.b;
    }

    m_EndTime = std::chrono::steady_clock::now();

    std::cout << "povoar a lista = " << std::chrono::duration_cast<std::chrono::microseconds>(m_EndTime - m_StartTime).count() << "[ms]" << std::endl;
    
    m_StartTime = std::chrono::steady_clock::now();

    for (auto &class_a : test_list)
    {
        class_a.a;
        class_a.b;
    }

    m_EndTime = std::chrono::steady_clock::now();

    std::cout << "povoar a lista = " << std::chrono::duration_cast<std::chrono::microseconds>(m_EndTime - m_StartTime).count() << "[ms]" << std::endl;

}
