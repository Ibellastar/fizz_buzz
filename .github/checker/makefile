CLEANUP = rm -rf
BUILD_DIR = ../../checker-output

#We try to detect the OS we are running on, and adjust commands as needed
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = rmdir
  endif
endif


all: clean setup compile check

clean:
	$(CLEANUP) $(BUILD_DIR)

setup:
	meson setup $(BUILD_DIR)

compile:
	meson compile -C $(BUILD_DIR)

check:
	meson test -C $(BUILD_DIR) --print-errorlogs -v