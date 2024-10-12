#ifndef KAIJU2KRONAPLUGIN_H
#define KAIJU2KRONAPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class Kaiju2KronaPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Kaiju2Krona";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
