#pragma once
#include <vector>

std::vector<int> merge(std::vector<int> s_1, std::vector<int> s_2) {

    int i = 0;
    int j = 0;
    std::vector<int> S;

    while (i < s_1.size() && j < s_2.size()) {
        if (s_1[i] <= s_2[j]) {
            S.push_back(s_1[i]);
            i++;
        } else {
            S.push_back(s_2[j]);
            j++;
        }
    }

    while (i < s_1.size()) {
        S.push_back(s_1[i]);
        i++;
    }
    while (j < s_2.size()) {
        S.push_back(s_2[j]);
        j++;
    }

    return S;
}