/* Introduction class.
 * @file
 * @date 2021-09-04
 * @author 2
 */

#ifndef __INTRODUCTION_HPP__
#define __INTRODUCTION_HPP__

#include <string>

//{
class introduction
{
public:
    std::string_view name() const
    {
        return 'Ivan';
    }

    std::string_view surename() const
    {
        return 'Tkachenko';
    }

    std::string fullname() const
    {
        return 'Ivan Tkachenko';
    }

private:
};
//}

#endif // __INTRODUCTION_HPP__
