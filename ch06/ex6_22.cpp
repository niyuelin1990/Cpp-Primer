// @Yue Wang
//
// Exercise 6.22:
// Write a function to swap two int pointers.
//
#include <iostream>
#include <string>
//交换指针内存地址
void swap(int *&lft, int *&rht)
{
    auto tmp = lft;
    lft = rht;
    rht = tmp;
}
//函数既不交换
void swap2(int *lft, int *rht)
{
    std::cout << "swap2 " << lft << " " << rht << " " << std::endl;

    int *tmp = lft;
    lft = rht;
    rht = tmp;
}

//交换指针所指内容
void swap3(int *lft, int *rht)
{
    //*lft 值
    int tmp = *lft;
    *lft = *rht;
    *rht = tmp;
}

int main()
{
    int i = 42, j = 99;
    auto *lft = &i;
    auto *rht = &j;
    std::cout << *lft << " " << *rht << " " << lft << " " << rht << std::endl;
    swap(lft, rht);
    std::cout << *lft << " " << *rht << " " << lft << " " << rht << std::endl;

    int i2 = 42, j2 = 99;
    auto *lft2 = &i2;
    auto *rht2 = &j2;
    std::cout << *lft2 << " " << *rht2 << " " << lft2 << " " << rht2 << std::endl;
    swap2(lft2, rht2);
    std::cout << *lft2 << " " << *rht2 << " " << lft2 << " " << rht2 << std::endl;

    int i3 = 42, j3 = 99;
    auto *lft3 = &i3;
    auto *rht3 = &j3;
    std::cout << *lft3 << " " << *rht3 << " " << lft3 << " " << rht3 << std::endl;
    swap3(lft3, rht3);
    std::cout << *lft3 << " " << *rht3 << " " << lft3 << " " << rht3 << std::endl;

    return 0;
}
