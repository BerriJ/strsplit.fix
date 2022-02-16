
#include <Rcpp.h>

// [[Rcpp::export]]
Rcpp::List strsplit_fix(std::vector<std::string> v, int N)
{
    if (N < 1)
        throw std::invalid_argument("N must be >= 1.");
    Rcpp::List res(v.size());
    for (int i = 0; i < v.size(); ++i)
    {
        int num = v[i].size() / N + (v[i].size() % N == 0 ? 0 : 1);
        std::vector<std::string> resCur(num, std::string(N, 0));
        for (int j = 0; j < num; ++j)
        {
            resCur[j].assign(v[i].substr(j * N, N));
        }
        res[i] = resCur;
    }
    return res;
}
