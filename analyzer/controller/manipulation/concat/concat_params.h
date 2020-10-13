#ifndef ANALYZE_CONCAT_PARAMS_H
#define ANALYZE_CONCAT_PARAMS_H


#include "../../Iparams.h"

class ConcatParams : public IParams {
public:
    explicit ConcatParams(std::string parameters);

    std::string m_seq1;
    std::string m_seq2;

};

inline ConcatParams::ConcatParams(std::string parameters)
{
    m_seq1 = popFirstWord(parameters);
    m_seq2 = popFirstWord(parameters);
}

#endif //ANALYZE_CONCAT_PARAMS_H
