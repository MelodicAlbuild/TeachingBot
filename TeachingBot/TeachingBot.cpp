#include "Discord.h"
#include "Event.h"

const string BOT_TOKEN = "NjkzOTM3MDY5NTc1MzcyODMw.Gj9hw_.qafNBtgRNB-44NU4ur95C3AZQhZx2iFMNeG62Y";

int main() 
{
	dpp::cluster bot(BOT_TOKEN);

	bot.on_log(dpp::utility::cout_logger());

	EventHandler *handler = new EventHandler(bot);

	handler->RegisterEvents(bot);

	bot.start(false);

	return 0;
}