[Defines]
  VENDOR_NAME                    = Xiaomi
  PLATFORM_NAME                  = veux
  PLATFORM_GUID                  = 28f1a3bf-193a-47e3-a7b9-5a435eaab2ee
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010019
  OUTPUT_DIRECTORY               = Build/$(PLATFORM_NAME)
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = Platform/Qualcomm/sm6375/sm6375.fdf
  DEVICE_DXE_FV_COMPONENTS       = Platform/Xiaomi/sm6375/veux.inc

  # Enable A/B Slot Environment
  AB_SLOTS_SUPPORT               = TRUE
  
!include Platform/Qualcomm/sm6375/sm6375.dsc

[BuildOptions.common]
  GCC:*_*_AARCH64_CC_FLAGS = -DMEMORY_8G -DENABLE_SIMPLE_INIT

[PcdsFixedAtBuild.common]
  gQcomTokenSpaceGuid.PcdMipiFrameBufferAddress|0x85200000
  gQcomTokenSpaceGuid.PcdMipiFrameBufferWidth|1080
  gQcomTokenSpaceGuid.PcdMipiFrameBufferHeight|2400

  # Simple Init
  gSimpleInitTokenSpaceGuid.PcdGuiDefaultDPI|414

  gRenegadePkgTokenSpaceGuid.PcdDeviceVendor|"Xiaomi"
  gRenegadePkgTokenSpaceGuid.PcdDeviceProduct|"Redmi Note 11 Pro 5G"
  gRenegadePkgTokenSpaceGuid.PcdDeviceCodeName|"veux"
  

