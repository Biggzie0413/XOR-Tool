#include <Includes.h>

std::string c_Key::createKey(int length) {
	std::string key;
	const std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=[]{}|;':\",./<>?";
	for (int i = 0; i < length; ++i) {
		key += characters[rand() % characters.length()];
	}
	return key;
}
