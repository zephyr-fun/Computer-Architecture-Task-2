#ifndef CPU_JUDGE_ADAPTER_HPP
#define CPU_JUDGE_ADAPTER_HPP

#include "env_iface.hpp"

class Adapter
{
public:
	Adapter() : env(nullptr) {}

	void setEnvironment(IEnvironment *env) { this->env = env; }

	void onRecv(std::uint8_t data);

	//TODO: You may the following settings according to the UART implementation in your CPU
	std::uint32_t getBaudrate() { return 9600; }
	serial::bytesize_t getBytesize() { return serial::eightbits; }
	serial::parity_t getParity() { return serial::parity_none; }
	serial::stopbits_t getStopBits() { return serial::stopbits_one; }

protected:
	IEnvironment *env;
};

#endif
