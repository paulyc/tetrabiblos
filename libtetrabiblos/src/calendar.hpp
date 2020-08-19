/**
 * tetrabiblos.hpp - part of tetrabiblos, astronomical calendar
 *
 * Copyright (C) 2020 Paul Ciarlo <paul.ciarlo@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA  02110-1335, USA.
 **/

#ifndef _github_paulyc_tetrabiblos_hpp_
#define _github_paulyc_tetrabiblos_hpp_

#include <string>
#include <map>
using namespace std::string_literals;

namespace github {
namespace paulyc {
namespace tetrabiblos {

enum Month {
    Sagittarius,
    Capricornus,
    Aquarius,
    Pisces,
    Aries,
    Taurus,
    Gemini,
    Cancer,
    Leo,
    Virgo,
    Libra,
    Scorpius,
};

struct Date {
    int precessionalEpoch;
    int solarYear;
    Month month;
    int day;
};

enum GregorianMonth {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

namespace symbols {
    constexpr static const char8_t *Sagittarius = u8"♐";
    constexpr static const char8_t *Capricornus = u8"♑";
    constexpr static const char8_t *Aquarius    = u8"♒";
    constexpr static const char8_t *Pisces      = u8"♓";
    constexpr static const char8_t *Aries       = u8"♈";
    constexpr static const char8_t *Taurus      = u8"♉";
    constexpr static const char8_t *Gemini      = u8"♊";
    constexpr static const char8_t *Cancer      = u8"♋";
    constexpr static const char8_t *Leo         = u8"♌";
    constexpr static const char8_t *Virgo       = u8"♍";
    constexpr static const char8_t *Libra       = u8"♎";
    constexpr static const char8_t *Scorpius    = u8"♏";
}

static const std::map<Month, const char8_t*> enumToSymbolMap = {
    { Sagittarius, symbols::Sagittarius },
    { Capricornus, symbols::Capricornus },
    { Aquarius,    symbols::Aquarius },
    { Pisces,      symbols::Pisces },
    { Aries,       symbols::Aries },
    { Taurus,      symbols::Taurus },
    { Gemini,      symbols::Gemini },
    { Cancer,      symbols::Cancer },
    { Leo,         symbols::Leo },
    { Virgo,       symbols::Virgo },
    { Libra,       symbols::Libra },
    { Scorpius,    symbols::Scorpius },
};

struct GregorianDate {
    int year;
    GregorianMonth month;
    int day;
};

struct JulianDate {
    int year;
    int month;
    int day;
};

struct JulianDayDate {
    int integerPart;
    double fractionalPart;
};

class Calendar
{
public:
    static Date convertFromGregorian(GregorianDate gd);
private:
};

}
}
}

#endif /* _github_paulyc_tetrabiblos_hpp_ */
