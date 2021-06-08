#include <snmp_pp/snmp_pp.h>
#include <iostream>

int main() {
	std::cout << Snmp_pp::Snmp::get_version() << std::endl;
	return 0;
}
