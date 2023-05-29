#include <vector>
#include <algorithm>

int a(std::vector<int>& b) {
    if(b.empty())
        return 0;
    else if(b.size() == 1)
        return b[0];
    else {
        int first = b[0];
        b.erase(b.begin());
        return first + a(b);
    }
}

std::vector<int> c(std::vector<int>& d) {
    std::vector<int> result;
    for(auto& i : d)
        result.push_back(i * i);
    return result;
}

int e(std::vector<int>& f) {
    int g = f[0];
    for(auto it = f.begin() + 1; it != f.end(); ++it)
        if(*it > g)
            g = *it;
    return g;
}

int j(std::vector<int>& k) {
    int l = k[0];
    for(auto it = k.begin() + 1; it != k.end(); ++it)
        if(*it < l)
            l = *it;
    return l;
}

int n(std::vector<int>& o, int p) {
    int q = 0;
    for(auto& r : o)
        if(r == p)
            ++q;
    return q;
}

std::vector<int> s(std::vector<int>& t) {
    std::vector<int> u;
    for(auto& v : t)
        if(std::find(u.begin(), u.end(), v) == u.end())
            u.push_back(v);
    return u;
}

std::vector<int> w(std::vector<int> x) {
    std::vector<int> y = x;
    for(int i = 0; i < y.size(); ++i)
        for(int j = i + 1; j < y.size(); ++j)
            if(y[i] > y[j])
                std::swap(y[i], y[j]);
    return y;
}

std::vector<int> z(std::vector<int>& aa) {
    std::vector<int> result = aa;
    std::reverse(result.begin(), result.end());
    return result;
}

std::vector<int> ab(std::vector<int>& ac, std::vector<int>& ad) {
    std::vector<int> result = ac;
    result.insert(result.end(), ad.begin(), ad.end());
    return result;
}

bool ae(std::vector<int>& af) {
    for(int i = 0; i < af.size() - 1; ++i)
        if(af[i] > af[i + 1])
            return false;
    return true;
}

int ag(std::vector<int>& ah, int ai) {
    auto it = std::find(ah.begin(), ah.end(), ai);
    if(it == ah.end())
        return -1;
    else
        return std::distance(ah.begin(), it);
}

std::vector<int> aj(std::vector<int>& ak, int al, int am) {
    ak.insert(ak.begin() + am, al);
    return ak;
}
