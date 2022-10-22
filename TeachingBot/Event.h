#pragma once
#ifndef EVENT_H

#include "Discord.h"

class EventHandler {
public:
	EventHandler(dpp::cluster& bot);
	EventHandler() = default;
	void RegisterEvents(dpp::cluster& bot);
};

#endif // !EVENT_H
