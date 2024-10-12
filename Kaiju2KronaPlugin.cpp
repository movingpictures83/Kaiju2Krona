#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "Kaiju2KronaPlugin.h"

void Kaiju2KronaPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void Kaiju2KronaPlugin::run() {}

void Kaiju2KronaPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "kaiju2krona";
myCommand += " ";
myCommand += " -t "+PluginManager::addPrefix(myParameters["nodedump"])+" ";
myCommand += " -n "+PluginManager::addPrefix(myParameters["namesdump"])+" ";
myCommand += " -i "+PluginManager::addPrefix(myParameters["kaijuout"])+" ";
myCommand += "-o";
myCommand += " ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<Kaiju2KronaPlugin> Kaiju2KronaPluginProxy = PluginProxy<Kaiju2KronaPlugin>("Kaiju2Krona", PluginManager::getInstance());
