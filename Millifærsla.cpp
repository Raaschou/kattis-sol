//
// Created by marcu on 17-06-2026.
//
#include <string_view>

std::string_view Millifærsla(const int a, const int b, const int c) {
    if (a < b && a < c) {
        return "Monnei";
    }

    if (b < c) {
        return "Fjee";
    }

    return "Dolladollabilljoll";
}