extern "C" {
#include "openmodelica.h"
#include "meta_modelica.h"
#define ADD_METARECORD_DEFINITIONS static
#include "OpenModelicaBootstrappingHeader.h"
}

#include "TaskGraphResultsCmp.cpp"

extern "C" {
void* TaskGraphResults_checkTaskGraph(const char *filename,const char *reffilename)
{
  return TaskGraphResultsCmp_checkTaskGraph(filename,reffilename);
}

void* TaskGraphResults_checkCodeGraph(const char *filename,const char *reffilename)
{
  return TaskGraphResultsCmp_checkCodeGraph(filename,reffilename);
}

}

