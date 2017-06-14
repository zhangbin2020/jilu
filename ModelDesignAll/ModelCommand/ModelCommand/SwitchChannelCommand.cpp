#include "SwitchChannelCommand.h"


SwitchChannelCommand::SwitchChannelCommand()
{
}


SwitchChannelCommand::~SwitchChannelCommand()
{
}

void SwitchChannelCommand::execute()
{
	m_tv.ChangeChannel();
}
