#ifndef _PROFILE_H_
#define _PROFILE_H_

void psvs_profile_init();
bool psvs_profile_load();
bool psvs_profile_save(bool global);
bool psvs_profile_delete(bool global);
bool psvs_profile_exists(bool global);

#endif
