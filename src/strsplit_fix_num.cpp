
#include <Rcpp.h>
#include <iostream>
#include <boost/lexical_cast.hpp> // one file, automatically found for me

using namespace Rcpp;

using boost::bad_lexical_cast;
using boost::lexical_cast;

// [[Rcpp::export]]
std::vector<double> lexicalCast(std::vector<std::string> v)
{

    std::vector<double> res(v.size());

    for (unsigned int i = 0; i < v.size(); i++)
    {
        try
        {
            res[i] = lexical_cast<double>(v[i]);
        }
        catch (bad_lexical_cast &)
        {
            res[i] = NA_REAL;
        }
    }

    return res;
}

// [[Rcpp::export]]
Rcpp::List strsplit_fix_num(std::vector<std::string> v, int N)
{
    if (N < 1)
        throw std::invalid_argument("N must be >= 1.");
    List res(v.size());
    for (int i = 0; i < v.size(); ++i)
    {
        int num = v[i].size() / N + (v[i].size() % N == 0 ? 0 : 1);
        std::vector<std::string> resCur(num, std::string(N, 0));
        for (int j = 0; j < num; ++j)
        {
            std::string S = v[i].substr(j * N, N);
            S.erase(std::remove_if(S.begin(), S.end(), ::isspace), S.end());
            resCur[j].assign(S);
        }
        std::vector<double> VD;
        VD = lexicalCast(resCur);
        res[i] = VD;
    }
    return res;
}
