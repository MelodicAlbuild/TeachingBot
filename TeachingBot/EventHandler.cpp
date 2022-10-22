#include "Event.h"

EventHandler::EventHandler(dpp::cluster& bot) {

}

void EventHandler::RegisterEvents(dpp::cluster& bot) {
	bot.on_slashcommand([](const dpp::slashcommand_t& event) {
		if (event.command.get_command_name() == "ping") {
			event.reply("Pong!");
		}

		if (event.command.get_command_name() == "gas") {
			event.reply("DIE MUTTER VERDAMMTE JUDN MEIN REICH");
		}

		if (event.command.get_command_name() == "bing") {
			event.reply("BONG");
		}
	});

	bot.on_ready([&bot](const dpp::ready_t& event) {
		if (dpp::run_once<struct register_bot_commands>()) {
			bot.global_command_create(dpp::slashcommand("ping", "Ping pong!", bot.me.id));
			bot.global_command_create(dpp::slashcommand("gas", "DIE MUTTER VERDAMMTE JUDN MEIN REICH", bot.me.id));
			bot.global_command_create(dpp::slashcommand("bing", "BONG", bot.me.id));
		}
	});
}