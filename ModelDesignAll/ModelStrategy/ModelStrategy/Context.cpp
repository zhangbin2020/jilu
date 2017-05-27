#include "Context.h"

Context::Context(StrategyInterface* st,QObject *parent)
	: QObject(parent)
	, m_strategy(st)
{

}

Context::~Context()
{

}

int Context::GetResult()
{
	m_strategy->SetA(m_A);
	m_strategy->SetB(m_B);
	return m_strategy->GetResult();
}
