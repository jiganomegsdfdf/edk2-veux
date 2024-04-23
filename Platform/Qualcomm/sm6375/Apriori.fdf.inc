APRIORI DXE {

  #
  # PI DXE Drivers producing Architectural Protocols (EFI Services)
  #
  INF  MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF  MdeModulePkg/Core/Dxe/DxeMain.inf
  INF  MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF  MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF  MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF  ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF  ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF  EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF  ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF  MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf


  INF  MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF  MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf


  INF  MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf
  INF  FatPkg/EnhancedFatDxe/Fat.inf


  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

!if $(SECURE_BOOT_ENABLE) == TRUE
  INF  SecurityPkg/VariableAuthenticated/SecureBootConfigDxe/SecureBootConfigDxe.inf
  INF  SecurityPkg/VariableAuthenticated/SecureBootDefaultKeysDxe/SecureBootDefaultKeysDxe.inf
!endif

  INF  MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF  EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF  MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF  EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF  MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF  MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF  MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF  MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf


  INF  MdeModulePkg/Universal/BdsDxe/BdsDxe.inf


  INF  Silicon/Qualcomm/QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
     
  INF  EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF  MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF  MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF  MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  

  FILE DRIVER = 8E9BD160-B184-11DF-94E2-0800200C9A66 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/DALSys/DALSys.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/DALSys/DALSys.efi
    SECTION UI = "DALSys"
  }
  FILE DRIVER = AF9763A2-033B-4109-8E17-56A98D380C92 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/HWIODxeDriver/HWIODxeDriver.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/HWIODxeDriver/HWIODxeDriver.efi
    SECTION UI = "HWIODxeDriver"
  }
  FILE DRIVER = 10E193DF-9966-44E7-B17C-59DD831E20FC {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/ChipInfo/ChipInfo.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/ChipInfo/ChipInfo.efi
    SECTION UI = "ChipInfo"
  }
  FILE DRIVER = B105211B-BBBD-4ADD-A3B0-D1CF4A52154C {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/PlatformInfoDxeDriver/PlatformInfoDxeDriver.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/PlatformInfoDxeDriver/PlatformInfoDxeDriver.efi
    SECTION UI = "PlatformInfoDxeDriver"
  }
  FILE DRIVER = 9A00771F-36D4-4DD5-8916-C48ED9B16B86 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/HALIOMMU/HALIOMMU.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/HALIOMMU/HALIOMMU.efi
    SECTION UI = "HALIOMMU"
  }
  FILE DRIVER = E43128A8-8692-42B6-8AFA-676158578D18 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/ULogDxe/ULogDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/ULogDxe/ULogDxe.efi
    SECTION UI = "ULogDxe"
  }
  FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219711 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/NpaDxe/NpaDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/NpaDxe/NpaDxe.efi
    SECTION UI = "NpaDxe"
  }
  FILE DRIVER = 4DB5DEA6-5302-4D1A-8A82-677A683B0D29 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/ClockDxe/ClockDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/ClockDxe/ClockDxe.efi
    SECTION UI = "ClockDxe"
  }
  FILE DRIVER = 9C1EB71F-DD6C-4ED5-9F6A-5CC0CA789F16 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/ShmBridgeDxe/ShmBridgeDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/ShmBridgeDxe/ShmBridgeDxe.efi
    SECTION UI = "ShmBridgeDxe"
  }
  FILE DRIVER = 2D7A83E3-E343-4FFB-9109-631F2EE11694 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/ScmDxe/ScmDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/ScmDxe/ScmDxe.efi
    SECTION UI = "ScmDxe"
  }
  FILE DRIVER = 7942A7EB-B7D5-4E2E-B908-831E4DE55B58 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/GlinkDxe/GlinkDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/GlinkDxe/GlinkDxe.efi
    SECTION UI = "GlinkDxe"
  }
  FILE DRIVER = 6B38F7B4-AD98-40E9-9093-ACA2B5A253C4 {
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/DiskIoDxe/DiskIoDxe.efi
    SECTION UI = "DiskIoDxe"
  }
  FILE DRIVER = 0D35CD8E-97EA-4F9A-96AF-0F0D89F76567 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/UFSDxe/UFSDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/UFSDxe/UFSDxe.efi
    SECTION UI = "UFSDxe"
  }
  FILE DRIVER = 6925FAD3-E243-4B69-AD61-3F978C8ABC60 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/TzDxe/TzDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/TzDxe/TzDxe.efi
    SECTION UI = "TzDxe"
  }
  FILE DRIVER = 040E1E61-0AFB-411B-9EC9-00F3FC59CC13 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/QcomWDogDxe/QcomWDogDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/QcomWDogDxe/QcomWDogDxe.efi
    SECTION UI = "QcomWDogDxe"
  }
  FILE DRIVER = 8681CC5A-0DF6-441E-B4B8-E915C538F067 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/DALTLMM/DALTLMM.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/DALTLMM/DALTLMM.efi
    SECTION UI = "DALTLMM"
  }
  FILE DRIVER = 2A7B4BEF-80CD-49E1-B473-374BA4D673FC {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/SPMI/SPMI.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/SPMI/SPMI.efi
    SECTION UI = "SPMI"
  }
  FILE DRIVER = 7DB0793A-4402-4BE1-906E-D0FABAD2707E {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/DDRInfoDxe/DDRInfoDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/DDRInfoDxe/DDRInfoDxe.efi
    SECTION UI = "DDRInfoDxe"
  }
  FILE DRIVER = 5776232E-082D-4B75-9A0E-FE1D13F7A5D9 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/PmicDxe/PmicDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/PmicDxe/PmicDxe.efi
    SECTION UI = "PmicDxe"
  }
  FILE DRIVER = 4138022F-06C7-4F79-9C94-7E33B511A4E7 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/DisplayDxe/DisplayDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/DisplayDxe/DisplayDxe.efi
    SECTION UI = "DisplayDxe"
  }
  FILE DRIVER = 1D317734-4083-47C6-83EA-E3A42F2A6BFF {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/PILDxe/PILDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/PILDxe/PILDxe.efi
    SECTION UI = "PILDxe"
  }
  FILE DRIVER = ED15FFD5-BC96-4107-9118-95366600188E {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/FontDxe/FontDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/FontDxe/FontDxe.efi
    SECTION UI = "FontDxe"
  }
  FILE DRIVER = 04DE8591-D2B3-4077-BBBE-B12070094EB6 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/I2C/I2C.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/I2C/I2C.efi
    SECTION UI = "I2C"
  }
  FILE DRIVER = 5A5CB8CA-9382-4E0C-B383-77FB517CD9EB {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/AdcDxe/AdcDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/AdcDxe/AdcDxe.efi
    SECTION UI = "AdcDxe"
  }
  FILE DRIVER = 11FAED4C-B21F-4D88-8E48-C4C28A1E50DF {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/UsbPwrCtrlDxe/UsbPwrCtrlDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/UsbPwrCtrlDxe/UsbPwrCtrlDxe.efi
    SECTION UI = "UsbPwrCtrlDxe"
  }
  FILE DRIVER = 5AF77F10-90DF-4E7E-8325-A17EC09D5443 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/UsbMsdDxe/UsbMsdDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/UsbMsdDxe/UsbMsdDxe.efi
    SECTION UI = "UsbMsdDxe"
  }
  FILE DRIVER = 94F8A6A7-DC34-4101-88C1-99179CCEAE83 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/UsbfnDwc3Dxe/UsbfnDwc3Dxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/UsbfnDwc3Dxe/UsbfnDwc3Dxe.efi
    SECTION UI = "UsbfnDwc3Dxe"
  }
  FILE DRIVER = CD823A4D-7DEC-4531-AE5D-4134FA4127B8 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/UsbConfigDxe/UsbConfigDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/UsbConfigDxe/UsbConfigDxe.efi
    SECTION UI = "UsbConfigDxe"
  }
  FILE DRIVER = 3299A266-15F0-4346-8318-716336736D3E {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/UsbDeviceDxe/UsbDeviceDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/UsbDeviceDxe/UsbDeviceDxe.efi
    SECTION UI = "UsbDeviceDxe"
  }
  #FILE DRIVER = F09AD92E-485C-9CDB-3E05-3385C38F94CC {
  #  SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/TsensDxe/TsensDxe.depex
  #  SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/TsensDxe/TsensDxe.efi
  #  SECTION UI = "TsensDxe"
  #}
  FILE DRIVER = 569EA0DE-B557-4043-84CF-01103FE516E5 {
    SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/sm6375/GpiDxe/GpiDxe.depex
    SECTION PE32 = Platform/EFI_Binaries/Drivers/sm6375/GpiDxe/GpiDxe.efi
    SECTION UI = "GpiDxe"
  }

  
}