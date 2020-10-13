#ifndef __CONCAT_H__
#define __CONCAT_H__


#include "../../Icomand.h"


class Concat : public Exec
{
public:
    Concat() {}
    void set(std::string parameters);
    /*virtual*/ std::string execute(Data*);
    Exec* clone() const { return new Concat(*this); }
    std::string get_type() const { return "concat";}
    

};

#endif
