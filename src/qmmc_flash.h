#ifndef QMMC_FLASH_H_
#define QMMC_FLASH_H_

int backup_partition(const char *device, const char* backupfile, int stable_mode);
int flash_part_dd(const char *device, const char* imagefile, int quiet_mode, int stable_mode);
int backup_partition(const char* partition, const char* filename, int stable_mode);
int flash_part_chunk(const char *device, const char* imagefile, uint32_t chunk_size, int quiet_mode, int stable_mode);
int read_bytes(const char* partition, uint8_t *data, long int offset, long int len);

#endif
