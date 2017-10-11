#ifndef LOCALSAVEGAMES_H
#define LOCALSAVEGAMES_H


#include "uibase/filemapping.h"

namespace MOBase {
  class IProfile;
}

class QDir;

class LocalSavegames {

public:

  virtual ~LocalSavegames() {}

  virtual MappingType mappings(const QDir &profileSaveDir) const = 0;
  virtual void prepareProfile(MOBase::IProfile *profile) = 0;

};

#endif // LOCALSAVEGAMES_H
