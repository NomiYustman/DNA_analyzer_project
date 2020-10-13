#include "concat.h"
#include "concat_params.h"

void Concat::set(std::string parameters)
{
	m_params = new ConcatParams(parameters);
}

std::string Concat::execute(Data* data)
{
	DnaMetaData* DNA1 = const_cast<DnaMetaData *>(data -> getSeq(dynamic_cast<ConcatParams *>(m_params) ->m_seq1));
	DnaMetaData* DNA2 = const_cast<DnaMetaData *>(data -> getSeq(dynamic_cast<ConcatParams *>(m_params) ->m_seq2));
	DnaSequence d1(*(DNA1 -> getDNA()));
	DnaSequence d2(*(DNA2 -> getDNA()));
	DnaSequence d = d1 + d2;
	(*(DNA1 -> getDNA())) = d;
	return DNA1->stringFormat();
}
