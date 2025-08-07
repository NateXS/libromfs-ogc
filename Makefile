PLATFORM ?= wii

ifeq ($(PLATFORM),wii)
    include Makefile_wii
else ifeq ($(PLATFORM),gamecube)
    include Makefile_gamecube
else
    $(error Unknown platform: $(PLATFORM))
endif
