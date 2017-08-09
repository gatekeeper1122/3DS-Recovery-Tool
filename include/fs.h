#ifndef FS_H
#define FS_H

#include <3ds.h>

FS_Archive fsArchive;

void openArchive(FS_ArchiveID id);
void closeArchive(FS_ArchiveID id);
Result makeDir(FS_Archive archive, const char * path);
bool fileExists(FS_Archive archive, const char * path);
bool dirExists(FS_Archive archive, const char * path);
Result copy_file(char * a, char * b);
Result copy_file_archive(const char * src, const char * dst);

#endif