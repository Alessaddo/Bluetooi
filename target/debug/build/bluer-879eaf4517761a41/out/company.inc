/// Assigned identifiers for manufacturers.
///
/// Can be converted to and from ids.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, EnumString, Display)]
#[cfg_attr(feature = "serde", derive(serde::Serialize, serde::Deserialize))]
#[non_exhaustive]
pub enum Manufacturer {
    /// Ericsson Technology Licensing
    #[strum(serialize = "Ericsson Technology Licensing")]
    EricssonTechnologyLicensing,
    /// Nokia Mobile Phones
    #[strum(serialize = "Nokia Mobile Phones")]
    NokiaMobilePhones,
    /// Intel Corp.
    #[strum(serialize = "Intel Corp.")]
    IntelCorp,
    /// IBM Corp.
    #[strum(serialize = "IBM Corp.")]
    IBMCorp,
    /// Toshiba Corp.
    #[strum(serialize = "Toshiba Corp.")]
    ToshibaCorp,
    /// 3Com
    #[strum(serialize = "3Com")]
    N3Com,
    /// Microsoft
    #[strum(serialize = "Microsoft")]
    Microsoft,
    /// Lucent
    #[strum(serialize = "Lucent")]
    Lucent,
    /// Motorola
    #[strum(serialize = "Motorola")]
    Motorola,
    /// Infineon Technologies AG
    #[strum(serialize = "Infineon Technologies AG")]
    InfineonTechnologiesAG,
    /// Qualcomm Technologies International, Ltd. (QTIL)
    #[strum(serialize = "Qualcomm Technologies International, Ltd. (QTIL)")]
    QualcommTechnologiesInternationalLtdQTIL,
    /// Silicon Wave
    #[strum(serialize = "Silicon Wave")]
    SiliconWave,
    /// Digianswer A/S
    #[strum(serialize = "Digianswer A/S")]
    DigianswerAS,
    /// Texas Instruments Inc.
    #[strum(serialize = "Texas Instruments Inc.")]
    TexasInstrumentsInc,
    /// Parthus Technologies Inc.
    #[strum(serialize = "Parthus Technologies Inc.")]
    ParthusTechnologiesInc,
    /// Broadcom Corporation
    #[strum(serialize = "Broadcom Corporation")]
    BroadcomCorporation,
    /// Mitel Semiconductor
    #[strum(serialize = "Mitel Semiconductor")]
    MitelSemiconductor,
    /// Widcomm, Inc.
    #[strum(serialize = "Widcomm, Inc.")]
    WidcommInc,
    /// Zeevo, Inc.
    #[strum(serialize = "Zeevo, Inc.")]
    ZeevoInc,
    /// Atmel Corporation
    #[strum(serialize = "Atmel Corporation")]
    AtmelCorporation,
    /// Mitsubishi Electric Corporation
    #[strum(serialize = "Mitsubishi Electric Corporation")]
    MitsubishiElectricCorporation,
    /// RTX Telecom A/S
    #[strum(serialize = "RTX Telecom A/S")]
    RTXTelecomAS,
    /// KC Technology Inc.
    #[strum(serialize = "KC Technology Inc.")]
    KCTechnologyInc,
    /// Newlogic
    #[strum(serialize = "Newlogic")]
    Newlogic,
    /// Transilica, Inc.
    #[strum(serialize = "Transilica, Inc.")]
    TransilicaInc,
    /// Rohde & Schwarz GmbH & Co. KG
    #[strum(serialize = "Rohde & Schwarz GmbH & Co. KG")]
    RohdeSchwarzGmbHCoKG,
    /// TTPCom Limited
    #[strum(serialize = "TTPCom Limited")]
    TTPComLimited,
    /// Signia Technologies, Inc.
    #[strum(serialize = "Signia Technologies, Inc.")]
    SigniaTechnologiesInc,
    /// Conexant Systems Inc.
    #[strum(serialize = "Conexant Systems Inc.")]
    ConexantSystemsInc,
    /// Qualcomm
    #[strum(serialize = "Qualcomm")]
    Qualcomm,
    /// Inventel
    #[strum(serialize = "Inventel")]
    Inventel,
    /// AVM Berlin
    #[strum(serialize = "AVM Berlin")]
    AVMBerlin,
    /// BandSpeed, Inc.
    #[strum(serialize = "BandSpeed, Inc.")]
    BandSpeedInc,
    /// Mansella Ltd
    #[strum(serialize = "Mansella Ltd")]
    MansellaLtd,
    /// NEC Corporation
    #[strum(serialize = "NEC Corporation")]
    NECCorporation,
    /// WavePlus Technology Co., Ltd.
    #[strum(serialize = "WavePlus Technology Co., Ltd.")]
    WavePlusTechnologyCoLtd,
    /// Alcatel
    #[strum(serialize = "Alcatel")]
    Alcatel,
    /// NXP Semiconductors (formerly Philips Semiconductors)
    #[strum(serialize = "NXP Semiconductors (formerly Philips Semiconductors)")]
    NXPSemiconductorsFormerlyPhilipsSemiconductors,
    /// C Technologies
    #[strum(serialize = "C Technologies")]
    CTechnologies,
    /// Open Interface
    #[strum(serialize = "Open Interface")]
    OpenInterface,
    /// R F Micro Devices
    #[strum(serialize = "R F Micro Devices")]
    RFMicroDevices,
    /// Hitachi Ltd
    #[strum(serialize = "Hitachi Ltd")]
    HitachiLtd,
    /// Symbol Technologies, Inc.
    #[strum(serialize = "Symbol Technologies, Inc.")]
    SymbolTechnologiesInc,
    /// Tenovis
    #[strum(serialize = "Tenovis")]
    Tenovis,
    /// Macronix International Co. Ltd.
    #[strum(serialize = "Macronix International Co. Ltd.")]
    MacronixInternationalCoLtd,
    /// GCT Semiconductor
    #[strum(serialize = "GCT Semiconductor")]
    GCTSemiconductor,
    /// Norwood Systems
    #[strum(serialize = "Norwood Systems")]
    NorwoodSystems,
    /// MewTel Technology Inc.
    #[strum(serialize = "MewTel Technology Inc.")]
    MewTelTechnologyInc,
    /// ST Microelectronics
    #[strum(serialize = "ST Microelectronics")]
    STMicroelectronics,
    /// Synopsys, Inc.
    #[strum(serialize = "Synopsys, Inc.")]
    SynopsysInc,
    /// Red-M (Communications) Ltd
    #[strum(serialize = "Red-M (Communications) Ltd")]
    RedMCommunicationsLtd,
    /// Commil Ltd
    #[strum(serialize = "Commil Ltd")]
    CommilLtd,
    /// Computer Access Technology Corporation (CATC)
    #[strum(serialize = "Computer Access Technology Corporation (CATC)")]
    ComputerAccessTechnologyCorporationCATC,
    /// Eclipse (HQ Espana) S.L.
    #[strum(serialize = "Eclipse (HQ Espana) S.L.")]
    EclipseHQEspanaSL,
    /// Renesas Electronics Corporation
    #[strum(serialize = "Renesas Electronics Corporation")]
    RenesasElectronicsCorporation,
    /// Mobilian Corporation
    #[strum(serialize = "Mobilian Corporation")]
    MobilianCorporation,
    /// Syntronix Corporation
    #[strum(serialize = "Syntronix Corporation")]
    SyntronixCorporation,
    /// Integrated System Solution Corp.
    #[strum(serialize = "Integrated System Solution Corp.")]
    IntegratedSystemSolutionCorp,
    /// Panasonic Corporation (formerly Matsushita Electric Industrial Co., Ltd.)
    #[strum(serialize = "Panasonic Corporation (formerly Matsushita Electric Industrial Co., Ltd.)")]
    PanasonicCorporationFormerlyMatsushitaElectricIndustrialCoLtd,
    /// Gennum Corporation
    #[strum(serialize = "Gennum Corporation")]
    GennumCorporation,
    /// BlackBerry Limited        (formerly Research In Motion)
    #[strum(serialize = "BlackBerry Limited        (formerly Research In Motion)")]
    BlackBerryLimitedFormerlyResearchInMotion,
    /// IPextreme, Inc.
    #[strum(serialize = "IPextreme, Inc.")]
    IPextremeInc,
    /// Systems and Chips, Inc
    #[strum(serialize = "Systems and Chips, Inc")]
    SystemsAndChipsInc,
    /// Bluetooth SIG, Inc
    #[strum(serialize = "Bluetooth SIG, Inc")]
    BluetoothSIGInc,
    /// Seiko Epson Corporation
    #[strum(serialize = "Seiko Epson Corporation")]
    SeikoEpsonCorporation,
    /// Integrated Silicon Solution Taiwan, Inc.
    #[strum(serialize = "Integrated Silicon Solution Taiwan, Inc.")]
    IntegratedSiliconSolutionTaiwanInc,
    /// CONWISE Technology Corporation Ltd
    #[strum(serialize = "CONWISE Technology Corporation Ltd")]
    CONWISETechnologyCorporationLtd,
    /// PARROT AUTOMOTIVE SAS
    #[strum(serialize = "PARROT AUTOMOTIVE SAS")]
    PARROTAUTOMOTIVESAS,
    /// Socket Mobile
    #[strum(serialize = "Socket Mobile")]
    SocketMobile,
    /// Atheros Communications, Inc.
    #[strum(serialize = "Atheros Communications, Inc.")]
    AtherosCommunicationsInc,
    /// MediaTek, Inc.
    #[strum(serialize = "MediaTek, Inc.")]
    MediaTekInc,
    /// Bluegiga
    #[strum(serialize = "Bluegiga")]
    Bluegiga,
    /// Marvell Technology Group Ltd.
    #[strum(serialize = "Marvell Technology Group Ltd.")]
    MarvellTechnologyGroupLtd,
    /// 3DSP Corporation
    #[strum(serialize = "3DSP Corporation")]
    N3DSPCorporation,
    /// Accel Semiconductor Ltd.
    #[strum(serialize = "Accel Semiconductor Ltd.")]
    AccelSemiconductorLtd,
    /// Continental Automotive Systems
    #[strum(serialize = "Continental Automotive Systems")]
    ContinentalAutomotiveSystems,
    /// Apple, Inc.
    #[strum(serialize = "Apple, Inc.")]
    AppleInc,
    /// Staccato Communications, Inc.
    #[strum(serialize = "Staccato Communications, Inc.")]
    StaccatoCommunicationsInc,
    /// Avago Technologies
    #[strum(serialize = "Avago Technologies")]
    AvagoTechnologies,
    /// APT Ltd.
    #[strum(serialize = "APT Ltd.")]
    APTLtd,
    /// SiRF Technology, Inc.
    #[strum(serialize = "SiRF Technology, Inc.")]
    SiRFTechnologyInc,
    /// Tzero Technologies, Inc.
    #[strum(serialize = "Tzero Technologies, Inc.")]
    TzeroTechnologiesInc,
    /// J&M Corporation
    #[strum(serialize = "J&M Corporation")]
    JMCorporation,
    /// Free2move AB
    #[strum(serialize = "Free2move AB")]
    Free2moveAB,
    /// 3DiJoy Corporation
    #[strum(serialize = "3DiJoy Corporation")]
    N3DiJoyCorporation,
    /// Plantronics, Inc.
    #[strum(serialize = "Plantronics, Inc.")]
    PlantronicsInc,
    /// Sony Ericsson Mobile Communications
    #[strum(serialize = "Sony Ericsson Mobile Communications")]
    SonyEricssonMobileCommunications,
    /// Harman International Industries, Inc.
    #[strum(serialize = "Harman International Industries, Inc.")]
    HarmanInternationalIndustriesInc,
    /// Vizio, Inc.
    #[strum(serialize = "Vizio, Inc.")]
    VizioInc,
    /// Nordic Semiconductor ASA
    #[strum(serialize = "Nordic Semiconductor ASA")]
    NordicSemiconductorASA,
    /// EM Microelectronic-Marin SA
    #[strum(serialize = "EM Microelectronic-Marin SA")]
    EMMicroelectronicMarinSA,
    /// Ralink Technology Corporation
    #[strum(serialize = "Ralink Technology Corporation")]
    RalinkTechnologyCorporation,
    /// Belkin International, Inc.
    #[strum(serialize = "Belkin International, Inc.")]
    BelkinInternationalInc,
    /// Realtek Semiconductor Corporation
    #[strum(serialize = "Realtek Semiconductor Corporation")]
    RealtekSemiconductorCorporation,
    /// Stonestreet One, LLC
    #[strum(serialize = "Stonestreet One, LLC")]
    StonestreetOneLLC,
    /// Wicentric, Inc.
    #[strum(serialize = "Wicentric, Inc.")]
    WicentricInc,
    /// RivieraWaves S.A.S
    #[strum(serialize = "RivieraWaves S.A.S")]
    RivieraWavesSAS,
    /// RDA Microelectronics
    #[strum(serialize = "RDA Microelectronics")]
    RDAMicroelectronics,
    /// Gibson Guitars
    #[strum(serialize = "Gibson Guitars")]
    GibsonGuitars,
    /// MiCommand Inc.
    #[strum(serialize = "MiCommand Inc.")]
    MiCommandInc,
    /// Band XI International, LLC
    #[strum(serialize = "Band XI International, LLC")]
    BandXIInternationalLLC,
    /// HP, Inc.
    #[strum(serialize = "HP, Inc.")]
    HPInc,
    /// 9Solutions Oy
    #[strum(serialize = "9Solutions Oy")]
    N9SolutionsOy,
    /// GN Netcom A/S
    #[strum(serialize = "GN Netcom A/S")]
    GNNetcomAS,
    /// General Motors
    #[strum(serialize = "General Motors")]
    GeneralMotors,
    /// A&D Engineering, Inc.
    #[strum(serialize = "A&D Engineering, Inc.")]
    ADEngineeringInc,
    /// MindTree Ltd.
    #[strum(serialize = "MindTree Ltd.")]
    MindTreeLtd,
    /// Polar Electro OY
    #[strum(serialize = "Polar Electro OY")]
    PolarElectroOY,
    /// Beautiful Enterprise Co., Ltd.
    #[strum(serialize = "Beautiful Enterprise Co., Ltd.")]
    BeautifulEnterpriseCoLtd,
    /// BriarTek, Inc
    #[strum(serialize = "BriarTek, Inc")]
    BriarTekInc,
    /// Summit Data Communications, Inc.
    #[strum(serialize = "Summit Data Communications, Inc.")]
    SummitDataCommunicationsInc,
    /// Sound ID
    #[strum(serialize = "Sound ID")]
    SoundID,
    /// Monster, LLC
    #[strum(serialize = "Monster, LLC")]
    MonsterLLC,
    /// connectBlue AB
    #[strum(serialize = "connectBlue AB")]
    ConnectBlueAB,
    /// ShangHai Super Smart Electronics Co. Ltd.
    #[strum(serialize = "ShangHai Super Smart Electronics Co. Ltd.")]
    ShangHaiSuperSmartElectronicsCoLtd,
    /// Group Sense Ltd.
    #[strum(serialize = "Group Sense Ltd.")]
    GroupSenseLtd,
    /// Zomm, LLC
    #[strum(serialize = "Zomm, LLC")]
    ZommLLC,
    /// Samsung Electronics Co. Ltd.
    #[strum(serialize = "Samsung Electronics Co. Ltd.")]
    SamsungElectronicsCoLtd,
    /// Creative Technology Ltd.
    #[strum(serialize = "Creative Technology Ltd.")]
    CreativeTechnologyLtd,
    /// Laird Technologies
    #[strum(serialize = "Laird Technologies")]
    LairdTechnologies,
    /// Nike, Inc.
    #[strum(serialize = "Nike, Inc.")]
    NikeInc,
    /// lesswire AG
    #[strum(serialize = "lesswire AG")]
    LesswireAG,
    /// MStar Semiconductor, Inc.
    #[strum(serialize = "MStar Semiconductor, Inc.")]
    MStarSemiconductorInc,
    /// Hanlynn Technologies
    #[strum(serialize = "Hanlynn Technologies")]
    HanlynnTechnologies,
    /// A & R Cambridge
    #[strum(serialize = "A & R Cambridge")]
    ARCambridge,
    /// Seers Technology Co., Ltd.
    #[strum(serialize = "Seers Technology Co., Ltd.")]
    SeersTechnologyCoLtd,
    /// Sports Tracking Technologies Ltd.
    #[strum(serialize = "Sports Tracking Technologies Ltd.")]
    SportsTrackingTechnologiesLtd,
    /// Autonet Mobile
    #[strum(serialize = "Autonet Mobile")]
    AutonetMobile,
    /// DeLorme Publishing Company, Inc.
    #[strum(serialize = "DeLorme Publishing Company, Inc.")]
    DeLormePublishingCompanyInc,
    /// WuXi Vimicro
    #[strum(serialize = "WuXi Vimicro")]
    WuXiVimicro,
    /// Sennheiser Communications A/S
    #[strum(serialize = "Sennheiser Communications A/S")]
    SennheiserCommunicationsAS,
    /// TimeKeeping Systems, Inc.
    #[strum(serialize = "TimeKeeping Systems, Inc.")]
    TimeKeepingSystemsInc,
    /// Ludus Helsinki Ltd.
    #[strum(serialize = "Ludus Helsinki Ltd.")]
    LudusHelsinkiLtd,
    /// BlueRadios, Inc.
    #[strum(serialize = "BlueRadios, Inc.")]
    BlueRadiosInc,
    /// Equinux AG
    #[strum(serialize = "Equinux AG")]
    EquinuxAG,
    /// Garmin International, Inc.
    #[strum(serialize = "Garmin International, Inc.")]
    GarminInternationalInc,
    /// Ecotest
    #[strum(serialize = "Ecotest")]
    Ecotest,
    /// GN ReSound A/S
    #[strum(serialize = "GN ReSound A/S")]
    GNReSoundAS,
    /// Jawbone
    #[strum(serialize = "Jawbone")]
    Jawbone,
    /// Topcon Positioning Systems, LLC
    #[strum(serialize = "Topcon Positioning Systems, LLC")]
    TopconPositioningSystemsLLC,
    /// Gimbal Inc. (formerly Qualcomm Labs, Inc. and Qualcomm Retail Solutions, Inc.)
    #[strum(serialize = "Gimbal Inc. (formerly Qualcomm Labs, Inc. and Qualcomm Retail Solutions, Inc.)")]
    GimbalIncFormerlyQualcommLabsIncAndQualcommRetailSolutionsInc,
    /// Zscan Software
    #[strum(serialize = "Zscan Software")]
    ZscanSoftware,
    /// Quintic Corp
    #[strum(serialize = "Quintic Corp")]
    QuinticCorp,
    /// Telit Wireless Solutions GmbH (formerly Stollmann E+V GmbH)
    #[strum(serialize = "Telit Wireless Solutions GmbH (formerly Stollmann E+V GmbH)")]
    TelitWirelessSolutionsGmbHFormerlyStollmannEVGmbH,
    /// Funai Electric Co., Ltd.
    #[strum(serialize = "Funai Electric Co., Ltd.")]
    FunaiElectricCoLtd,
    /// Advanced PANMOBIL systems GmbH & Co. KG
    #[strum(serialize = "Advanced PANMOBIL systems GmbH & Co. KG")]
    AdvancedPANMOBILSystemsGmbHCoKG,
    /// ThinkOptics, Inc.
    #[strum(serialize = "ThinkOptics, Inc.")]
    ThinkOpticsInc,
    /// Universal Electronics, Inc.
    #[strum(serialize = "Universal Electronics, Inc.")]
    UniversalElectronicsInc,
    /// Airoha Technology Corp.
    #[strum(serialize = "Airoha Technology Corp.")]
    AirohaTechnologyCorp,
    /// NEC Lighting, Ltd.
    #[strum(serialize = "NEC Lighting, Ltd.")]
    NECLightingLtd,
    /// ODM Technology, Inc.
    #[strum(serialize = "ODM Technology, Inc.")]
    ODMTechnologyInc,
    /// ConnecteDevice Ltd.
    #[strum(serialize = "ConnecteDevice Ltd.")]
    ConnecteDeviceLtd,
    /// zero1.tv GmbH
    #[strum(serialize = "zero1.tv GmbH")]
    Zero1TvGmbH,
    /// i.Tech Dynamic Global Distribution Ltd.
    #[strum(serialize = "i.Tech Dynamic Global Distribution Ltd.")]
    ITechDynamicGlobalDistributionLtd,
    /// Alpwise
    #[strum(serialize = "Alpwise")]
    Alpwise,
    /// Jiangsu Toppower Automotive Electronics Co., Ltd.
    #[strum(serialize = "Jiangsu Toppower Automotive Electronics Co., Ltd.")]
    JiangsuToppowerAutomotiveElectronicsCoLtd,
    /// Colorfy, Inc.
    #[strum(serialize = "Colorfy, Inc.")]
    ColorfyInc,
    /// Geoforce Inc.
    #[strum(serialize = "Geoforce Inc.")]
    GeoforceInc,
    /// Bose Corporation
    #[strum(serialize = "Bose Corporation")]
    BoseCorporation,
    /// Suunto Oy
    #[strum(serialize = "Suunto Oy")]
    SuuntoOy,
    /// Kensington Computer Products Group
    #[strum(serialize = "Kensington Computer Products Group")]
    KensingtonComputerProductsGroup,
    /// SR-Medizinelektronik
    #[strum(serialize = "SR-Medizinelektronik")]
    SRMedizinelektronik,
    /// Vertu Corporation Limited
    #[strum(serialize = "Vertu Corporation Limited")]
    VertuCorporationLimited,
    /// Meta Watch Ltd.
    #[strum(serialize = "Meta Watch Ltd.")]
    MetaWatchLtd,
    /// LINAK A/S
    #[strum(serialize = "LINAK A/S")]
    LINAKAS,
    /// OTL Dynamics LLC
    #[strum(serialize = "OTL Dynamics LLC")]
    OTLDynamicsLLC,
    /// Panda Ocean Inc.
    #[strum(serialize = "Panda Ocean Inc.")]
    PandaOceanInc,
    /// Visteon Corporation
    #[strum(serialize = "Visteon Corporation")]
    VisteonCorporation,
    /// ARP Devices Limited
    #[strum(serialize = "ARP Devices Limited")]
    ARPDevicesLimited,
    /// MARELLI EUROPE S.P.A. (formerly Magneti Marelli S.p.A.)
    #[strum(serialize = "MARELLI EUROPE S.P.A. (formerly Magneti Marelli S.p.A.)")]
    MARELLIEUROPESPAFormerlyMagnetiMarelliSPA,
    /// CAEN RFID srl
    #[strum(serialize = "CAEN RFID srl")]
    CAENRFIDSrl,
    /// Ingenieur-Systemgruppe Zahn GmbH
    #[strum(serialize = "Ingenieur-Systemgruppe Zahn GmbH")]
    IngenieurSystemgruppeZahnGmbH,
    /// Green Throttle Games
    #[strum(serialize = "Green Throttle Games")]
    GreenThrottleGames,
    /// Peter Systemtechnik GmbH
    #[strum(serialize = "Peter Systemtechnik GmbH")]
    PeterSystemtechnikGmbH,
    /// Omegawave Oy
    #[strum(serialize = "Omegawave Oy")]
    OmegawaveOy,
    /// Cinetix
    #[strum(serialize = "Cinetix")]
    Cinetix,
    /// Passif Semiconductor Corp
    #[strum(serialize = "Passif Semiconductor Corp")]
    PassifSemiconductorCorp,
    /// Saris Cycling Group, Inc
    #[strum(serialize = "Saris Cycling Group, Inc")]
    SarisCyclingGroupInc,
    /// Bekey A/S
    #[strum(serialize = "Bekey A/S")]
    BekeyAS,
    /// Clarinox Technologies Pty. Ltd.
    #[strum(serialize = "Clarinox Technologies Pty. Ltd.")]
    ClarinoxTechnologiesPtyLtd,
    /// BDE Technology Co., Ltd.
    #[strum(serialize = "BDE Technology Co., Ltd.")]
    BDETechnologyCoLtd,
    /// Swirl Networks
    #[strum(serialize = "Swirl Networks")]
    SwirlNetworks,
    /// Meso international
    #[strum(serialize = "Meso international")]
    MesoInternational,
    /// TreLab Ltd
    #[strum(serialize = "TreLab Ltd")]
    TreLabLtd,
    /// Qualcomm Innovation Center, Inc. (QuIC)
    #[strum(serialize = "Qualcomm Innovation Center, Inc. (QuIC)")]
    QualcommInnovationCenterIncQuIC,
    /// Johnson Controls, Inc.
    #[strum(serialize = "Johnson Controls, Inc.")]
    JohnsonControlsInc,
    /// Starkey Laboratories Inc.
    #[strum(serialize = "Starkey Laboratories Inc.")]
    StarkeyLaboratoriesInc,
    /// S-Power Electronics Limited
    #[strum(serialize = "S-Power Electronics Limited")]
    SPowerElectronicsLimited,
    /// Ace Sensor Inc
    #[strum(serialize = "Ace Sensor Inc")]
    AceSensorInc,
    /// Aplix Corporation
    #[strum(serialize = "Aplix Corporation")]
    AplixCorporation,
    /// AAMP of America
    #[strum(serialize = "AAMP of America")]
    AAMPOfAmerica,
    /// Stalmart Technology Limited
    #[strum(serialize = "Stalmart Technology Limited")]
    StalmartTechnologyLimited,
    /// AMICCOM Electronics Corporation
    #[strum(serialize = "AMICCOM Electronics Corporation")]
    AMICCOMElectronicsCorporation,
    /// Shenzhen Excelsecu Data Technology Co.,Ltd
    #[strum(serialize = "Shenzhen Excelsecu Data Technology Co.,Ltd")]
    ShenzhenExcelsecuDataTechnologyCoLtd,
    /// Geneq Inc.
    #[strum(serialize = "Geneq Inc.")]
    GeneqInc,
    /// adidas AG
    #[strum(serialize = "adidas AG")]
    AdidasAG,
    /// LG Electronics
    #[strum(serialize = "LG Electronics")]
    LGElectronics,
    /// Onset Computer Corporation
    #[strum(serialize = "Onset Computer Corporation")]
    OnsetComputerCorporation,
    /// Selfly BV
    #[strum(serialize = "Selfly BV")]
    SelflyBV,
    /// Quuppa Oy.
    #[strum(serialize = "Quuppa Oy.")]
    QuuppaOy,
    /// GeLo Inc
    #[strum(serialize = "GeLo Inc")]
    GeLoInc,
    /// Evluma
    #[strum(serialize = "Evluma")]
    Evluma,
    /// MC10
    #[strum(serialize = "MC10")]
    MC10,
    /// Binauric SE
    #[strum(serialize = "Binauric SE")]
    BinauricSE,
    /// Beats Electronics
    #[strum(serialize = "Beats Electronics")]
    BeatsElectronics,
    /// Microchip Technology Inc.
    #[strum(serialize = "Microchip Technology Inc.")]
    MicrochipTechnologyInc,
    /// Elgato Systems GmbH
    #[strum(serialize = "Elgato Systems GmbH")]
    ElgatoSystemsGmbH,
    /// ARCHOS SA
    #[strum(serialize = "ARCHOS SA")]
    ARCHOSSA,
    /// Dexcom, Inc.
    #[strum(serialize = "Dexcom, Inc.")]
    DexcomInc,
    /// Polar Electro Europe B.V.
    #[strum(serialize = "Polar Electro Europe B.V.")]
    PolarElectroEuropeBV,
    /// Dialog Semiconductor B.V.
    #[strum(serialize = "Dialog Semiconductor B.V.")]
    DialogSemiconductorBV,
    /// Taixingbang Technology (HK) Co,. LTD.
    #[strum(serialize = "Taixingbang Technology (HK) Co,. LTD.")]
    TaixingbangTechnologyHKCoLTD,
    /// Kawantech
    #[strum(serialize = "Kawantech")]
    Kawantech,
    /// Austco Communication Systems
    #[strum(serialize = "Austco Communication Systems")]
    AustcoCommunicationSystems,
    /// Timex Group USA, Inc.
    #[strum(serialize = "Timex Group USA, Inc.")]
    TimexGroupUSAInc,
    /// Qualcomm Technologies, Inc.
    #[strum(serialize = "Qualcomm Technologies, Inc.")]
    QualcommTechnologiesInc,
    /// Qualcomm Connected Experiences, Inc.
    #[strum(serialize = "Qualcomm Connected Experiences, Inc.")]
    QualcommConnectedExperiencesInc,
    /// Voyetra Turtle Beach
    #[strum(serialize = "Voyetra Turtle Beach")]
    VoyetraTurtleBeach,
    /// txtr GmbH
    #[strum(serialize = "txtr GmbH")]
    TxtrGmbH,
    /// Biosentronics
    #[strum(serialize = "Biosentronics")]
    Biosentronics,
    /// Procter & Gamble
    #[strum(serialize = "Procter & Gamble")]
    ProcterGamble,
    /// Hosiden Corporation
    #[strum(serialize = "Hosiden Corporation")]
    HosidenCorporation,
    /// Muzik LLC
    #[strum(serialize = "Muzik LLC")]
    MuzikLLC,
    /// Misfit Wearables Corp
    #[strum(serialize = "Misfit Wearables Corp")]
    MisfitWearablesCorp,
    /// Google
    #[strum(serialize = "Google")]
    Google,
    /// Danlers Ltd
    #[strum(serialize = "Danlers Ltd")]
    DanlersLtd,
    /// Semilink Inc
    #[strum(serialize = "Semilink Inc")]
    SemilinkInc,
    /// inMusic Brands, Inc
    #[strum(serialize = "inMusic Brands, Inc")]
    InMusicBrandsInc,
    /// Laird Connectivity, Inc. formerly L.S. Research Inc.
    #[strum(serialize = "Laird Connectivity, Inc. formerly L.S. Research Inc.")]
    LairdConnectivityIncFormerlyLSResearchInc,
    /// Eden Software Consultants Ltd.
    #[strum(serialize = "Eden Software Consultants Ltd.")]
    EdenSoftwareConsultantsLtd,
    /// Freshtemp
    #[strum(serialize = "Freshtemp")]
    Freshtemp,
    /// KS Technologies
    #[strum(serialize = "KS Technologies")]
    KSTechnologies,
    /// ACTS Technologies
    #[strum(serialize = "ACTS Technologies")]
    ACTSTechnologies,
    /// Vtrack Systems
    #[strum(serialize = "Vtrack Systems")]
    VtrackSystems,
    /// Nielsen-Kellerman Company
    #[strum(serialize = "Nielsen-Kellerman Company")]
    NielsenKellermanCompany,
    /// Server Technology Inc.
    #[strum(serialize = "Server Technology Inc.")]
    ServerTechnologyInc,
    /// BioResearch Associates
    #[strum(serialize = "BioResearch Associates")]
    BioResearchAssociates,
    /// Jolly Logic, LLC
    #[strum(serialize = "Jolly Logic, LLC")]
    JollyLogicLLC,
    /// Above Average Outcomes, Inc.
    #[strum(serialize = "Above Average Outcomes, Inc.")]
    AboveAverageOutcomesInc,
    /// Bitsplitters GmbH
    #[strum(serialize = "Bitsplitters GmbH")]
    BitsplittersGmbH,
    /// PayPal, Inc.
    #[strum(serialize = "PayPal, Inc.")]
    PayPalInc,
    /// Witron Technology Limited
    #[strum(serialize = "Witron Technology Limited")]
    WitronTechnologyLimited,
    /// Morse Project Inc.
    #[strum(serialize = "Morse Project Inc.")]
    MorseProjectInc,
    /// Kent Displays Inc.
    #[strum(serialize = "Kent Displays Inc.")]
    KentDisplaysInc,
    /// Nautilus Inc.
    #[strum(serialize = "Nautilus Inc.")]
    NautilusInc,
    /// Smartifier Oy
    #[strum(serialize = "Smartifier Oy")]
    SmartifierOy,
    /// Elcometer Limited
    #[strum(serialize = "Elcometer Limited")]
    ElcometerLimited,
    /// VSN Technologies, Inc.
    #[strum(serialize = "VSN Technologies, Inc.")]
    VSNTechnologiesInc,
    /// AceUni Corp., Ltd.
    #[strum(serialize = "AceUni Corp., Ltd.")]
    AceUniCorpLtd,
    /// StickNFind
    #[strum(serialize = "StickNFind")]
    StickNFind,
    /// Crystal Code AB
    #[strum(serialize = "Crystal Code AB")]
    CrystalCodeAB,
    /// KOUKAAM a.s.
    #[strum(serialize = "KOUKAAM a.s.")]
    KOUKAAMAS,
    /// Delphi Corporation
    #[strum(serialize = "Delphi Corporation")]
    DelphiCorporation,
    /// ValenceTech Limited
    #[strum(serialize = "ValenceTech Limited")]
    ValenceTechLimited,
    /// Stanley Black and Decker
    #[strum(serialize = "Stanley Black and Decker")]
    StanleyBlackAndDecker,
    /// Typo Products, LLC
    #[strum(serialize = "Typo Products, LLC")]
    TypoProductsLLC,
    /// TomTom International BV
    #[strum(serialize = "TomTom International BV")]
    TomTomInternationalBV,
    /// Fugoo, Inc.
    #[strum(serialize = "Fugoo, Inc.")]
    FugooInc,
    /// Keiser Corporation
    #[strum(serialize = "Keiser Corporation")]
    KeiserCorporation,
    /// Bang & Olufsen A/S
    #[strum(serialize = "Bang & Olufsen A/S")]
    BangOlufsenAS,
    /// PLUS Location Systems Pty Ltd
    #[strum(serialize = "PLUS Location Systems Pty Ltd")]
    PLUSLocationSystemsPtyLtd,
    /// Ubiquitous Computing Technology Corporation
    #[strum(serialize = "Ubiquitous Computing Technology Corporation")]
    UbiquitousComputingTechnologyCorporation,
    /// Innovative Yachtter Solutions
    #[strum(serialize = "Innovative Yachtter Solutions")]
    InnovativeYachtterSolutions,
    /// William Demant Holding A/S
    #[strum(serialize = "William Demant Holding A/S")]
    WilliamDemantHoldingAS,
    /// Chicony Electronics Co., Ltd.
    #[strum(serialize = "Chicony Electronics Co., Ltd.")]
    ChiconyElectronicsCoLtd,
    /// Atus BV
    #[strum(serialize = "Atus BV")]
    AtusBV,
    /// Codegate Ltd
    #[strum(serialize = "Codegate Ltd")]
    CodegateLtd,
    /// ERi, Inc
    #[strum(serialize = "ERi, Inc")]
    ERiInc,
    /// Transducers Direct, LLC
    #[strum(serialize = "Transducers Direct, LLC")]
    TransducersDirectLLC,
    /// DENSO TEN LIMITED (formerly Fujitsu Ten LImited)
    #[strum(serialize = "DENSO TEN LIMITED (formerly Fujitsu Ten LImited)")]
    DENSOTENLIMITEDFormerlyFujitsuTenLImited,
    /// Audi AG
    #[strum(serialize = "Audi AG")]
    AudiAG,
    /// HiSilicon Technologies CO., LIMITED
    #[strum(serialize = "HiSilicon Technologies CO., LIMITED")]
    HiSiliconTechnologiesCOLIMITED,
    /// Nippon Seiki Co., Ltd.
    #[strum(serialize = "Nippon Seiki Co., Ltd.")]
    NipponSeikiCoLtd,
    /// Steelseries ApS
    #[strum(serialize = "Steelseries ApS")]
    SteelseriesApS,
    /// Visybl Inc.
    #[strum(serialize = "Visybl Inc.")]
    VisyblInc,
    /// Openbrain Technologies, Co., Ltd.
    #[strum(serialize = "Openbrain Technologies, Co., Ltd.")]
    OpenbrainTechnologiesCoLtd,
    /// Xensr
    #[strum(serialize = "Xensr")]
    Xensr,
    /// e.solutions
    #[strum(serialize = "e.solutions")]
    ESolutions,
    /// 10AK Technologies
    #[strum(serialize = "10AK Technologies")]
    N10AKTechnologies,
    /// Wimoto Technologies Inc
    #[strum(serialize = "Wimoto Technologies Inc")]
    WimotoTechnologiesInc,
    /// Radius Networks, Inc.
    #[strum(serialize = "Radius Networks, Inc.")]
    RadiusNetworksInc,
    /// Wize Technology Co., Ltd.
    #[strum(serialize = "Wize Technology Co., Ltd.")]
    WizeTechnologyCoLtd,
    /// Qualcomm Labs, Inc.
    #[strum(serialize = "Qualcomm Labs, Inc.")]
    QualcommLabsInc,
    /// Hewlett Packard Enterprise
    #[strum(serialize = "Hewlett Packard Enterprise")]
    HewlettPackardEnterprise,
    /// Baidu
    #[strum(serialize = "Baidu")]
    Baidu,
    /// Arendi AG
    #[strum(serialize = "Arendi AG")]
    ArendiAG,
    /// Skoda Auto a.s.
    #[strum(serialize = "Skoda Auto a.s.")]
    SkodaAutoAS,
    /// Volkswagen AG
    #[strum(serialize = "Volkswagen AG")]
    VolkswagenAG,
    /// Porsche AG
    #[strum(serialize = "Porsche AG")]
    PorscheAG,
    /// Sino Wealth Electronic Ltd.
    #[strum(serialize = "Sino Wealth Electronic Ltd.")]
    SinoWealthElectronicLtd,
    /// AirTurn, Inc.
    #[strum(serialize = "AirTurn, Inc.")]
    AirTurnInc,
    /// Kinsa, Inc
    #[strum(serialize = "Kinsa, Inc")]
    KinsaInc,
    /// HID Global
    #[strum(serialize = "HID Global")]
    HIDGlobal,
    /// SEAT es
    #[strum(serialize = "SEAT es")]
    SEATEs,
    /// Promethean Ltd.
    #[strum(serialize = "Promethean Ltd.")]
    PrometheanLtd,
    /// Salutica Allied Solutions
    #[strum(serialize = "Salutica Allied Solutions")]
    SaluticaAlliedSolutions,
    /// GPSI Group Pty Ltd
    #[strum(serialize = "GPSI Group Pty Ltd")]
    GPSIGroupPtyLtd,
    /// Nimble Devices Oy
    #[strum(serialize = "Nimble Devices Oy")]
    NimbleDevicesOy,
    /// Changzhou Yongse Infotech        Co., Ltd.
    #[strum(serialize = "Changzhou Yongse Infotech        Co., Ltd.")]
    ChangzhouYongseInfotechCoLtd,
    /// SportIQ
    #[strum(serialize = "SportIQ")]
    SportIQ,
    /// TEMEC Instruments B.V.
    #[strum(serialize = "TEMEC Instruments B.V.")]
    TEMECInstrumentsBV,
    /// Sony Corporation
    #[strum(serialize = "Sony Corporation")]
    SonyCorporation,
    /// ASSA ABLOY
    #[strum(serialize = "ASSA ABLOY")]
    ASSAABLOY,
    /// Clarion Co. Inc.
    #[strum(serialize = "Clarion Co. Inc.")]
    ClarionCoInc,
    /// Warehouse Innovations
    #[strum(serialize = "Warehouse Innovations")]
    WarehouseInnovations,
    /// Cypress Semiconductor
    #[strum(serialize = "Cypress Semiconductor")]
    CypressSemiconductor,
    /// MADS Inc
    #[strum(serialize = "MADS Inc")]
    MADSInc,
    /// Blue Maestro Limited
    #[strum(serialize = "Blue Maestro Limited")]
    BlueMaestroLimited,
    /// Resolution Products, Ltd.
    #[strum(serialize = "Resolution Products, Ltd.")]
    ResolutionProductsLtd,
    /// Aireware LLC
    #[strum(serialize = "Aireware LLC")]
    AirewareLLC,
    /// Silvair, Inc.
    #[strum(serialize = "Silvair, Inc.")]
    SilvairInc,
    /// Prestigio Plaza Ltd.
    #[strum(serialize = "Prestigio Plaza Ltd.")]
    PrestigioPlazaLtd,
    /// NTEO Inc.
    #[strum(serialize = "NTEO Inc.")]
    NTEOInc,
    /// Focus Systems Corporation
    #[strum(serialize = "Focus Systems Corporation")]
    FocusSystemsCorporation,
    /// Tencent Holdings Ltd.
    #[strum(serialize = "Tencent Holdings Ltd.")]
    TencentHoldingsLtd,
    /// Allegion
    #[strum(serialize = "Allegion")]
    Allegion,
    /// Murata Manufacturing Co., Ltd.
    #[strum(serialize = "Murata Manufacturing Co., Ltd.")]
    MurataManufacturingCoLtd,
    /// WirelessWERX
    #[strum(serialize = "WirelessWERX")]
    WirelessWERX,
    /// Nod, Inc.
    #[strum(serialize = "Nod, Inc.")]
    NodInc,
    /// B&B Manufacturing Company
    #[strum(serialize = "B&B Manufacturing Company")]
    BBManufacturingCompany,
    /// Alpine Electronics (China) Co., Ltd
    #[strum(serialize = "Alpine Electronics (China) Co., Ltd")]
    AlpineElectronicsChinaCoLtd,
    /// FedEx Services
    #[strum(serialize = "FedEx Services")]
    FedExServices,
    /// Grape Systems Inc.
    #[strum(serialize = "Grape Systems Inc.")]
    GrapeSystemsInc,
    /// Bkon Connect
    #[strum(serialize = "Bkon Connect")]
    BkonConnect,
    /// Lintech GmbH
    #[strum(serialize = "Lintech GmbH")]
    LintechGmbH,
    /// Novatel Wireless
    #[strum(serialize = "Novatel Wireless")]
    NovatelWireless,
    /// Ciright
    #[strum(serialize = "Ciright")]
    Ciright,
    /// Mighty Cast, Inc.
    #[strum(serialize = "Mighty Cast, Inc.")]
    MightyCastInc,
    /// Ambimat Electronics
    #[strum(serialize = "Ambimat Electronics")]
    AmbimatElectronics,
    /// Perytons Ltd.
    #[strum(serialize = "Perytons Ltd.")]
    PerytonsLtd,
    /// Tivoli Audio, LLC
    #[strum(serialize = "Tivoli Audio, LLC")]
    TivoliAudioLLC,
    /// Master Lock
    #[strum(serialize = "Master Lock")]
    MasterLock,
    /// Mesh-Net Ltd
    #[strum(serialize = "Mesh-Net Ltd")]
    MeshNetLtd,
    /// HUIZHOU DESAY SV AUTOMOTIVE CO., LTD.
    #[strum(serialize = "HUIZHOU DESAY SV AUTOMOTIVE CO., LTD.")]
    HUIZHOUDESAYSVAUTOMOTIVECOLTD,
    /// Tangerine, Inc.
    #[strum(serialize = "Tangerine, Inc.")]
    TangerineInc,
    /// B&W Group Ltd.
    #[strum(serialize = "B&W Group Ltd.")]
    BWGroupLtd,
    /// Pioneer Corporation
    #[strum(serialize = "Pioneer Corporation")]
    PioneerCorporation,
    /// OnBeep
    #[strum(serialize = "OnBeep")]
    OnBeep,
    /// Vernier Software & Technology
    #[strum(serialize = "Vernier Software & Technology")]
    VernierSoftwareTechnology,
    /// ROL Ergo
    #[strum(serialize = "ROL Ergo")]
    ROLErgo,
    /// Pebble Technology
    #[strum(serialize = "Pebble Technology")]
    PebbleTechnology,
    /// NETATMO
    #[strum(serialize = "NETATMO")]
    NETATMO,
    /// Accumulate AB
    #[strum(serialize = "Accumulate AB")]
    AccumulateAB,
    /// Anhui Huami Information Technology Co., Ltd.
    #[strum(serialize = "Anhui Huami Information Technology Co., Ltd.")]
    AnhuiHuamiInformationTechnologyCoLtd,
    /// Inmite s.r.o.
    #[strum(serialize = "Inmite s.r.o.")]
    InmiteSRO,
    /// ChefSteps, Inc.
    #[strum(serialize = "ChefSteps, Inc.")]
    ChefStepsInc,
    /// micas AG
    #[strum(serialize = "micas AG")]
    MicasAG,
    /// Biomedical Research Ltd.
    #[strum(serialize = "Biomedical Research Ltd.")]
    BiomedicalResearchLtd,
    /// Pitius Tec S.L.
    #[strum(serialize = "Pitius Tec S.L.")]
    PitiusTecSL,
    /// Estimote, Inc.
    #[strum(serialize = "Estimote, Inc.")]
    EstimoteInc,
    /// Unikey Technologies, Inc.
    #[strum(serialize = "Unikey Technologies, Inc.")]
    UnikeyTechnologiesInc,
    /// Timer Cap Co.
    #[strum(serialize = "Timer Cap Co.")]
    TimerCapCo,
    /// Awox formerly AwoX
    #[strum(serialize = "Awox formerly AwoX")]
    AwoxFormerlyAwoX,
    /// yikes
    #[strum(serialize = "yikes")]
    Yikes,
    /// MADSGlobalNZ Ltd.
    #[strum(serialize = "MADSGlobalNZ Ltd.")]
    MADSGlobalNZLtd,
    /// PCH International
    #[strum(serialize = "PCH International")]
    PCHInternational,
    /// Qingdao Yeelink Information Technology Co., Ltd.
    #[strum(serialize = "Qingdao Yeelink Information Technology Co., Ltd.")]
    QingdaoYeelinkInformationTechnologyCoLtd,
    /// Milwaukee Tool (Formally Milwaukee Electric Tools)
    #[strum(serialize = "Milwaukee Tool (Formally Milwaukee Electric Tools)")]
    MilwaukeeToolFormallyMilwaukeeElectricTools,
    /// MISHIK Pte Ltd
    #[strum(serialize = "MISHIK Pte Ltd")]
    MISHIKPteLtd,
    /// Ascensia Diabetes Care US Inc.
    #[strum(serialize = "Ascensia Diabetes Care US Inc.")]
    AscensiaDiabetesCareUSInc,
    /// Spicebox LLC
    #[strum(serialize = "Spicebox LLC")]
    SpiceboxLLC,
    /// emberlight
    #[strum(serialize = "emberlight")]
    Emberlight,
    /// Cooper-Atkins Corporation
    #[strum(serialize = "Cooper-Atkins Corporation")]
    CooperAtkinsCorporation,
    /// Qblinks
    #[strum(serialize = "Qblinks")]
    Qblinks,
    /// MYSPHERA
    #[strum(serialize = "MYSPHERA")]
    MYSPHERA,
    /// LifeScan Inc
    #[strum(serialize = "LifeScan Inc")]
    LifeScanInc,
    /// Volantic AB
    #[strum(serialize = "Volantic AB")]
    VolanticAB,
    /// Podo Labs, Inc
    #[strum(serialize = "Podo Labs, Inc")]
    PodoLabsInc,
    /// Roche Diabetes Care AG
    #[strum(serialize = "Roche Diabetes Care AG")]
    RocheDiabetesCareAG,
    /// Amazon.com Services, LLC (formerly Amazon Fulfillment Service)
    #[strum(serialize = "Amazon.com Services, LLC (formerly Amazon Fulfillment Service)")]
    AmazonComServicesLLCFormerlyAmazonFulfillmentService,
    /// Connovate Technology Private Limited
    #[strum(serialize = "Connovate Technology Private Limited")]
    ConnovateTechnologyPrivateLimited,
    /// Kocomojo, LLC
    #[strum(serialize = "Kocomojo, LLC")]
    KocomojoLLC,
    /// Everykey Inc.
    #[strum(serialize = "Everykey Inc.")]
    EverykeyInc,
    /// Dynamic Controls
    #[strum(serialize = "Dynamic Controls")]
    DynamicControls,
    /// SentriLock
    #[strum(serialize = "SentriLock")]
    SentriLock,
    /// I-SYST inc.
    #[strum(serialize = "I-SYST inc.")]
    ISYSTInc,
    /// CASIO COMPUTER CO., LTD.
    #[strum(serialize = "CASIO COMPUTER CO., LTD.")]
    CASIOCOMPUTERCOLTD,
    /// LAPIS Technology Co., Ltd. formerly LAPIS Semiconductor Co., Ltd.
    #[strum(serialize = "LAPIS Technology Co., Ltd. formerly LAPIS Semiconductor Co., Ltd.")]
    LAPISTechnologyCoLtdFormerlyLAPISSemiconductorCoLtd,
    /// Telemonitor, Inc.
    #[strum(serialize = "Telemonitor, Inc.")]
    TelemonitorInc,
    /// taskit GmbH
    #[strum(serialize = "taskit GmbH")]
    TaskitGmbH,
    /// Daimler AG
    #[strum(serialize = "Daimler AG")]
    DaimlerAG,
    /// BatAndCat
    #[strum(serialize = "BatAndCat")]
    BatAndCat,
    /// BluDotz Ltd
    #[strum(serialize = "BluDotz Ltd")]
    BluDotzLtd,
    /// XTel Wireless ApS
    #[strum(serialize = "XTel Wireless ApS")]
    XTelWirelessApS,
    /// Gigaset Communications GmbH
    #[strum(serialize = "Gigaset Communications GmbH")]
    GigasetCommunicationsGmbH,
    /// Gecko Health Innovations, Inc.
    #[strum(serialize = "Gecko Health Innovations, Inc.")]
    GeckoHealthInnovationsInc,
    /// HOP Ubiquitous
    #[strum(serialize = "HOP Ubiquitous")]
    HOPUbiquitous,
    /// Walt Disney
    #[strum(serialize = "Walt Disney")]
    WaltDisney,
    /// Nectar
    #[strum(serialize = "Nectar")]
    Nectar,
    /// bel'apps LLC
    #[strum(serialize = "bel'apps LLC")]
    BelAppsLLC,
    /// CORE Lighting Ltd
    #[strum(serialize = "CORE Lighting Ltd")]
    CORELightingLtd,
    /// Seraphim Sense Ltd
    #[strum(serialize = "Seraphim Sense Ltd")]
    SeraphimSenseLtd,
    /// Unico RBC
    #[strum(serialize = "Unico RBC")]
    UnicoRBC,
    /// Physical Enterprises Inc.
    #[strum(serialize = "Physical Enterprises Inc.")]
    PhysicalEnterprisesInc,
    /// Able Trend Technology Limited
    #[strum(serialize = "Able Trend Technology Limited")]
    AbleTrendTechnologyLimited,
    /// Konica Minolta, Inc.
    #[strum(serialize = "Konica Minolta, Inc.")]
    KonicaMinoltaInc,
    /// Wilo SE
    #[strum(serialize = "Wilo SE")]
    WiloSE,
    /// Extron Design Services
    #[strum(serialize = "Extron Design Services")]
    ExtronDesignServices,
    /// Fitbit, Inc.
    #[strum(serialize = "Fitbit, Inc.")]
    FitbitInc,
    /// Fireflies Systems
    #[strum(serialize = "Fireflies Systems")]
    FirefliesSystems,
    /// Intelletto Technologies Inc.
    #[strum(serialize = "Intelletto Technologies Inc.")]
    IntellettoTechnologiesInc,
    /// FDK CORPORATION
    #[strum(serialize = "FDK CORPORATION")]
    FDKCORPORATION,
    /// Cloudleaf, Inc
    #[strum(serialize = "Cloudleaf, Inc")]
    CloudleafInc,
    /// Maveric Automation LLC
    #[strum(serialize = "Maveric Automation LLC")]
    MavericAutomationLLC,
    /// Acoustic Stream Corporation
    #[strum(serialize = "Acoustic Stream Corporation")]
    AcousticStreamCorporation,
    /// Zuli
    #[strum(serialize = "Zuli")]
    Zuli,
    /// Paxton Access Ltd
    #[strum(serialize = "Paxton Access Ltd")]
    PaxtonAccessLtd,
    /// WiSilica Inc.
    #[strum(serialize = "WiSilica Inc.")]
    WiSilicaInc,
    /// VENGIT Korlatolt Felelossegu Tarsasag
    #[strum(serialize = "VENGIT Korlatolt Felelossegu Tarsasag")]
    VENGITKorlatoltFelelosseguTarsasag,
    /// SALTO SYSTEMS S.L.
    #[strum(serialize = "SALTO SYSTEMS S.L.")]
    SALTOSYSTEMSSL,
    /// TRON Forum (formerly T-Engine Forum)
    #[strum(serialize = "TRON Forum (formerly T-Engine Forum)")]
    TRONForumFormerlyTEngineForum,
    /// CUBETECH s.r.o.
    #[strum(serialize = "CUBETECH s.r.o.")]
    CUBETECHSRO,
    /// Cokiya Incorporated
    #[strum(serialize = "Cokiya Incorporated")]
    CokiyaIncorporated,
    /// CVS Health
    #[strum(serialize = "CVS Health")]
    CVSHealth,
    /// Ceruus
    #[strum(serialize = "Ceruus")]
    Ceruus,
    /// Strainstall Ltd
    #[strum(serialize = "Strainstall Ltd")]
    StrainstallLtd,
    /// Channel Enterprises (HK) Ltd.
    #[strum(serialize = "Channel Enterprises (HK) Ltd.")]
    ChannelEnterprisesHKLtd,
    /// FIAMM
    #[strum(serialize = "FIAMM")]
    FIAMM,
    /// GIGALANE.CO.,LTD
    #[strum(serialize = "GIGALANE.CO.,LTD")]
    GIGALANECOLTD,
    /// EROAD
    #[strum(serialize = "EROAD")]
    EROAD,
    /// Mine Safety Appliances
    #[strum(serialize = "Mine Safety Appliances")]
    MineSafetyAppliances,
    /// Icon Health and Fitness
    #[strum(serialize = "Icon Health and Fitness")]
    IconHealthAndFitness,
    /// Wille Engineering (formely as Asandoo GmbH)
    #[strum(serialize = "Wille Engineering (formely as Asandoo GmbH)")]
    WilleEngineeringFormelyAsAsandooGmbH,
    /// ENERGOUS CORPORATION
    #[strum(serialize = "ENERGOUS CORPORATION")]
    ENERGOUSCORPORATION,
    /// Taobao
    #[strum(serialize = "Taobao")]
    Taobao,
    /// Canon Inc.
    #[strum(serialize = "Canon Inc.")]
    CanonInc,
    /// Geophysical Technology Inc.
    #[strum(serialize = "Geophysical Technology Inc.")]
    GeophysicalTechnologyInc,
    /// Facebook, Inc.
    #[strum(serialize = "Facebook, Inc.")]
    FacebookInc,
    /// Trividia Health, Inc.
    #[strum(serialize = "Trividia Health, Inc.")]
    TrividiaHealthInc,
    /// FlightSafety International
    #[strum(serialize = "FlightSafety International")]
    FlightSafetyInternational,
    /// Earlens Corporation
    #[strum(serialize = "Earlens Corporation")]
    EarlensCorporation,
    /// Sunrise Micro Devices, Inc.
    #[strum(serialize = "Sunrise Micro Devices, Inc.")]
    SunriseMicroDevicesInc,
    /// Star Micronics Co., Ltd.
    #[strum(serialize = "Star Micronics Co., Ltd.")]
    StarMicronicsCoLtd,
    /// Netizens Sp. z o.o.
    #[strum(serialize = "Netizens Sp. z o.o.")]
    NetizensSpZOO,
    /// Nymi Inc.
    #[strum(serialize = "Nymi Inc.")]
    NymiInc,
    /// Nytec, Inc.
    #[strum(serialize = "Nytec, Inc.")]
    NytecInc,
    /// Trineo Sp. z o.o.
    #[strum(serialize = "Trineo Sp. z o.o.")]
    TrineoSpZOO,
    /// Nest Labs Inc.
    #[strum(serialize = "Nest Labs Inc.")]
    NestLabsInc,
    /// LM Technologies Ltd
    #[strum(serialize = "LM Technologies Ltd")]
    LMTechnologiesLtd,
    /// General Electric Company
    #[strum(serialize = "General Electric Company")]
    GeneralElectricCompany,
    /// i+D3 S.L.
    #[strum(serialize = "i+D3 S.L.")]
    ID3SL,
    /// HANA Micron
    #[strum(serialize = "HANA Micron")]
    HANAMicron,
    /// Stages Cycling LLC
    #[strum(serialize = "Stages Cycling LLC")]
    StagesCyclingLLC,
    /// Cochlear Bone Anchored Solutions AB
    #[strum(serialize = "Cochlear Bone Anchored Solutions AB")]
    CochlearBoneAnchoredSolutionsAB,
    /// SenionLab AB
    #[strum(serialize = "SenionLab AB")]
    SenionLabAB,
    /// Syszone Co., Ltd
    #[strum(serialize = "Syszone Co., Ltd")]
    SyszoneCoLtd,
    /// Pulsate Mobile Ltd.
    #[strum(serialize = "Pulsate Mobile Ltd.")]
    PulsateMobileLtd,
    /// Hong Kong HunterSun Electronic Limited
    #[strum(serialize = "Hong Kong HunterSun Electronic Limited")]
    HongKongHunterSunElectronicLimited,
    /// pironex GmbH
    #[strum(serialize = "pironex GmbH")]
    PironexGmbH,
    /// BRADATECH Corp.
    #[strum(serialize = "BRADATECH Corp.")]
    BRADATECHCorp,
    /// Transenergooil AG
    #[strum(serialize = "Transenergooil AG")]
    TransenergooilAG,
    /// Bunch
    #[strum(serialize = "Bunch")]
    Bunch,
    /// DME Microelectronics
    #[strum(serialize = "DME Microelectronics")]
    DMEMicroelectronics,
    /// Bitcraze AB
    #[strum(serialize = "Bitcraze AB")]
    BitcrazeAB,
    /// HASWARE Inc.
    #[strum(serialize = "HASWARE Inc.")]
    HASWAREInc,
    /// Abiogenix Inc.
    #[strum(serialize = "Abiogenix Inc.")]
    AbiogenixInc,
    /// Poly-Control ApS
    #[strum(serialize = "Poly-Control ApS")]
    PolyControlApS,
    /// Avi-on
    #[strum(serialize = "Avi-on")]
    AviOn,
    /// Laerdal Medical AS
    #[strum(serialize = "Laerdal Medical AS")]
    LaerdalMedicalAS,
    /// Fetch My Pet
    #[strum(serialize = "Fetch My Pet")]
    FetchMyPet,
    /// Sam Labs Ltd.
    #[strum(serialize = "Sam Labs Ltd.")]
    SamLabsLtd,
    /// Chengdu Synwing Technology Ltd
    #[strum(serialize = "Chengdu Synwing Technology Ltd")]
    ChengduSynwingTechnologyLtd,
    /// HOUWA SYSTEM DESIGN, k.k.
    #[strum(serialize = "HOUWA SYSTEM DESIGN, k.k.")]
    HOUWASYSTEMDESIGNKK,
    /// BSH
    #[strum(serialize = "BSH")]
    BSH,
    /// Primus Inter Pares Ltd
    #[strum(serialize = "Primus Inter Pares Ltd")]
    PrimusInterParesLtd,
    /// August Home, Inc
    #[strum(serialize = "August Home, Inc")]
    AugustHomeInc,
    /// Gill Electronics
    #[strum(serialize = "Gill Electronics")]
    GillElectronics,
    /// Sky Wave Design
    #[strum(serialize = "Sky Wave Design")]
    SkyWaveDesign,
    /// Newlab S.r.l.
    #[strum(serialize = "Newlab S.r.l.")]
    NewlabSRL,
    /// ELAD srl
    #[strum(serialize = "ELAD srl")]
    ELADSrl,
    /// G-wearables inc.
    #[strum(serialize = "G-wearables inc.")]
    GWearablesInc,
    /// Squadrone Systems Inc.
    #[strum(serialize = "Squadrone Systems Inc.")]
    SquadroneSystemsInc,
    /// Code Corporation
    #[strum(serialize = "Code Corporation")]
    CodeCorporation,
    /// Savant Systems LLC
    #[strum(serialize = "Savant Systems LLC")]
    SavantSystemsLLC,
    /// Logitech International SA
    #[strum(serialize = "Logitech International SA")]
    LogitechInternationalSA,
    /// Innblue Consulting
    #[strum(serialize = "Innblue Consulting")]
    InnblueConsulting,
    /// iParking Ltd.
    #[strum(serialize = "iParking Ltd.")]
    IParkingLtd,
    /// Koninklijke Philips Electronics N.V.
    #[strum(serialize = "Koninklijke Philips Electronics N.V.")]
    KoninklijkePhilipsElectronicsNV,
    /// Minelab Electronics Pty Limited
    #[strum(serialize = "Minelab Electronics Pty Limited")]
    MinelabElectronicsPtyLimited,
    /// Bison Group Ltd.
    #[strum(serialize = "Bison Group Ltd.")]
    BisonGroupLtd,
    /// Widex A/S
    #[strum(serialize = "Widex A/S")]
    WidexAS,
    /// Jolla Ltd
    #[strum(serialize = "Jolla Ltd")]
    JollaLtd,
    /// Lectronix, Inc.
    #[strum(serialize = "Lectronix, Inc.")]
    LectronixInc,
    /// Caterpillar Inc
    #[strum(serialize = "Caterpillar Inc")]
    CaterpillarInc,
    /// Freedom Innovations
    #[strum(serialize = "Freedom Innovations")]
    FreedomInnovations,
    /// Dynamic Devices Ltd
    #[strum(serialize = "Dynamic Devices Ltd")]
    DynamicDevicesLtd,
    /// Technology Solutions (UK) Ltd
    #[strum(serialize = "Technology Solutions (UK) Ltd")]
    TechnologySolutionsUKLtd,
    /// IPS Group Inc.
    #[strum(serialize = "IPS Group Inc.")]
    IPSGroupInc,
    /// STIR
    #[strum(serialize = "STIR")]
    STIR,
    /// Sano, Inc.
    #[strum(serialize = "Sano, Inc.")]
    SanoInc,
    /// Advanced Application Design, Inc.
    #[strum(serialize = "Advanced Application Design, Inc.")]
    AdvancedApplicationDesignInc,
    /// AutoMap LLC
    #[strum(serialize = "AutoMap LLC")]
    AutoMapLLC,
    /// Spreadtrum Communications Shanghai Ltd
    #[strum(serialize = "Spreadtrum Communications Shanghai Ltd")]
    SpreadtrumCommunicationsShanghaiLtd,
    /// CuteCircuit LTD
    #[strum(serialize = "CuteCircuit LTD")]
    CuteCircuitLTD,
    /// Valeo Service
    #[strum(serialize = "Valeo Service")]
    ValeoService,
    /// Fullpower Technologies, Inc.
    #[strum(serialize = "Fullpower Technologies, Inc.")]
    FullpowerTechnologiesInc,
    /// KloudNation
    #[strum(serialize = "KloudNation")]
    KloudNation,
    /// Zebra Technologies Corporation
    #[strum(serialize = "Zebra Technologies Corporation")]
    ZebraTechnologiesCorporation,
    /// Itron, Inc.
    #[strum(serialize = "Itron, Inc.")]
    ItronInc,
    /// The University of Tokyo
    #[strum(serialize = "The University of Tokyo")]
    TheUniversityOfTokyo,
    /// UTC Fire and Security
    #[strum(serialize = "UTC Fire and Security")]
    UTCFireAndSecurity,
    /// Cool Webthings Limited
    #[strum(serialize = "Cool Webthings Limited")]
    CoolWebthingsLimited,
    /// DJO Global
    #[strum(serialize = "DJO Global")]
    DJOGlobal,
    /// Gelliner Limited
    #[strum(serialize = "Gelliner Limited")]
    GellinerLimited,
    /// Anyka (Guangzhou) Microelectronics Technology Co, LTD
    #[strum(serialize = "Anyka (Guangzhou) Microelectronics Technology Co, LTD")]
    AnykaGuangzhouMicroelectronicsTechnologyCoLTD,
    /// Medtronic Inc.
    #[strum(serialize = "Medtronic Inc.")]
    MedtronicInc,
    /// Gozio Inc.
    #[strum(serialize = "Gozio Inc.")]
    GozioInc,
    /// Form Lifting, LLC
    #[strum(serialize = "Form Lifting, LLC")]
    FormLiftingLLC,
    /// Wahoo Fitness, LLC
    #[strum(serialize = "Wahoo Fitness, LLC")]
    WahooFitnessLLC,
    /// Kontakt Micro-Location Sp. z o.o.
    #[strum(serialize = "Kontakt Micro-Location Sp. z o.o.")]
    KontaktMicroLocationSpZOO,
    /// Radio Systems Corporation
    #[strum(serialize = "Radio Systems Corporation")]
    RadioSystemsCorporation,
    /// Freescale Semiconductor, Inc.
    #[strum(serialize = "Freescale Semiconductor, Inc.")]
    FreescaleSemiconductorInc,
    /// Verifone Systems Pte Ltd. Taiwan Branch
    #[strum(serialize = "Verifone Systems Pte Ltd. Taiwan Branch")]
    VerifoneSystemsPteLtdTaiwanBranch,
    /// AR Timing
    #[strum(serialize = "AR Timing")]
    ARTiming,
    /// Rigado LLC
    #[strum(serialize = "Rigado LLC")]
    RigadoLLC,
    /// Kemppi Oy
    #[strum(serialize = "Kemppi Oy")]
    KemppiOy,
    /// Tapcentive Inc.
    #[strum(serialize = "Tapcentive Inc.")]
    TapcentiveInc,
    /// Smartbotics Inc.
    #[strum(serialize = "Smartbotics Inc.")]
    SmartboticsInc,
    /// Otter Products, LLC
    #[strum(serialize = "Otter Products, LLC")]
    OtterProductsLLC,
    /// STEMP Inc.
    #[strum(serialize = "STEMP Inc.")]
    STEMPInc,
    /// LumiGeek LLC
    #[strum(serialize = "LumiGeek LLC")]
    LumiGeekLLC,
    /// InvisionHeart Inc.
    #[strum(serialize = "InvisionHeart Inc.")]
    InvisionHeartInc,
    /// Macnica Inc.
    #[strum(serialize = "Macnica Inc.")]
    MacnicaInc,
    /// Jaguar Land Rover Limited
    #[strum(serialize = "Jaguar Land Rover Limited")]
    JaguarLandRoverLimited,
    /// CoroWare Technologies, Inc
    #[strum(serialize = "CoroWare Technologies, Inc")]
    CoroWareTechnologiesInc,
    /// Simplo Technology Co., LTD
    #[strum(serialize = "Simplo Technology Co., LTD")]
    SimploTechnologyCoLTD,
    /// Omron Healthcare Co., LTD
    #[strum(serialize = "Omron Healthcare Co., LTD")]
    OmronHealthcareCoLTD,
    /// Comodule GMBH
    #[strum(serialize = "Comodule GMBH")]
    ComoduleGMBH,
    /// ikeGPS
    #[strum(serialize = "ikeGPS")]
    IkeGPS,
    /// Telink Semiconductor Co. Ltd
    #[strum(serialize = "Telink Semiconductor Co. Ltd")]
    TelinkSemiconductorCoLtd,
    /// Interplan Co., Ltd
    #[strum(serialize = "Interplan Co., Ltd")]
    InterplanCoLtd,
    /// Wyler AG
    #[strum(serialize = "Wyler AG")]
    WylerAG,
    /// IK Multimedia Production srl
    #[strum(serialize = "IK Multimedia Production srl")]
    IKMultimediaProductionSrl,
    /// Lukoton Experience Oy
    #[strum(serialize = "Lukoton Experience Oy")]
    LukotonExperienceOy,
    /// MTI Ltd
    #[strum(serialize = "MTI Ltd")]
    MTILtd,
    /// Tech4home, Lda
    #[strum(serialize = "Tech4home, Lda")]
    Tech4homeLda,
    /// Hiotech AB
    #[strum(serialize = "Hiotech AB")]
    HiotechAB,
    /// DOTT Limited
    #[strum(serialize = "DOTT Limited")]
    DOTTLimited,
    /// Blue Speck Labs, LLC
    #[strum(serialize = "Blue Speck Labs, LLC")]
    BlueSpeckLabsLLC,
    /// Cisco Systems, Inc
    #[strum(serialize = "Cisco Systems, Inc")]
    CiscoSystemsInc,
    /// Mobicomm Inc
    #[strum(serialize = "Mobicomm Inc")]
    MobicommInc,
    /// Edamic
    #[strum(serialize = "Edamic")]
    Edamic,
    /// Goodnet, Ltd
    #[strum(serialize = "Goodnet, Ltd")]
    GoodnetLtd,
    /// Luster Leaf Products        Inc
    #[strum(serialize = "Luster Leaf Products        Inc")]
    LusterLeafProductsInc,
    /// Manus Machina BV
    #[strum(serialize = "Manus Machina BV")]
    ManusMachinaBV,
    /// Mobiquity Networks Inc
    #[strum(serialize = "Mobiquity Networks Inc")]
    MobiquityNetworksInc,
    /// Praxis Dynamics
    #[strum(serialize = "Praxis Dynamics")]
    PraxisDynamics,
    /// Philip Morris Products S.A.
    #[strum(serialize = "Philip Morris Products S.A.")]
    PhilipMorrisProductsSA,
    /// Comarch SA
    #[strum(serialize = "Comarch SA")]
    ComarchSA,
    /// Nestlé Nespresso S.A.
    #[strum(serialize = "Nestlé Nespresso S.A.")]
    NestlNespressoSA,
    /// Merlinia A/S
    #[strum(serialize = "Merlinia A/S")]
    MerliniaAS,
    /// LifeBEAM Technologies
    #[strum(serialize = "LifeBEAM Technologies")]
    LifeBEAMTechnologies,
    /// Twocanoes Labs, LLC
    #[strum(serialize = "Twocanoes Labs, LLC")]
    TwocanoesLabsLLC,
    /// Muoverti Limited
    #[strum(serialize = "Muoverti Limited")]
    MuovertiLimited,
    /// Stamer Musikanlagen GMBH
    #[strum(serialize = "Stamer Musikanlagen GMBH")]
    StamerMusikanlagenGMBH,
    /// Tesla Motors
    #[strum(serialize = "Tesla Motors")]
    TeslaMotors,
    /// Pharynks Corporation
    #[strum(serialize = "Pharynks Corporation")]
    PharynksCorporation,
    /// Lupine
    #[strum(serialize = "Lupine")]
    Lupine,
    /// Siemens AG
    #[strum(serialize = "Siemens AG")]
    SiemensAG,
    /// Huami (Shanghai) Culture Communication CO., LTD
    #[strum(serialize = "Huami (Shanghai) Culture Communication CO., LTD")]
    HuamiShanghaiCultureCommunicationCOLTD,
    /// Foster Electric Company, Ltd
    #[strum(serialize = "Foster Electric Company, Ltd")]
    FosterElectricCompanyLtd,
    /// ETA SA
    #[strum(serialize = "ETA SA")]
    ETASA,
    /// x-Senso Solutions Kft
    #[strum(serialize = "x-Senso Solutions Kft")]
    XSensoSolutionsKft,
    /// Shenzhen SuLong Communication Ltd
    #[strum(serialize = "Shenzhen SuLong Communication Ltd")]
    ShenzhenSuLongCommunicationLtd,
    /// FengFan (BeiJing) Technology Co, Ltd
    #[strum(serialize = "FengFan (BeiJing) Technology Co, Ltd")]
    FengFanBeiJingTechnologyCoLtd,
    /// Qrio Inc
    #[strum(serialize = "Qrio Inc")]
    QrioInc,
    /// Pitpatpet Ltd
    #[strum(serialize = "Pitpatpet Ltd")]
    PitpatpetLtd,
    /// MSHeli s.r.l.
    #[strum(serialize = "MSHeli s.r.l.")]
    MSHeliSRL,
    /// Trakm8 Ltd
    #[strum(serialize = "Trakm8 Ltd")]
    Trakm8Ltd,
    /// JIN CO, Ltd
    #[strum(serialize = "JIN CO, Ltd")]
    JINCOLtd,
    /// Alatech Tehnology
    #[strum(serialize = "Alatech Tehnology")]
    AlatechTehnology,
    /// Beijing CarePulse Electronic Technology Co, Ltd
    #[strum(serialize = "Beijing CarePulse Electronic Technology Co, Ltd")]
    BeijingCarePulseElectronicTechnologyCoLtd,
    /// Awarepoint
    #[strum(serialize = "Awarepoint")]
    Awarepoint,
    /// ViCentra B.V.
    #[strum(serialize = "ViCentra B.V.")]
    ViCentraBV,
    /// Raven Industries
    #[strum(serialize = "Raven Industries")]
    RavenIndustries,
    /// WaveWare Technologies Inc.
    #[strum(serialize = "WaveWare Technologies Inc.")]
    WaveWareTechnologiesInc,
    /// Argenox Technologies
    #[strum(serialize = "Argenox Technologies")]
    ArgenoxTechnologies,
    /// Bragi GmbH
    #[strum(serialize = "Bragi GmbH")]
    BragiGmbH,
    /// 16Lab Inc
    #[strum(serialize = "16Lab Inc")]
    N16LabInc,
    /// Masimo Corp
    #[strum(serialize = "Masimo Corp")]
    MasimoCorp,
    /// Iotera Inc
    #[strum(serialize = "Iotera Inc")]
    IoteraInc,
    /// Endress+Hauser
    #[strum(serialize = "Endress+Hauser")]
    EndressHauser,
    /// ACKme Networks, Inc.
    #[strum(serialize = "ACKme Networks, Inc.")]
    ACKmeNetworksInc,
    /// FiftyThree Inc.
    #[strum(serialize = "FiftyThree Inc.")]
    FiftyThreeInc,
    /// Parker Hannifin Corp
    #[strum(serialize = "Parker Hannifin Corp")]
    ParkerHannifinCorp,
    /// Transcranial Ltd
    #[strum(serialize = "Transcranial Ltd")]
    TranscranialLtd,
    /// Uwatec AG
    #[strum(serialize = "Uwatec AG")]
    UwatecAG,
    /// Orlan LLC
    #[strum(serialize = "Orlan LLC")]
    OrlanLLC,
    /// Blue Clover Devices
    #[strum(serialize = "Blue Clover Devices")]
    BlueCloverDevices,
    /// M-Way Solutions GmbH
    #[strum(serialize = "M-Way Solutions GmbH")]
    MWaySolutionsGmbH,
    /// Microtronics Engineering GmbH
    #[strum(serialize = "Microtronics Engineering GmbH")]
    MicrotronicsEngineeringGmbH,
    /// Schneider Schreibgeräte GmbH
    #[strum(serialize = "Schneider Schreibgeräte GmbH")]
    SchneiderSchreibgerTeGmbH,
    /// Sapphire Circuits LLC
    #[strum(serialize = "Sapphire Circuits LLC")]
    SapphireCircuitsLLC,
    /// Lumo Bodytech Inc.
    #[strum(serialize = "Lumo Bodytech Inc.")]
    LumoBodytechInc,
    /// UKC Technosolution
    #[strum(serialize = "UKC Technosolution")]
    UKCTechnosolution,
    /// Xicato Inc.
    #[strum(serialize = "Xicato Inc.")]
    XicatoInc,
    /// Playbrush
    #[strum(serialize = "Playbrush")]
    Playbrush,
    /// Dai Nippon Printing Co., Ltd.
    #[strum(serialize = "Dai Nippon Printing Co., Ltd.")]
    DaiNipponPrintingCoLtd,
    /// G24 Power Limited
    #[strum(serialize = "G24 Power Limited")]
    G24PowerLimited,
    /// AdBabble Local Commerce Inc.
    #[strum(serialize = "AdBabble Local Commerce Inc.")]
    AdBabbleLocalCommerceInc,
    /// Devialet SA
    #[strum(serialize = "Devialet SA")]
    DevialetSA,
    /// ALTYOR
    #[strum(serialize = "ALTYOR")]
    ALTYOR,
    /// University of Applied Sciences Valais/Haute Ecole Valaisanne
    #[strum(serialize = "University of Applied Sciences Valais/Haute Ecole Valaisanne")]
    UniversityOfAppliedSciencesValaisHauteEcoleValaisanne,
    /// Five Interactive, LLC dba Zendo
    #[strum(serialize = "Five Interactive, LLC dba Zendo")]
    FiveInteractiveLLCDbaZendo,
    /// NetEase（Hangzhou）Network co.Ltd.
    #[strum(serialize = "NetEase（Hangzhou）Network co.Ltd.")]
    NetEaseHangzhouNetworkCoLtd,
    /// Lexmark International Inc.
    #[strum(serialize = "Lexmark International Inc.")]
    LexmarkInternationalInc,
    /// Fluke Corporation
    #[strum(serialize = "Fluke Corporation")]
    FlukeCorporation,
    /// Yardarm Technologies
    #[strum(serialize = "Yardarm Technologies")]
    YardarmTechnologies,
    /// SensaRx
    #[strum(serialize = "SensaRx")]
    SensaRx,
    /// SECVRE GmbH
    #[strum(serialize = "SECVRE GmbH")]
    SECVREGmbH,
    /// Glacial Ridge Technologies
    #[strum(serialize = "Glacial Ridge Technologies")]
    GlacialRidgeTechnologies,
    /// Identiv, Inc.
    #[strum(serialize = "Identiv, Inc.")]
    IdentivInc,
    /// DDS, Inc.
    #[strum(serialize = "DDS, Inc.")]
    DDSInc,
    /// SMK Corporation
    #[strum(serialize = "SMK Corporation")]
    SMKCorporation,
    /// Schawbel Technologies LLC
    #[strum(serialize = "Schawbel Technologies LLC")]
    SchawbelTechnologiesLLC,
    /// XMI Systems SA
    #[strum(serialize = "XMI Systems SA")]
    XMISystemsSA,
    /// Cerevo
    #[strum(serialize = "Cerevo")]
    Cerevo,
    /// Torrox GmbH & Co KG
    #[strum(serialize = "Torrox GmbH & Co KG")]
    TorroxGmbHCoKG,
    /// Gemalto
    #[strum(serialize = "Gemalto")]
    Gemalto,
    /// DEKA Research & Development Corp.
    #[strum(serialize = "DEKA Research & Development Corp.")]
    DEKAResearchDevelopmentCorp,
    /// Domster Tadeusz Szydlowski
    #[strum(serialize = "Domster Tadeusz Szydlowski")]
    DomsterTadeuszSzydlowski,
    /// Technogym SPA
    #[strum(serialize = "Technogym SPA")]
    TechnogymSPA,
    /// FLEURBAEY BVBA
    #[strum(serialize = "FLEURBAEY BVBA")]
    FLEURBAEYBVBA,
    /// Aptcode Solutions
    #[strum(serialize = "Aptcode Solutions")]
    AptcodeSolutions,
    /// LSI ADL Technology
    #[strum(serialize = "LSI ADL Technology")]
    LSIADLTechnology,
    /// Animas Corp
    #[strum(serialize = "Animas Corp")]
    AnimasCorp,
    /// Alps Alpine Co., Ltd.
    #[strum(serialize = "Alps Alpine Co., Ltd.")]
    AlpsAlpineCoLtd,
    /// OCEASOFT
    #[strum(serialize = "OCEASOFT")]
    OCEASOFT,
    /// Motsai Research
    #[strum(serialize = "Motsai Research")]
    MotsaiResearch,
    /// Geotab
    #[strum(serialize = "Geotab")]
    Geotab,
    /// E.G.O. Elektro-Geraetebau GmbH
    #[strum(serialize = "E.G.O. Elektro-Geraetebau GmbH")]
    EGOElektroGeraetebauGmbH,
    /// bewhere inc
    #[strum(serialize = "bewhere inc")]
    BewhereInc,
    /// Johnson Outdoors Inc
    #[strum(serialize = "Johnson Outdoors Inc")]
    JohnsonOutdoorsInc,
    /// steute Schaltgerate GmbH & Co. KG
    #[strum(serialize = "steute Schaltgerate GmbH & Co. KG")]
    SteuteSchaltgerateGmbHCoKG,
    /// Ekomini inc.
    #[strum(serialize = "Ekomini inc.")]
    EkominiInc,
    /// DEFA AS
    #[strum(serialize = "DEFA AS")]
    DEFAAS,
    /// Aseptika Ltd
    #[strum(serialize = "Aseptika Ltd")]
    AseptikaLtd,
    /// HUAWEI Technologies Co., Ltd.
    #[strum(serialize = "HUAWEI Technologies Co., Ltd.")]
    HUAWEITechnologiesCoLtd,
    /// HabitAware, LLC
    #[strum(serialize = "HabitAware, LLC")]
    HabitAwareLLC,
    /// ruwido austria gmbh
    #[strum(serialize = "ruwido austria gmbh")]
    RuwidoAustriaGmbh,
    /// ITEC corporation
    #[strum(serialize = "ITEC corporation")]
    ITECCorporation,
    /// StoneL
    #[strum(serialize = "StoneL")]
    StoneL,
    /// Sonova AG
    #[strum(serialize = "Sonova AG")]
    SonovaAG,
    /// Maven Machines, Inc.
    #[strum(serialize = "Maven Machines, Inc.")]
    MavenMachinesInc,
    /// Synapse Electronics
    #[strum(serialize = "Synapse Electronics")]
    SynapseElectronics,
    /// Standard Innovation Inc.
    #[strum(serialize = "Standard Innovation Inc.")]
    StandardInnovationInc,
    /// RF Code, Inc.
    #[strum(serialize = "RF Code, Inc.")]
    RFCodeInc,
    /// Wally Ventures S.L.
    #[strum(serialize = "Wally Ventures S.L.")]
    WallyVenturesSL,
    /// Willowbank Electronics Ltd
    #[strum(serialize = "Willowbank Electronics Ltd")]
    WillowbankElectronicsLtd,
    /// SK Telecom
    #[strum(serialize = "SK Telecom")]
    SKTelecom,
    /// Jetro AS
    #[strum(serialize = "Jetro AS")]
    JetroAS,
    /// Code Gears LTD
    #[strum(serialize = "Code Gears LTD")]
    CodeGearsLTD,
    /// NANOLINK APS
    #[strum(serialize = "NANOLINK APS")]
    NANOLINKAPS,
    /// IF, LLC
    #[strum(serialize = "IF, LLC")]
    IFLLC,
    /// RF Digital Corp
    #[strum(serialize = "RF Digital Corp")]
    RFDigitalCorp,
    /// Church & Dwight Co., Inc
    #[strum(serialize = "Church & Dwight Co., Inc")]
    ChurchDwightCoInc,
    /// Multibit Oy
    #[strum(serialize = "Multibit Oy")]
    MultibitOy,
    /// CliniCloud Inc
    #[strum(serialize = "CliniCloud Inc")]
    CliniCloudInc,
    /// SwiftSensors
    #[strum(serialize = "SwiftSensors")]
    SwiftSensors,
    /// Blue Bite
    #[strum(serialize = "Blue Bite")]
    BlueBite,
    /// ELIAS GmbH
    #[strum(serialize = "ELIAS GmbH")]
    ELIASGmbH,
    /// Sivantos GmbH
    #[strum(serialize = "Sivantos GmbH")]
    SivantosGmbH,
    /// Petzl
    #[strum(serialize = "Petzl")]
    Petzl,
    /// storm power ltd
    #[strum(serialize = "storm power ltd")]
    StormPowerLtd,
    /// EISST Ltd
    #[strum(serialize = "EISST Ltd")]
    EISSTLtd,
    /// Inexess Technology Simma KG
    #[strum(serialize = "Inexess Technology Simma KG")]
    InexessTechnologySimmaKG,
    /// Currant, Inc.
    #[strum(serialize = "Currant, Inc.")]
    CurrantInc,
    /// C2 Development, Inc.
    #[strum(serialize = "C2 Development, Inc.")]
    C2DevelopmentInc,
    /// Blue Sky Scientific, LLC
    #[strum(serialize = "Blue Sky Scientific, LLC")]
    BlueSkyScientificLLC,
    /// ALOTTAZS LABS, LLC
    #[strum(serialize = "ALOTTAZS LABS, LLC")]
    ALOTTAZSLABSLLC,
    /// Kupson spol. s r.o.
    #[strum(serialize = "Kupson spol. s r.o.")]
    KupsonSpolSRO,
    /// Areus Engineering GmbH
    #[strum(serialize = "Areus Engineering GmbH")]
    AreusEngineeringGmbH,
    /// Impossible Camera GmbH
    #[strum(serialize = "Impossible Camera GmbH")]
    ImpossibleCameraGmbH,
    /// InventureTrack Systems
    #[strum(serialize = "InventureTrack Systems")]
    InventureTrackSystems,
    /// LockedUp
    #[strum(serialize = "LockedUp")]
    LockedUp,
    /// Itude
    #[strum(serialize = "Itude")]
    Itude,
    /// Pacific Lock Company
    #[strum(serialize = "Pacific Lock Company")]
    PacificLockCompany,
    /// Tendyron Corporation ( 天地融科技股份有限公司 )
    #[strum(serialize = "Tendyron Corporation ( 天地融科技股份有限公司 )")]
    TendyronCorporation,
    /// Robert Bosch GmbH
    #[strum(serialize = "Robert Bosch GmbH")]
    RobertBoschGmbH,
    /// Illuxtron international B.V.
    #[strum(serialize = "Illuxtron international B.V.")]
    IlluxtronInternationalBV,
    /// miSport Ltd.
    #[strum(serialize = "miSport Ltd.")]
    MiSportLtd,
    /// Chargelib
    #[strum(serialize = "Chargelib")]
    Chargelib,
    /// Doppler Lab
    #[strum(serialize = "Doppler Lab")]
    DopplerLab,
    /// BBPOS Limited
    #[strum(serialize = "BBPOS Limited")]
    BBPOSLimited,
    /// RTB Elektronik GmbH & Co. KG
    #[strum(serialize = "RTB Elektronik GmbH & Co. KG")]
    RTBElektronikGmbHCoKG,
    /// Rx Networks, Inc.
    #[strum(serialize = "Rx Networks, Inc.")]
    RxNetworksInc,
    /// WeatherFlow, Inc.
    #[strum(serialize = "WeatherFlow, Inc.")]
    WeatherFlowInc,
    /// Technicolor USA Inc.
    #[strum(serialize = "Technicolor USA Inc.")]
    TechnicolorUSAInc,
    /// Bestechnic(Shanghai),Ltd
    #[strum(serialize = "Bestechnic(Shanghai),Ltd")]
    BestechnicShanghaiLtd,
    /// Raden Inc
    #[strum(serialize = "Raden Inc")]
    RadenInc,
    /// JouZen Oy
    #[strum(serialize = "JouZen Oy")]
    JouZenOy,
    /// CLABER S.P.A.
    #[strum(serialize = "CLABER S.P.A.")]
    CLABERSPA,
    /// Hyginex, Inc.
    #[strum(serialize = "Hyginex, Inc.")]
    HyginexInc,
    /// HANSHIN ELECTRIC RAILWAY CO.,LTD.
    #[strum(serialize = "HANSHIN ELECTRIC RAILWAY CO.,LTD.")]
    HANSHINELECTRICRAILWAYCOLTD,
    /// Schneider Electric
    #[strum(serialize = "Schneider Electric")]
    SchneiderElectric,
    /// Oort Technologies LLC
    #[strum(serialize = "Oort Technologies LLC")]
    OortTechnologiesLLC,
    /// Chrono Therapeutics
    #[strum(serialize = "Chrono Therapeutics")]
    ChronoTherapeutics,
    /// Rinnai Corporation
    #[strum(serialize = "Rinnai Corporation")]
    RinnaiCorporation,
    /// Swissprime Technologies AG
    #[strum(serialize = "Swissprime Technologies AG")]
    SwissprimeTechnologiesAG,
    /// Koha.,Co.Ltd
    #[strum(serialize = "Koha.,Co.Ltd")]
    KohaCoLtd,
    /// Genevac Ltd
    #[strum(serialize = "Genevac Ltd")]
    GenevacLtd,
    /// Chemtronics
    #[strum(serialize = "Chemtronics")]
    Chemtronics,
    /// Seguro Technology Sp. z o.o.
    #[strum(serialize = "Seguro Technology Sp. z o.o.")]
    SeguroTechnologySpZOO,
    /// Redbird Flight Simulations
    #[strum(serialize = "Redbird Flight Simulations")]
    RedbirdFlightSimulations,
    /// Dash Robotics
    #[strum(serialize = "Dash Robotics")]
    DashRobotics,
    /// LINE Corporation
    #[strum(serialize = "LINE Corporation")]
    LINECorporation,
    /// Guillemot Corporation
    #[strum(serialize = "Guillemot Corporation")]
    GuillemotCorporation,
    /// Techtronic Power Tools Technology Limited
    #[strum(serialize = "Techtronic Power Tools Technology Limited")]
    TechtronicPowerToolsTechnologyLimited,
    /// Wilson Sporting Goods
    #[strum(serialize = "Wilson Sporting Goods")]
    WilsonSportingGoods,
    /// Lenovo (Singapore) Pte Ltd. ( 联想（新加坡） )
    #[strum(serialize = "Lenovo (Singapore) Pte Ltd. ( 联想（新加坡） )")]
    LenovoSingaporePteLtd,
    /// Ayatan Sensors
    #[strum(serialize = "Ayatan Sensors")]
    AyatanSensors,
    /// Electronics Tomorrow Limited
    #[strum(serialize = "Electronics Tomorrow Limited")]
    ElectronicsTomorrowLimited,
    /// OneSpan
    #[strum(serialize = "OneSpan")]
    OneSpan,
    /// PayRange Inc.
    #[strum(serialize = "PayRange Inc.")]
    PayRangeInc,
    /// ABOV Semiconductor
    #[strum(serialize = "ABOV Semiconductor")]
    ABOVSemiconductor,
    /// AINA-Wireless Inc.
    #[strum(serialize = "AINA-Wireless Inc.")]
    AINAWirelessInc,
    /// Eijkelkamp Soil & Water
    #[strum(serialize = "Eijkelkamp Soil & Water")]
    EijkelkampSoilWater,
    /// BMA ergonomics b.v.
    #[strum(serialize = "BMA ergonomics b.v.")]
    BMAErgonomicsBV,
    /// Teva Branded Pharmaceutical Products R&D, Inc.
    #[strum(serialize = "Teva Branded Pharmaceutical Products R&D, Inc.")]
    TevaBrandedPharmaceuticalProductsRDInc,
    /// Anima
    #[strum(serialize = "Anima")]
    Anima,
    /// 3M
    #[strum(serialize = "3M")]
    N3M,
    /// Empatica Srl
    #[strum(serialize = "Empatica Srl")]
    EmpaticaSrl,
    /// Afero, Inc.
    #[strum(serialize = "Afero, Inc.")]
    AferoInc,
    /// Powercast Corporation
    #[strum(serialize = "Powercast Corporation")]
    PowercastCorporation,
    /// Secuyou ApS
    #[strum(serialize = "Secuyou ApS")]
    SecuyouApS,
    /// OMRON Corporation
    #[strum(serialize = "OMRON Corporation")]
    OMRONCorporation,
    /// Send Solutions
    #[strum(serialize = "Send Solutions")]
    SendSolutions,
    /// NIPPON SYSTEMWARE CO.,LTD.
    #[strum(serialize = "NIPPON SYSTEMWARE CO.,LTD.")]
    NIPPONSYSTEMWARECOLTD,
    /// Neosfar
    #[strum(serialize = "Neosfar")]
    Neosfar,
    /// Fliegl Agrartechnik GmbH
    #[strum(serialize = "Fliegl Agrartechnik GmbH")]
    FlieglAgrartechnikGmbH,
    /// Gilvader
    #[strum(serialize = "Gilvader")]
    Gilvader,
    /// Digi International Inc (R)
    #[strum(serialize = "Digi International Inc (R)")]
    DigiInternationalIncR,
    /// DeWalch Technologies, Inc.
    #[strum(serialize = "DeWalch Technologies, Inc.")]
    DeWalchTechnologiesInc,
    /// Flint Rehabilitation Devices, LLC
    #[strum(serialize = "Flint Rehabilitation Devices, LLC")]
    FlintRehabilitationDevicesLLC,
    /// Samsung SDS Co., Ltd.
    #[strum(serialize = "Samsung SDS Co., Ltd.")]
    SamsungSDSCoLtd,
    /// Blur Product Development
    #[strum(serialize = "Blur Product Development")]
    BlurProductDevelopment,
    /// University of Michigan
    #[strum(serialize = "University of Michigan")]
    UniversityOfMichigan,
    /// Victron Energy BV
    #[strum(serialize = "Victron Energy BV")]
    VictronEnergyBV,
    /// NTT docomo
    #[strum(serialize = "NTT docomo")]
    NTTDocomo,
    /// Carmanah Technologies Corp.
    #[strum(serialize = "Carmanah Technologies Corp.")]
    CarmanahTechnologiesCorp,
    /// Bytestorm Ltd.
    #[strum(serialize = "Bytestorm Ltd.")]
    BytestormLtd,
    /// Espressif Incorporated ( 乐鑫信息科技(上海)有限公司 )
    #[strum(serialize = "Espressif Incorporated ( 乐鑫信息科技(上海)有限公司 )")]
    EspressifIncorporated,
    /// Unwire
    #[strum(serialize = "Unwire")]
    Unwire,
    /// Connected Yard, Inc.
    #[strum(serialize = "Connected Yard, Inc.")]
    ConnectedYardInc,
    /// American Music Environments
    #[strum(serialize = "American Music Environments")]
    AmericanMusicEnvironments,
    /// Sensogram Technologies, Inc.
    #[strum(serialize = "Sensogram Technologies, Inc.")]
    SensogramTechnologiesInc,
    /// Fujitsu Limited
    #[strum(serialize = "Fujitsu Limited")]
    FujitsuLimited,
    /// Ardic Technology
    #[strum(serialize = "Ardic Technology")]
    ArdicTechnology,
    /// Delta Systems, Inc
    #[strum(serialize = "Delta Systems, Inc")]
    DeltaSystemsInc,
    /// HTC Corporation
    #[strum(serialize = "HTC Corporation")]
    HTCCorporation,
    /// Citizen Holdings Co., Ltd.
    #[strum(serialize = "Citizen Holdings Co., Ltd.")]
    CitizenHoldingsCoLtd,
    /// SMART-INNOVATION.inc
    #[strum(serialize = "SMART-INNOVATION.inc")]
    SMARTINNOVATIONInc,
    /// Blackrat Software
    #[strum(serialize = "Blackrat Software")]
    BlackratSoftware,
    /// The Idea Cave, LLC
    #[strum(serialize = "The Idea Cave, LLC")]
    TheIdeaCaveLLC,
    /// GoPro, Inc.
    #[strum(serialize = "GoPro, Inc.")]
    GoProInc,
    /// AuthAir, Inc
    #[strum(serialize = "AuthAir, Inc")]
    AuthAirInc,
    /// Vensi, Inc.
    #[strum(serialize = "Vensi, Inc.")]
    VensiInc,
    /// Indagem Tech LLC
    #[strum(serialize = "Indagem Tech LLC")]
    IndagemTechLLC,
    /// Intemo Technologies
    #[strum(serialize = "Intemo Technologies")]
    IntemoTechnologies,
    /// DreamVisions co., Ltd.
    #[strum(serialize = "DreamVisions co., Ltd.")]
    DreamVisionsCoLtd,
    /// Runteq Oy Ltd
    #[strum(serialize = "Runteq Oy Ltd")]
    RunteqOyLtd,
    /// IMAGINATION TECHNOLOGIES LTD
    #[strum(serialize = "IMAGINATION TECHNOLOGIES LTD")]
    IMAGINATIONTECHNOLOGIESLTD,
    /// CoSTAR TEchnologies
    #[strum(serialize = "CoSTAR TEchnologies")]
    CoSTARTEchnologies,
    /// Clarius Mobile Health Corp.
    #[strum(serialize = "Clarius Mobile Health Corp.")]
    ClariusMobileHealthCorp,
    /// Shanghai Frequen Microelectronics Co., Ltd.
    #[strum(serialize = "Shanghai Frequen Microelectronics Co., Ltd.")]
    ShanghaiFrequenMicroelectronicsCoLtd,
    /// Uwanna, Inc.
    #[strum(serialize = "Uwanna, Inc.")]
    UwannaInc,
    /// Lierda Science & Technology Group Co., Ltd.
    #[strum(serialize = "Lierda Science & Technology Group Co., Ltd.")]
    LierdaScienceTechnologyGroupCoLtd,
    /// Silicon Laboratories
    #[strum(serialize = "Silicon Laboratories")]
    SiliconLaboratories,
    /// World Moto Inc.
    #[strum(serialize = "World Moto Inc.")]
    WorldMotoInc,
    /// Giatec Scientific Inc.
    #[strum(serialize = "Giatec Scientific Inc.")]
    GiatecScientificInc,
    /// Loop Devices, Inc
    #[strum(serialize = "Loop Devices, Inc")]
    LoopDevicesInc,
    /// IACA electronique
    #[strum(serialize = "IACA electronique")]
    IACAElectronique,
    /// Proxy Technologies, Inc.
    #[strum(serialize = "Proxy Technologies, Inc.")]
    ProxyTechnologiesInc,
    /// Swipp ApS
    #[strum(serialize = "Swipp ApS")]
    SwippApS,
    /// Life Laboratory Inc.
    #[strum(serialize = "Life Laboratory Inc.")]
    LifeLaboratoryInc,
    /// FUJI INDUSTRIAL CO.,LTD.
    #[strum(serialize = "FUJI INDUSTRIAL CO.,LTD.")]
    FUJIINDUSTRIALCOLTD,
    /// Surefire, LLC
    #[strum(serialize = "Surefire, LLC")]
    SurefireLLC,
    /// Dolby Labs
    #[strum(serialize = "Dolby Labs")]
    DolbyLabs,
    /// Ellisys
    #[strum(serialize = "Ellisys")]
    Ellisys,
    /// Magnitude Lighting Converters
    #[strum(serialize = "Magnitude Lighting Converters")]
    MagnitudeLightingConverters,
    /// Hilti AG
    #[strum(serialize = "Hilti AG")]
    HiltiAG,
    /// Devdata S.r.l.
    #[strum(serialize = "Devdata S.r.l.")]
    DevdataSRL,
    /// Deviceworx
    #[strum(serialize = "Deviceworx")]
    Deviceworx,
    /// Shortcut Labs
    #[strum(serialize = "Shortcut Labs")]
    ShortcutLabs,
    /// SGL Italia S.r.l.
    #[strum(serialize = "SGL Italia S.r.l.")]
    SGLItaliaSRL,
    /// PEEQ DATA
    #[strum(serialize = "PEEQ DATA")]
    PEEQDATA,
    /// Ducere Technologies Pvt Ltd
    #[strum(serialize = "Ducere Technologies Pvt Ltd")]
    DucereTechnologiesPvtLtd,
    /// DiveNav, Inc.
    #[strum(serialize = "DiveNav, Inc.")]
    DiveNavInc,
    /// RIIG AI Sp. z o.o.
    #[strum(serialize = "RIIG AI Sp. z o.o.")]
    RIIGAISpZOO,
    /// Thermo Fisher Scientific
    #[strum(serialize = "Thermo Fisher Scientific")]
    ThermoFisherScientific,
    /// AG Measurematics Pvt. Ltd.
    #[strum(serialize = "AG Measurematics Pvt. Ltd.")]
    AGMeasurematicsPvtLtd,
    /// CHUO Electronics CO., LTD.
    #[strum(serialize = "CHUO Electronics CO., LTD.")]
    CHUOElectronicsCOLTD,
    /// Aspenta International
    #[strum(serialize = "Aspenta International")]
    AspentaInternational,
    /// Eugster Frismag AG
    #[strum(serialize = "Eugster Frismag AG")]
    EugsterFrismagAG,
    /// Wurth Elektronik eiSos GmbH & Co. KG ( formerly Amber wireless GmbH)
    #[strum(serialize = "Wurth Elektronik eiSos GmbH & Co. KG ( formerly Amber wireless GmbH)")]
    WurthElektronikEiSosGmbHCoKGFormerlyAmberWirelessGmbH,
    /// HQ Inc
    #[strum(serialize = "HQ Inc")]
    HQInc,
    /// Lab Sensor Solutions
    #[strum(serialize = "Lab Sensor Solutions")]
    LabSensorSolutions,
    /// Enterlab ApS
    #[strum(serialize = "Enterlab ApS")]
    EnterlabApS,
    /// Eyefi, Inc.
    #[strum(serialize = "Eyefi, Inc.")]
    EyefiInc,
    /// MetaSystem S.p.A.
    #[strum(serialize = "MetaSystem S.p.A.")]
    MetaSystemSPA,
    /// SONO ELECTRONICS. CO., LTD
    #[strum(serialize = "SONO ELECTRONICS. CO., LTD")]
    SONOELECTRONICSCOLTD,
    /// Jewelbots
    #[strum(serialize = "Jewelbots")]
    Jewelbots,
    /// Compumedics Limited
    #[strum(serialize = "Compumedics Limited")]
    CompumedicsLimited,
    /// Rotor Bike Components
    #[strum(serialize = "Rotor Bike Components")]
    RotorBikeComponents,
    /// Astro, Inc.
    #[strum(serialize = "Astro, Inc.")]
    AstroInc,
    /// Amotus Solutions
    #[strum(serialize = "Amotus Solutions")]
    AmotusSolutions,
    /// Healthwear Technologies (Changzhou)Ltd
    #[strum(serialize = "Healthwear Technologies (Changzhou)Ltd")]
    HealthwearTechnologiesChangzhouLtd,
    /// Essex Electronics
    #[strum(serialize = "Essex Electronics")]
    EssexElectronics,
    /// Grundfos A/S
    #[strum(serialize = "Grundfos A/S")]
    GrundfosAS,
    /// Eargo, Inc.
    #[strum(serialize = "Eargo, Inc.")]
    EargoInc,
    /// Electronic Design Lab
    #[strum(serialize = "Electronic Design Lab")]
    ElectronicDesignLab,
    /// ESYLUX
    #[strum(serialize = "ESYLUX")]
    ESYLUX,
    /// NIPPON SMT.CO.,Ltd
    #[strum(serialize = "NIPPON SMT.CO.,Ltd")]
    NIPPONSMTCOLtd,
    /// BM innovations GmbH
    #[strum(serialize = "BM innovations GmbH")]
    BMInnovationsGmbH,
    /// indoormap
    #[strum(serialize = "indoormap")]
    Indoormap,
    /// OttoQ Inc
    #[strum(serialize = "OttoQ Inc")]
    OttoQInc,
    /// North Pole Engineering
    #[strum(serialize = "North Pole Engineering")]
    NorthPoleEngineering,
    /// 3flares Technologies Inc.
    #[strum(serialize = "3flares Technologies Inc.")]
    N3flaresTechnologiesInc,
    /// Electrocompaniet A.S.
    #[strum(serialize = "Electrocompaniet A.S.")]
    ElectrocompanietAS,
    /// Mul-T-Lock
    #[strum(serialize = "Mul-T-Lock")]
    MulTLock,
    /// Corentium AS
    #[strum(serialize = "Corentium AS")]
    CorentiumAS,
    /// Enlighted Inc
    #[strum(serialize = "Enlighted Inc")]
    EnlightedInc,
    /// GISTIC
    #[strum(serialize = "GISTIC")]
    GISTIC,
    /// AJP2 Holdings, LLC
    #[strum(serialize = "AJP2 Holdings, LLC")]
    AJP2HoldingsLLC,
    /// COBI GmbH
    #[strum(serialize = "COBI GmbH")]
    COBIGmbH,
    /// Blue Sky Scientific, LLC (1)
    #[strum(serialize = "Blue Sky Scientific, LLC (1)")]
    BlueSkyScientificLLC1,
    /// Appception, Inc.
    #[strum(serialize = "Appception, Inc.")]
    AppceptionInc,
    /// Courtney Thorne Limited
    #[strum(serialize = "Courtney Thorne Limited")]
    CourtneyThorneLimited,
    /// Virtuosys
    #[strum(serialize = "Virtuosys")]
    Virtuosys,
    /// TPV Technology Limited
    #[strum(serialize = "TPV Technology Limited")]
    TPVTechnologyLimited,
    /// Monitra SA
    #[strum(serialize = "Monitra SA")]
    MonitraSA,
    /// Automation Components, Inc.
    #[strum(serialize = "Automation Components, Inc.")]
    AutomationComponentsInc,
    /// Letsense s.r.l.
    #[strum(serialize = "Letsense s.r.l.")]
    LetsenseSRL,
    /// Etesian Technologies LLC
    #[strum(serialize = "Etesian Technologies LLC")]
    EtesianTechnologiesLLC,
    /// GERTEC BRASIL LTDA.
    #[strum(serialize = "GERTEC BRASIL LTDA.")]
    GERTECBRASILLTDA,
    /// Drekker Development Pty. Ltd.
    #[strum(serialize = "Drekker Development Pty. Ltd.")]
    DrekkerDevelopmentPtyLtd,
    /// Whirl Inc
    #[strum(serialize = "Whirl Inc")]
    WhirlInc,
    /// Locus Positioning
    #[strum(serialize = "Locus Positioning")]
    LocusPositioning,
    /// Acuity Brands Lighting, Inc
    #[strum(serialize = "Acuity Brands Lighting, Inc")]
    AcuityBrandsLightingInc,
    /// Prevent Biometrics
    #[strum(serialize = "Prevent Biometrics")]
    PreventBiometrics,
    /// Arioneo
    #[strum(serialize = "Arioneo")]
    Arioneo,
    /// VersaMe
    #[strum(serialize = "VersaMe")]
    VersaMe,
    /// Vaddio
    #[strum(serialize = "Vaddio")]
    Vaddio,
    /// Libratone A/S
    #[strum(serialize = "Libratone A/S")]
    LibratoneAS,
    /// HM Electronics, Inc.
    #[strum(serialize = "HM Electronics, Inc.")]
    HMElectronicsInc,
    /// TASER International, Inc.
    #[strum(serialize = "TASER International, Inc.")]
    TASERInternationalInc,
    /// SafeTrust Inc.
    #[strum(serialize = "SafeTrust Inc.")]
    SafeTrustInc,
    /// Heartland Payment Systems
    #[strum(serialize = "Heartland Payment Systems")]
    HeartlandPaymentSystems,
    /// Bitstrata Systems Inc.
    #[strum(serialize = "Bitstrata Systems Inc.")]
    BitstrataSystemsInc,
    /// Pieps GmbH
    #[strum(serialize = "Pieps GmbH")]
    PiepsGmbH,
    /// iRiding(Xiamen)Technology Co.,Ltd.
    #[strum(serialize = "iRiding(Xiamen)Technology Co.,Ltd.")]
    IRidingXiamenTechnologyCoLtd,
    /// Alpha Audiotronics, Inc.
    #[strum(serialize = "Alpha Audiotronics, Inc.")]
    AlphaAudiotronicsInc,
    /// TOPPAN FORMS CO.,LTD.
    #[strum(serialize = "TOPPAN FORMS CO.,LTD.")]
    TOPPANFORMSCOLTD,
    /// Sigma Designs, Inc.
    #[strum(serialize = "Sigma Designs, Inc.")]
    SigmaDesignsInc,
    /// Spectrum Brands, Inc.
    #[strum(serialize = "Spectrum Brands, Inc.")]
    SpectrumBrandsInc,
    /// Polymap Wireless
    #[strum(serialize = "Polymap Wireless")]
    PolymapWireless,
    /// MagniWare Ltd.
    #[strum(serialize = "MagniWare Ltd.")]
    MagniWareLtd,
    /// Novotec Medical GmbH
    #[strum(serialize = "Novotec Medical GmbH")]
    NovotecMedicalGmbH,
    /// Medicom Innovation Partner a/s
    #[strum(serialize = "Medicom Innovation Partner a/s")]
    MedicomInnovationPartnerAS,
    /// Matrix Inc.
    #[strum(serialize = "Matrix Inc.")]
    MatrixInc,
    /// Eaton Corporation
    #[strum(serialize = "Eaton Corporation")]
    EatonCorporation,
    /// KYS
    #[strum(serialize = "KYS")]
    KYS,
    /// Naya Health, Inc.
    #[strum(serialize = "Naya Health, Inc.")]
    NayaHealthInc,
    /// Acromag
    #[strum(serialize = "Acromag")]
    Acromag,
    /// Insulet Corporation
    #[strum(serialize = "Insulet Corporation")]
    InsuletCorporation,
    /// Wellinks Inc.
    #[strum(serialize = "Wellinks Inc.")]
    WellinksInc,
    /// ON Semiconductor
    #[strum(serialize = "ON Semiconductor")]
    ONSemiconductor,
    /// FREELAP SA
    #[strum(serialize = "FREELAP SA")]
    FREELAPSA,
    /// Favero Electronics Srl
    #[strum(serialize = "Favero Electronics Srl")]
    FaveroElectronicsSrl,
    /// BioMech Sensor LLC
    #[strum(serialize = "BioMech Sensor LLC")]
    BioMechSensorLLC,
    /// BOLTT Sports technologies Private limited
    #[strum(serialize = "BOLTT Sports technologies Private limited")]
    BOLTTSportsTechnologiesPrivateLimited,
    /// Saphe International
    #[strum(serialize = "Saphe International")]
    SapheInternational,
    /// Metormote AB
    #[strum(serialize = "Metormote AB")]
    MetormoteAB,
    /// littleBits
    #[strum(serialize = "littleBits")]
    LittleBits,
    /// SetPoint Medical
    #[strum(serialize = "SetPoint Medical")]
    SetPointMedical,
    /// BRControls Products BV
    #[strum(serialize = "BRControls Products BV")]
    BRControlsProductsBV,
    /// Zipcar
    #[strum(serialize = "Zipcar")]
    Zipcar,
    /// AirBolt Pty Ltd
    #[strum(serialize = "AirBolt Pty Ltd")]
    AirBoltPtyLtd,
    /// KeepTruckin Inc
    #[strum(serialize = "KeepTruckin Inc")]
    KeepTruckinInc,
    /// Motiv, Inc.
    #[strum(serialize = "Motiv, Inc.")]
    MotivInc,
    /// Wazombi Labs OÜ
    #[strum(serialize = "Wazombi Labs OÜ")]
    WazombiLabsO,
    /// ORBCOMM
    #[strum(serialize = "ORBCOMM")]
    ORBCOMM,
    /// Nixie Labs, Inc.
    #[strum(serialize = "Nixie Labs, Inc.")]
    NixieLabsInc,
    /// AppNearMe Ltd
    #[strum(serialize = "AppNearMe Ltd")]
    AppNearMeLtd,
    /// Holman Industries
    #[strum(serialize = "Holman Industries")]
    HolmanIndustries,
    /// Expain AS
    #[strum(serialize = "Expain AS")]
    ExpainAS,
    /// Electronic Temperature Instruments Ltd
    #[strum(serialize = "Electronic Temperature Instruments Ltd")]
    ElectronicTemperatureInstrumentsLtd,
    /// Plejd AB
    #[strum(serialize = "Plejd AB")]
    PlejdAB,
    /// Propeller Health
    #[strum(serialize = "Propeller Health")]
    PropellerHealth,
    /// Shenzhen iMCO Electronic Technology Co.,Ltd
    #[strum(serialize = "Shenzhen iMCO Electronic Technology Co.,Ltd")]
    ShenzhenIMCOElectronicTechnologyCoLtd,
    /// Algoria
    #[strum(serialize = "Algoria")]
    Algoria,
    /// Apption Labs Inc.
    #[strum(serialize = "Apption Labs Inc.")]
    ApptionLabsInc,
    /// Cronologics Corporation
    #[strum(serialize = "Cronologics Corporation")]
    CronologicsCorporation,
    /// MICRODIA Ltd.
    #[strum(serialize = "MICRODIA Ltd.")]
    MICRODIALtd,
    /// lulabytes S.L.
    #[strum(serialize = "lulabytes S.L.")]
    LulabytesSL,
    /// Société des Produits Nestlé S.A. (formerly Nestec S.A.)
    #[strum(serialize = "Société des Produits Nestlé S.A. (formerly Nestec S.A.)")]
    SociTDesProduitsNestlSAFormerlyNestecSA,
    /// LLC "MEGA-F service"
    #[strum(serialize = "LLC \"MEGA-F service\"")]
    LLCMEGAFService,
    /// Sharp Corporation
    #[strum(serialize = "Sharp Corporation")]
    SharpCorporation,
    /// Precision Outcomes Ltd
    #[strum(serialize = "Precision Outcomes Ltd")]
    PrecisionOutcomesLtd,
    /// Kronos Incorporated
    #[strum(serialize = "Kronos Incorporated")]
    KronosIncorporated,
    /// OCOSMOS Co., Ltd.
    #[strum(serialize = "OCOSMOS Co., Ltd.")]
    OCOSMOSCoLtd,
    /// Embedded Electronic Solutions Ltd. dba e2Solutions
    #[strum(serialize = "Embedded Electronic Solutions Ltd. dba e2Solutions")]
    EmbeddedElectronicSolutionsLtdDbaE2Solutions,
    /// Aterica Inc.
    #[strum(serialize = "Aterica Inc.")]
    AtericaInc,
    /// BluStor PMC, Inc.
    #[strum(serialize = "BluStor PMC, Inc.")]
    BluStorPMCInc,
    /// Kapsch TrafficCom AB
    #[strum(serialize = "Kapsch TrafficCom AB")]
    KapschTrafficComAB,
    /// ActiveBlu Corporation
    #[strum(serialize = "ActiveBlu Corporation")]
    ActiveBluCorporation,
    /// Kohler Mira Limited
    #[strum(serialize = "Kohler Mira Limited")]
    KohlerMiraLimited,
    /// Noke
    #[strum(serialize = "Noke")]
    Noke,
    /// Appion Inc.
    #[strum(serialize = "Appion Inc.")]
    AppionInc,
    /// Resmed Ltd
    #[strum(serialize = "Resmed Ltd")]
    ResmedLtd,
    /// Crownstone B.V.
    #[strum(serialize = "Crownstone B.V.")]
    CrownstoneBV,
    /// Xiaomi Inc.
    #[strum(serialize = "Xiaomi Inc.")]
    XiaomiInc,
    /// INFOTECH s.r.o.
    #[strum(serialize = "INFOTECH s.r.o.")]
    INFOTECHSRO,
    /// Thingsquare AB
    #[strum(serialize = "Thingsquare AB")]
    ThingsquareAB,
    /// T&D
    #[strum(serialize = "T&D")]
    TD,
    /// LAVAZZA S.p.A.
    #[strum(serialize = "LAVAZZA S.p.A.")]
    LAVAZZASPA,
    /// Netclearance Systems, Inc.
    #[strum(serialize = "Netclearance Systems, Inc.")]
    NetclearanceSystemsInc,
    /// SDATAWAY
    #[strum(serialize = "SDATAWAY")]
    SDATAWAY,
    /// BLOKS GmbH
    #[strum(serialize = "BLOKS GmbH")]
    BLOKSGmbH,
    /// LEGO System A/S
    #[strum(serialize = "LEGO System A/S")]
    LEGOSystemAS,
    /// Thetatronics Ltd
    #[strum(serialize = "Thetatronics Ltd")]
    ThetatronicsLtd,
    /// Nikon Corporation
    #[strum(serialize = "Nikon Corporation")]
    NikonCorporation,
    /// NeST
    #[strum(serialize = "NeST")]
    NeST,
    /// South Silicon Valley Microelectronics
    #[strum(serialize = "South Silicon Valley Microelectronics")]
    SouthSiliconValleyMicroelectronics,
    /// ALE International
    #[strum(serialize = "ALE International")]
    ALEInternational,
    /// CareView Communications, Inc.
    #[strum(serialize = "CareView Communications, Inc.")]
    CareViewCommunicationsInc,
    /// SchoolBoard Limited
    #[strum(serialize = "SchoolBoard Limited")]
    SchoolBoardLimited,
    /// Molex Corporation
    #[strum(serialize = "Molex Corporation")]
    MolexCorporation,
    /// IVT Wireless Limited
    #[strum(serialize = "IVT Wireless Limited")]
    IVTWirelessLimited,
    /// Alpine Labs LLC
    #[strum(serialize = "Alpine Labs LLC")]
    AlpineLabsLLC,
    /// Candura Instruments
    #[strum(serialize = "Candura Instruments")]
    CanduraInstruments,
    /// SmartMovt Technology Co., Ltd
    #[strum(serialize = "SmartMovt Technology Co., Ltd")]
    SmartMovtTechnologyCoLtd,
    /// Token Zero Ltd
    #[strum(serialize = "Token Zero Ltd")]
    TokenZeroLtd,
    /// ACE CAD Enterprise Co., Ltd. (ACECAD)
    #[strum(serialize = "ACE CAD Enterprise Co., Ltd. (ACECAD)")]
    ACECADEnterpriseCoLtdACECAD,
    /// Medela, Inc
    #[strum(serialize = "Medela, Inc")]
    MedelaInc,
    /// AeroScout
    #[strum(serialize = "AeroScout")]
    AeroScout,
    /// Esrille Inc.
    #[strum(serialize = "Esrille Inc.")]
    EsrilleInc,
    /// THINKERLY SRL
    #[strum(serialize = "THINKERLY SRL")]
    THINKERLYSRL,
    /// Exon Sp. z o.o.
    #[strum(serialize = "Exon Sp. z o.o.")]
    ExonSpZOO,
    /// Meizu Technology Co., Ltd.
    #[strum(serialize = "Meizu Technology Co., Ltd.")]
    MeizuTechnologyCoLtd,
    /// Smablo LTD
    #[strum(serialize = "Smablo LTD")]
    SmabloLTD,
    /// XiQ
    #[strum(serialize = "XiQ")]
    XiQ,
    /// Allswell Inc.
    #[strum(serialize = "Allswell Inc.")]
    AllswellInc,
    /// Comm-N-Sense Corp DBA Verigo
    #[strum(serialize = "Comm-N-Sense Corp DBA Verigo")]
    CommNSenseCorpDBAVerigo,
    /// VIBRADORM GmbH
    #[strum(serialize = "VIBRADORM GmbH")]
    VIBRADORMGmbH,
    /// Otodata Wireless Network Inc.
    #[strum(serialize = "Otodata Wireless Network Inc.")]
    OtodataWirelessNetworkInc,
    /// Propagation Systems Limited
    #[strum(serialize = "Propagation Systems Limited")]
    PropagationSystemsLimited,
    /// Midwest Instruments & Controls
    #[strum(serialize = "Midwest Instruments & Controls")]
    MidwestInstrumentsControls,
    /// Alpha Nodus, inc.
    #[strum(serialize = "Alpha Nodus, inc.")]
    AlphaNodusInc,
    /// petPOMM, Inc
    #[strum(serialize = "petPOMM, Inc")]
    PetPOMMInc,
    /// Mattel
    #[strum(serialize = "Mattel")]
    Mattel,
    /// Airbly Inc.
    #[strum(serialize = "Airbly Inc.")]
    AirblyInc,
    /// A-Safe Limited
    #[strum(serialize = "A-Safe Limited")]
    ASafeLimited,
    /// FREDERIQUE CONSTANT SA
    #[strum(serialize = "FREDERIQUE CONSTANT SA")]
    FREDERIQUECONSTANTSA,
    /// Maxscend Microelectronics Company Limited
    #[strum(serialize = "Maxscend Microelectronics Company Limited")]
    MaxscendMicroelectronicsCompanyLimited,
    /// Abbott
    #[strum(serialize = "Abbott")]
    Abbott,
    /// ASB Bank Ltd
    #[strum(serialize = "ASB Bank Ltd")]
    ASBBankLtd,
    /// amadas
    #[strum(serialize = "amadas")]
    Amadas,
    /// Applied Science, Inc.
    #[strum(serialize = "Applied Science, Inc.")]
    AppliedScienceInc,
    /// iLumi Solutions Inc.
    #[strum(serialize = "iLumi Solutions Inc.")]
    ILumiSolutionsInc,
    /// Arch Systems Inc.
    #[strum(serialize = "Arch Systems Inc.")]
    ArchSystemsInc,
    /// Ember Technologies, Inc.
    #[strum(serialize = "Ember Technologies, Inc.")]
    EmberTechnologiesInc,
    /// Snapchat Inc
    #[strum(serialize = "Snapchat Inc")]
    SnapchatInc,
    /// Casambi Technologies Oy
    #[strum(serialize = "Casambi Technologies Oy")]
    CasambiTechnologiesOy,
    /// Pico Technology Inc.
    #[strum(serialize = "Pico Technology Inc.")]
    PicoTechnologyInc,
    /// St. Jude Medical, Inc.
    #[strum(serialize = "St. Jude Medical, Inc.")]
    StJudeMedicalInc,
    /// Intricon
    #[strum(serialize = "Intricon")]
    Intricon,
    /// Structural Health Systems, Inc.
    #[strum(serialize = "Structural Health Systems, Inc.")]
    StructuralHealthSystemsInc,
    /// Avvel International
    #[strum(serialize = "Avvel International")]
    AvvelInternational,
    /// Gallagher Group
    #[strum(serialize = "Gallagher Group")]
    GallagherGroup,
    /// In2things Automation Pvt. Ltd.
    #[strum(serialize = "In2things Automation Pvt. Ltd.")]
    In2thingsAutomationPvtLtd,
    /// SYSDEV Srl
    #[strum(serialize = "SYSDEV Srl")]
    SYSDEVSrl,
    /// Vonkil Technologies Ltd
    #[strum(serialize = "Vonkil Technologies Ltd")]
    VonkilTechnologiesLtd,
    /// Wynd Technologies, Inc.
    #[strum(serialize = "Wynd Technologies, Inc.")]
    WyndTechnologiesInc,
    /// CONTRINEX S.A.
    #[strum(serialize = "CONTRINEX S.A.")]
    CONTRINEXSA,
    /// MIRA, Inc.
    #[strum(serialize = "MIRA, Inc.")]
    MIRAInc,
    /// Watteam Ltd
    #[strum(serialize = "Watteam Ltd")]
    WatteamLtd,
    /// Density Inc.
    #[strum(serialize = "Density Inc.")]
    DensityInc,
    /// IOT Pot India Private Limited
    #[strum(serialize = "IOT Pot India Private Limited")]
    IOTPotIndiaPrivateLimited,
    /// Sigma Connectivity AB
    #[strum(serialize = "Sigma Connectivity AB")]
    SigmaConnectivityAB,
    /// PEG PEREGO SPA
    #[strum(serialize = "PEG PEREGO SPA")]
    PEGPEREGOSPA,
    /// Wyzelink Systems Inc.
    #[strum(serialize = "Wyzelink Systems Inc.")]
    WyzelinkSystemsInc,
    /// Yota Devices LTD
    #[strum(serialize = "Yota Devices LTD")]
    YotaDevicesLTD,
    /// FINSECUR
    #[strum(serialize = "FINSECUR")]
    FINSECUR,
    /// Zen-Me Labs Ltd
    #[strum(serialize = "Zen-Me Labs Ltd")]
    ZenMeLabsLtd,
    /// 3IWare Co., Ltd.
    #[strum(serialize = "3IWare Co., Ltd.")]
    N3IWareCoLtd,
    /// EnOcean GmbH
    #[strum(serialize = "EnOcean GmbH")]
    EnOceanGmbH,
    /// Instabeat, Inc
    #[strum(serialize = "Instabeat, Inc")]
    InstabeatInc,
    /// Nima Labs
    #[strum(serialize = "Nima Labs")]
    NimaLabs,
    /// Andreas Stihl AG & Co. KG
    #[strum(serialize = "Andreas Stihl AG & Co. KG")]
    AndreasStihlAGCoKG,
    /// Nathan Rhoades LLC
    #[strum(serialize = "Nathan Rhoades LLC")]
    NathanRhoadesLLC,
    /// Grob Technologies, LLC
    #[strum(serialize = "Grob Technologies, LLC")]
    GrobTechnologiesLLC,
    /// Actions (Zhuhai) Technology Co., Limited
    #[strum(serialize = "Actions (Zhuhai) Technology Co., Limited")]
    ActionsZhuhaiTechnologyCoLimited,
    /// SPD Development Company Ltd
    #[strum(serialize = "SPD Development Company Ltd")]
    SPDDevelopmentCompanyLtd,
    /// Sensoan Oy
    #[strum(serialize = "Sensoan Oy")]
    SensoanOy,
    /// Qualcomm Life Inc
    #[strum(serialize = "Qualcomm Life Inc")]
    QualcommLifeInc,
    /// Chip-ing AG
    #[strum(serialize = "Chip-ing AG")]
    ChipIngAG,
    /// ffly4u
    #[strum(serialize = "ffly4u")]
    Ffly4u,
    /// IoT Instruments Oy
    #[strum(serialize = "IoT Instruments Oy")]
    IoTInstrumentsOy,
    /// TRUE Fitness Technology
    #[strum(serialize = "TRUE Fitness Technology")]
    TRUEFitnessTechnology,
    /// Reiner Kartengeraete GmbH & Co. KG.
    #[strum(serialize = "Reiner Kartengeraete GmbH & Co. KG.")]
    ReinerKartengeraeteGmbHCoKG,
    /// SHENZHEN LEMONJOY TECHNOLOGY CO., LTD.
    #[strum(serialize = "SHENZHEN LEMONJOY TECHNOLOGY CO., LTD.")]
    SHENZHENLEMONJOYTECHNOLOGYCOLTD,
    /// Hello Inc.
    #[strum(serialize = "Hello Inc.")]
    HelloInc,
    /// Evollve Inc.
    #[strum(serialize = "Evollve Inc.")]
    EvollveInc,
    /// Jigowatts Inc.
    #[strum(serialize = "Jigowatts Inc.")]
    JigowattsInc,
    /// BASIC MICRO.COM,INC.
    #[strum(serialize = "BASIC MICRO.COM,INC.")]
    BASICMICROCOMINC,
    /// CUBE TECHNOLOGIES
    #[strum(serialize = "CUBE TECHNOLOGIES")]
    CUBETECHNOLOGIES,
    /// foolography GmbH
    #[strum(serialize = "foolography GmbH")]
    FoolographyGmbH,
    /// CLINK
    #[strum(serialize = "CLINK")]
    CLINK,
    /// Hestan Smart Cooking Inc.
    #[strum(serialize = "Hestan Smart Cooking Inc.")]
    HestanSmartCookingInc,
    /// WindowMaster A/S
    #[strum(serialize = "WindowMaster A/S")]
    WindowMasterAS,
    /// Flowscape AB
    #[strum(serialize = "Flowscape AB")]
    FlowscapeAB,
    /// PAL Technologies Ltd
    #[strum(serialize = "PAL Technologies Ltd")]
    PALTechnologiesLtd,
    /// WHERE, Inc.
    #[strum(serialize = "WHERE, Inc.")]
    WHEREInc,
    /// Iton Technology Corp.
    #[strum(serialize = "Iton Technology Corp.")]
    ItonTechnologyCorp,
    /// Owl Labs Inc.
    #[strum(serialize = "Owl Labs Inc.")]
    OwlLabsInc,
    /// Rockford Corp.
    #[strum(serialize = "Rockford Corp.")]
    RockfordCorp,
    /// Becon Technologies Co.,Ltd.
    #[strum(serialize = "Becon Technologies Co.,Ltd.")]
    BeconTechnologiesCoLtd,
    /// Vyassoft Technologies Inc
    #[strum(serialize = "Vyassoft Technologies Inc")]
    VyassoftTechnologiesInc,
    /// Nox Medical
    #[strum(serialize = "Nox Medical")]
    NoxMedical,
    /// Kimberly-Clark
    #[strum(serialize = "Kimberly-Clark")]
    KimberlyClark,
    /// Trimble Navigation Ltd.
    #[strum(serialize = "Trimble Navigation Ltd.")]
    TrimbleNavigationLtd,
    /// Littelfuse
    #[strum(serialize = "Littelfuse")]
    Littelfuse,
    /// Withings
    #[strum(serialize = "Withings")]
    Withings,
    /// i-developer IT Beratung UG
    #[strum(serialize = "i-developer IT Beratung UG")]
    IDeveloperITBeratungUG,
    /// Relations Inc.
    #[strum(serialize = "Relations Inc.")]
    RelationsInc,
    /// Sears Holdings Corporation
    #[strum(serialize = "Sears Holdings Corporation")]
    SearsHoldingsCorporation,
    /// Gantner Electronic GmbH
    #[strum(serialize = "Gantner Electronic GmbH")]
    GantnerElectronicGmbH,
    /// Authomate Inc
    #[strum(serialize = "Authomate Inc")]
    AuthomateInc,
    /// Vertex International, Inc.
    #[strum(serialize = "Vertex International, Inc.")]
    VertexInternationalInc,
    /// Airtago
    #[strum(serialize = "Airtago")]
    Airtago,
    /// Swiss Audio SA
    #[strum(serialize = "Swiss Audio SA")]
    SwissAudioSA,
    /// ToGetHome Inc.
    #[strum(serialize = "ToGetHome Inc.")]
    ToGetHomeInc,
    /// AXIS
    #[strum(serialize = "AXIS")]
    AXIS,
    /// Openmatics
    #[strum(serialize = "Openmatics")]
    Openmatics,
    /// Jana Care Inc.
    #[strum(serialize = "Jana Care Inc.")]
    JanaCareInc,
    /// Senix Corporation
    #[strum(serialize = "Senix Corporation")]
    SenixCorporation,
    /// NorthStar Battery Company, LLC
    #[strum(serialize = "NorthStar Battery Company, LLC")]
    NorthStarBatteryCompanyLLC,
    /// SKF (U.K.) Limited
    #[strum(serialize = "SKF (U.K.) Limited")]
    SKFUKLimited,
    /// CO-AX Technology, Inc.
    #[strum(serialize = "CO-AX Technology, Inc.")]
    COAXTechnologyInc,
    /// Fender Musical Instruments
    #[strum(serialize = "Fender Musical Instruments")]
    FenderMusicalInstruments,
    /// Luidia Inc
    #[strum(serialize = "Luidia Inc")]
    LuidiaInc,
    /// SEFAM
    #[strum(serialize = "SEFAM")]
    SEFAM,
    /// Wireless Cables Inc
    #[strum(serialize = "Wireless Cables Inc")]
    WirelessCablesInc,
    /// Lightning Protection International Pty Ltd
    #[strum(serialize = "Lightning Protection International Pty Ltd")]
    LightningProtectionInternationalPtyLtd,
    /// Uber Technologies Inc
    #[strum(serialize = "Uber Technologies Inc")]
    UberTechnologiesInc,
    /// SODA GmbH
    #[strum(serialize = "SODA GmbH")]
    SODAGmbH,
    /// Fatigue Science
    #[strum(serialize = "Fatigue Science")]
    FatigueScience,
    /// Reserved
    #[strum(serialize = "Reserved")]
    Reserved,
    /// Novalogy LTD
    #[strum(serialize = "Novalogy LTD")]
    NovalogyLTD,
    /// Friday Labs Limited
    #[strum(serialize = "Friday Labs Limited")]
    FridayLabsLimited,
    /// OrthoAccel Technologies
    #[strum(serialize = "OrthoAccel Technologies")]
    OrthoAccelTechnologies,
    /// WaterGuru, Inc.
    #[strum(serialize = "WaterGuru, Inc.")]
    WaterGuruInc,
    /// Benning Elektrotechnik und Elektronik GmbH & Co. KG
    #[strum(serialize = "Benning Elektrotechnik und Elektronik GmbH & Co. KG")]
    BenningElektrotechnikUndElektronikGmbHCoKG,
    /// Dell Computer Corporation
    #[strum(serialize = "Dell Computer Corporation")]
    DellComputerCorporation,
    /// Kopin Corporation
    #[strum(serialize = "Kopin Corporation")]
    KopinCorporation,
    /// TecBakery GmbH
    #[strum(serialize = "TecBakery GmbH")]
    TecBakeryGmbH,
    /// Backbone Labs, Inc.
    #[strum(serialize = "Backbone Labs, Inc.")]
    BackboneLabsInc,
    /// DELSEY SA
    #[strum(serialize = "DELSEY SA")]
    DELSEYSA,
    /// Chargifi Limited
    #[strum(serialize = "Chargifi Limited")]
    ChargifiLimited,
    /// Trainesense Ltd.
    #[strum(serialize = "Trainesense Ltd.")]
    TrainesenseLtd,
    /// Unify Software and Solutions GmbH & Co. KG
    #[strum(serialize = "Unify Software and Solutions GmbH & Co. KG")]
    UnifySoftwareAndSolutionsGmbHCoKG,
    /// Husqvarna AB
    #[strum(serialize = "Husqvarna AB")]
    HusqvarnaAB,
    /// Focus fleet and fuel management inc
    #[strum(serialize = "Focus fleet and fuel management inc")]
    FocusFleetAndFuelManagementInc,
    /// SmallLoop, LLC
    #[strum(serialize = "SmallLoop, LLC")]
    SmallLoopLLC,
    /// Prolon Inc.
    #[strum(serialize = "Prolon Inc.")]
    ProlonInc,
    /// BD Medical
    #[strum(serialize = "BD Medical")]
    BDMedical,
    /// iMicroMed Incorporated
    #[strum(serialize = "iMicroMed Incorporated")]
    IMicroMedIncorporated,
    /// Ticto N.V.
    #[strum(serialize = "Ticto N.V.")]
    TictoNV,
    /// Meshtech AS
    #[strum(serialize = "Meshtech AS")]
    MeshtechAS,
    /// MemCachier Inc.
    #[strum(serialize = "MemCachier Inc.")]
    MemCachierInc,
    /// Danfoss A/S
    #[strum(serialize = "Danfoss A/S")]
    DanfossAS,
    /// SnapStyk Inc.
    #[strum(serialize = "SnapStyk Inc.")]
    SnapStykInc,
    /// Amway Corporation
    #[strum(serialize = "Amway Corporation")]
    AmwayCorporation,
    /// Silk Labs, Inc.
    #[strum(serialize = "Silk Labs, Inc.")]
    SilkLabsInc,
    /// Pillsy Inc.
    #[strum(serialize = "Pillsy Inc.")]
    PillsyInc,
    /// Hatch Baby, Inc.
    #[strum(serialize = "Hatch Baby, Inc.")]
    HatchBabyInc,
    /// Blocks Wearables Ltd.
    #[strum(serialize = "Blocks Wearables Ltd.")]
    BlocksWearablesLtd,
    /// Drayson Technologies (Europe) Limited
    #[strum(serialize = "Drayson Technologies (Europe) Limited")]
    DraysonTechnologiesEuropeLimited,
    /// eBest IOT Inc.
    #[strum(serialize = "eBest IOT Inc.")]
    EBestIOTInc,
    /// Helvar Ltd
    #[strum(serialize = "Helvar Ltd")]
    HelvarLtd,
    /// Radiance Technologies
    #[strum(serialize = "Radiance Technologies")]
    RadianceTechnologies,
    /// Nuheara Limited
    #[strum(serialize = "Nuheara Limited")]
    NuhearaLimited,
    /// Appside co., ltd.
    #[strum(serialize = "Appside co., ltd.")]
    AppsideCoLtd,
    /// DeLaval
    #[strum(serialize = "DeLaval")]
    DeLaval,
    /// Coiler Corporation
    #[strum(serialize = "Coiler Corporation")]
    CoilerCorporation,
    /// Thermomedics, Inc.
    #[strum(serialize = "Thermomedics, Inc.")]
    ThermomedicsInc,
    /// Tentacle Sync GmbH
    #[strum(serialize = "Tentacle Sync GmbH")]
    TentacleSyncGmbH,
    /// Valencell, Inc.
    #[strum(serialize = "Valencell, Inc.")]
    ValencellInc,
    /// iProtoXi Oy
    #[strum(serialize = "iProtoXi Oy")]
    IProtoXiOy,
    /// SECOM CO., LTD.
    #[strum(serialize = "SECOM CO., LTD.")]
    SECOMCOLTD,
    /// Tucker International LLC
    #[strum(serialize = "Tucker International LLC")]
    TuckerInternationalLLC,
    /// Metanate Limited
    #[strum(serialize = "Metanate Limited")]
    MetanateLimited,
    /// Kobian Canada Inc.
    #[strum(serialize = "Kobian Canada Inc.")]
    KobianCanadaInc,
    /// NETGEAR, Inc.
    #[strum(serialize = "NETGEAR, Inc.")]
    NETGEARInc,
    /// Fabtronics Australia Pty Ltd
    #[strum(serialize = "Fabtronics Australia Pty Ltd")]
    FabtronicsAustraliaPtyLtd,
    /// Grand Centrix GmbH
    #[strum(serialize = "Grand Centrix GmbH")]
    GrandCentrixGmbH,
    /// 1UP USA.com llc
    #[strum(serialize = "1UP USA.com llc")]
    N1UPUSAComLlc,
    /// SHIMANO INC.
    #[strum(serialize = "SHIMANO INC.")]
    SHIMANOINC,
    /// Nain Inc.
    #[strum(serialize = "Nain Inc.")]
    NainInc,
    /// LifeStyle Lock, LLC
    #[strum(serialize = "LifeStyle Lock, LLC")]
    LifeStyleLockLLC,
    /// VEGA Grieshaber KG
    #[strum(serialize = "VEGA Grieshaber KG")]
    VEGAGrieshaberKG,
    /// Xtrava Inc.
    #[strum(serialize = "Xtrava Inc.")]
    XtravaInc,
    /// TTS Tooltechnic Systems AG & Co. KG
    #[strum(serialize = "TTS Tooltechnic Systems AG & Co. KG")]
    TTSTooltechnicSystemsAGCoKG,
    /// Teenage Engineering AB
    #[strum(serialize = "Teenage Engineering AB")]
    TeenageEngineeringAB,
    /// Tunstall Nordic AB
    #[strum(serialize = "Tunstall Nordic AB")]
    TunstallNordicAB,
    /// Svep Design Center AB
    #[strum(serialize = "Svep Design Center AB")]
    SvepDesignCenterAB,
    /// Qorvo Utrecht B.V. formerly GreenPeak Technologies BV
    #[strum(serialize = "Qorvo Utrecht B.V. formerly GreenPeak Technologies BV")]
    QorvoUtrechtBVFormerlyGreenPeakTechnologiesBV,
    /// Sphinx Electronics GmbH & Co KG
    #[strum(serialize = "Sphinx Electronics GmbH & Co KG")]
    SphinxElectronicsGmbHCoKG,
    /// Atomation
    #[strum(serialize = "Atomation")]
    Atomation,
    /// Nemik Consulting Inc
    #[strum(serialize = "Nemik Consulting Inc")]
    NemikConsultingInc,
    /// RF INNOVATION
    #[strum(serialize = "RF INNOVATION")]
    RFINNOVATION,
    /// Mini Solution Co., Ltd.
    #[strum(serialize = "Mini Solution Co., Ltd.")]
    MiniSolutionCoLtd,
    /// Lumenetix, Inc
    #[strum(serialize = "Lumenetix, Inc")]
    LumenetixInc,
    /// 2048450 Ontario Inc
    #[strum(serialize = "2048450 Ontario Inc")]
    N2048450OntarioInc,
    /// SPACEEK LTD
    #[strum(serialize = "SPACEEK LTD")]
    SPACEEKLTD,
    /// Delta T Corporation
    #[strum(serialize = "Delta T Corporation")]
    DeltaTCorporation,
    /// Boston Scientific Corporation
    #[strum(serialize = "Boston Scientific Corporation")]
    BostonScientificCorporation,
    /// Nuviz, Inc.
    #[strum(serialize = "Nuviz, Inc.")]
    NuvizInc,
    /// Real Time Automation, Inc.
    #[strum(serialize = "Real Time Automation, Inc.")]
    RealTimeAutomationInc,
    /// Kolibree
    #[strum(serialize = "Kolibree")]
    Kolibree,
    /// vhf elektronik GmbH
    #[strum(serialize = "vhf elektronik GmbH")]
    VhfElektronikGmbH,
    /// Bonsai Systems GmbH
    #[strum(serialize = "Bonsai Systems GmbH")]
    BonsaiSystemsGmbH,
    /// Fathom Systems Inc.
    #[strum(serialize = "Fathom Systems Inc.")]
    FathomSystemsInc,
    /// Bellman & Symfon
    #[strum(serialize = "Bellman & Symfon")]
    BellmanSymfon,
    /// International Forte Group LLC
    #[strum(serialize = "International Forte Group LLC")]
    InternationalForteGroupLLC,
    /// CycleLabs Solutions inc.
    #[strum(serialize = "CycleLabs Solutions inc.")]
    CycleLabsSolutionsInc,
    /// Codenex Oy
    #[strum(serialize = "Codenex Oy")]
    CodenexOy,
    /// Kynesim Ltd
    #[strum(serialize = "Kynesim Ltd")]
    KynesimLtd,
    /// Palago AB
    #[strum(serialize = "Palago AB")]
    PalagoAB,
    /// INSIGMA INC.
    #[strum(serialize = "INSIGMA INC.")]
    INSIGMAINC,
    /// PMD Solutions
    #[strum(serialize = "PMD Solutions")]
    PMDSolutions,
    /// Qingdao Realtime Technology Co., Ltd.
    #[strum(serialize = "Qingdao Realtime Technology Co., Ltd.")]
    QingdaoRealtimeTechnologyCoLtd,
    /// BEGA Gantenbrink-Leuchten KG
    #[strum(serialize = "BEGA Gantenbrink-Leuchten KG")]
    BEGAGantenbrinkLeuchtenKG,
    /// Pambor Ltd.
    #[strum(serialize = "Pambor Ltd.")]
    PamborLtd,
    /// Develco Products A/S
    #[strum(serialize = "Develco Products A/S")]
    DevelcoProductsAS,
    /// iDesign s.r.l.
    #[strum(serialize = "iDesign s.r.l.")]
    IDesignSRL,
    /// TiVo Corp
    #[strum(serialize = "TiVo Corp")]
    TiVoCorp,
    /// Control-J Pty Ltd
    #[strum(serialize = "Control-J Pty Ltd")]
    ControlJPtyLtd,
    /// Steelcase, Inc.
    #[strum(serialize = "Steelcase, Inc.")]
    SteelcaseInc,
    /// iApartment co., ltd.
    #[strum(serialize = "iApartment co., ltd.")]
    IApartmentCoLtd,
    /// Icom inc.
    #[strum(serialize = "Icom inc.")]
    IcomInc,
    /// Oxstren Wearable Technologies Private Limited
    #[strum(serialize = "Oxstren Wearable Technologies Private Limited")]
    OxstrenWearableTechnologiesPrivateLimited,
    /// Blue Spark Technologies
    #[strum(serialize = "Blue Spark Technologies")]
    BlueSparkTechnologies,
    /// FarSite Communications Limited
    #[strum(serialize = "FarSite Communications Limited")]
    FarSiteCommunicationsLimited,
    /// mywerk system GmbH
    #[strum(serialize = "mywerk system GmbH")]
    MywerkSystemGmbH,
    /// Sinosun Technology Co., Ltd.
    #[strum(serialize = "Sinosun Technology Co., Ltd.")]
    SinosunTechnologyCoLtd,
    /// MIYOSHI ELECTRONICS CORPORATION
    #[strum(serialize = "MIYOSHI ELECTRONICS CORPORATION")]
    MIYOSHIELECTRONICSCORPORATION,
    /// POWERMAT LTD
    #[strum(serialize = "POWERMAT LTD")]
    POWERMATLTD,
    /// Occly LLC
    #[strum(serialize = "Occly LLC")]
    OcclyLLC,
    /// OurHub Dev IvS
    #[strum(serialize = "OurHub Dev IvS")]
    OurHubDevIvS,
    /// Pro-Mark, Inc.
    #[strum(serialize = "Pro-Mark, Inc.")]
    ProMarkInc,
    /// Dynometrics Inc.
    #[strum(serialize = "Dynometrics Inc.")]
    DynometricsInc,
    /// Quintrax Limited
    #[strum(serialize = "Quintrax Limited")]
    QuintraxLimited,
    /// POS Tuning Udo Vosshenrich GmbH & Co. KG
    #[strum(serialize = "POS Tuning Udo Vosshenrich GmbH & Co. KG")]
    POSTuningUdoVosshenrichGmbHCoKG,
    /// Multi Care Systems B.V.
    #[strum(serialize = "Multi Care Systems B.V.")]
    MultiCareSystemsBV,
    /// Revol Technologies Inc
    #[strum(serialize = "Revol Technologies Inc")]
    RevolTechnologiesInc,
    /// SKIDATA AG
    #[strum(serialize = "SKIDATA AG")]
    SKIDATAAG,
    /// DEV TECNOLOGIA INDUSTRIA, COMERCIO E MANUTENCAO DE EQUIPAMENTOS LTDA. - ME
    #[strum(serialize = "DEV TECNOLOGIA INDUSTRIA, COMERCIO E MANUTENCAO DE EQUIPAMENTOS LTDA. - ME")]
    DEVTECNOLOGIAINDUSTRIACOMERCIOEMANUTENCAODEEQUIPAMENTOSLTDAME,
    /// Centrica Connected Home
    #[strum(serialize = "Centrica Connected Home")]
    CentricaConnectedHome,
    /// Automotive Data Solutions Inc
    #[strum(serialize = "Automotive Data Solutions Inc")]
    AutomotiveDataSolutionsInc,
    /// Igarashi Engineering
    #[strum(serialize = "Igarashi Engineering")]
    IgarashiEngineering,
    /// Taelek Oy
    #[strum(serialize = "Taelek Oy")]
    TaelekOy,
    /// CP Electronics Limited
    #[strum(serialize = "CP Electronics Limited")]
    CPElectronicsLimited,
    /// Vectronix AG
    #[strum(serialize = "Vectronix AG")]
    VectronixAG,
    /// S-Labs Sp. z o.o.
    #[strum(serialize = "S-Labs Sp. z o.o.")]
    SLabsSpZOO,
    /// Companion Medical, Inc.
    #[strum(serialize = "Companion Medical, Inc.")]
    CompanionMedicalInc,
    /// BlueKitchen GmbH
    #[strum(serialize = "BlueKitchen GmbH")]
    BlueKitchenGmbH,
    /// Matting AB
    #[strum(serialize = "Matting AB")]
    MattingAB,
    /// SOREX - Wireless Solutions GmbH
    #[strum(serialize = "SOREX - Wireless Solutions GmbH")]
    SOREXWirelessSolutionsGmbH,
    /// ADC Technology, Inc.
    #[strum(serialize = "ADC Technology, Inc.")]
    ADCTechnologyInc,
    /// Lynxemi Pte Ltd
    #[strum(serialize = "Lynxemi Pte Ltd")]
    LynxemiPteLtd,
    /// SENNHEISER electronic GmbH & Co. KG
    #[strum(serialize = "SENNHEISER electronic GmbH & Co. KG")]
    SENNHEISERElectronicGmbHCoKG,
    /// LMT Mercer Group, Inc
    #[strum(serialize = "LMT Mercer Group, Inc")]
    LMTMercerGroupInc,
    /// Polymorphic Labs LLC
    #[strum(serialize = "Polymorphic Labs LLC")]
    PolymorphicLabsLLC,
    /// Cochlear Limited
    #[strum(serialize = "Cochlear Limited")]
    CochlearLimited,
    /// METER Group, Inc. USA
    #[strum(serialize = "METER Group, Inc. USA")]
    METERGroupIncUSA,
    /// Ruuvi Innovations Ltd.
    #[strum(serialize = "Ruuvi Innovations Ltd.")]
    RuuviInnovationsLtd,
    /// Situne AS
    #[strum(serialize = "Situne AS")]
    SituneAS,
    /// nVisti, LLC
    #[strum(serialize = "nVisti, LLC")]
    NVistiLLC,
    /// DyOcean
    #[strum(serialize = "DyOcean")]
    DyOcean,
    /// Uhlmann & Zacher GmbH
    #[strum(serialize = "Uhlmann & Zacher GmbH")]
    UhlmannZacherGmbH,
    /// AND!XOR LLC
    #[strum(serialize = "AND!XOR LLC")]
    ANDXORLLC,
    /// tictote AB
    #[strum(serialize = "tictote AB")]
    TictoteAB,
    /// Vypin, LLC
    #[strum(serialize = "Vypin, LLC")]
    VypinLLC,
    /// PNI Sensor Corporation
    #[strum(serialize = "PNI Sensor Corporation")]
    PNISensorCorporation,
    /// ovrEngineered, LLC
    #[strum(serialize = "ovrEngineered, LLC")]
    OvrEngineeredLLC,
    /// GT-tronics HK Ltd
    #[strum(serialize = "GT-tronics HK Ltd")]
    GTTronicsHKLtd,
    /// Herbert Waldmann GmbH & Co. KG
    #[strum(serialize = "Herbert Waldmann GmbH & Co. KG")]
    HerbertWaldmannGmbHCoKG,
    /// Guangzhou FiiO Electronics Technology Co.,Ltd
    #[strum(serialize = "Guangzhou FiiO Electronics Technology Co.,Ltd")]
    GuangzhouFiiOElectronicsTechnologyCoLtd,
    /// Vinetech Co., Ltd
    #[strum(serialize = "Vinetech Co., Ltd")]
    VinetechCoLtd,
    /// Dallas Logic Corporation
    #[strum(serialize = "Dallas Logic Corporation")]
    DallasLogicCorporation,
    /// BioTex, Inc.
    #[strum(serialize = "BioTex, Inc.")]
    BioTexInc,
    /// DISCOVERY SOUND TECHNOLOGY, LLC
    #[strum(serialize = "DISCOVERY SOUND TECHNOLOGY, LLC")]
    DISCOVERYSOUNDTECHNOLOGYLLC,
    /// LINKIO SAS
    #[strum(serialize = "LINKIO SAS")]
    LINKIOSAS,
    /// Harbortronics, Inc.
    #[strum(serialize = "Harbortronics, Inc.")]
    HarbortronicsInc,
    /// Undagrid B.V.
    #[strum(serialize = "Undagrid B.V.")]
    UndagridBV,
    /// Shure Inc
    #[strum(serialize = "Shure Inc")]
    ShureInc,
    /// ERM Electronic Systems LTD
    #[strum(serialize = "ERM Electronic Systems LTD")]
    ERMElectronicSystemsLTD,
    /// BIOROWER Handelsagentur GmbH
    #[strum(serialize = "BIOROWER Handelsagentur GmbH")]
    BIOROWERHandelsagenturGmbH,
    /// Weba Sport und Med. Artikel GmbH
    #[strum(serialize = "Weba Sport und Med. Artikel GmbH")]
    WebaSportUndMedArtikelGmbH,
    /// Kartographers Technologies Pvt. Ltd.
    #[strum(serialize = "Kartographers Technologies Pvt. Ltd.")]
    KartographersTechnologiesPvtLtd,
    /// The Shadow on the Moon
    #[strum(serialize = "The Shadow on the Moon")]
    TheShadowOnTheMoon,
    /// mobike (Hong Kong) Limited
    #[strum(serialize = "mobike (Hong Kong) Limited")]
    MobikeHongKongLimited,
    /// Inuheat Group AB
    #[strum(serialize = "Inuheat Group AB")]
    InuheatGroupAB,
    /// Swiftronix AB
    #[strum(serialize = "Swiftronix AB")]
    SwiftronixAB,
    /// Diagnoptics Technologies
    #[strum(serialize = "Diagnoptics Technologies")]
    DiagnopticsTechnologies,
    /// Analog Devices, Inc.
    #[strum(serialize = "Analog Devices, Inc.")]
    AnalogDevicesInc,
    /// Soraa Inc.
    #[strum(serialize = "Soraa Inc.")]
    SoraaInc,
    /// CSR Building Products Limited
    #[strum(serialize = "CSR Building Products Limited")]
    CSRBuildingProductsLimited,
    /// Crestron Electronics, Inc.
    #[strum(serialize = "Crestron Electronics, Inc.")]
    CrestronElectronicsInc,
    /// Neatebox Ltd
    #[strum(serialize = "Neatebox Ltd")]
    NeateboxLtd,
    /// Draegerwerk AG & Co. KGaA
    #[strum(serialize = "Draegerwerk AG & Co. KGaA")]
    DraegerwerkAGCoKGaA,
    /// AlbynMedical
    #[strum(serialize = "AlbynMedical")]
    AlbynMedical,
    /// Averos FZCO
    #[strum(serialize = "Averos FZCO")]
    AverosFZCO,
    /// VIT Initiative, LLC
    #[strum(serialize = "VIT Initiative, LLC")]
    VITInitiativeLLC,
    /// Statsports International
    #[strum(serialize = "Statsports International")]
    StatsportsInternational,
    /// Sospitas, s.r.o.
    #[strum(serialize = "Sospitas, s.r.o.")]
    SospitasSRO,
    /// Dmet Products Corp.
    #[strum(serialize = "Dmet Products Corp.")]
    DmetProductsCorp,
    /// Mantracourt Electronics Limited
    #[strum(serialize = "Mantracourt Electronics Limited")]
    MantracourtElectronicsLimited,
    /// TeAM Hutchins AB
    #[strum(serialize = "TeAM Hutchins AB")]
    TeAMHutchinsAB,
    /// Seibert Williams Glass, LLC
    #[strum(serialize = "Seibert Williams Glass, LLC")]
    SeibertWilliamsGlassLLC,
    /// Insta GmbH
    #[strum(serialize = "Insta GmbH")]
    InstaGmbH,
    /// Svantek Sp. z o.o.
    #[strum(serialize = "Svantek Sp. z o.o.")]
    SvantekSpZOO,
    /// Shanghai Flyco Electrical Appliance Co., Ltd.
    #[strum(serialize = "Shanghai Flyco Electrical Appliance Co., Ltd.")]
    ShanghaiFlycoElectricalApplianceCoLtd,
    /// Thornwave Labs Inc
    #[strum(serialize = "Thornwave Labs Inc")]
    ThornwaveLabsInc,
    /// Steiner-Optik GmbH
    #[strum(serialize = "Steiner-Optik GmbH")]
    SteinerOptikGmbH,
    /// Novo Nordisk A/S
    #[strum(serialize = "Novo Nordisk A/S")]
    NovoNordiskAS,
    /// Enflux Inc.
    #[strum(serialize = "Enflux Inc.")]
    EnfluxInc,
    /// Safetech Products LLC
    #[strum(serialize = "Safetech Products LLC")]
    SafetechProductsLLC,
    /// GOOOLED S.R.L.
    #[strum(serialize = "GOOOLED S.R.L.")]
    GOOOLEDSRL,
    /// DOM Sicherheitstechnik GmbH & Co. KG
    #[strum(serialize = "DOM Sicherheitstechnik GmbH & Co. KG")]
    DOMSicherheitstechnikGmbHCoKG,
    /// Olympus Corporation
    #[strum(serialize = "Olympus Corporation")]
    OlympusCorporation,
    /// KTS GmbH
    #[strum(serialize = "KTS GmbH")]
    KTSGmbH,
    /// Anloq Technologies Inc.
    #[strum(serialize = "Anloq Technologies Inc.")]
    AnloqTechnologiesInc,
    /// Queercon, Inc
    #[strum(serialize = "Queercon, Inc")]
    QueerconInc,
    /// 5th Element Ltd
    #[strum(serialize = "5th Element Ltd")]
    N5thElementLtd,
    /// Gooee Limited
    #[strum(serialize = "Gooee Limited")]
    GooeeLimited,
    /// LUGLOC LLC
    #[strum(serialize = "LUGLOC LLC")]
    LUGLOCLLC,
    /// Blincam, Inc.
    #[strum(serialize = "Blincam, Inc.")]
    BlincamInc,
    /// FUJIFILM Corporation
    #[strum(serialize = "FUJIFILM Corporation")]
    FUJIFILMCorporation,
    /// RandMcNally
    #[strum(serialize = "RandMcNally")]
    RandMcNally,
    /// Franceschi Marina snc
    #[strum(serialize = "Franceschi Marina snc")]
    FranceschiMarinaSnc,
    /// Engineered Audio, LLC.
    #[strum(serialize = "Engineered Audio, LLC.")]
    EngineeredAudioLLC,
    /// IOTTIVE (OPC) PRIVATE LIMITED
    #[strum(serialize = "IOTTIVE (OPC) PRIVATE LIMITED")]
    IOTTIVEOPCPRIVATELIMITED,
    /// 4MOD Technology
    #[strum(serialize = "4MOD Technology")]
    N4MODTechnology,
    /// Lutron Electronics Co., Inc.
    #[strum(serialize = "Lutron Electronics Co., Inc.")]
    LutronElectronicsCoInc,
    /// Emerson
    #[strum(serialize = "Emerson")]
    Emerson,
    /// Guardtec, Inc.
    #[strum(serialize = "Guardtec, Inc.")]
    GuardtecInc,
    /// REACTEC LIMITED
    #[strum(serialize = "REACTEC LIMITED")]
    REACTECLIMITED,
    /// EllieGrid
    #[strum(serialize = "EllieGrid")]
    EllieGrid,
    /// Under Armour
    #[strum(serialize = "Under Armour")]
    UnderArmour,
    /// Woodenshark
    #[strum(serialize = "Woodenshark")]
    Woodenshark,
    /// Avack Oy
    #[strum(serialize = "Avack Oy")]
    AvackOy,
    /// Smart Solution Technology, Inc.
    #[strum(serialize = "Smart Solution Technology, Inc.")]
    SmartSolutionTechnologyInc,
    /// REHABTRONICS INC.
    #[strum(serialize = "REHABTRONICS INC.")]
    REHABTRONICSINC,
    /// STABILO International
    #[strum(serialize = "STABILO International")]
    STABILOInternational,
    /// Busch Jaeger Elektro GmbH
    #[strum(serialize = "Busch Jaeger Elektro GmbH")]
    BuschJaegerElektroGmbH,
    /// Pacific Bioscience Laboratories, Inc
    #[strum(serialize = "Pacific Bioscience Laboratories, Inc")]
    PacificBioscienceLaboratoriesInc,
    /// Bird Home Automation GmbH
    #[strum(serialize = "Bird Home Automation GmbH")]
    BirdHomeAutomationGmbH,
    /// Motorola Solutions
    #[strum(serialize = "Motorola Solutions")]
    MotorolaSolutions,
    /// R9 Technology, Inc.
    #[strum(serialize = "R9 Technology, Inc.")]
    R9TechnologyInc,
    /// Auxivia
    #[strum(serialize = "Auxivia")]
    Auxivia,
    /// DaisyWorks, Inc
    #[strum(serialize = "DaisyWorks, Inc")]
    DaisyWorksInc,
    /// Kosi Limited
    #[strum(serialize = "Kosi Limited")]
    KosiLimited,
    /// Theben AG
    #[strum(serialize = "Theben AG")]
    ThebenAG,
    /// InDreamer Techsol Private Limited
    #[strum(serialize = "InDreamer Techsol Private Limited")]
    InDreamerTechsolPrivateLimited,
    /// Cerevast Medical
    #[strum(serialize = "Cerevast Medical")]
    CerevastMedical,
    /// ZanCompute Inc.
    #[strum(serialize = "ZanCompute Inc.")]
    ZanComputeInc,
    /// Pirelli Tyre S.P.A.
    #[strum(serialize = "Pirelli Tyre S.P.A.")]
    PirelliTyreSPA,
    /// McLear Limited
    #[strum(serialize = "McLear Limited")]
    McLearLimited,
    /// Shenzhen Huiding Technology Co.,Ltd.
    #[strum(serialize = "Shenzhen Huiding Technology Co.,Ltd.")]
    ShenzhenHuidingTechnologyCoLtd,
    /// Convergence Systems Limited
    #[strum(serialize = "Convergence Systems Limited")]
    ConvergenceSystemsLimited,
    /// Interactio
    #[strum(serialize = "Interactio")]
    Interactio,
    /// Androtec GmbH
    #[strum(serialize = "Androtec GmbH")]
    AndrotecGmbH,
    /// Benchmark Drives GmbH & Co. KG
    #[strum(serialize = "Benchmark Drives GmbH & Co. KG")]
    BenchmarkDrivesGmbHCoKG,
    /// SwingLync L. L. C.
    #[strum(serialize = "SwingLync L. L. C.")]
    SwingLyncLLC,
    /// Tapkey GmbH
    #[strum(serialize = "Tapkey GmbH")]
    TapkeyGmbH,
    /// Woosim Systems Inc.
    #[strum(serialize = "Woosim Systems Inc.")]
    WoosimSystemsInc,
    /// Microsemi Corporation
    #[strum(serialize = "Microsemi Corporation")]
    MicrosemiCorporation,
    /// Wiliot LTD.
    #[strum(serialize = "Wiliot LTD.")]
    WiliotLTD,
    /// Polaris IND
    #[strum(serialize = "Polaris IND")]
    PolarisIND,
    /// Specifi-Kali LLC
    #[strum(serialize = "Specifi-Kali LLC")]
    SpecifiKaliLLC,
    /// Locoroll, Inc
    #[strum(serialize = "Locoroll, Inc")]
    LocorollInc,
    /// PHYPLUS Inc
    #[strum(serialize = "PHYPLUS Inc")]
    PHYPLUSInc,
    /// InPlay Inc.
    #[strum(serialize = "InPlay Inc.")]
    InPlayInc,
    /// Hager
    #[strum(serialize = "Hager")]
    Hager,
    /// Yellowcog
    #[strum(serialize = "Yellowcog")]
    Yellowcog,
    /// Axes System sp. z o. o.
    #[strum(serialize = "Axes System sp. z o. o.")]
    AxesSystemSpZOO,
    /// myLIFTER Inc.
    #[strum(serialize = "myLIFTER Inc.")]
    MyLIFTERInc,
    /// Shake-on B.V.
    #[strum(serialize = "Shake-on B.V.")]
    ShakeOnBV,
    /// Vibrissa Inc.
    #[strum(serialize = "Vibrissa Inc.")]
    VibrissaInc,
    /// OSRAM GmbH
    #[strum(serialize = "OSRAM GmbH")]
    OSRAMGmbH,
    /// TRSystems GmbH
    #[strum(serialize = "TRSystems GmbH")]
    TRSystemsGmbH,
    /// Yichip Microelectronics (Hangzhou) Co.,Ltd.
    #[strum(serialize = "Yichip Microelectronics (Hangzhou) Co.,Ltd.")]
    YichipMicroelectronicsHangzhouCoLtd,
    /// Foundation Engineering LLC
    #[strum(serialize = "Foundation Engineering LLC")]
    FoundationEngineeringLLC,
    /// UNI-ELECTRONICS, INC.
    #[strum(serialize = "UNI-ELECTRONICS, INC.")]
    UNIELECTRONICSINC,
    /// Brookfield Equinox LLC
    #[strum(serialize = "Brookfield Equinox LLC")]
    BrookfieldEquinoxLLC,
    /// Soprod SA
    #[strum(serialize = "Soprod SA")]
    SoprodSA,
    /// 9974091 Canada Inc.
    #[strum(serialize = "9974091 Canada Inc.")]
    N9974091CanadaInc,
    /// FIBRO GmbH
    #[strum(serialize = "FIBRO GmbH")]
    FIBROGmbH,
    /// RB Controls Co., Ltd.
    #[strum(serialize = "RB Controls Co., Ltd.")]
    RBControlsCoLtd,
    /// Footmarks
    #[strum(serialize = "Footmarks")]
    Footmarks,
    /// Amtronic Sverige AB (formerly Amcore AB)
    #[strum(serialize = "Amtronic Sverige AB (formerly Amcore AB)")]
    AmtronicSverigeABFormerlyAmcoreAB,
    /// MAMORIO.inc
    #[strum(serialize = "MAMORIO.inc")]
    MAMORIOInc,
    /// Tyto Life LLC
    #[strum(serialize = "Tyto Life LLC")]
    TytoLifeLLC,
    /// Leica Camera AG
    #[strum(serialize = "Leica Camera AG")]
    LeicaCameraAG,
    /// Angee Technologies Ltd.
    #[strum(serialize = "Angee Technologies Ltd.")]
    AngeeTechnologiesLtd,
    /// EDPS
    #[strum(serialize = "EDPS")]
    EDPS,
    /// OFF Line Co., Ltd.
    #[strum(serialize = "OFF Line Co., Ltd.")]
    OFFLineCoLtd,
    /// Detect Blue Limited
    #[strum(serialize = "Detect Blue Limited")]
    DetectBlueLimited,
    /// Setec Pty Ltd
    #[strum(serialize = "Setec Pty Ltd")]
    SetecPtyLtd,
    /// Target Corporation
    #[strum(serialize = "Target Corporation")]
    TargetCorporation,
    /// IAI Corporation
    #[strum(serialize = "IAI Corporation")]
    IAICorporation,
    /// NS Tech, Inc.
    #[strum(serialize = "NS Tech, Inc.")]
    NSTechInc,
    /// MTG Co., Ltd.
    #[strum(serialize = "MTG Co., Ltd.")]
    MTGCoLtd,
    /// Hangzhou iMagic Technology Co., Ltd
    #[strum(serialize = "Hangzhou iMagic Technology Co., Ltd")]
    HangzhouIMagicTechnologyCoLtd,
    /// HONGKONG NANO IC TECHNOLOGIES        CO., LIMITED
    #[strum(serialize = "HONGKONG NANO IC TECHNOLOGIES        CO., LIMITED")]
    HONGKONGNANOICTECHNOLOGIESCOLIMITED,
    /// Honeywell International Inc.
    #[strum(serialize = "Honeywell International Inc.")]
    HoneywellInternationalInc,
    /// Albrecht JUNG
    #[strum(serialize = "Albrecht JUNG")]
    AlbrechtJUNG,
    /// Lunera Lighting Inc.
    #[strum(serialize = "Lunera Lighting Inc.")]
    LuneraLightingInc,
    /// Lumen UAB
    #[strum(serialize = "Lumen UAB")]
    LumenUAB,
    /// Keynes Controls Ltd
    #[strum(serialize = "Keynes Controls Ltd")]
    KeynesControlsLtd,
    /// Novartis AG
    #[strum(serialize = "Novartis AG")]
    NovartisAG,
    /// Geosatis SA
    #[strum(serialize = "Geosatis SA")]
    GeosatisSA,
    /// EXFO, Inc.
    #[strum(serialize = "EXFO, Inc.")]
    EXFOInc,
    /// LEDVANCE GmbH
    #[strum(serialize = "LEDVANCE GmbH")]
    LEDVANCEGmbH,
    /// Center ID Corp.
    #[strum(serialize = "Center ID Corp.")]
    CenterIDCorp,
    /// Adolene, Inc.
    #[strum(serialize = "Adolene, Inc.")]
    AdoleneInc,
    /// D&M Holdings Inc.
    #[strum(serialize = "D&M Holdings Inc.")]
    DMHoldingsInc,
    /// CRESCO Wireless, Inc.
    #[strum(serialize = "CRESCO Wireless, Inc.")]
    CRESCOWirelessInc,
    /// Nura Operations Pty Ltd
    #[strum(serialize = "Nura Operations Pty Ltd")]
    NuraOperationsPtyLtd,
    /// Frontiergadget, Inc.
    #[strum(serialize = "Frontiergadget, Inc.")]
    FrontiergadgetInc,
    /// Smart Component Technologies Limited
    #[strum(serialize = "Smart Component Technologies Limited")]
    SmartComponentTechnologiesLimited,
    /// ZTR Control Systems LLC
    #[strum(serialize = "ZTR Control Systems LLC")]
    ZTRControlSystemsLLC,
    /// MetaLogics Corporation
    #[strum(serialize = "MetaLogics Corporation")]
    MetaLogicsCorporation,
    /// Medela AG
    #[strum(serialize = "Medela AG")]
    MedelaAG,
    /// OPPLE Lighting Co., Ltd
    #[strum(serialize = "OPPLE Lighting Co., Ltd")]
    OPPLELightingCoLtd,
    /// Savitech Corp.,
    #[strum(serialize = "Savitech Corp.,")]
    SavitechCorp,
    /// prodigy
    #[strum(serialize = "prodigy")]
    Prodigy,
    /// Screenovate Technologies Ltd
    #[strum(serialize = "Screenovate Technologies Ltd")]
    ScreenovateTechnologiesLtd,
    /// TESA SA
    #[strum(serialize = "TESA SA")]
    TESASA,
    /// CLIM8 LIMITED
    #[strum(serialize = "CLIM8 LIMITED")]
    CLIM8LIMITED,
    /// Silergy Corp
    #[strum(serialize = "Silergy Corp")]
    SilergyCorp,
    /// SilverPlus, Inc
    #[strum(serialize = "SilverPlus, Inc")]
    SilverPlusInc,
    /// Sharknet srl
    #[strum(serialize = "Sharknet srl")]
    SharknetSrl,
    /// Mist Systems, Inc.
    #[strum(serialize = "Mist Systems, Inc.")]
    MistSystemsInc,
    /// MIWA LOCK CO.,Ltd
    #[strum(serialize = "MIWA LOCK CO.,Ltd")]
    MIWALOCKCOLtd,
    /// OrthoSensor, Inc.
    #[strum(serialize = "OrthoSensor, Inc.")]
    OrthoSensorInc,
    /// Candy Hoover Group s.r.l
    #[strum(serialize = "Candy Hoover Group s.r.l")]
    CandyHooverGroupSRL,
    /// Apexar Technologies S.A.
    #[strum(serialize = "Apexar Technologies S.A.")]
    ApexarTechnologiesSA,
    /// LOGICDATA d.o.o.
    #[strum(serialize = "LOGICDATA d.o.o.")]
    LOGICDATADOO,
    /// Knick Elektronische Messgeraete GmbH & Co. KG
    #[strum(serialize = "Knick Elektronische Messgeraete GmbH & Co. KG")]
    KnickElektronischeMessgeraeteGmbHCoKG,
    /// Smart Technologies and Investment Limited
    #[strum(serialize = "Smart Technologies and Investment Limited")]
    SmartTechnologiesAndInvestmentLimited,
    /// Linough Inc.
    #[strum(serialize = "Linough Inc.")]
    LinoughInc,
    /// Advanced Electronic Designs, Inc.
    #[strum(serialize = "Advanced Electronic Designs, Inc.")]
    AdvancedElectronicDesignsInc,
    /// Carefree Scott Fetzer Co Inc
    #[strum(serialize = "Carefree Scott Fetzer Co Inc")]
    CarefreeScottFetzerCoInc,
    /// Sensome
    #[strum(serialize = "Sensome")]
    Sensome,
    /// FORTRONIK storitve d.o.o.
    #[strum(serialize = "FORTRONIK storitve d.o.o.")]
    FORTRONIKStoritveDOO,
    /// Sinnoz
    #[strum(serialize = "Sinnoz")]
    Sinnoz,
    /// Versa Networks, Inc.
    #[strum(serialize = "Versa Networks, Inc.")]
    VersaNetworksInc,
    /// Sylero
    #[strum(serialize = "Sylero")]
    Sylero,
    /// Avempace SARL
    #[strum(serialize = "Avempace SARL")]
    AvempaceSARL,
    /// Nintendo Co., Ltd.
    #[strum(serialize = "Nintendo Co., Ltd.")]
    NintendoCoLtd,
    /// National Instruments
    #[strum(serialize = "National Instruments")]
    NationalInstruments,
    /// KROHNE Messtechnik GmbH
    #[strum(serialize = "KROHNE Messtechnik GmbH")]
    KROHNEMesstechnikGmbH,
    /// Otodynamics Ltd
    #[strum(serialize = "Otodynamics Ltd")]
    OtodynamicsLtd,
    /// Arwin Technology Limited
    #[strum(serialize = "Arwin Technology Limited")]
    ArwinTechnologyLimited,
    /// benegear, inc.
    #[strum(serialize = "benegear, inc.")]
    BenegearInc,
    /// Newcon Optik
    #[strum(serialize = "Newcon Optik")]
    NewconOptik,
    /// CANDY HOUSE, Inc.
    #[strum(serialize = "CANDY HOUSE, Inc.")]
    CANDYHOUSEInc,
    /// FRANKLIN TECHNOLOGY INC
    #[strum(serialize = "FRANKLIN TECHNOLOGY INC")]
    FRANKLINTECHNOLOGYINC,
    /// Lely
    #[strum(serialize = "Lely")]
    Lely,
    /// Valve Corporation
    #[strum(serialize = "Valve Corporation")]
    ValveCorporation,
    /// Hekatron Vertriebs GmbH
    #[strum(serialize = "Hekatron Vertriebs GmbH")]
    HekatronVertriebsGmbH,
    /// PROTECH S.A.S. DI GIRARDI ANDREA & C.
    #[strum(serialize = "PROTECH S.A.S. DI GIRARDI ANDREA & C.")]
    PROTECHSASDIGIRARDIANDREAC,
    /// Sarita CareTech APS (formerly Sarita CareTech IVS)
    #[strum(serialize = "Sarita CareTech APS (formerly Sarita CareTech IVS)")]
    SaritaCareTechAPSFormerlySaritaCareTechIVS,
    /// Finder S.p.A.
    #[strum(serialize = "Finder S.p.A.")]
    FinderSPA,
    /// Thalmic Labs Inc.
    #[strum(serialize = "Thalmic Labs Inc.")]
    ThalmicLabsInc,
    /// Steinel Vertrieb GmbH
    #[strum(serialize = "Steinel Vertrieb GmbH")]
    SteinelVertriebGmbH,
    /// Beghelli Spa
    #[strum(serialize = "Beghelli Spa")]
    BeghelliSpa,
    /// Beijing Smartspace Technologies Inc.
    #[strum(serialize = "Beijing Smartspace Technologies Inc.")]
    BeijingSmartspaceTechnologiesInc,
    /// CORE TRANSPORT TECHNOLOGIES NZ LIMITED
    #[strum(serialize = "CORE TRANSPORT TECHNOLOGIES NZ LIMITED")]
    CORETRANSPORTTECHNOLOGIESNZLIMITED,
    /// Xiamen Everesports Goods Co., Ltd
    #[strum(serialize = "Xiamen Everesports Goods Co., Ltd")]
    XiamenEveresportsGoodsCoLtd,
    /// Bodyport Inc.
    #[strum(serialize = "Bodyport Inc.")]
    BodyportInc,
    /// Audionics System, INC.
    #[strum(serialize = "Audionics System, INC.")]
    AudionicsSystemINC,
    /// Flipnavi Co.,Ltd.
    #[strum(serialize = "Flipnavi Co.,Ltd.")]
    FlipnaviCoLtd,
    /// Rion Co., Ltd.
    #[strum(serialize = "Rion Co., Ltd.")]
    RionCoLtd,
    /// Long Range Systems, LLC
    #[strum(serialize = "Long Range Systems, LLC")]
    LongRangeSystemsLLC,
    /// Redmond Industrial Group LLC
    #[strum(serialize = "Redmond Industrial Group LLC")]
    RedmondIndustrialGroupLLC,
    /// VIZPIN INC.
    #[strum(serialize = "VIZPIN INC.")]
    VIZPININC,
    /// BikeFinder AS
    #[strum(serialize = "BikeFinder AS")]
    BikeFinderAS,
    /// Consumer Sleep Solutions LLC
    #[strum(serialize = "Consumer Sleep Solutions LLC")]
    ConsumerSleepSolutionsLLC,
    /// PSIKICK, INC.
    #[strum(serialize = "PSIKICK, INC.")]
    PSIKICKINC,
    /// AntTail.com
    #[strum(serialize = "AntTail.com")]
    AntTailCom,
    /// Lighting Science Group Corp.
    #[strum(serialize = "Lighting Science Group Corp.")]
    LightingScienceGroupCorp,
    /// AFFORDABLE ELECTRONICS INC
    #[strum(serialize = "AFFORDABLE ELECTRONICS INC")]
    AFFORDABLEELECTRONICSINC,
    /// Integral Memroy Plc
    #[strum(serialize = "Integral Memroy Plc")]
    IntegralMemroyPlc,
    /// Globalstar, Inc.
    #[strum(serialize = "Globalstar, Inc.")]
    GlobalstarInc,
    /// True Wearables, Inc.
    #[strum(serialize = "True Wearables, Inc.")]
    TrueWearablesInc,
    /// Wellington Drive Technologies Ltd
    #[strum(serialize = "Wellington Drive Technologies Ltd")]
    WellingtonDriveTechnologiesLtd,
    /// Ensemble Tech Private Limited
    #[strum(serialize = "Ensemble Tech Private Limited")]
    EnsembleTechPrivateLimited,
    /// OMNI Remotes
    #[strum(serialize = "OMNI Remotes")]
    OMNIRemotes,
    /// Duracell U.S. Operations Inc.
    #[strum(serialize = "Duracell U.S. Operations Inc.")]
    DuracellUSOperationsInc,
    /// Toor Technologies LLC
    #[strum(serialize = "Toor Technologies LLC")]
    ToorTechnologiesLLC,
    /// Instinct Performance
    #[strum(serialize = "Instinct Performance")]
    InstinctPerformance,
    /// Beco, Inc
    #[strum(serialize = "Beco, Inc")]
    BecoInc,
    /// Scuf Gaming International, LLC
    #[strum(serialize = "Scuf Gaming International, LLC")]
    ScufGamingInternationalLLC,
    /// ARANZ Medical Limited
    #[strum(serialize = "ARANZ Medical Limited")]
    ARANZMedicalLimited,
    /// LYS TECHNOLOGIES LTD
    #[strum(serialize = "LYS TECHNOLOGIES LTD")]
    LYSTECHNOLOGIESLTD,
    /// Breakwall Analytics, LLC
    #[strum(serialize = "Breakwall Analytics, LLC")]
    BreakwallAnalyticsLLC,
    /// Code Blue Communications
    #[strum(serialize = "Code Blue Communications")]
    CodeBlueCommunications,
    /// Gira Giersiepen GmbH & Co. KG
    #[strum(serialize = "Gira Giersiepen GmbH & Co. KG")]
    GiraGiersiepenGmbHCoKG,
    /// Hearing Lab Technology
    #[strum(serialize = "Hearing Lab Technology")]
    HearingLabTechnology,
    /// LEGRAND
    #[strum(serialize = "LEGRAND")]
    LEGRAND,
    /// Derichs GmbH
    #[strum(serialize = "Derichs GmbH")]
    DerichsGmbH,
    /// ALT-TEKNIK LLC
    #[strum(serialize = "ALT-TEKNIK LLC")]
    ALTTEKNIKLLC,
    /// Star Technologies
    #[strum(serialize = "Star Technologies")]
    StarTechnologies,
    /// START TODAY CO.,LTD.
    #[strum(serialize = "START TODAY CO.,LTD.")]
    STARTTODAYCOLTD,
    /// Maxim Integrated Products
    #[strum(serialize = "Maxim Integrated Products")]
    MaximIntegratedProducts,
    /// MERCK Kommanditgesellschaft auf Aktien
    #[strum(serialize = "MERCK Kommanditgesellschaft auf Aktien")]
    MERCKKommanditgesellschaftAufAktien,
    /// Jungheinrich Aktiengesellschaft
    #[strum(serialize = "Jungheinrich Aktiengesellschaft")]
    JungheinrichAktiengesellschaft,
    /// Oculus VR, LLC
    #[strum(serialize = "Oculus VR, LLC")]
    OculusVRLLC,
    /// HENDON SEMICONDUCTORS PTY LTD
    #[strum(serialize = "HENDON SEMICONDUCTORS PTY LTD")]
    HENDONSEMICONDUCTORSPTYLTD,
    /// Pur3 Ltd
    #[strum(serialize = "Pur3 Ltd")]
    Pur3Ltd,
    /// Viasat Group S.p.A.
    #[strum(serialize = "Viasat Group S.p.A.")]
    ViasatGroupSPA,
    /// IZITHERM
    #[strum(serialize = "IZITHERM")]
    IZITHERM,
    /// Spaulding Clinical Research
    #[strum(serialize = "Spaulding Clinical Research")]
    SpauldingClinicalResearch,
    /// Kohler Company
    #[strum(serialize = "Kohler Company")]
    KohlerCompany,
    /// Inor Process AB
    #[strum(serialize = "Inor Process AB")]
    InorProcessAB,
    /// My Smart Blinds
    #[strum(serialize = "My Smart Blinds")]
    MySmartBlinds,
    /// RadioPulse Inc
    #[strum(serialize = "RadioPulse Inc")]
    RadioPulseInc,
    /// rapitag GmbH
    #[strum(serialize = "rapitag GmbH")]
    RapitagGmbH,
    /// Lazlo326, LLC.
    #[strum(serialize = "Lazlo326, LLC.")]
    Lazlo326LLC,
    /// Teledyne Lecroy, Inc.
    #[strum(serialize = "Teledyne Lecroy, Inc.")]
    TeledyneLecroyInc,
    /// Dataflow Systems Limited
    #[strum(serialize = "Dataflow Systems Limited")]
    DataflowSystemsLimited,
    /// Macrogiga Electronics
    #[strum(serialize = "Macrogiga Electronics")]
    MacrogigaElectronics,
    /// Tandem Diabetes Care
    #[strum(serialize = "Tandem Diabetes Care")]
    TandemDiabetesCare,
    /// Polycom, Inc.
    #[strum(serialize = "Polycom, Inc.")]
    PolycomInc,
    /// Fisher & Paykel Healthcare
    #[strum(serialize = "Fisher & Paykel Healthcare")]
    FisherPaykelHealthcare,
    /// RCP Software Oy
    #[strum(serialize = "RCP Software Oy")]
    RCPSoftwareOy,
    /// Shanghai Xiaoyi Technology Co.,Ltd.
    #[strum(serialize = "Shanghai Xiaoyi Technology Co.,Ltd.")]
    ShanghaiXiaoyiTechnologyCoLtd,
    /// ADHERIUM(NZ) LIMITED
    #[strum(serialize = "ADHERIUM(NZ) LIMITED")]
    ADHERIUMNZLIMITED,
    /// Axiomware Systems Incorporated
    #[strum(serialize = "Axiomware Systems Incorporated")]
    AxiomwareSystemsIncorporated,
    /// O. E. M. Controls, Inc.
    #[strum(serialize = "O. E. M. Controls, Inc.")]
    OEMControlsInc,
    /// Kiiroo BV
    #[strum(serialize = "Kiiroo BV")]
    KiirooBV,
    /// Telecon Mobile Limited
    #[strum(serialize = "Telecon Mobile Limited")]
    TeleconMobileLimited,
    /// Sonos Inc
    #[strum(serialize = "Sonos Inc")]
    SonosInc,
    /// Tom Allebrandi Consulting
    #[strum(serialize = "Tom Allebrandi Consulting")]
    TomAllebrandiConsulting,
    /// Monidor
    #[strum(serialize = "Monidor")]
    Monidor,
    /// Tramex Limited
    #[strum(serialize = "Tramex Limited")]
    TramexLimited,
    /// Nofence AS
    #[strum(serialize = "Nofence AS")]
    NofenceAS,
    /// GoerTek Dynaudio Co., Ltd.
    #[strum(serialize = "GoerTek Dynaudio Co., Ltd.")]
    GoerTekDynaudioCoLtd,
    /// INIA
    #[strum(serialize = "INIA")]
    INIA,
    /// CARMATE MFG.CO.,LTD
    #[strum(serialize = "CARMATE MFG.CO.,LTD")]
    CARMATEMFGCOLTD,
    /// OV LOOP, INC. (formerly ONvocal)
    #[strum(serialize = "OV LOOP, INC. (formerly ONvocal)")]
    OVLOOPINCFormerlyONvocal,
    /// NewTec GmbH
    #[strum(serialize = "NewTec GmbH")]
    NewTecGmbH,
    /// Medallion Instrumentation Systems
    #[strum(serialize = "Medallion Instrumentation Systems")]
    MedallionInstrumentationSystems,
    /// CAREL INDUSTRIES S.P.A.
    #[strum(serialize = "CAREL INDUSTRIES S.P.A.")]
    CARELINDUSTRIESSPA,
    /// Parabit Systems, Inc.
    #[strum(serialize = "Parabit Systems, Inc.")]
    ParabitSystemsInc,
    /// White Horse Scientific ltd
    #[strum(serialize = "White Horse Scientific ltd")]
    WhiteHorseScientificLtd,
    /// verisilicon
    #[strum(serialize = "verisilicon")]
    Verisilicon,
    /// Elecs Industry Co.,Ltd.
    #[strum(serialize = "Elecs Industry Co.,Ltd.")]
    ElecsIndustryCoLtd,
    /// Beijing Pinecone Electronics Co.,Ltd.
    #[strum(serialize = "Beijing Pinecone Electronics Co.,Ltd.")]
    BeijingPineconeElectronicsCoLtd,
    /// Ambystoma Labs Inc.
    #[strum(serialize = "Ambystoma Labs Inc.")]
    AmbystomaLabsInc,
    /// Suzhou Pairlink Network Technology
    #[strum(serialize = "Suzhou Pairlink Network Technology")]
    SuzhouPairlinkNetworkTechnology,
    /// igloohome
    #[strum(serialize = "igloohome")]
    Igloohome,
    /// Oxford Metrics plc
    #[strum(serialize = "Oxford Metrics plc")]
    OxfordMetricsPlc,
    /// Leviton Mfg. Co., Inc.
    #[strum(serialize = "Leviton Mfg. Co., Inc.")]
    LevitonMfgCoInc,
    /// ULC Robotics Inc.
    #[strum(serialize = "ULC Robotics Inc.")]
    ULCRoboticsInc,
    /// RFID Global by Softwork SrL
    #[strum(serialize = "RFID Global by Softwork SrL")]
    RFIDGlobalBySoftworkSrL,
    /// Real-World-Systems Corporation
    #[strum(serialize = "Real-World-Systems Corporation")]
    RealWorldSystemsCorporation,
    /// Nalu Medical, Inc.
    #[strum(serialize = "Nalu Medical, Inc.")]
    NaluMedicalInc,
    /// P.I.Engineering
    #[strum(serialize = "P.I.Engineering")]
    PIEngineering,
    /// Grote Industries
    #[strum(serialize = "Grote Industries")]
    GroteIndustries,
    /// Runtime, Inc.
    #[strum(serialize = "Runtime, Inc.")]
    RuntimeInc,
    /// Codecoup sp. z o.o. sp. k.
    #[strum(serialize = "Codecoup sp. z o.o. sp. k.")]
    CodecoupSpZOOSpK,
    /// SELVE GmbH & Co. KG
    #[strum(serialize = "SELVE GmbH & Co. KG")]
    SELVEGmbHCoKG,
    /// Smart Animal Training Systems, LLC
    #[strum(serialize = "Smart Animal Training Systems, LLC")]
    SmartAnimalTrainingSystemsLLC,
    /// Lippert Components, INC
    #[strum(serialize = "Lippert Components, INC")]
    LippertComponentsINC,
    /// SOMFY SAS
    #[strum(serialize = "SOMFY SAS")]
    SOMFYSAS,
    /// TBS Electronics B.V.
    #[strum(serialize = "TBS Electronics B.V.")]
    TBSElectronicsBV,
    /// MHL Custom Inc
    #[strum(serialize = "MHL Custom Inc")]
    MHLCustomInc,
    /// LucentWear LLC
    #[strum(serialize = "LucentWear LLC")]
    LucentWearLLC,
    /// WATTS ELECTRONICS
    #[strum(serialize = "WATTS ELECTRONICS")]
    WATTSELECTRONICS,
    /// RJ Brands LLC
    #[strum(serialize = "RJ Brands LLC")]
    RJBrandsLLC,
    /// V-ZUG Ltd
    #[strum(serialize = "V-ZUG Ltd")]
    VZUGLtd,
    /// Biowatch SA
    #[strum(serialize = "Biowatch SA")]
    BiowatchSA,
    /// Anova Applied Electronics
    #[strum(serialize = "Anova Applied Electronics")]
    AnovaAppliedElectronics,
    /// Lindab AB
    #[strum(serialize = "Lindab AB")]
    LindabAB,
    /// frogblue TECHNOLOGY GmbH
    #[strum(serialize = "frogblue TECHNOLOGY GmbH")]
    FrogblueTECHNOLOGYGmbH,
    /// Acurable Limited
    #[strum(serialize = "Acurable Limited")]
    AcurableLimited,
    /// LAMPLIGHT Co., Ltd.
    #[strum(serialize = "LAMPLIGHT Co., Ltd.")]
    LAMPLIGHTCoLtd,
    /// TEGAM, Inc.
    #[strum(serialize = "TEGAM, Inc.")]
    TEGAMInc,
    /// Zhuhai Jieli technology Co.,Ltd
    #[strum(serialize = "Zhuhai Jieli technology Co.,Ltd")]
    ZhuhaiJieliTechnologyCoLtd,
    /// modum.io AG
    #[strum(serialize = "modum.io AG")]
    ModumIoAG,
    /// Farm Jenny LLC
    #[strum(serialize = "Farm Jenny LLC")]
    FarmJennyLLC,
    /// Toyo Electronics Corporation
    #[strum(serialize = "Toyo Electronics Corporation")]
    ToyoElectronicsCorporation,
    /// Applied Neural Research Corp
    #[strum(serialize = "Applied Neural Research Corp")]
    AppliedNeuralResearchCorp,
    /// Avid Identification Systems, Inc.
    #[strum(serialize = "Avid Identification Systems, Inc.")]
    AvidIdentificationSystemsInc,
    /// Petronics Inc.
    #[strum(serialize = "Petronics Inc.")]
    PetronicsInc,
    /// essentim GmbH
    #[strum(serialize = "essentim GmbH")]
    EssentimGmbH,
    /// QT Medical INC.
    #[strum(serialize = "QT Medical INC.")]
    QTMedicalINC,
    /// VIRTUALCLINIC.DIRECT LIMITED
    #[strum(serialize = "VIRTUALCLINIC.DIRECT LIMITED")]
    VIRTUALCLINICDIRECTLIMITED,
    /// Viper Design LLC
    #[strum(serialize = "Viper Design LLC")]
    ViperDesignLLC,
    /// Human, Incorporated
    #[strum(serialize = "Human, Incorporated")]
    HumanIncorporated,
    /// stAPPtronics GmbH
    #[strum(serialize = "stAPPtronics GmbH")]
    StAPPtronicsGmbH,
    /// Elemental Machines, Inc.
    #[strum(serialize = "Elemental Machines, Inc.")]
    ElementalMachinesInc,
    /// Taiyo Yuden Co., Ltd
    #[strum(serialize = "Taiyo Yuden Co., Ltd")]
    TaiyoYudenCoLtd,
    /// INEO ENERGY& SYSTEMS
    #[strum(serialize = "INEO ENERGY& SYSTEMS")]
    INEOENERGYSYSTEMS,
    /// Motion Instruments Inc.
    #[strum(serialize = "Motion Instruments Inc.")]
    MotionInstrumentsInc,
    /// PressurePro
    #[strum(serialize = "PressurePro")]
    PressurePro,
    /// COWBOY
    #[strum(serialize = "COWBOY")]
    COWBOY,
    /// iconmobile GmbH
    #[strum(serialize = "iconmobile GmbH")]
    IconmobileGmbH,
    /// ACS-Control-System GmbH
    #[strum(serialize = "ACS-Control-System GmbH")]
    ACSControlSystemGmbH,
    /// Bayerische Motoren Werke AG
    #[strum(serialize = "Bayerische Motoren Werke AG")]
    BayerischeMotorenWerkeAG,
    /// Gycom Svenska AB
    #[strum(serialize = "Gycom Svenska AB")]
    GycomSvenskaAB,
    /// Fuji Xerox Co., Ltd
    #[strum(serialize = "Fuji Xerox Co., Ltd")]
    FujiXeroxCoLtd,
    /// Glide Inc.
    #[strum(serialize = "Glide Inc.")]
    GlideInc,
    /// SIKOM AS
    #[strum(serialize = "SIKOM AS")]
    SIKOMAS,
    /// beken
    #[strum(serialize = "beken")]
    Beken,
    /// The Linux Foundation
    #[strum(serialize = "The Linux Foundation")]
    TheLinuxFoundation,
    /// Try and E CO.,LTD.
    #[strum(serialize = "Try and E CO.,LTD.")]
    TryAndECOLTD,
    /// SeeScan
    #[strum(serialize = "SeeScan")]
    SeeScan,
    /// Clearity, LLC
    #[strum(serialize = "Clearity, LLC")]
    ClearityLLC,
    /// GS TAG
    #[strum(serialize = "GS TAG")]
    GSTAG,
    /// DPTechnics
    #[strum(serialize = "DPTechnics")]
    DPTechnics,
    /// TRACMO, INC.
    #[strum(serialize = "TRACMO, INC.")]
    TRACMOINC,
    /// Anki Inc.
    #[strum(serialize = "Anki Inc.")]
    AnkiInc,
    /// Hagleitner Hygiene International GmbH
    #[strum(serialize = "Hagleitner Hygiene International GmbH")]
    HagleitnerHygieneInternationalGmbH,
    /// Konami Sports Life Co., Ltd.
    #[strum(serialize = "Konami Sports Life Co., Ltd.")]
    KonamiSportsLifeCoLtd,
    /// Arblet Inc.
    #[strum(serialize = "Arblet Inc.")]
    ArbletInc,
    /// Masbando GmbH
    #[strum(serialize = "Masbando GmbH")]
    MasbandoGmbH,
    /// Innoseis
    #[strum(serialize = "Innoseis")]
    Innoseis,
    /// Niko nv
    #[strum(serialize = "Niko nv")]
    NikoNv,
    /// Wellnomics Ltd
    #[strum(serialize = "Wellnomics Ltd")]
    WellnomicsLtd,
    /// iRobot Corporation
    #[strum(serialize = "iRobot Corporation")]
    IRobotCorporation,
    /// Schrader Electronics
    #[strum(serialize = "Schrader Electronics")]
    SchraderElectronics,
    /// Geberit International AG
    #[strum(serialize = "Geberit International AG")]
    GeberitInternationalAG,
    /// Fourth Evolution Inc
    #[strum(serialize = "Fourth Evolution Inc")]
    FourthEvolutionInc,
    /// Cell2Jack LLC
    #[strum(serialize = "Cell2Jack LLC")]
    Cell2JackLLC,
    /// FMW electronic Futterer u. Maier-Wolf OHG
    #[strum(serialize = "FMW electronic Futterer u. Maier-Wolf OHG")]
    FMWElectronicFuttererUMaierWolfOHG,
    /// John Deere
    #[strum(serialize = "John Deere")]
    JohnDeere,
    /// Rookery Technology Ltd
    #[strum(serialize = "Rookery Technology Ltd")]
    RookeryTechnologyLtd,
    /// KeySafe-Cloud
    #[strum(serialize = "KeySafe-Cloud")]
    KeySafeCloud,
    /// BUCHI Labortechnik AG
    #[strum(serialize = "BUCHI Labortechnik AG")]
    BUCHILabortechnikAG,
    /// IQAir AG
    #[strum(serialize = "IQAir AG")]
    IQAirAG,
    /// Triax Technologies Inc
    #[strum(serialize = "Triax Technologies Inc")]
    TriaxTechnologiesInc,
    /// Vuzix Corporation
    #[strum(serialize = "Vuzix Corporation")]
    VuzixCorporation,
    /// TDK Corporation
    #[strum(serialize = "TDK Corporation")]
    TDKCorporation,
    /// Blueair AB
    #[strum(serialize = "Blueair AB")]
    BlueairAB,
    /// Signify Netherlands
    #[strum(serialize = "Signify Netherlands")]
    SignifyNetherlands,
    /// ADH GUARDIAN USA LLC
    #[strum(serialize = "ADH GUARDIAN USA LLC")]
    ADHGUARDIANUSALLC,
    /// Beurer GmbH
    #[strum(serialize = "Beurer GmbH")]
    BeurerGmbH,
    /// Playfinity AS
    #[strum(serialize = "Playfinity AS")]
    PlayfinityAS,
    /// Hans Dinslage GmbH
    #[strum(serialize = "Hans Dinslage GmbH")]
    HansDinslageGmbH,
    /// OnAsset Intelligence, Inc.
    #[strum(serialize = "OnAsset Intelligence, Inc.")]
    OnAssetIntelligenceInc,
    /// INTER ACTION Corporation
    #[strum(serialize = "INTER ACTION Corporation")]
    INTERACTIONCorporation,
    /// OS42 UG (haftungsbeschraenkt)
    #[strum(serialize = "OS42 UG (haftungsbeschraenkt)")]
    OS42UGHaftungsbeschraenkt,
    /// WIZCONNECTED COMPANY LIMITED
    #[strum(serialize = "WIZCONNECTED COMPANY LIMITED")]
    WIZCONNECTEDCOMPANYLIMITED,
    /// Audio-Technica Corporation
    #[strum(serialize = "Audio-Technica Corporation")]
    AudioTechnicaCorporation,
    /// Six Guys Labs, s.r.o.
    #[strum(serialize = "Six Guys Labs, s.r.o.")]
    SixGuysLabsSRO,
    /// R.W. Beckett Corporation
    #[strum(serialize = "R.W. Beckett Corporation")]
    RWBeckettCorporation,
    /// silex technology, inc.
    #[strum(serialize = "silex technology, inc.")]
    SilexTechnologyInc,
    /// Univations Limited
    #[strum(serialize = "Univations Limited")]
    UnivationsLimited,
    /// SENS Innovation ApS
    #[strum(serialize = "SENS Innovation ApS")]
    SENSInnovationApS,
    /// Diamond Kinetics, Inc.
    #[strum(serialize = "Diamond Kinetics, Inc.")]
    DiamondKineticsInc,
    /// Phrame Inc.
    #[strum(serialize = "Phrame Inc.")]
    PhrameInc,
    /// Forciot Oy
    #[strum(serialize = "Forciot Oy")]
    ForciotOy,
    /// Noordung d.o.o.
    #[strum(serialize = "Noordung d.o.o.")]
    NoordungDOO,
    /// Beam Labs, LLC
    #[strum(serialize = "Beam Labs, LLC")]
    BeamLabsLLC,
    /// Philadelphia Scientific (U.K.) Limited
    #[strum(serialize = "Philadelphia Scientific (U.K.) Limited")]
    PhiladelphiaScientificUKLimited,
    /// Biovotion AG
    #[strum(serialize = "Biovotion AG")]
    BiovotionAG,
    /// Square Panda, Inc.
    #[strum(serialize = "Square Panda, Inc.")]
    SquarePandaInc,
    /// Amplifico
    #[strum(serialize = "Amplifico")]
    Amplifico,
    /// WEG S.A.
    #[strum(serialize = "WEG S.A.")]
    WEGSA,
    /// Ensto Oy
    #[strum(serialize = "Ensto Oy")]
    EnstoOy,
    /// PHONEPE PVT LTD
    #[strum(serialize = "PHONEPE PVT LTD")]
    PHONEPEPVTLTD,
    /// Lunatico Astronomia SL
    #[strum(serialize = "Lunatico Astronomia SL")]
    LunaticoAstronomiaSL,
    /// MinebeaMitsumi Inc.
    #[strum(serialize = "MinebeaMitsumi Inc.")]
    MinebeaMitsumiInc,
    /// ASPion GmbH
    #[strum(serialize = "ASPion GmbH")]
    ASPionGmbH,
    /// Vossloh-Schwabe Deutschland GmbH
    #[strum(serialize = "Vossloh-Schwabe Deutschland GmbH")]
    VosslohSchwabeDeutschlandGmbH,
    /// Procept
    #[strum(serialize = "Procept")]
    Procept,
    /// ONKYO Corporation
    #[strum(serialize = "ONKYO Corporation")]
    ONKYOCorporation,
    /// Asthrea D.O.O.
    #[strum(serialize = "Asthrea D.O.O.")]
    AsthreaDOO,
    /// Fortiori Design LLC
    #[strum(serialize = "Fortiori Design LLC")]
    FortioriDesignLLC,
    /// Hugo Muller GmbH & Co KG
    #[strum(serialize = "Hugo Muller GmbH & Co KG")]
    HugoMullerGmbHCoKG,
    /// Wangi Lai PLT
    #[strum(serialize = "Wangi Lai PLT")]
    WangiLaiPLT,
    /// Fanstel Corp
    #[strum(serialize = "Fanstel Corp")]
    FanstelCorp,
    /// Crookwood
    #[strum(serialize = "Crookwood")]
    Crookwood,
    /// ELECTRONICA INTEGRAL DE SONIDO S.A.
    #[strum(serialize = "ELECTRONICA INTEGRAL DE SONIDO S.A.")]
    ELECTRONICAINTEGRALDESONIDOSA,
    /// GiP Innovation Tools GmbH
    #[strum(serialize = "GiP Innovation Tools GmbH")]
    GiPInnovationToolsGmbH,
    /// LX SOLUTIONS PTY LIMITED
    #[strum(serialize = "LX SOLUTIONS PTY LIMITED")]
    LXSOLUTIONSPTYLIMITED,
    /// Shenzhen Minew Technologies Co., Ltd.
    #[strum(serialize = "Shenzhen Minew Technologies Co., Ltd.")]
    ShenzhenMinewTechnologiesCoLtd,
    /// Prolojik Limited
    #[strum(serialize = "Prolojik Limited")]
    ProlojikLimited,
    /// Kromek Group Plc
    #[strum(serialize = "Kromek Group Plc")]
    KromekGroupPlc,
    /// Contec Medical Systems Co., Ltd.
    #[strum(serialize = "Contec Medical Systems Co., Ltd.")]
    ContecMedicalSystemsCoLtd,
    /// Xradio Technology Co.,Ltd.
    #[strum(serialize = "Xradio Technology Co.,Ltd.")]
    XradioTechnologyCoLtd,
    /// The Indoor Lab, LLC
    #[strum(serialize = "The Indoor Lab, LLC")]
    TheIndoorLabLLC,
    /// LDL TECHNOLOGY
    #[strum(serialize = "LDL TECHNOLOGY")]
    LDLTECHNOLOGY,
    /// Parkifi
    #[strum(serialize = "Parkifi")]
    Parkifi,
    /// Revenue Collection Systems FRANCE SAS
    #[strum(serialize = "Revenue Collection Systems FRANCE SAS")]
    RevenueCollectionSystemsFRANCESAS,
    /// Bluetrum Technology Co.,Ltd
    #[strum(serialize = "Bluetrum Technology Co.,Ltd")]
    BluetrumTechnologyCoLtd,
    /// makita corporation
    #[strum(serialize = "makita corporation")]
    MakitaCorporation,
    /// Apogee Instruments
    #[strum(serialize = "Apogee Instruments")]
    ApogeeInstruments,
    /// BM3
    #[strum(serialize = "BM3")]
    BM3,
    /// SGV Group Holding GmbH & Co. KG
    #[strum(serialize = "SGV Group Holding GmbH & Co. KG")]
    SGVGroupHoldingGmbHCoKG,
    /// MED-EL
    #[strum(serialize = "MED-EL")]
    MEDEL,
    /// Ultune Technologies
    #[strum(serialize = "Ultune Technologies")]
    UltuneTechnologies,
    /// Ryeex Technology Co.,Ltd.
    #[strum(serialize = "Ryeex Technology Co.,Ltd.")]
    RyeexTechnologyCoLtd,
    /// Open Research Institute, Inc.
    #[strum(serialize = "Open Research Institute, Inc.")]
    OpenResearchInstituteInc,
    /// Scale-Tec, Ltd
    #[strum(serialize = "Scale-Tec, Ltd")]
    ScaleTecLtd,
    /// Zumtobel Group AG
    #[strum(serialize = "Zumtobel Group AG")]
    ZumtobelGroupAG,
    /// iLOQ Oy
    #[strum(serialize = "iLOQ Oy")]
    ILOQOy,
    /// KRUXWorks Technologies Private Limited
    #[strum(serialize = "KRUXWorks Technologies Private Limited")]
    KRUXWorksTechnologiesPrivateLimited,
    /// Digital Matter Pty Ltd
    #[strum(serialize = "Digital Matter Pty Ltd")]
    DigitalMatterPtyLtd,
    /// Coravin, Inc.
    #[strum(serialize = "Coravin, Inc.")]
    CoravinInc,
    /// Stasis Labs, Inc.
    #[strum(serialize = "Stasis Labs, Inc.")]
    StasisLabsInc,
    /// ITZ Innovations- und Technologiezentrum GmbH
    #[strum(serialize = "ITZ Innovations- und Technologiezentrum GmbH")]
    ITZInnovationsUndTechnologiezentrumGmbH,
    /// Meggitt SA
    #[strum(serialize = "Meggitt SA")]
    MeggittSA,
    /// Ledlenser GmbH & Co. KG
    #[strum(serialize = "Ledlenser GmbH & Co. KG")]
    LedlenserGmbHCoKG,
    /// Renishaw PLC
    #[strum(serialize = "Renishaw PLC")]
    RenishawPLC,
    /// ZhuHai AdvanPro Technology Company Limited
    #[strum(serialize = "ZhuHai AdvanPro Technology Company Limited")]
    ZhuHaiAdvanProTechnologyCompanyLimited,
    /// Meshtronix Limited
    #[strum(serialize = "Meshtronix Limited")]
    MeshtronixLimited,
    /// Payex Norge AS
    #[strum(serialize = "Payex Norge AS")]
    PayexNorgeAS,
    /// UnSeen Technologies Oy
    #[strum(serialize = "UnSeen Technologies Oy")]
    UnSeenTechnologiesOy,
    /// Zound Industries International AB
    #[strum(serialize = "Zound Industries International AB")]
    ZoundIndustriesInternationalAB,
    /// Sesam Solutions BV
    #[strum(serialize = "Sesam Solutions BV")]
    SesamSolutionsBV,
    /// PixArt Imaging Inc.
    #[strum(serialize = "PixArt Imaging Inc.")]
    PixArtImagingInc,
    /// Panduit Corp.
    #[strum(serialize = "Panduit Corp.")]
    PanduitCorp,
    /// Alo AB
    #[strum(serialize = "Alo AB")]
    AloAB,
    /// Ricoh Company Ltd
    #[strum(serialize = "Ricoh Company Ltd")]
    RicohCompanyLtd,
    /// RTC Industries, Inc.
    #[strum(serialize = "RTC Industries, Inc.")]
    RTCIndustriesInc,
    /// Mode Lighting Limited
    #[strum(serialize = "Mode Lighting Limited")]
    ModeLightingLimited,
    /// Particle Industries, Inc.
    #[strum(serialize = "Particle Industries, Inc.")]
    ParticleIndustriesInc,
    /// Advanced Telemetry Systems, Inc.
    #[strum(serialize = "Advanced Telemetry Systems, Inc.")]
    AdvancedTelemetrySystemsInc,
    /// RHA TECHNOLOGIES LTD
    #[strum(serialize = "RHA TECHNOLOGIES LTD")]
    RHATECHNOLOGIESLTD,
    /// Pure International Limited
    #[strum(serialize = "Pure International Limited")]
    PureInternationalLimited,
    /// WTO Werkzeug-Einrichtungen GmbH
    #[strum(serialize = "WTO Werkzeug-Einrichtungen GmbH")]
    WTOWerkzeugEinrichtungenGmbH,
    /// Spark Technology Labs Inc.
    #[strum(serialize = "Spark Technology Labs Inc.")]
    SparkTechnologyLabsInc,
    /// Bleb Technology srl
    #[strum(serialize = "Bleb Technology srl")]
    BlebTechnologySrl,
    /// Livanova USA, Inc.
    #[strum(serialize = "Livanova USA, Inc.")]
    LivanovaUSAInc,
    /// Brady Worldwide Inc.
    #[strum(serialize = "Brady Worldwide Inc.")]
    BradyWorldwideInc,
    /// DewertOkin GmbH
    #[strum(serialize = "DewertOkin GmbH")]
    DewertOkinGmbH,
    /// Ztove ApS
    #[strum(serialize = "Ztove ApS")]
    ZtoveApS,
    /// Venso EcoSolutions AB
    #[strum(serialize = "Venso EcoSolutions AB")]
    VensoEcoSolutionsAB,
    /// Eurotronik Kranj d.o.o.
    #[strum(serialize = "Eurotronik Kranj d.o.o.")]
    EurotronikKranjDOO,
    /// Hug Technology Ltd
    #[strum(serialize = "Hug Technology Ltd")]
    HugTechnologyLtd,
    /// Gema Switzerland GmbH
    #[strum(serialize = "Gema Switzerland GmbH")]
    GemaSwitzerlandGmbH,
    /// Buzz Products Ltd.
    #[strum(serialize = "Buzz Products Ltd.")]
    BuzzProductsLtd,
    /// Kopi
    #[strum(serialize = "Kopi")]
    Kopi,
    /// Innova Ideas Limited
    #[strum(serialize = "Innova Ideas Limited")]
    InnovaIdeasLimited,
    /// BeSpoon
    #[strum(serialize = "BeSpoon")]
    BeSpoon,
    /// Deco Enterprises, Inc.
    #[strum(serialize = "Deco Enterprises, Inc.")]
    DecoEnterprisesInc,
    /// Expai Solutions Private Limited
    #[strum(serialize = "Expai Solutions Private Limited")]
    ExpaiSolutionsPrivateLimited,
    /// Innovation First, Inc.
    #[strum(serialize = "Innovation First, Inc.")]
    InnovationFirstInc,
    /// SABIK Offshore GmbH
    #[strum(serialize = "SABIK Offshore GmbH")]
    SABIKOffshoreGmbH,
    /// 4iiii Innovations Inc.
    #[strum(serialize = "4iiii Innovations Inc.")]
    N4iiiiInnovationsInc,
    /// The Energy Conservatory, Inc.
    #[strum(serialize = "The Energy Conservatory, Inc.")]
    TheEnergyConservatoryInc,
    /// I.FARM, INC.
    #[strum(serialize = "I.FARM, INC.")]
    IFARMINC,
    /// Tile, Inc.
    #[strum(serialize = "Tile, Inc.")]
    TileInc,
    /// Form Athletica Inc.
    #[strum(serialize = "Form Athletica Inc.")]
    FormAthleticaInc,
    /// MbientLab Inc
    #[strum(serialize = "MbientLab Inc")]
    MbientLabInc,
    /// NETGRID S.N.C. DI BISSOLI MATTEO, CAMPOREALE SIMONE, TOGNETTI FEDERICO
    #[strum(serialize = "NETGRID S.N.C. DI BISSOLI MATTEO, CAMPOREALE SIMONE, TOGNETTI FEDERICO")]
    NETGRIDSNCDIBISSOLIMATTEOCAMPOREALESIMONETOGNETTIFEDERICO,
    /// Mannkind Corporation
    #[strum(serialize = "Mannkind Corporation")]
    MannkindCorporation,
    /// Trade FIDES a.s.
    #[strum(serialize = "Trade FIDES a.s.")]
    TradeFIDESAS,
    /// Photron Limited
    #[strum(serialize = "Photron Limited")]
    PhotronLimited,
    /// Eltako GmbH
    #[strum(serialize = "Eltako GmbH")]
    EltakoGmbH,
    /// Dermalapps, LLC
    #[strum(serialize = "Dermalapps, LLC")]
    DermalappsLLC,
    /// Greenwald Industries
    #[strum(serialize = "Greenwald Industries")]
    GreenwaldIndustries,
    /// inQs Co., Ltd.
    #[strum(serialize = "inQs Co., Ltd.")]
    InQsCoLtd,
    /// Cherry GmbH
    #[strum(serialize = "Cherry GmbH")]
    CherryGmbH,
    /// Amsted Digital Solutions Inc.
    #[strum(serialize = "Amsted Digital Solutions Inc.")]
    AmstedDigitalSolutionsInc,
    /// Tacx b.v.
    #[strum(serialize = "Tacx b.v.")]
    TacxBV,
    /// Raytac Corporation
    #[strum(serialize = "Raytac Corporation")]
    RaytacCorporation,
    /// Jiangsu Teranovo Tech Co., Ltd.
    #[strum(serialize = "Jiangsu Teranovo Tech Co., Ltd.")]
    JiangsuTeranovoTechCoLtd,
    /// Changzhou Sound Dragon Electronics and Acoustics Co., Ltd
    #[strum(serialize = "Changzhou Sound Dragon Electronics and Acoustics Co., Ltd")]
    ChangzhouSoundDragonElectronicsAndAcousticsCoLtd,
    /// JetBeep Inc.
    #[strum(serialize = "JetBeep Inc.")]
    JetBeepInc,
    /// Razer Inc.
    #[strum(serialize = "Razer Inc.")]
    RazerInc,
    /// JRM Group Limited
    #[strum(serialize = "JRM Group Limited")]
    JRMGroupLimited,
    /// Eccrine Systems, Inc.
    #[strum(serialize = "Eccrine Systems, Inc.")]
    EccrineSystemsInc,
    /// Curie Point AB
    #[strum(serialize = "Curie Point AB")]
    CuriePointAB,
    /// Georg Fischer AG
    #[strum(serialize = "Georg Fischer AG")]
    GeorgFischerAG,
    /// Hach - Danaher
    #[strum(serialize = "Hach - Danaher")]
    HachDanaher,
    /// T&A Laboratories LLC
    #[strum(serialize = "T&A Laboratories LLC")]
    TALaboratoriesLLC,
    /// Koki Holdings Co., Ltd.
    #[strum(serialize = "Koki Holdings Co., Ltd.")]
    KokiHoldingsCoLtd,
    /// Gunakar Private Limited
    #[strum(serialize = "Gunakar Private Limited")]
    GunakarPrivateLimited,
    /// Stemco Products Inc
    #[strum(serialize = "Stemco Products Inc")]
    StemcoProductsInc,
    /// Wood IT Security, LLC
    #[strum(serialize = "Wood IT Security, LLC")]
    WoodITSecurityLLC,
    /// RandomLab SAS
    #[strum(serialize = "RandomLab SAS")]
    RandomLabSAS,
    /// Adero, Inc. (formerly as TrackR, Inc.)
    #[strum(serialize = "Adero, Inc. (formerly as TrackR, Inc.)")]
    AderoIncFormerlyAsTrackRInc,
    /// Dragonchip Limited
    #[strum(serialize = "Dragonchip Limited")]
    DragonchipLimited,
    /// Noomi AB
    #[strum(serialize = "Noomi AB")]
    NoomiAB,
    /// Vakaros LLC
    #[strum(serialize = "Vakaros LLC")]
    VakarosLLC,
    /// Delta Electronics, Inc.
    #[strum(serialize = "Delta Electronics, Inc.")]
    DeltaElectronicsInc,
    /// FlowMotion Technologies AS
    #[strum(serialize = "FlowMotion Technologies AS")]
    FlowMotionTechnologiesAS,
    /// OBIQ Location Technology Inc.
    #[strum(serialize = "OBIQ Location Technology Inc.")]
    OBIQLocationTechnologyInc,
    /// Cardo Systems, Ltd
    #[strum(serialize = "Cardo Systems, Ltd")]
    CardoSystemsLtd,
    /// Globalworx GmbH
    #[strum(serialize = "Globalworx GmbH")]
    GlobalworxGmbH,
    /// Nymbus, LLC
    #[strum(serialize = "Nymbus, LLC")]
    NymbusLLC,
    /// Sanyo Techno Solutions Tottori Co., Ltd.
    #[strum(serialize = "Sanyo Techno Solutions Tottori Co., Ltd.")]
    SanyoTechnoSolutionsTottoriCoLtd,
    /// TEKZITEL PTY LTD
    #[strum(serialize = "TEKZITEL PTY LTD")]
    TEKZITELPTYLTD,
    /// Roambee Corporation
    #[strum(serialize = "Roambee Corporation")]
    RoambeeCorporation,
    /// Chipsea Technologies (ShenZhen) Corp.
    #[strum(serialize = "Chipsea Technologies (ShenZhen) Corp.")]
    ChipseaTechnologiesShenZhenCorp,
    /// GD Midea Air-Conditioning Equipment Co., Ltd.
    #[strum(serialize = "GD Midea Air-Conditioning Equipment Co., Ltd.")]
    GDMideaAirConditioningEquipmentCoLtd,
    /// Soundmax Electronics Limited
    #[strum(serialize = "Soundmax Electronics Limited")]
    SoundmaxElectronicsLimited,
    /// Produal Oy
    #[strum(serialize = "Produal Oy")]
    ProdualOy,
    /// HMS Industrial Networks AB
    #[strum(serialize = "HMS Industrial Networks AB")]
    HMSIndustrialNetworksAB,
    /// Ingchips Technology Co., Ltd.
    #[strum(serialize = "Ingchips Technology Co., Ltd.")]
    IngchipsTechnologyCoLtd,
    /// InnovaSea Systems Inc.
    #[strum(serialize = "InnovaSea Systems Inc.")]
    InnovaSeaSystemsInc,
    /// SenseQ Inc.
    #[strum(serialize = "SenseQ Inc.")]
    SenseQInc,
    /// Shoof Technologies
    #[strum(serialize = "Shoof Technologies")]
    ShoofTechnologies,
    /// BRK Brands, Inc.
    #[strum(serialize = "BRK Brands, Inc.")]
    BRKBrandsInc,
    /// SimpliSafe, Inc.
    #[strum(serialize = "SimpliSafe, Inc.")]
    SimpliSafeInc,
    /// Tussock Innovation 2013 Limited
    #[strum(serialize = "Tussock Innovation 2013 Limited")]
    TussockInnovation2013Limited,
    /// The Hablab ApS
    #[strum(serialize = "The Hablab ApS")]
    TheHablabApS,
    /// Sencilion Oy
    #[strum(serialize = "Sencilion Oy")]
    SencilionOy,
    /// Wabilogic Ltd.
    #[strum(serialize = "Wabilogic Ltd.")]
    WabilogicLtd,
    /// Sociometric Solutions, Inc.
    #[strum(serialize = "Sociometric Solutions, Inc.")]
    SociometricSolutionsInc,
    /// iCOGNIZE GmbH
    #[strum(serialize = "iCOGNIZE GmbH")]
    ICOGNIZEGmbH,
    /// ShadeCraft, Inc
    #[strum(serialize = "ShadeCraft, Inc")]
    ShadeCraftInc,
    /// Beflex Inc.
    #[strum(serialize = "Beflex Inc.")]
    BeflexInc,
    /// Beaconzone Ltd
    #[strum(serialize = "Beaconzone Ltd")]
    BeaconzoneLtd,
    /// Leaftronix Analogic Solutions Private Limited
    #[strum(serialize = "Leaftronix Analogic Solutions Private Limited")]
    LeaftronixAnalogicSolutionsPrivateLimited,
    /// TWS Srl
    #[strum(serialize = "TWS Srl")]
    TWSSrl,
    /// ABB Oy
    #[strum(serialize = "ABB Oy")]
    ABBOy,
    /// HitSeed Oy
    #[strum(serialize = "HitSeed Oy")]
    HitSeedOy,
    /// Delcom Products Inc.
    #[strum(serialize = "Delcom Products Inc.")]
    DelcomProductsInc,
    /// CAME S.p.A.
    #[strum(serialize = "CAME S.p.A.")]
    CAMESPA,
    /// Alarm.com Holdings, Inc
    #[strum(serialize = "Alarm.com Holdings, Inc")]
    AlarmComHoldingsInc,
    /// Measurlogic Inc.
    #[strum(serialize = "Measurlogic Inc.")]
    MeasurlogicInc,
    /// King I Electronics.Co.,Ltd
    #[strum(serialize = "King I Electronics.Co.,Ltd")]
    KingIElectronicsCoLtd,
    /// Dream Labs GmbH
    #[strum(serialize = "Dream Labs GmbH")]
    DreamLabsGmbH,
    /// Urban Compass, Inc
    #[strum(serialize = "Urban Compass, Inc")]
    UrbanCompassInc,
    /// Simm Tronic Limited
    #[strum(serialize = "Simm Tronic Limited")]
    SimmTronicLimited,
    /// Somatix Inc
    #[strum(serialize = "Somatix Inc")]
    SomatixInc,
    /// Storz & Bickel GmbH & Co. KG
    #[strum(serialize = "Storz & Bickel GmbH & Co. KG")]
    StorzBickelGmbHCoKG,
    /// MYLAPS B.V.
    #[strum(serialize = "MYLAPS B.V.")]
    MYLAPSBV,
    /// Shenzhen Zhongguang Infotech Technology Development Co., Ltd
    #[strum(serialize = "Shenzhen Zhongguang Infotech Technology Development Co., Ltd")]
    ShenzhenZhongguangInfotechTechnologyDevelopmentCoLtd,
    /// Dyeware, LLC
    #[strum(serialize = "Dyeware, LLC")]
    DyewareLLC,
    /// Dongguan SmartAction Technology Co.,Ltd.
    #[strum(serialize = "Dongguan SmartAction Technology Co.,Ltd.")]
    DongguanSmartActionTechnologyCoLtd,
    /// DIG Corporation
    #[strum(serialize = "DIG Corporation")]
    DIGCorporation,
    /// FIOR & GENTZ
    #[strum(serialize = "FIOR & GENTZ")]
    FIORGENTZ,
    /// Belparts N.V.
    #[strum(serialize = "Belparts N.V.")]
    BelpartsNV,
    /// Etekcity Corporation
    #[strum(serialize = "Etekcity Corporation")]
    EtekcityCorporation,
    /// Meyer Sound Laboratories, Incorporated
    #[strum(serialize = "Meyer Sound Laboratories, Incorporated")]
    MeyerSoundLaboratoriesIncorporated,
    /// CeoTronics AG
    #[strum(serialize = "CeoTronics AG")]
    CeoTronicsAG,
    /// TriTeq Lock and Security, LLC
    #[strum(serialize = "TriTeq Lock and Security, LLC")]
    TriTeqLockAndSecurityLLC,
    /// DYNAKODE TECHNOLOGY PRIVATE LIMITED
    #[strum(serialize = "DYNAKODE TECHNOLOGY PRIVATE LIMITED")]
    DYNAKODETECHNOLOGYPRIVATELIMITED,
    /// Sensirion AG
    #[strum(serialize = "Sensirion AG")]
    SensirionAG,
    /// JCT Healthcare Pty Ltd
    #[strum(serialize = "JCT Healthcare Pty Ltd")]
    JCTHealthcarePtyLtd,
    /// FUBA Automotive Electronics GmbH
    #[strum(serialize = "FUBA Automotive Electronics GmbH")]
    FUBAAutomotiveElectronicsGmbH,
    /// AW Company
    #[strum(serialize = "AW Company")]
    AWCompany,
    /// Shanghai Mountain View Silicon Co.,Ltd.
    #[strum(serialize = "Shanghai Mountain View Silicon Co.,Ltd.")]
    ShanghaiMountainViewSiliconCoLtd,
    /// Zliide Technologies ApS
    #[strum(serialize = "Zliide Technologies ApS")]
    ZliideTechnologiesApS,
    /// Automatic Labs, Inc.
    #[strum(serialize = "Automatic Labs, Inc.")]
    AutomaticLabsInc,
    /// Industrial Network Controls, LLC
    #[strum(serialize = "Industrial Network Controls, LLC")]
    IndustrialNetworkControlsLLC,
    /// Intellithings Ltd.
    #[strum(serialize = "Intellithings Ltd.")]
    IntellithingsLtd,
    /// Navcast, Inc.
    #[strum(serialize = "Navcast, Inc.")]
    NavcastInc,
    /// Hubbell Lighting, Inc.
    #[strum(serialize = "Hubbell Lighting, Inc.")]
    HubbellLightingInc,
    /// Avaya
    #[strum(serialize = "Avaya")]
    Avaya,
    /// Milestone AV Technologies LLC
    #[strum(serialize = "Milestone AV Technologies LLC")]
    MilestoneAVTechnologiesLLC,
    /// Alango Technologies Ltd
    #[strum(serialize = "Alango Technologies Ltd")]
    AlangoTechnologiesLtd,
    /// Spinlock Ltd
    #[strum(serialize = "Spinlock Ltd")]
    SpinlockLtd,
    /// Aluna
    #[strum(serialize = "Aluna")]
    Aluna,
    /// OPTEX CO.,LTD.
    #[strum(serialize = "OPTEX CO.,LTD.")]
    OPTEXCOLTD,
    /// NIHON DENGYO KOUSAKU
    #[strum(serialize = "NIHON DENGYO KOUSAKU")]
    NIHONDENGYOKOUSAKU,
    /// VELUX A/S
    #[strum(serialize = "VELUX A/S")]
    VELUXAS,
    /// Almendo Technologies GmbH
    #[strum(serialize = "Almendo Technologies GmbH")]
    AlmendoTechnologiesGmbH,
    /// Zmartfun Electronics, Inc.
    #[strum(serialize = "Zmartfun Electronics, Inc.")]
    ZmartfunElectronicsInc,
    /// SafeLine Sweden AB
    #[strum(serialize = "SafeLine Sweden AB")]
    SafeLineSwedenAB,
    /// Houston Radar LLC
    #[strum(serialize = "Houston Radar LLC")]
    HoustonRadarLLC,
    /// Sigur
    #[strum(serialize = "Sigur")]
    Sigur,
    /// J Neades Ltd
    #[strum(serialize = "J Neades Ltd")]
    JNeadesLtd,
    /// Avantis Systems Limited
    #[strum(serialize = "Avantis Systems Limited")]
    AvantisSystemsLimited,
    /// ALCARE Co., Ltd.
    #[strum(serialize = "ALCARE Co., Ltd.")]
    ALCARECoLtd,
    /// Chargy Technologies, SL
    #[strum(serialize = "Chargy Technologies, SL")]
    ChargyTechnologiesSL,
    /// Shibutani Co., Ltd.
    #[strum(serialize = "Shibutani Co., Ltd.")]
    ShibutaniCoLtd,
    /// Trapper Data AB
    #[strum(serialize = "Trapper Data AB")]
    TrapperDataAB,
    /// Alfred International Inc.
    #[strum(serialize = "Alfred International Inc.")]
    AlfredInternationalInc,
    /// Near Field Solutions Ltd
    #[strum(serialize = "Near Field Solutions Ltd")]
    NearFieldSolutionsLtd,
    /// Vigil Technologies Inc.
    #[strum(serialize = "Vigil Technologies Inc.")]
    VigilTechnologiesInc,
    /// Vitulo Plus BV
    #[strum(serialize = "Vitulo Plus BV")]
    VituloPlusBV,
    /// WILKA Schliesstechnik GmbH
    #[strum(serialize = "WILKA Schliesstechnik GmbH")]
    WILKASchliesstechnikGmbH,
    /// BodyPlus Technology Co.,Ltd
    #[strum(serialize = "BodyPlus Technology Co.,Ltd")]
    BodyPlusTechnologyCoLtd,
    /// happybrush GmbH
    #[strum(serialize = "happybrush GmbH")]
    HappybrushGmbH,
    /// Enequi AB
    #[strum(serialize = "Enequi AB")]
    EnequiAB,
    /// Sartorius AG
    #[strum(serialize = "Sartorius AG")]
    SartoriusAG,
    /// Tom Communication Industrial Co.,Ltd.
    #[strum(serialize = "Tom Communication Industrial Co.,Ltd.")]
    TomCommunicationIndustrialCoLtd,
    /// ESS Embedded System Solutions Inc.
    #[strum(serialize = "ESS Embedded System Solutions Inc.")]
    ESSEmbeddedSystemSolutionsInc,
    /// Mahr GmbH
    #[strum(serialize = "Mahr GmbH")]
    MahrGmbH,
    /// Redpine Signals Inc
    #[strum(serialize = "Redpine Signals Inc")]
    RedpineSignalsInc,
    /// TraqFreq LLC
    #[strum(serialize = "TraqFreq LLC")]
    TraqFreqLLC,
    /// PAFERS TECH
    #[strum(serialize = "PAFERS TECH")]
    PAFERSTECH,
    /// Akciju sabiedriba "SAF TEHNIKA"
    #[strum(serialize = "Akciju sabiedriba \"SAF TEHNIKA\"")]
    AkcijuSabiedribaSAFTEHNIKA,
    /// Beijing Jingdong Century Trading Co., Ltd.
    #[strum(serialize = "Beijing Jingdong Century Trading Co., Ltd.")]
    BeijingJingdongCenturyTradingCoLtd,
    /// JBX Designs Inc.
    #[strum(serialize = "JBX Designs Inc.")]
    JBXDesignsInc,
    /// AB Electrolux
    #[strum(serialize = "AB Electrolux")]
    ABElectrolux,
    /// Wernher von Braun Center for ASdvanced Research
    #[strum(serialize = "Wernher von Braun Center for ASdvanced Research")]
    WernherVonBraunCenterForASdvancedResearch,
    /// Essity Hygiene and Health Aktiebolag
    #[strum(serialize = "Essity Hygiene and Health Aktiebolag")]
    EssityHygieneAndHealthAktiebolag,
    /// Be Interactive Co., Ltd
    #[strum(serialize = "Be Interactive Co., Ltd")]
    BeInteractiveCoLtd,
    /// Carewear Corp.
    #[strum(serialize = "Carewear Corp.")]
    CarewearCorp,
    /// Huf Hülsbeck & Fürst GmbH & Co. KG
    #[strum(serialize = "Huf Hülsbeck & Fürst GmbH & Co. KG")]
    HufHLsbeckFRstGmbHCoKG,
    /// Element Products, Inc.
    #[strum(serialize = "Element Products, Inc.")]
    ElementProductsInc,
    /// Beijing Winner Microelectronics Co.,Ltd
    #[strum(serialize = "Beijing Winner Microelectronics Co.,Ltd")]
    BeijingWinnerMicroelectronicsCoLtd,
    /// SmartSnugg Pty Ltd
    #[strum(serialize = "SmartSnugg Pty Ltd")]
    SmartSnuggPtyLtd,
    /// FiveCo Sarl
    #[strum(serialize = "FiveCo Sarl")]
    FiveCoSarl,
    /// California Things Inc.
    #[strum(serialize = "California Things Inc.")]
    CaliforniaThingsInc,
    /// Audiodo AB
    #[strum(serialize = "Audiodo AB")]
    AudiodoAB,
    /// ABAX AS
    #[strum(serialize = "ABAX AS")]
    ABAXAS,
    /// Bull Group Company Limited
    #[strum(serialize = "Bull Group Company Limited")]
    BullGroupCompanyLimited,
    /// Respiri Limited
    #[strum(serialize = "Respiri Limited")]
    RespiriLimited,
    /// MindPeace Safety LLC
    #[strum(serialize = "MindPeace Safety LLC")]
    MindPeaceSafetyLLC,
    /// Vgyan Solutions
    #[strum(serialize = "Vgyan Solutions")]
    VgyanSolutions,
    /// Altonics
    #[strum(serialize = "Altonics")]
    Altonics,
    /// iQsquare BV
    #[strum(serialize = "iQsquare BV")]
    IQsquareBV,
    /// IDIBAIX enginneering
    #[strum(serialize = "IDIBAIX enginneering")]
    IDIBAIXEnginneering,
    /// ECSG
    #[strum(serialize = "ECSG")]
    ECSG,
    /// REVSMART WEARABLE HK CO LTD
    #[strum(serialize = "REVSMART WEARABLE HK CO LTD")]
    REVSMARTWEARABLEHKCOLTD,
    /// Precor
    #[strum(serialize = "Precor")]
    Precor,
    /// F5 Sports, Inc
    #[strum(serialize = "F5 Sports, Inc")]
    F5SportsInc,
    /// exoTIC Systems
    #[strum(serialize = "exoTIC Systems")]
    ExoTICSystems,
    /// DONGGUAN HELE ELECTRONICS CO., LTD
    #[strum(serialize = "DONGGUAN HELE ELECTRONICS CO., LTD")]
    DONGGUANHELEELECTRONICSCOLTD,
    /// Dongguan Liesheng Electronic Co.Ltd
    #[strum(serialize = "Dongguan Liesheng Electronic Co.Ltd")]
    DongguanLieshengElectronicCoLtd,
    /// Oculeve, Inc.
    #[strum(serialize = "Oculeve, Inc.")]
    OculeveInc,
    /// Clover Network, Inc.
    #[strum(serialize = "Clover Network, Inc.")]
    CloverNetworkInc,
    /// Xiamen Eholder Electronics Co.Ltd
    #[strum(serialize = "Xiamen Eholder Electronics Co.Ltd")]
    XiamenEholderElectronicsCoLtd,
    /// Ford Motor Company
    #[strum(serialize = "Ford Motor Company")]
    FordMotorCompany,
    /// Guangzhou SuperSound Information Technology Co.,Ltd
    #[strum(serialize = "Guangzhou SuperSound Information Technology Co.,Ltd")]
    GuangzhouSuperSoundInformationTechnologyCoLtd,
    /// Tedee Sp. z o.o.
    #[strum(serialize = "Tedee Sp. z o.o.")]
    TedeeSpZOO,
    /// PHC Corporation
    #[strum(serialize = "PHC Corporation")]
    PHCCorporation,
    /// STALKIT AS
    #[strum(serialize = "STALKIT AS")]
    STALKITAS,
    /// Eli Lilly and Company
    #[strum(serialize = "Eli Lilly and Company")]
    EliLillyAndCompany,
    /// SwaraLink Technologies
    #[strum(serialize = "SwaraLink Technologies")]
    SwaraLinkTechnologies,
    /// JMR embedded systems GmbH
    #[strum(serialize = "JMR embedded systems GmbH")]
    JMREmbeddedSystemsGmbH,
    /// Bitkey Inc.
    #[strum(serialize = "Bitkey Inc.")]
    BitkeyInc,
    /// GWA Hygiene GmbH
    #[strum(serialize = "GWA Hygiene GmbH")]
    GWAHygieneGmbH,
    /// Safera Oy
    #[strum(serialize = "Safera Oy")]
    SaferaOy,
    /// Open Platform Systems LLC
    #[strum(serialize = "Open Platform Systems LLC")]
    OpenPlatformSystemsLLC,
    /// OnePlus Electronics (Shenzhen) Co., Ltd.
    #[strum(serialize = "OnePlus Electronics (Shenzhen) Co., Ltd.")]
    OnePlusElectronicsShenzhenCoLtd,
    /// Wildlife Acoustics, Inc.
    #[strum(serialize = "Wildlife Acoustics, Inc.")]
    WildlifeAcousticsInc,
    /// ABLIC Inc.
    #[strum(serialize = "ABLIC Inc.")]
    ABLICInc,
    /// Dairy Tech, Inc.
    #[strum(serialize = "Dairy Tech, Inc.")]
    DairyTechInc,
    /// Iguanavation, Inc.
    #[strum(serialize = "Iguanavation, Inc.")]
    IguanavationInc,
    /// DiUS Computing Pty Ltd
    #[strum(serialize = "DiUS Computing Pty Ltd")]
    DiUSComputingPtyLtd,
    /// UpRight Technologies LTD
    #[strum(serialize = "UpRight Technologies LTD")]
    UpRightTechnologiesLTD,
    /// FrancisFund, LLC
    #[strum(serialize = "FrancisFund, LLC")]
    FrancisFundLLC,
    /// LLC Navitek
    #[strum(serialize = "LLC Navitek")]
    LLCNavitek,
    /// Glass Security Pte Ltd
    #[strum(serialize = "Glass Security Pte Ltd")]
    GlassSecurityPteLtd,
    /// Jiangsu Qinheng Co., Ltd.
    #[strum(serialize = "Jiangsu Qinheng Co., Ltd.")]
    JiangsuQinhengCoLtd,
    /// Chandler Systems Inc.
    #[strum(serialize = "Chandler Systems Inc.")]
    ChandlerSystemsInc,
    /// Fantini Cosmi s.p.a.
    #[strum(serialize = "Fantini Cosmi s.p.a.")]
    FantiniCosmiSPA,
    /// Acubit ApS
    #[strum(serialize = "Acubit ApS")]
    AcubitApS,
    /// Beijing Hao Heng Tian Tech Co., Ltd.
    #[strum(serialize = "Beijing Hao Heng Tian Tech Co., Ltd.")]
    BeijingHaoHengTianTechCoLtd,
    /// Bluepack S.R.L.
    #[strum(serialize = "Bluepack S.R.L.")]
    BluepackSRL,
    /// Beijing Unisoc Technologies Co., Ltd.
    #[strum(serialize = "Beijing Unisoc Technologies Co., Ltd.")]
    BeijingUnisocTechnologiesCoLtd,
    /// HITIQ LIMITED
    #[strum(serialize = "HITIQ LIMITED")]
    HITIQLIMITED,
    /// MAC SRL
    #[strum(serialize = "MAC SRL")]
    MACSRL,
    /// DML LLC
    #[strum(serialize = "DML LLC")]
    DMLLLC,
    /// Sanofi
    #[strum(serialize = "Sanofi")]
    Sanofi,
    /// SOCOMEC
    #[strum(serialize = "SOCOMEC")]
    SOCOMEC,
    /// WIZNOVA, Inc.
    #[strum(serialize = "WIZNOVA, Inc.")]
    WIZNOVAInc,
    /// Seitec Elektronik GmbH
    #[strum(serialize = "Seitec Elektronik GmbH")]
    SeitecElektronikGmbH,
    /// OR Technologies Pty Ltd
    #[strum(serialize = "OR Technologies Pty Ltd")]
    ORTechnologiesPtyLtd,
    /// GuangZhou KuGou Computer Technology Co.Ltd
    #[strum(serialize = "GuangZhou KuGou Computer Technology Co.Ltd")]
    GuangZhouKuGouComputerTechnologyCoLtd,
    /// DIAODIAO (Beijing) Technology Co., Ltd.
    #[strum(serialize = "DIAODIAO (Beijing) Technology Co., Ltd.")]
    DIAODIAOBeijingTechnologyCoLtd,
    /// Illusory Studios LLC
    #[strum(serialize = "Illusory Studios LLC")]
    IllusoryStudiosLLC,
    /// Sarvavid Software Solutions LLP
    #[strum(serialize = "Sarvavid Software Solutions LLP")]
    SarvavidSoftwareSolutionsLLP,
    /// iopool s.a.
    #[strum(serialize = "iopool s.a.")]
    IopoolSA,
    /// Amtech Systems, LLC
    #[strum(serialize = "Amtech Systems, LLC")]
    AmtechSystemsLLC,
    /// EAGLE DETECTION SA
    #[strum(serialize = "EAGLE DETECTION SA")]
    EAGLEDETECTIONSA,
    /// MEDIATECH S.R.L.
    #[strum(serialize = "MEDIATECH S.R.L.")]
    MEDIATECHSRL,
    /// Hamilton Professional Services of Canada Incorporated
    #[strum(serialize = "Hamilton Professional Services of Canada Incorporated")]
    HamiltonProfessionalServicesOfCanadaIncorporated,
    /// Changsha JEMO IC Design Co.,Ltd
    #[strum(serialize = "Changsha JEMO IC Design Co.,Ltd")]
    ChangshaJEMOICDesignCoLtd,
    /// Elatec GmbH
    #[strum(serialize = "Elatec GmbH")]
    ElatecGmbH,
    /// JLG Industries, Inc.
    #[strum(serialize = "JLG Industries, Inc.")]
    JLGIndustriesInc,
    /// Michael Parkin
    #[strum(serialize = "Michael Parkin")]
    MichaelParkin,
    /// Brother Industries, Ltd
    #[strum(serialize = "Brother Industries, Ltd")]
    BrotherIndustriesLtd,
    /// Lumens For Less, Inc
    #[strum(serialize = "Lumens For Less, Inc")]
    LumensForLessInc,
    /// ELA Innovation
    #[strum(serialize = "ELA Innovation")]
    ELAInnovation,
    /// umanSense AB
    #[strum(serialize = "umanSense AB")]
    UmanSenseAB,
    /// Shanghai InGeek Cyber Security Co., Ltd.
    #[strum(serialize = "Shanghai InGeek Cyber Security Co., Ltd.")]
    ShanghaiInGeekCyberSecurityCoLtd,
    /// HARMAN CO.,LTD.
    #[strum(serialize = "HARMAN CO.,LTD.")]
    HARMANCOLTD,
    /// Smart Sensor Devices AB
    #[strum(serialize = "Smart Sensor Devices AB")]
    SmartSensorDevicesAB,
    /// Antitronics Inc.
    #[strum(serialize = "Antitronics Inc.")]
    AntitronicsInc,
    /// RHOMBUS SYSTEMS, INC.
    #[strum(serialize = "RHOMBUS SYSTEMS, INC.")]
    RHOMBUSSYSTEMSINC,
    /// Katerra Inc.
    #[strum(serialize = "Katerra Inc.")]
    KaterraInc,
    /// Remote Solution Co., LTD.
    #[strum(serialize = "Remote Solution Co., LTD.")]
    RemoteSolutionCoLTD,
    /// Vimar SpA
    #[strum(serialize = "Vimar SpA")]
    VimarSpA,
    /// Mantis Tech LLC
    #[strum(serialize = "Mantis Tech LLC")]
    MantisTechLLC,
    /// TerOpta Ltd
    #[strum(serialize = "TerOpta Ltd")]
    TerOptaLtd,
    /// PIKOLIN S.L.
    #[strum(serialize = "PIKOLIN S.L.")]
    PIKOLINSL,
    /// WWZN Information Technology Company Limited
    #[strum(serialize = "WWZN Information Technology Company Limited")]
    WWZNInformationTechnologyCompanyLimited,
    /// Voxx International
    #[strum(serialize = "Voxx International")]
    VoxxInternational,
    /// ART AND PROGRAM, INC.
    #[strum(serialize = "ART AND PROGRAM, INC.")]
    ARTANDPROGRAMINC,
    /// NITTO DENKO ASIA TECHNICAL CENTRE PTE. LTD.
    #[strum(serialize = "NITTO DENKO ASIA TECHNICAL CENTRE PTE. LTD.")]
    NITTODENKOASIATECHNICALCENTREPTELTD,
    /// Peloton Interactive Inc.
    #[strum(serialize = "Peloton Interactive Inc.")]
    PelotonInteractiveInc,
    /// Force Impact Technologies
    #[strum(serialize = "Force Impact Technologies")]
    ForceImpactTechnologies,
    /// Dmac Mobile Developments, LLC
    #[strum(serialize = "Dmac Mobile Developments, LLC")]
    DmacMobileDevelopmentsLLC,
    /// Engineered Medical Technologies
    #[strum(serialize = "Engineered Medical Technologies")]
    EngineeredMedicalTechnologies,
    /// Noodle Technology inc
    #[strum(serialize = "Noodle Technology inc")]
    NoodleTechnologyInc,
    /// Graesslin GmbH
    #[strum(serialize = "Graesslin GmbH")]
    GraesslinGmbH,
    /// WuQi technologies, Inc.
    #[strum(serialize = "WuQi technologies, Inc.")]
    WuQiTechnologiesInc,
    /// Successful Endeavours Pty Ltd
    #[strum(serialize = "Successful Endeavours Pty Ltd")]
    SuccessfulEndeavoursPtyLtd,
    /// InnoCon Medical ApS
    #[strum(serialize = "InnoCon Medical ApS")]
    InnoConMedicalApS,
    /// Corvex Connected Safety
    #[strum(serialize = "Corvex Connected Safety")]
    CorvexConnectedSafety,
    /// Thirdwayv Inc.
    #[strum(serialize = "Thirdwayv Inc.")]
    ThirdwayvInc,
    /// Echoflex Solutions Inc.
    #[strum(serialize = "Echoflex Solutions Inc.")]
    EchoflexSolutionsInc,
    /// C-MAX Asia Limited
    #[strum(serialize = "C-MAX Asia Limited")]
    CMAXAsiaLimited,
    /// 4eBusiness GmbH
    #[strum(serialize = "4eBusiness GmbH")]
    N4eBusinessGmbH,
    /// Cyber Transport Control GmbH
    #[strum(serialize = "Cyber Transport Control GmbH")]
    CyberTransportControlGmbH,
    /// Cue
    #[strum(serialize = "Cue")]
    Cue,
    /// KOAMTAC INC.
    #[strum(serialize = "KOAMTAC INC.")]
    KOAMTACINC,
    /// Loopshore Oy
    #[strum(serialize = "Loopshore Oy")]
    LoopshoreOy,
    /// Niruha Systems Private Limited
    #[strum(serialize = "Niruha Systems Private Limited")]
    NiruhaSystemsPrivateLimited,
    /// AmaterZ, Inc.
    #[strum(serialize = "AmaterZ, Inc.")]
    AmaterZInc,
    /// radius co., ltd.
    #[strum(serialize = "radius co., ltd.")]
    RadiusCoLtd,
    /// Sensority, s.r.o.
    #[strum(serialize = "Sensority, s.r.o.")]
    SensoritySRO,
    /// Sparkage Inc.
    #[strum(serialize = "Sparkage Inc.")]
    SparkageInc,
    /// Glenview Software Corporation
    #[strum(serialize = "Glenview Software Corporation")]
    GlenviewSoftwareCorporation,
    /// Finch Technologies Ltd.
    #[strum(serialize = "Finch Technologies Ltd.")]
    FinchTechnologiesLtd,
    /// Qingping Technology (Beijing) Co., Ltd.
    #[strum(serialize = "Qingping Technology (Beijing) Co., Ltd.")]
    QingpingTechnologyBeijingCoLtd,
    /// DeviceDrive AS
    #[strum(serialize = "DeviceDrive AS")]
    DeviceDriveAS,
    /// ESEMBER LIMITED LIABILITY COMPANY
    #[strum(serialize = "ESEMBER LIMITED LIABILITY COMPANY")]
    ESEMBERLIMITEDLIABILITYCOMPANY,
    /// audifon GmbH & Co. KG
    #[strum(serialize = "audifon GmbH & Co. KG")]
    AudifonGmbHCoKG,
    /// O2 Micro, Inc.
    #[strum(serialize = "O2 Micro, Inc.")]
    O2MicroInc,
    /// HLP Controls Pty Limited
    #[strum(serialize = "HLP Controls Pty Limited")]
    HLPControlsPtyLimited,
    /// Pangaea Solution
    #[strum(serialize = "Pangaea Solution")]
    PangaeaSolution,
    /// BubblyNet, LLC
    #[strum(serialize = "BubblyNet, LLC")]
    BubblyNetLLC,
    /// Not Assigned
    #[strum(serialize = "Not Assigned")]
    NotAssigned,
    /// The Wildflower Foundation
    #[strum(serialize = "The Wildflower Foundation")]
    TheWildflowerFoundation,
    /// Optikam Tech Inc.
    #[strum(serialize = "Optikam Tech Inc.")]
    OptikamTechInc,
    /// MINIBREW HOLDING B.V
    #[strum(serialize = "MINIBREW HOLDING B.V")]
    MINIBREWHOLDINGBV,
    /// Cybex GmbH
    #[strum(serialize = "Cybex GmbH")]
    CybexGmbH,
    /// FUJIMIC NIIGATA, INC.
    #[strum(serialize = "FUJIMIC NIIGATA, INC.")]
    FUJIMICNIIGATAINC,
    /// Hanna Instruments, Inc.
    #[strum(serialize = "Hanna Instruments, Inc.")]
    HannaInstrumentsInc,
    /// KOMPAN A/S
    #[strum(serialize = "KOMPAN A/S")]
    KOMPANAS,
    /// Scosche Industries, Inc.
    #[strum(serialize = "Scosche Industries, Inc.")]
    ScoscheIndustriesInc,
    /// Provo Craft
    #[strum(serialize = "Provo Craft")]
    ProvoCraft,
    /// AEV spol. s r.o.
    #[strum(serialize = "AEV spol. s r.o.")]
    AEVSpolSRO,
    /// The Coca-Cola Company
    #[strum(serialize = "The Coca-Cola Company")]
    TheCocaColaCompany,
    /// GASTEC CORPORATION
    #[strum(serialize = "GASTEC CORPORATION")]
    GASTECCORPORATION,
    /// StarLeaf Ltd
    #[strum(serialize = "StarLeaf Ltd")]
    StarLeafLtd,
    /// Water-i.d. GmbH
    #[strum(serialize = "Water-i.d. GmbH")]
    WaterIDGmbH,
    /// HoloKit, Inc.
    #[strum(serialize = "HoloKit, Inc.")]
    HoloKitInc,
    /// PlantChoir Inc.
    #[strum(serialize = "PlantChoir Inc.")]
    PlantChoirInc,
    /// GuangDong Oppo Mobile Telecommunications Corp., Ltd.
    #[strum(serialize = "GuangDong Oppo Mobile Telecommunications Corp., Ltd.")]
    GuangDongOppoMobileTelecommunicationsCorpLtd,
    /// CST ELECTRONICS (PROPRIETARY) LIMITED
    #[strum(serialize = "CST ELECTRONICS (PROPRIETARY) LIMITED")]
    CSTELECTRONICSPROPRIETARYLIMITED,
    /// Sky UK Limited
    #[strum(serialize = "Sky UK Limited")]
    SkyUKLimited,
    /// Digibale Pty Ltd
    #[strum(serialize = "Digibale Pty Ltd")]
    DigibalePtyLtd,
    /// Smartloxx GmbH
    #[strum(serialize = "Smartloxx GmbH")]
    SmartloxxGmbH,
    /// Pune Scientific LLP
    #[strum(serialize = "Pune Scientific LLP")]
    PuneScientificLLP,
    /// Regent Beleuchtungskorper AG
    #[strum(serialize = "Regent Beleuchtungskorper AG")]
    RegentBeleuchtungskorperAG,
    /// Apollo Neuroscience, Inc.
    #[strum(serialize = "Apollo Neuroscience, Inc.")]
    ApolloNeuroscienceInc,
    /// Roku, Inc.
    #[strum(serialize = "Roku, Inc.")]
    RokuInc,
    /// Comcast Cable
    #[strum(serialize = "Comcast Cable")]
    ComcastCable,
    /// Xiamen Mage Information Technology Co., Ltd.
    #[strum(serialize = "Xiamen Mage Information Technology Co., Ltd.")]
    XiamenMageInformationTechnologyCoLtd,
    /// RAB Lighting, Inc.
    #[strum(serialize = "RAB Lighting, Inc.")]
    RABLightingInc,
    /// Musen Connect, Inc.
    #[strum(serialize = "Musen Connect, Inc.")]
    MusenConnectInc,
    /// Zume, Inc.
    #[strum(serialize = "Zume, Inc.")]
    ZumeInc,
    /// conbee GmbH
    #[strum(serialize = "conbee GmbH")]
    ConbeeGmbH,
    /// Bruel & Kjaer Sound & Vibration
    #[strum(serialize = "Bruel & Kjaer Sound & Vibration")]
    BruelKjaerSoundVibration,
    /// The Kroger Co.
    #[strum(serialize = "The Kroger Co.")]
    TheKrogerCo,
    /// Granite River Solutions, Inc.
    #[strum(serialize = "Granite River Solutions, Inc.")]
    GraniteRiverSolutionsInc,
    /// LoupeDeck Oy
    #[strum(serialize = "LoupeDeck Oy")]
    LoupeDeckOy,
    /// New H3C Technologies Co.,Ltd
    #[strum(serialize = "New H3C Technologies Co.,Ltd")]
    NewH3CTechnologiesCoLtd,
    /// Aurea Solucoes Tecnologicas Ltda.
    #[strum(serialize = "Aurea Solucoes Tecnologicas Ltda.")]
    AureaSolucoesTecnologicasLtda,
    /// Hong Kong Bouffalo Lab Limited
    #[strum(serialize = "Hong Kong Bouffalo Lab Limited")]
    HongKongBouffaloLabLimited,
    /// GV Concepts Inc.
    #[strum(serialize = "GV Concepts Inc.")]
    GVConceptsInc,
    /// Thomas Dynamics, LLC
    #[strum(serialize = "Thomas Dynamics, LLC")]
    ThomasDynamicsLLC,
    /// Moeco IOT Inc.
    #[strum(serialize = "Moeco IOT Inc.")]
    MoecoIOTInc,
    /// 2N TELEKOMUNIKACE a.s.
    #[strum(serialize = "2N TELEKOMUNIKACE a.s.")]
    N2NTELEKOMUNIKACEAS,
    /// Hormann KG Antriebstechnik
    #[strum(serialize = "Hormann KG Antriebstechnik")]
    HormannKGAntriebstechnik,
    /// CRONO CHIP, S.L.
    #[strum(serialize = "CRONO CHIP, S.L.")]
    CRONOCHIPSL,
    /// Soundbrenner Limited
    #[strum(serialize = "Soundbrenner Limited")]
    SoundbrennerLimited,
    /// ETABLISSEMENTS GEORGES RENAULT
    #[strum(serialize = "ETABLISSEMENTS GEORGES RENAULT")]
    ETABLISSEMENTSGEORGESRENAULT,
    /// iSwip
    #[strum(serialize = "iSwip")]
    ISwip,
    /// Epona Biotec Limited
    #[strum(serialize = "Epona Biotec Limited")]
    EponaBiotecLimited,
    /// Battery-Biz Inc.
    #[strum(serialize = "Battery-Biz Inc.")]
    BatteryBizInc,
    /// EPIC S.R.L.
    #[strum(serialize = "EPIC S.R.L.")]
    EPICSRL,
    /// KD CIRCUITS LLC
    #[strum(serialize = "KD CIRCUITS LLC")]
    KDCIRCUITSLLC,
    /// Genedrive Diagnostics Ltd
    #[strum(serialize = "Genedrive Diagnostics Ltd")]
    GenedriveDiagnosticsLtd,
    /// Axentia Technologies AB
    #[strum(serialize = "Axentia Technologies AB")]
    AxentiaTechnologiesAB,
    /// REGULA Ltd.
    #[strum(serialize = "REGULA Ltd.")]
    REGULALtd,
    /// Biral AG
    #[strum(serialize = "Biral AG")]
    BiralAG,
    /// A.W. Chesterton Company
    #[strum(serialize = "A.W. Chesterton Company")]
    AWChestertonCompany,
    /// Radinn AB
    #[strum(serialize = "Radinn AB")]
    RadinnAB,
    /// CIMTechniques, Inc.
    #[strum(serialize = "CIMTechniques, Inc.")]
    CIMTechniquesInc,
    /// Johnson Health Tech NA
    #[strum(serialize = "Johnson Health Tech NA")]
    JohnsonHealthTechNA,
    /// June Life, Inc.
    #[strum(serialize = "June Life, Inc.")]
    JuneLifeInc,
    /// Bluenetics GmbH
    #[strum(serialize = "Bluenetics GmbH")]
    BlueneticsGmbH,
    /// iaconicDesign Inc.
    #[strum(serialize = "iaconicDesign Inc.")]
    IaconicDesignInc,
    /// WRLDS Creations AB
    #[strum(serialize = "WRLDS Creations AB")]
    WRLDSCreationsAB,
    /// Skullcandy, Inc.
    #[strum(serialize = "Skullcandy, Inc.")]
    SkullcandyInc,
    /// Modul-System HH AB
    #[strum(serialize = "Modul-System HH AB")]
    ModulSystemHHAB,
    /// West Pharmaceutical Services, Inc.
    #[strum(serialize = "West Pharmaceutical Services, Inc.")]
    WestPharmaceuticalServicesInc,
    /// Barnacle Systems Inc.
    #[strum(serialize = "Barnacle Systems Inc.")]
    BarnacleSystemsInc,
    /// Smart Wave Technologies Canada Inc
    #[strum(serialize = "Smart Wave Technologies Canada Inc")]
    SmartWaveTechnologiesCanadaInc,
    /// Shanghai Top-Chip Microelectronics Tech. Co., LTD
    #[strum(serialize = "Shanghai Top-Chip Microelectronics Tech. Co., LTD")]
    ShanghaiTopChipMicroelectronicsTechCoLTD,
    /// NeoSensory, Inc.
    #[strum(serialize = "NeoSensory, Inc.")]
    NeoSensoryInc,
    /// Hangzhou Tuya Information        Technology Co., Ltd
    #[strum(serialize = "Hangzhou Tuya Information        Technology Co., Ltd")]
    HangzhouTuyaInformationTechnologyCoLtd,
    /// Shanghai Panchip Microelectronics Co., Ltd
    #[strum(serialize = "Shanghai Panchip Microelectronics Co., Ltd")]
    ShanghaiPanchipMicroelectronicsCoLtd,
    /// React Accessibility Limited
    #[strum(serialize = "React Accessibility Limited")]
    ReactAccessibilityLimited,
    /// LIVNEX Co.,Ltd.
    #[strum(serialize = "LIVNEX Co.,Ltd.")]
    LIVNEXCoLtd,
    /// Kano Computing Limited
    #[strum(serialize = "Kano Computing Limited")]
    KanoComputingLimited,
    /// hoots classic GmbH
    #[strum(serialize = "hoots classic GmbH")]
    HootsClassicGmbH,
    /// ecobee Inc.
    #[strum(serialize = "ecobee Inc.")]
    EcobeeInc,
    /// Nanjing Qinheng Microelectronics Co., Ltd
    #[strum(serialize = "Nanjing Qinheng Microelectronics Co., Ltd")]
    NanjingQinhengMicroelectronicsCoLtd,
    /// SOLUTIONS AMBRA INC.
    #[strum(serialize = "SOLUTIONS AMBRA INC.")]
    SOLUTIONSAMBRAINC,
    /// Micro-Design, Inc.
    #[strum(serialize = "Micro-Design, Inc.")]
    MicroDesignInc,
    /// STARLITE Co., Ltd.
    #[strum(serialize = "STARLITE Co., Ltd.")]
    STARLITECoLtd,
    /// Remedee Labs
    #[strum(serialize = "Remedee Labs")]
    RemedeeLabs,
    /// ThingOS GmbH
    #[strum(serialize = "ThingOS GmbH")]
    ThingOSGmbH,
    /// Linear Circuits
    #[strum(serialize = "Linear Circuits")]
    LinearCircuits,
    /// Unlimited Engineering SL
    #[strum(serialize = "Unlimited Engineering SL")]
    UnlimitedEngineeringSL,
    /// Snap-on Incorporated
    #[strum(serialize = "Snap-on Incorporated")]
    SnapOnIncorporated,
    /// Edifier International Limited
    #[strum(serialize = "Edifier International Limited")]
    EdifierInternationalLimited,
    /// Lucie Labs
    #[strum(serialize = "Lucie Labs")]
    LucieLabs,
    /// Alfred Kaercher SE & Co. KG
    #[strum(serialize = "Alfred Kaercher SE & Co. KG")]
    AlfredKaercherSECoKG,
    /// Audiowise Technology Inc.
    #[strum(serialize = "Audiowise Technology Inc.")]
    AudiowiseTechnologyInc,
    /// Geeksme S.L.
    #[strum(serialize = "Geeksme S.L.")]
    GeeksmeSL,
    /// Minut, Inc.
    #[strum(serialize = "Minut, Inc.")]
    MinutInc,
    /// Autogrow Systems Limited
    #[strum(serialize = "Autogrow Systems Limited")]
    AutogrowSystemsLimited,
    /// Komfort IQ, Inc.
    #[strum(serialize = "Komfort IQ, Inc.")]
    KomfortIQInc,
    /// Packetcraft, Inc.
    #[strum(serialize = "Packetcraft, Inc.")]
    PacketcraftInc,
    /// Häfele GmbH & Co KG
    #[strum(serialize = "Häfele GmbH & Co KG")]
    HFeleGmbHCoKG,
    /// ShapeLog, Inc.
    #[strum(serialize = "ShapeLog, Inc.")]
    ShapeLogInc,
    /// NOVABASE S.R.L.
    #[strum(serialize = "NOVABASE S.R.L.")]
    NOVABASESRL,
    /// Frecce LLC
    #[strum(serialize = "Frecce LLC")]
    FrecceLLC,
    /// Joule IQ, INC.
    #[strum(serialize = "Joule IQ, INC.")]
    JouleIQINC,
    /// KidzTek LLC
    #[strum(serialize = "KidzTek LLC")]
    KidzTekLLC,
    /// Aktiebolaget Sandvik Coromant
    #[strum(serialize = "Aktiebolaget Sandvik Coromant")]
    AktiebolagetSandvikCoromant,
    /// e-moola.com Pty Ltd
    #[strum(serialize = "e-moola.com Pty Ltd")]
    EMoolaComPtyLtd,
    /// Zimi Innovations Pty Ltd
    #[strum(serialize = "Zimi Innovations Pty Ltd")]
    ZimiInnovationsPtyLtd,
    /// SERENE GROUP, INC
    #[strum(serialize = "SERENE GROUP, INC")]
    SERENEGROUPINC,
    /// DIGISINE ENERGYTECH CO. LTD.
    #[strum(serialize = "DIGISINE ENERGYTECH CO. LTD.")]
    DIGISINEENERGYTECHCOLTD,
    /// MEDIRLAB Orvosbiologiai Fejleszto Korlatolt Felelossegu Tarsasag
    #[strum(serialize = "MEDIRLAB Orvosbiologiai Fejleszto Korlatolt Felelossegu Tarsasag")]
    MEDIRLABOrvosbiologiaiFejlesztoKorlatoltFelelosseguTarsasag,
    /// Byton North America Corporation
    #[strum(serialize = "Byton North America Corporation")]
    BytonNorthAmericaCorporation,
    /// Shenzhen TonliScience and Technology Development Co.,Ltd
    #[strum(serialize = "Shenzhen TonliScience and Technology Development Co.,Ltd")]
    ShenzhenTonliScienceAndTechnologyDevelopmentCoLtd,
    /// Cesar Systems Ltd.
    #[strum(serialize = "Cesar Systems Ltd.")]
    CesarSystemsLtd,
    /// quip NYC Inc.
    #[strum(serialize = "quip NYC Inc.")]
    QuipNYCInc,
    /// Direct Communication Solutions, Inc.
    #[strum(serialize = "Direct Communication Solutions, Inc.")]
    DirectCommunicationSolutionsInc,
    /// Klipsch Group, Inc.
    #[strum(serialize = "Klipsch Group, Inc.")]
    KlipschGroupInc,
    /// Access Co., Ltd
    #[strum(serialize = "Access Co., Ltd")]
    AccessCoLtd,
    /// Renault SA
    #[strum(serialize = "Renault SA")]
    RenaultSA,
    /// JSK CO., LTD.
    #[strum(serialize = "JSK CO., LTD.")]
    JSKCOLTD,
    /// BIROTA
    #[strum(serialize = "BIROTA")]
    BIROTA,
    /// maxon motor ltd.
    #[strum(serialize = "maxon motor ltd.")]
    MaxonMotorLtd,
    /// Optek
    #[strum(serialize = "Optek")]
    Optek,
    /// CRONUS ELECTRONICS LTD
    #[strum(serialize = "CRONUS ELECTRONICS LTD")]
    CRONUSELECTRONICSLTD,
    /// NantSound, Inc.
    #[strum(serialize = "NantSound, Inc.")]
    NantSoundInc,
    /// Domintell s.a.
    #[strum(serialize = "Domintell s.a.")]
    DomintellSA,
    /// Andon Health Co.,Ltd
    #[strum(serialize = "Andon Health Co.,Ltd")]
    AndonHealthCoLtd,
    /// Urbanminded Ltd
    #[strum(serialize = "Urbanminded Ltd")]
    UrbanmindedLtd,
    /// TYRI Sweden AB
    #[strum(serialize = "TYRI Sweden AB")]
    TYRISwedenAB,
    /// ECD Electronic Components GmbH Dresden
    #[strum(serialize = "ECD Electronic Components GmbH Dresden")]
    ECDElectronicComponentsGmbHDresden,
    /// SISTEMAS KERN, SOCIEDAD ANÓMINA
    #[strum(serialize = "SISTEMAS KERN, SOCIEDAD ANÓMINA")]
    SISTEMASKERNSOCIEDADANMINA,
    /// Trulli Audio
    #[strum(serialize = "Trulli Audio")]
    TrulliAudio,
    /// Altaneos
    #[strum(serialize = "Altaneos")]
    Altaneos,
    /// Nanoleaf Canada Limited
    #[strum(serialize = "Nanoleaf Canada Limited")]
    NanoleafCanadaLimited,
    /// Ingy B.V.
    #[strum(serialize = "Ingy B.V.")]
    IngyBV,
    /// Azbil Co.
    #[strum(serialize = "Azbil Co.")]
    AzbilCo,
    /// TATTCOM LLC
    #[strum(serialize = "TATTCOM LLC")]
    TATTCOMLLC,
    /// Paradox Engineering SA
    #[strum(serialize = "Paradox Engineering SA")]
    ParadoxEngineeringSA,
    /// LECO Corporation
    #[strum(serialize = "LECO Corporation")]
    LECOCorporation,
    /// Becker Antriebe GmbH
    #[strum(serialize = "Becker Antriebe GmbH")]
    BeckerAntriebeGmbH,
    /// Mstream Technologies., Inc.
    #[strum(serialize = "Mstream Technologies., Inc.")]
    MstreamTechnologiesInc,
    /// Flextronics International USA Inc.
    #[strum(serialize = "Flextronics International USA Inc.")]
    FlextronicsInternationalUSAInc,
    /// Ossur hf.
    #[strum(serialize = "Ossur hf.")]
    OssurHf,
    /// SKC Inc
    #[strum(serialize = "SKC Inc")]
    SKCInc,
    /// SPICA SYSTEMS LLC
    #[strum(serialize = "SPICA SYSTEMS LLC")]
    SPICASYSTEMSLLC,
    /// Wangs Alliance Corporation
    #[strum(serialize = "Wangs Alliance Corporation")]
    WangsAllianceCorporation,
    /// tatwah SA
    #[strum(serialize = "tatwah SA")]
    TatwahSA,
    /// Hunter Douglas Inc
    #[strum(serialize = "Hunter Douglas Inc")]
    HunterDouglasInc,
    /// Shenzhen Conex
    #[strum(serialize = "Shenzhen Conex")]
    ShenzhenConex,
    /// DIM3
    #[strum(serialize = "DIM3")]
    DIM3,
    /// Bobrick Washroom Equipment, Inc.
    #[strum(serialize = "Bobrick Washroom Equipment, Inc.")]
    BobrickWashroomEquipmentInc,
    /// Potrykus Holdings and Development LLC
    #[strum(serialize = "Potrykus Holdings and Development LLC")]
    PotrykusHoldingsAndDevelopmentLLC,
    /// iNFORM Technology GmbH
    #[strum(serialize = "iNFORM Technology GmbH")]
    INFORMTechnologyGmbH,
    /// eSenseLab LTD
    #[strum(serialize = "eSenseLab LTD")]
    ESenseLabLTD,
    /// Brilliant Home Technology, Inc.
    #[strum(serialize = "Brilliant Home Technology, Inc.")]
    BrilliantHomeTechnologyInc,
    /// INOVA Geophysical, Inc.
    #[strum(serialize = "INOVA Geophysical, Inc.")]
    INOVAGeophysicalInc,
    /// adafruit industries
    #[strum(serialize = "adafruit industries")]
    AdafruitIndustries,
    /// Nexite Ltd
    #[strum(serialize = "Nexite Ltd")]
    NexiteLtd,
    /// 8Power Limited
    #[strum(serialize = "8Power Limited")]
    N8PowerLimited,
    /// CME PTE. LTD.
    #[strum(serialize = "CME PTE. LTD.")]
    CMEPTELTD,
    /// Hyundai Motor Company
    #[strum(serialize = "Hyundai Motor Company")]
    HyundaiMotorCompany,
    /// Kickmaker
    #[strum(serialize = "Kickmaker")]
    Kickmaker,
    /// Shanghai Suisheng Information Technology Co., Ltd.
    #[strum(serialize = "Shanghai Suisheng Information Technology Co., Ltd.")]
    ShanghaiSuishengInformationTechnologyCoLtd,
    /// HEXAGON
    #[strum(serialize = "HEXAGON")]
    HEXAGON,
    /// Mitutoyo Corporation
    #[strum(serialize = "Mitutoyo Corporation")]
    MitutoyoCorporation,
    /// shenzhen fitcare electronics Co.,Ltd
    #[strum(serialize = "shenzhen fitcare electronics Co.,Ltd")]
    ShenzhenFitcareElectronicsCoLtd,
    /// INGICS TECHNOLOGY CO., LTD.
    #[strum(serialize = "INGICS TECHNOLOGY CO., LTD.")]
    INGICSTECHNOLOGYCOLTD,
    /// INCUS PERFORMANCE LTD.
    #[strum(serialize = "INCUS PERFORMANCE LTD.")]
    INCUSPERFORMANCELTD,
    /// ABB S.p.A.
    #[strum(serialize = "ABB S.p.A.")]
    ABBSPA,
    /// Blippit AB
    #[strum(serialize = "Blippit AB")]
    BlippitAB,
    /// Core Health and Fitness LLC
    #[strum(serialize = "Core Health and Fitness LLC")]
    CoreHealthAndFitnessLLC,
    /// Foxble, LLC
    #[strum(serialize = "Foxble, LLC")]
    FoxbleLLC,
    /// Intermotive,Inc.
    #[strum(serialize = "Intermotive,Inc.")]
    IntermotiveInc,
    /// Conneqtech B.V.
    #[strum(serialize = "Conneqtech B.V.")]
    ConneqtechBV,
    /// RIKEN KEIKI CO., LTD.,
    #[strum(serialize = "RIKEN KEIKI CO., LTD.,")]
    RIKENKEIKICOLTD,
    /// Canopy Growth Corporation
    #[strum(serialize = "Canopy Growth Corporation")]
    CanopyGrowthCorporation,
    /// Bitwards Oy
    #[strum(serialize = "Bitwards Oy")]
    BitwardsOy,
    /// vivo Mobile Communication Co., Ltd.
    #[strum(serialize = "vivo Mobile Communication Co., Ltd.")]
    VivoMobileCommunicationCoLtd,
    /// Etymotic Research, Inc.
    #[strum(serialize = "Etymotic Research, Inc.")]
    EtymoticResearchInc,
    /// A puissance 3
    #[strum(serialize = "A puissance 3")]
    APuissance3,
    /// BPW Bergische Achsen Kommanditgesellschaft
    #[strum(serialize = "BPW Bergische Achsen Kommanditgesellschaft")]
    BPWBergischeAchsenKommanditgesellschaft,
    /// Piaggio Fast Forward
    #[strum(serialize = "Piaggio Fast Forward")]
    PiaggioFastForward,
    /// BeerTech LTD
    #[strum(serialize = "BeerTech LTD")]
    BeerTechLTD,
    /// Tokenize, Inc.
    #[strum(serialize = "Tokenize, Inc.")]
    TokenizeInc,
    /// Zorachka LTD
    #[strum(serialize = "Zorachka LTD")]
    ZorachkaLTD,
    /// D-Link Corp.
    #[strum(serialize = "D-Link Corp.")]
    DLinkCorp,
    /// Down Range Systems LLC
    #[strum(serialize = "Down Range Systems LLC")]
    DownRangeSystemsLLC,
    /// General Luminaire (Shanghai) Co., Ltd.
    #[strum(serialize = "General Luminaire (Shanghai) Co., Ltd.")]
    GeneralLuminaireShanghaiCoLtd,
    /// Tangshan HongJia electronic technology co., LTD.
    #[strum(serialize = "Tangshan HongJia electronic technology co., LTD.")]
    TangshanHongJiaElectronicTechnologyCoLTD,
    /// FRAGRANCE DELIVERY TECHNOLOGIES LTD
    #[strum(serialize = "FRAGRANCE DELIVERY TECHNOLOGIES LTD")]
    FRAGRANCEDELIVERYTECHNOLOGIESLTD,
    /// Pepperl + Fuchs GmbH
    #[strum(serialize = "Pepperl + Fuchs GmbH")]
    PepperlFuchsGmbH,
    /// Dometic Corporation
    #[strum(serialize = "Dometic Corporation")]
    DometicCorporation,
    /// USound GmbH
    #[strum(serialize = "USound GmbH")]
    USoundGmbH,
    /// DNANUDGE LIMITED
    #[strum(serialize = "DNANUDGE LIMITED")]
    DNANUDGELIMITED,
    /// JUJU JOINTS CANADA CORP.
    #[strum(serialize = "JUJU JOINTS CANADA CORP.")]
    JUJUJOINTSCANADACORP,
    /// Dopple Technologies B.V.
    #[strum(serialize = "Dopple Technologies B.V.")]
    DoppleTechnologiesBV,
    /// ARCOM
    #[strum(serialize = "ARCOM")]
    ARCOM,
    /// Biotechware SRL
    #[strum(serialize = "Biotechware SRL")]
    BiotechwareSRL,
    /// ORSO Inc.
    #[strum(serialize = "ORSO Inc.")]
    ORSOInc,
    /// SafePort
    #[strum(serialize = "SafePort")]
    SafePort,
    /// Carol Cole Company
    #[strum(serialize = "Carol Cole Company")]
    CarolColeCompany,
    /// Embedded Fitness B.V.
    #[strum(serialize = "Embedded Fitness B.V.")]
    EmbeddedFitnessBV,
    /// Yealink (Xiamen) Network Technology Co.,LTD
    #[strum(serialize = "Yealink (Xiamen) Network Technology Co.,LTD")]
    YealinkXiamenNetworkTechnologyCoLTD,
    /// Subeca, Inc.
    #[strum(serialize = "Subeca, Inc.")]
    SubecaInc,
    /// Cognosos, Inc.
    #[strum(serialize = "Cognosos, Inc.")]
    CognososInc,
    /// Pektron Group Limited
    #[strum(serialize = "Pektron Group Limited")]
    PektronGroupLimited,
    /// Tap Sound System
    #[strum(serialize = "Tap Sound System")]
    TapSoundSystem,
    /// Helios Hockey, Inc.
    #[strum(serialize = "Helios Hockey, Inc.")]
    HeliosHockeyInc,
    /// Canopy Growth Corporation (1)
    #[strum(serialize = "Canopy Growth Corporation (1)")]
    CanopyGrowthCorporation1,
    /// Parsyl Inc
    #[strum(serialize = "Parsyl Inc")]
    ParsylInc,
    /// SOUNDBOKS
    #[strum(serialize = "SOUNDBOKS")]
    SOUNDBOKS,
    /// BlueUp
    #[strum(serialize = "BlueUp")]
    BlueUp,
    /// DAKATECH
    #[strum(serialize = "DAKATECH")]
    DAKATECH,
    /// RICOH ELECTRONIC DEVICES CO., LTD.
    #[strum(serialize = "RICOH ELECTRONIC DEVICES CO., LTD.")]
    RICOHELECTRONICDEVICESCOLTD,
    /// ACOS CO.,LTD.
    #[strum(serialize = "ACOS CO.,LTD.")]
    ACOSCOLTD,
    /// Guilin Zhishen Information Technology Co.,Ltd.
    #[strum(serialize = "Guilin Zhishen Information Technology Co.,Ltd.")]
    GuilinZhishenInformationTechnologyCoLtd,
    /// Krog Systems LLC
    #[strum(serialize = "Krog Systems LLC")]
    KrogSystemsLLC,
    /// COMPEGPS TEAM,SOCIEDAD LIMITADA
    #[strum(serialize = "COMPEGPS TEAM,SOCIEDAD LIMITADA")]
    COMPEGPSTEAMSOCIEDADLIMITADA,
    /// Alflex Products B.V.
    #[strum(serialize = "Alflex Products B.V.")]
    AlflexProductsBV,
    /// SmartSensor Labs Ltd
    #[strum(serialize = "SmartSensor Labs Ltd")]
    SmartSensorLabsLtd,
    /// SmartDrive Inc.
    #[strum(serialize = "SmartDrive Inc.")]
    SmartDriveInc,
    /// Yo-tronics Technology Co., Ltd.
    #[strum(serialize = "Yo-tronics Technology Co., Ltd.")]
    YoTronicsTechnologyCoLtd,
    /// Rafaelmicro
    #[strum(serialize = "Rafaelmicro")]
    Rafaelmicro,
    /// Emergency Lighting Products Limited
    #[strum(serialize = "Emergency Lighting Products Limited")]
    EmergencyLightingProductsLimited,
    /// LAONZ Co.,Ltd
    #[strum(serialize = "LAONZ Co.,Ltd")]
    LAONZCoLtd,
    /// Western Digital Techologies, Inc.
    #[strum(serialize = "Western Digital Techologies, Inc.")]
    WesternDigitalTechologiesInc,
    /// WIOsense GmbH & Co. KG
    #[strum(serialize = "WIOsense GmbH & Co. KG")]
    WIOsenseGmbHCoKG,
    /// EVVA Sicherheitstechnologie GmbH
    #[strum(serialize = "EVVA Sicherheitstechnologie GmbH")]
    EVVASicherheitstechnologieGmbH,
    /// Odic Incorporated
    #[strum(serialize = "Odic Incorporated")]
    OdicIncorporated,
    /// Pacific Track, LLC
    #[strum(serialize = "Pacific Track, LLC")]
    PacificTrackLLC,
    /// Revvo Technologies, Inc.
    #[strum(serialize = "Revvo Technologies, Inc.")]
    RevvoTechnologiesInc,
    /// Biometrika d.o.o.
    #[strum(serialize = "Biometrika d.o.o.")]
    BiometrikaDOO,
    /// Vorwerk Elektrowerke GmbH & Co. KG
    #[strum(serialize = "Vorwerk Elektrowerke GmbH & Co. KG")]
    VorwerkElektrowerkeGmbHCoKG,
    /// Trackunit A/S
    #[strum(serialize = "Trackunit A/S")]
    TrackunitAS,
    /// Wyze Labs, Inc
    #[strum(serialize = "Wyze Labs, Inc")]
    WyzeLabsInc,
    /// Dension Elektronikai Kft. (formerly: Dension Audio Systems Ltd.)
    #[strum(serialize = "Dension Elektronikai Kft. (formerly: Dension Audio Systems Ltd.)")]
    DensionElektronikaiKftFormerlyDensionAudioSystemsLtd,
    /// 11 Health & Technologies Limited
    #[strum(serialize = "11 Health & Technologies Limited")]
    N11HealthTechnologiesLimited,
    /// Innophase Incorporated
    #[strum(serialize = "Innophase Incorporated")]
    InnophaseIncorporated,
    /// Treegreen Limited
    #[strum(serialize = "Treegreen Limited")]
    TreegreenLimited,
    /// Berner International LLC
    #[strum(serialize = "Berner International LLC")]
    BernerInternationalLLC,
    /// SmartResQ ApS
    #[strum(serialize = "SmartResQ ApS")]
    SmartResQApS,
    /// Tome, Inc.
    #[strum(serialize = "Tome, Inc.")]
    TomeInc,
    /// The Chamberlain Group, Inc.
    #[strum(serialize = "The Chamberlain Group, Inc.")]
    TheChamberlainGroupInc,
    /// MIZUNO Corporation
    #[strum(serialize = "MIZUNO Corporation")]
    MIZUNOCorporation,
    /// ZRF, LLC
    #[strum(serialize = "ZRF, LLC")]
    ZRFLLC,
    /// BYSTAMP
    #[strum(serialize = "BYSTAMP")]
    BYSTAMP,
    /// Crosscan GmbH
    #[strum(serialize = "Crosscan GmbH")]
    CrosscanGmbH,
    /// Konftel AB
    #[strum(serialize = "Konftel AB")]
    KonftelAB,
    /// 1bar.net Limited
    #[strum(serialize = "1bar.net Limited")]
    N1barNetLimited,
    /// Phillips Connect Technologies LLC
    #[strum(serialize = "Phillips Connect Technologies LLC")]
    PhillipsConnectTechnologiesLLC,
    /// imagiLabs AB
    #[strum(serialize = "imagiLabs AB")]
    ImagiLabsAB,
    /// Optalert
    #[strum(serialize = "Optalert")]
    Optalert,
    /// PSYONIC, Inc.
    #[strum(serialize = "PSYONIC, Inc.")]
    PSYONICInc,
    /// Wintersteiger AG
    #[strum(serialize = "Wintersteiger AG")]
    WintersteigerAG,
    /// Controlid Industria, Comercio de Hardware e Servicos de Tecnologia Ltda
    #[strum(serialize = "Controlid Industria, Comercio de Hardware e Servicos de Tecnologia Ltda")]
    ControlidIndustriaComercioDeHardwareEServicosDeTecnologiaLtda,
    /// LEVOLOR, INC.
    #[strum(serialize = "LEVOLOR, INC.")]
    LEVOLORINC,
    /// Xsens Technologies B.V.
    #[strum(serialize = "Xsens Technologies B.V.")]
    XsensTechnologiesBV,
    /// Hydro-Gear Limited Partnership
    #[strum(serialize = "Hydro-Gear Limited Partnership")]
    HydroGearLimitedPartnership,
    /// EnPointe Fencing Pty Ltd
    #[strum(serialize = "EnPointe Fencing Pty Ltd")]
    EnPointeFencingPtyLtd,
    /// XANTHIO
    #[strum(serialize = "XANTHIO")]
    XANTHIO,
    /// sclak s.r.l.
    #[strum(serialize = "sclak s.r.l.")]
    SclakSRL,
    /// Tricorder Arraay Technologies LLC
    #[strum(serialize = "Tricorder Arraay Technologies LLC")]
    TricorderArraayTechnologiesLLC,
    /// GB Solution co.,Ltd
    #[strum(serialize = "GB Solution co.,Ltd")]
    GBSolutionCoLtd,
    /// Soliton Systems K.K.
    #[strum(serialize = "Soliton Systems K.K.")]
    SolitonSystemsKK,
    /// GIGA-TMS INC
    #[strum(serialize = "GIGA-TMS INC")]
    GIGATMSINC,
    /// Tait International Limited
    #[strum(serialize = "Tait International Limited")]
    TaitInternationalLimited,
    /// NICHIEI INTEC CO., LTD.
    #[strum(serialize = "NICHIEI INTEC CO., LTD.")]
    NICHIEIINTECCOLTD,
    /// SmartWireless GmbH & Co. KG
    #[strum(serialize = "SmartWireless GmbH & Co. KG")]
    SmartWirelessGmbHCoKG,
    /// Ingenieurbuero Birnfeld UG (haftungsbeschraenkt)
    #[strum(serialize = "Ingenieurbuero Birnfeld UG (haftungsbeschraenkt)")]
    IngenieurbueroBirnfeldUGHaftungsbeschraenkt,
    /// Maytronics Ltd
    #[strum(serialize = "Maytronics Ltd")]
    MaytronicsLtd,
    /// EPIFIT
    #[strum(serialize = "EPIFIT")]
    EPIFIT,
    /// Gimer medical
    #[strum(serialize = "Gimer medical")]
    GimerMedical,
    /// Nokian Renkaat Oyj
    #[strum(serialize = "Nokian Renkaat Oyj")]
    NokianRenkaatOyj,
    /// Current Lighting Solutions LLC
    #[strum(serialize = "Current Lighting Solutions LLC")]
    CurrentLightingSolutionsLLC,
    /// Sensibo, Inc.
    #[strum(serialize = "Sensibo, Inc.")]
    SensiboInc,
    /// SFS unimarket AG
    #[strum(serialize = "SFS unimarket AG")]
    SFSUnimarketAG,
    /// Private limited company "Teltonika"
    #[strum(serialize = "Private limited company \"Teltonika\"")]
    PrivateLimitedCompanyTeltonika,
    /// Saucon Technologies
    #[strum(serialize = "Saucon Technologies")]
    SauconTechnologies,
    /// Embedded Devices Co. Company
    #[strum(serialize = "Embedded Devices Co. Company")]
    EmbeddedDevicesCoCompany,
    /// J-J.A.D.E. Enterprise LLC
    #[strum(serialize = "J-J.A.D.E. Enterprise LLC")]
    JJADEEnterpriseLLC,
    /// i-SENS, inc.
    #[strum(serialize = "i-SENS, inc.")]
    ISENSInc,
    /// Witschi Electronic Ltd
    #[strum(serialize = "Witschi Electronic Ltd")]
    WitschiElectronicLtd,
    /// Aclara Technologies LLC
    #[strum(serialize = "Aclara Technologies LLC")]
    AclaraTechnologiesLLC,
    /// EXEO TECH CORPORATION
    #[strum(serialize = "EXEO TECH CORPORATION")]
    EXEOTECHCORPORATION,
    /// Epic Systems Co., Ltd.
    #[strum(serialize = "Epic Systems Co., Ltd.")]
    EpicSystemsCoLtd,
    /// Hoffmann SE
    #[strum(serialize = "Hoffmann SE")]
    HoffmannSE,
    /// Realme Chongqing Mobile Telecommunications Corp., Ltd.
    #[strum(serialize = "Realme Chongqing Mobile Telecommunications Corp., Ltd.")]
    RealmeChongqingMobileTelecommunicationsCorpLtd,
    /// UMEHEAL Ltd
    #[strum(serialize = "UMEHEAL Ltd")]
    UMEHEALLtd,
    /// Intelligenceworks Inc.
    #[strum(serialize = "Intelligenceworks Inc.")]
    IntelligenceworksInc,
    /// TGR 1.618 Limited
    #[strum(serialize = "TGR 1.618 Limited")]
    TGR1618Limited,
    /// Shanghai Kfcube Inc
    #[strum(serialize = "Shanghai Kfcube Inc")]
    ShanghaiKfcubeInc,
    /// Fraunhofer IIS
    #[strum(serialize = "Fraunhofer IIS")]
    FraunhoferIIS,
    /// SZ DJI TECHNOLOGY CO.,LTD
    #[strum(serialize = "SZ DJI TECHNOLOGY CO.,LTD")]
    SZDJITECHNOLOGYCOLTD,
    /// Coburn Technology, LLC
    #[strum(serialize = "Coburn Technology, LLC")]
    CoburnTechnologyLLC,
    /// Topre Corporation
    #[strum(serialize = "Topre Corporation")]
    TopreCorporation,
    /// Kayamatics Limited
    #[strum(serialize = "Kayamatics Limited")]
    KayamaticsLimited,
    /// Moticon ReGo AG
    #[strum(serialize = "Moticon ReGo AG")]
    MoticonReGoAG,
    /// Polidea Sp. z o.o.
    #[strum(serialize = "Polidea Sp. z o.o.")]
    PolideaSpZOO,
    /// Trivedi Advanced Technologies LLC
    #[strum(serialize = "Trivedi Advanced Technologies LLC")]
    TrivediAdvancedTechnologiesLLC,
    /// CORE|vision BV
    #[strum(serialize = "CORE|vision BV")]
    COREVisionBV,
    /// PF SCHWEISSTECHNOLOGIE GMBH
    #[strum(serialize = "PF SCHWEISSTECHNOLOGIE GMBH")]
    PFSCHWEISSTECHNOLOGIEGMBH,
    /// IONIQ Skincare GmbH & Co. KG
    #[strum(serialize = "IONIQ Skincare GmbH & Co. KG")]
    IONIQSkincareGmbHCoKG,
    /// Sengled Co., Ltd.
    #[strum(serialize = "Sengled Co., Ltd.")]
    SengledCoLtd,
    /// TransferFi
    #[strum(serialize = "TransferFi")]
    TransferFi,
    /// Boehringer Ingelheim Vetmedica GmbH
    #[strum(serialize = "Boehringer Ingelheim Vetmedica GmbH")]
    BoehringerIngelheimVetmedicaGmbH,
    /// ABB Inc
    #[strum(serialize = "ABB Inc")]
    ABBInc,
    /// Check Technology Solutions LLC
    #[strum(serialize = "Check Technology Solutions LLC")]
    CheckTechnologySolutionsLLC,
    /// U-Shin Ltd.
    #[strum(serialize = "U-Shin Ltd.")]
    UShinLtd,
    /// HYPER ICE, INC.
    #[strum(serialize = "HYPER ICE, INC.")]
    HYPERICEINC,
    /// Tokai-rika co.,ltd.
    #[strum(serialize = "Tokai-rika co.,ltd.")]
    TokaiRikaCoLtd,
    /// Prevayl Limited
    #[strum(serialize = "Prevayl Limited")]
    PrevaylLimited,
    /// bf1systems limited
    #[strum(serialize = "bf1systems limited")]
    Bf1systemsLimited,
    /// ubisys technologies GmbH
    #[strum(serialize = "ubisys technologies GmbH")]
    UbisysTechnologiesGmbH,
    /// SIRC Co., Ltd.
    #[strum(serialize = "SIRC Co., Ltd.")]
    SIRCCoLtd,
    /// Accent Advanced Systems SLU
    #[strum(serialize = "Accent Advanced Systems SLU")]
    AccentAdvancedSystemsSLU,
    /// Rayden.Earth LTD
    #[strum(serialize = "Rayden.Earth LTD")]
    RaydenEarthLTD,
    /// Lindinvent AB
    #[strum(serialize = "Lindinvent AB")]
    LindinventAB,
    /// CHIPOLO d.o.o.
    #[strum(serialize = "CHIPOLO d.o.o.")]
    CHIPOLODOO,
    /// CellAssist, LLC
    #[strum(serialize = "CellAssist, LLC")]
    CellAssistLLC,
    /// J. Wagner GmbH
    #[strum(serialize = "J. Wagner GmbH")]
    JWagnerGmbH,
    /// Integra Optics Inc
    #[strum(serialize = "Integra Optics Inc")]
    IntegraOpticsInc,
    /// Monadnock Systems Ltd.
    #[strum(serialize = "Monadnock Systems Ltd.")]
    MonadnockSystemsLtd,
    /// Liteboxer Technologies Inc.
    #[strum(serialize = "Liteboxer Technologies Inc.")]
    LiteboxerTechnologiesInc,
    /// Noventa AG
    #[strum(serialize = "Noventa AG")]
    NoventaAG,
    /// Nubia Technology Co.,Ltd.
    #[strum(serialize = "Nubia Technology Co.,Ltd.")]
    NubiaTechnologyCoLtd,
    /// JT INNOVATIONS LIMITED
    #[strum(serialize = "JT INNOVATIONS LIMITED")]
    JTINNOVATIONSLIMITED,
    /// TGM TECHNOLOGY CO., LTD.
    #[strum(serialize = "TGM TECHNOLOGY CO., LTD.")]
    TGMTECHNOLOGYCOLTD,
    /// ifly
    #[strum(serialize = "ifly")]
    Ifly,
    /// ZIMI CORPORATION
    #[strum(serialize = "ZIMI CORPORATION")]
    ZIMICORPORATION,
    /// betternotstealmybike UG (with limited liability)
    #[strum(serialize = "betternotstealmybike UG (with limited liability)")]
    BetternotstealmybikeUGWithLimitedLiability,
    /// ESTOM Infotech Kft.
    #[strum(serialize = "ESTOM Infotech Kft.")]
    ESTOMInfotechKft,
    /// Sensovium Inc.
    #[strum(serialize = "Sensovium Inc.")]
    SensoviumInc,
    /// Virscient Limited
    #[strum(serialize = "Virscient Limited")]
    VirscientLimited,
    /// Novel Bits, LLC
    #[strum(serialize = "Novel Bits, LLC")]
    NovelBitsLLC,
    /// ADATA Technology Co., LTD.
    #[strum(serialize = "ADATA Technology Co., LTD.")]
    ADATATechnologyCoLTD,
    /// KEYes
    #[strum(serialize = "KEYes")]
    KEYes,
    /// Nome Oy
    #[strum(serialize = "Nome Oy")]
    NomeOy,
    /// Inovonics Corp
    #[strum(serialize = "Inovonics Corp")]
    InovonicsCorp,
    /// WARES
    #[strum(serialize = "WARES")]
    WARES,
    /// Pointr Labs Limited
    #[strum(serialize = "Pointr Labs Limited")]
    PointrLabsLimited,
    /// Miridia Technology Incorporated
    #[strum(serialize = "Miridia Technology Incorporated")]
    MiridiaTechnologyIncorporated,
    /// Tertium Technology
    #[strum(serialize = "Tertium Technology")]
    TertiumTechnology,
    /// SHENZHEN AUKEY E BUSINESS CO., LTD
    #[strum(serialize = "SHENZHEN AUKEY E BUSINESS CO., LTD")]
    SHENZHENAUKEYEBUSINESSCOLTD,
    /// code-Q
    #[strum(serialize = "code-Q")]
    CodeQ,
    /// Tyco Electronics Corporation a TE Connectivity Ltd Company
    #[strum(serialize = "Tyco Electronics Corporation a TE Connectivity Ltd Company")]
    TycoElectronicsCorporationATEConnectivityLtdCompany,
    /// IRIS OHYAMA CO.,LTD.
    #[strum(serialize = "IRIS OHYAMA CO.,LTD.")]
    IRISOHYAMACOLTD,
    /// Philia Technology
    #[strum(serialize = "Philia Technology")]
    PhiliaTechnology,
    /// KOZO KEIKAKU ENGINEERING Inc.
    #[strum(serialize = "KOZO KEIKAKU ENGINEERING Inc.")]
    KOZOKEIKAKUENGINEERINGInc,
    /// Shenzhen Simo Technology co. LTD
    #[strum(serialize = "Shenzhen Simo Technology co. LTD")]
    ShenzhenSimoTechnologyCoLTD,
    /// Republic Wireless, Inc.
    #[strum(serialize = "Republic Wireless, Inc.")]
    RepublicWirelessInc,
    /// Rashidov ltd
    #[strum(serialize = "Rashidov ltd")]
    RashidovLtd,
    /// Crowd Connected Ltd
    #[strum(serialize = "Crowd Connected Ltd")]
    CrowdConnectedLtd,
    /// Eneso Tecnologia de Adaptacion S.L.
    #[strum(serialize = "Eneso Tecnologia de Adaptacion S.L.")]
    EnesoTecnologiaDeAdaptacionSL,
    /// Barrot Technology Limited
    #[strum(serialize = "Barrot Technology Limited")]
    BarrotTechnologyLimited,
    /// Naonext
    #[strum(serialize = "Naonext")]
    Naonext,
    /// Taiwan Intelligent Home Corp.
    #[strum(serialize = "Taiwan Intelligent Home Corp.")]
    TaiwanIntelligentHomeCorp,
    /// COWBELL ENGINEERING CO.,LTD.
    #[strum(serialize = "COWBELL ENGINEERING CO.,LTD.")]
    COWBELLENGINEERINGCOLTD,
    /// Beijing Big Moment Technology Co., Ltd.
    #[strum(serialize = "Beijing Big Moment Technology Co., Ltd.")]
    BeijingBigMomentTechnologyCoLtd,
    /// Denso Corporation
    #[strum(serialize = "Denso Corporation")]
    DensoCorporation,
    /// IMI Hydronic Engineering International SA
    #[strum(serialize = "IMI Hydronic Engineering International SA")]
    IMIHydronicEngineeringInternationalSA,
    /// ASKEY
    #[strum(serialize = "ASKEY")]
    ASKEY,
    /// Cumulus Digital Systems, Inc
    #[strum(serialize = "Cumulus Digital Systems, Inc")]
    CumulusDigitalSystemsInc,
    /// Joovv, Inc.
    #[strum(serialize = "Joovv, Inc.")]
    JoovvInc,
    /// The L.S. Starrett Company
    #[strum(serialize = "The L.S. Starrett Company")]
    TheLSStarrettCompany,
    /// Microoled
    #[strum(serialize = "Microoled")]
    Microoled,
    /// PSP - Pauli Services & Products GmbH
    #[strum(serialize = "PSP - Pauli Services & Products GmbH")]
    PSPPauliServicesProductsGmbH,
    /// Kodimo Technologies Company Limited
    #[strum(serialize = "Kodimo Technologies Company Limited")]
    KodimoTechnologiesCompanyLimited,
    /// Tymtix Technologies Private Limited
    #[strum(serialize = "Tymtix Technologies Private Limited")]
    TymtixTechnologiesPrivateLimited,
    /// Dermal Photonics Corporation
    #[strum(serialize = "Dermal Photonics Corporation")]
    DermalPhotonicsCorporation,
    /// MTD Products Inc & Affiliates
    #[strum(serialize = "MTD Products Inc & Affiliates")]
    MTDProductsIncAffiliates,
    /// instagrid GmbH
    #[strum(serialize = "instagrid GmbH")]
    InstagridGmbH,
    /// Spacelabs Medical Inc.
    #[strum(serialize = "Spacelabs Medical Inc.")]
    SpacelabsMedicalInc,
    /// Troo Corporation
    #[strum(serialize = "Troo Corporation")]
    TrooCorporation,
    /// Darkglass Electronics Oy
    #[strum(serialize = "Darkglass Electronics Oy")]
    DarkglassElectronicsOy,
    /// Hill-Rom
    #[strum(serialize = "Hill-Rom")]
    HillRom,
    /// BioIntelliSense, Inc.
    #[strum(serialize = "BioIntelliSense, Inc.")]
    BioIntelliSenseInc,
    /// Ketronixs Sdn Bhd
    #[strum(serialize = "Ketronixs Sdn Bhd")]
    KetronixsSdnBhd,
    /// Plastimold Products, Inc
    #[strum(serialize = "Plastimold Products, Inc")]
    PlastimoldProductsInc,
    /// Beijing Zizai Technology Co., LTD.
    #[strum(serialize = "Beijing Zizai Technology Co., LTD.")]
    BeijingZizaiTechnologyCoLTD,
    /// Lucimed
    #[strum(serialize = "Lucimed")]
    Lucimed,
    /// TSC Auto-ID Technology Co., Ltd.
    #[strum(serialize = "TSC Auto-ID Technology Co., Ltd.")]
    TSCAutoIDTechnologyCoLtd,
    /// DATAMARS, Inc.
    #[strum(serialize = "DATAMARS, Inc.")]
    DATAMARSInc,
    /// SUNCORPORATION
    #[strum(serialize = "SUNCORPORATION")]
    SUNCORPORATION,
    /// Yandex Services AG
    #[strum(serialize = "Yandex Services AG")]
    YandexServicesAG,
    /// Scope Logistical Solutions
    #[strum(serialize = "Scope Logistical Solutions")]
    ScopeLogisticalSolutions,
    /// User Hello, LLC
    #[strum(serialize = "User Hello, LLC")]
    UserHelloLLC,
    /// Pinpoint Innovations Limited
    #[strum(serialize = "Pinpoint Innovations Limited")]
    PinpointInnovationsLimited,
    /// 70mai Co.,Ltd.
    #[strum(serialize = "70mai Co.,Ltd.")]
    N70maiCoLtd,
    /// Zhuhai Hoksi Technology CO.,LTD
    #[strum(serialize = "Zhuhai Hoksi Technology CO.,LTD")]
    ZhuhaiHoksiTechnologyCOLTD,
    /// EMBR labs, INC
    #[strum(serialize = "EMBR labs, INC")]
    EMBRLabsINC,
    /// Radiawave Technologies Co.,Ltd.
    #[strum(serialize = "Radiawave Technologies Co.,Ltd.")]
    RadiawaveTechnologiesCoLtd,
    /// IOT Invent GmbH
    #[strum(serialize = "IOT Invent GmbH")]
    IOTInventGmbH,
    /// OPTIMUSIOT TECH LLP
    #[strum(serialize = "OPTIMUSIOT TECH LLP")]
    OPTIMUSIOTTECHLLP,
    /// VC Inc.
    #[strum(serialize = "VC Inc.")]
    VCInc,
    /// ASR Microelectronics (Shanghai) Co., Ltd.
    #[strum(serialize = "ASR Microelectronics (Shanghai) Co., Ltd.")]
    ASRMicroelectronicsShanghaiCoLtd,
    /// Douglas Lighting Controls Inc.
    #[strum(serialize = "Douglas Lighting Controls Inc.")]
    DouglasLightingControlsInc,
    /// Nerbio Medical Software Platforms Inc
    #[strum(serialize = "Nerbio Medical Software Platforms Inc")]
    NerbioMedicalSoftwarePlatformsInc,
    /// Braveheart Wireless, Inc.
    #[strum(serialize = "Braveheart Wireless, Inc.")]
    BraveheartWirelessInc,
    /// INEO-SENSE
    #[strum(serialize = "INEO-SENSE")]
    INEOSENSE,
    /// Honda Motor Co., Ltd.
    #[strum(serialize = "Honda Motor Co., Ltd.")]
    HondaMotorCoLtd,
    /// Ambient Sensors LLC
    #[strum(serialize = "Ambient Sensors LLC")]
    AmbientSensorsLLC,
    /// ASR Microelectronics(ShenZhen)Co., Ltd.
    #[strum(serialize = "ASR Microelectronics(ShenZhen)Co., Ltd.")]
    ASRMicroelectronicsShenZhenCoLtd,
    /// Technosphere Labs Pvt. Ltd.
    #[strum(serialize = "Technosphere Labs Pvt. Ltd.")]
    TechnosphereLabsPvtLtd,
    /// NO SMD LIMITED
    #[strum(serialize = "NO SMD LIMITED")]
    NOSMDLIMITED,
    /// Albertronic BV
    #[strum(serialize = "Albertronic BV")]
    AlbertronicBV,
    /// Luminostics, Inc.
    #[strum(serialize = "Luminostics, Inc.")]
    LuminosticsInc,
    /// Oblamatik AG
    #[strum(serialize = "Oblamatik AG")]
    OblamatikAG,
    /// Innokind, Inc.
    #[strum(serialize = "Innokind, Inc.")]
    InnokindInc,
    /// Melbot Studios, Sociedad Limitada
    #[strum(serialize = "Melbot Studios, Sociedad Limitada")]
    MelbotStudiosSociedadLimitada,
    /// Myzee Technology
    #[strum(serialize = "Myzee Technology")]
    MyzeeTechnology,
    /// Omnisense Limited
    #[strum(serialize = "Omnisense Limited")]
    OmnisenseLimited,
    /// KAHA PTE. LTD.
    #[strum(serialize = "KAHA PTE. LTD.")]
    KAHAPTELTD,
    /// Shanghai MXCHIP Information Technology Co., Ltd.
    #[strum(serialize = "Shanghai MXCHIP Information Technology Co., Ltd.")]
    ShanghaiMXCHIPInformationTechnologyCoLtd,
    /// JSB TECH PTE LTD
    #[strum(serialize = "JSB TECH PTE LTD")]
    JSBTECHPTELTD,
    /// Fundacion Tecnalia Research and Innovation
    #[strum(serialize = "Fundacion Tecnalia Research and Innovation")]
    FundacionTecnaliaResearchAndInnovation,
    /// Yukai Engineering Inc.
    #[strum(serialize = "Yukai Engineering Inc.")]
    YukaiEngineeringInc,
    /// Gooligum Technologies Pty Ltd
    #[strum(serialize = "Gooligum Technologies Pty Ltd")]
    GooligumTechnologiesPtyLtd,
    /// ROOQ GmbH
    #[strum(serialize = "ROOQ GmbH")]
    ROOQGmbH,
    /// AiRISTA
    #[strum(serialize = "AiRISTA")]
    AiRISTA,
    /// Qingdao Haier Technology Co., Ltd.
    #[strum(serialize = "Qingdao Haier Technology Co., Ltd.")]
    QingdaoHaierTechnologyCoLtd,
    /// Sappl Verwaltungs- und Betriebs GmbH
    #[strum(serialize = "Sappl Verwaltungs- und Betriebs GmbH")]
    SapplVerwaltungsUndBetriebsGmbH,
    /// TekHome
    #[strum(serialize = "TekHome")]
    TekHome,
    /// PCI Private Limited
    #[strum(serialize = "PCI Private Limited")]
    PCIPrivateLimited,
    /// Leggett & Platt, Incorporated
    #[strum(serialize = "Leggett & Platt, Incorporated")]
    LeggettPlattIncorporated,
    /// PS GmbH
    #[strum(serialize = "PS GmbH")]
    PSGmbH,
    /// C.O.B.O. SpA
    #[strum(serialize = "C.O.B.O. SpA")]
    COBOSpA,
    /// James Walker RotaBolt Limited
    #[strum(serialize = "James Walker RotaBolt Limited")]
    JamesWalkerRotaBoltLimited,
    /// BREATHINGS Co., Ltd.
    #[strum(serialize = "BREATHINGS Co., Ltd.")]
    BREATHINGSCoLtd,
    /// BarVision, LLC
    #[strum(serialize = "BarVision, LLC")]
    BarVisionLLC,
    /// SRAM
    #[strum(serialize = "SRAM")]
    SRAM,
    /// KiteSpring Inc.
    #[strum(serialize = "KiteSpring Inc.")]
    KiteSpringInc,
    /// Reconnect, Inc.
    #[strum(serialize = "Reconnect, Inc.")]
    ReconnectInc,
    /// Elekon AG
    #[strum(serialize = "Elekon AG")]
    ElekonAG,
    /// RealThingks GmbH
    #[strum(serialize = "RealThingks GmbH")]
    RealThingksGmbH,
    /// Henway Technologies, LTD.
    #[strum(serialize = "Henway Technologies, LTD.")]
    HenwayTechnologiesLTD,
    /// ASTEM Co.,Ltd.
    #[strum(serialize = "ASTEM Co.,Ltd.")]
    ASTEMCoLtd,
    /// LinkedSemi Microelectronics (Xiamen) Co., Ltd
    #[strum(serialize = "LinkedSemi Microelectronics (Xiamen) Co., Ltd")]
    LinkedSemiMicroelectronicsXiamenCoLtd,
    /// ENSESO LLC
    #[strum(serialize = "ENSESO LLC")]
    ENSESOLLC,
    /// Xenoma Inc.
    #[strum(serialize = "Xenoma Inc.")]
    XenomaInc,
    /// Adolf Wuerth GmbH & Co KG
    #[strum(serialize = "Adolf Wuerth GmbH & Co KG")]
    AdolfWuerthGmbHCoKG,
    /// Catalyft Labs, Inc.
    #[strum(serialize = "Catalyft Labs, Inc.")]
    CatalyftLabsInc,
    /// JEPICO Corporation
    #[strum(serialize = "JEPICO Corporation")]
    JEPICOCorporation,
    /// Hero Workout GmbH
    #[strum(serialize = "Hero Workout GmbH")]
    HeroWorkoutGmbH,
    /// Rivian Automotive, LLC
    #[strum(serialize = "Rivian Automotive, LLC")]
    RivianAutomotiveLLC,
    /// TRANSSION HOLDINGS LIMITED
    #[strum(serialize = "TRANSSION HOLDINGS LIMITED")]
    TRANSSIONHOLDINGSLIMITED,
    /// Inovonics Corp. (1)
    #[strum(serialize = "Inovonics Corp. (1)")]
    InovonicsCorp1,
    /// Agitron d.o.o.
    #[strum(serialize = "Agitron d.o.o.")]
    AgitronDOO,
    /// Globe (Jiangsu) Co., Ltd
    #[strum(serialize = "Globe (Jiangsu) Co., Ltd")]
    GlobeJiangsuCoLtd,
    /// AMC International Alfa Metalcraft Corporation AG
    #[strum(serialize = "AMC International Alfa Metalcraft Corporation AG")]
    AMCInternationalAlfaMetalcraftCorporationAG,
    /// First Light Technologies Ltd.
    #[strum(serialize = "First Light Technologies Ltd.")]
    FirstLightTechnologiesLtd,
    /// Wearable Link Limited
    #[strum(serialize = "Wearable Link Limited")]
    WearableLinkLimited,
    /// Metronom Health Europe
    #[strum(serialize = "Metronom Health Europe")]
    MetronomHealthEurope,
    /// Zwift, Inc.
    #[strum(serialize = "Zwift, Inc.")]
    ZwiftInc,
    /// Kindeva Drug Delivery L.P.
    #[strum(serialize = "Kindeva Drug Delivery L.P.")]
    KindevaDrugDeliveryLP,
    /// GimmiSys GmbH
    #[strum(serialize = "GimmiSys GmbH")]
    GimmiSysGmbH,
    /// tkLABS INC.
    #[strum(serialize = "tkLABS INC.")]
    TkLABSINC,
    /// PassiveBolt, Inc.
    #[strum(serialize = "PassiveBolt, Inc.")]
    PassiveBoltInc,
    /// Limited Liability Company "Mikrotikls"
    #[strum(serialize = "Limited Liability Company \"Mikrotikls\"")]
    LimitedLiabilityCompanyMikrotikls,
    /// Capetech
    #[strum(serialize = "Capetech")]
    Capetech,
    /// PPRS
    #[strum(serialize = "PPRS")]
    PPRS,
    /// Apptricity Corporation
    #[strum(serialize = "Apptricity Corporation")]
    ApptricityCorporation,
    /// LogiLube, LLC
    #[strum(serialize = "LogiLube, LLC")]
    LogiLubeLLC,
    /// Julbo
    #[strum(serialize = "Julbo")]
    Julbo,
    /// Breville Group
    #[strum(serialize = "Breville Group")]
    BrevilleGroup,
    /// Kerlink
    #[strum(serialize = "Kerlink")]
    Kerlink,
    /// Ohsung Electronics
    #[strum(serialize = "Ohsung Electronics")]
    OhsungElectronics,
    /// ZTE Corporation
    #[strum(serialize = "ZTE Corporation")]
    ZTECorporation,
    /// HerdDogg, Inc
    #[strum(serialize = "HerdDogg, Inc")]
    HerdDoggInc,
    /// Selekt Bilgisayar, lletisim Urunleri lnsaat Sanayi ve Ticaret Limited Sirketi
    #[strum(serialize = "Selekt Bilgisayar, lletisim Urunleri lnsaat Sanayi ve Ticaret Limited Sirketi")]
    SelektBilgisayarLletisimUrunleriLnsaatSanayiVeTicaretLimitedSirketi,
    /// Lismore Instruments Limited
    #[strum(serialize = "Lismore Instruments Limited")]
    LismoreInstrumentsLimited,
    /// LogiLube, LLC (1)
    #[strum(serialize = "LogiLube, LLC (1)")]
    LogiLubeLLC1,
    /// ETC
    #[strum(serialize = "ETC")]
    ETC,
    /// BioEchoNet inc.
    #[strum(serialize = "BioEchoNet inc.")]
    BioEchoNetInc,
    /// NUANCE HEARING LTD
    #[strum(serialize = "NUANCE HEARING LTD")]
    NUANCEHEARINGLTD,
    /// Sena Technologies Inc.
    #[strum(serialize = "Sena Technologies Inc.")]
    SenaTechnologiesInc,
    /// Linkura AB
    #[strum(serialize = "Linkura AB")]
    LinkuraAB,
    /// GL Solutions K.K.
    #[strum(serialize = "GL Solutions K.K.")]
    GLSolutionsKK,
    /// Moonbird BV
    #[strum(serialize = "Moonbird BV")]
    MoonbirdBV,
    /// Countrymate Technology Limited
    #[strum(serialize = "Countrymate Technology Limited")]
    CountrymateTechnologyLimited,
    /// Asahi Kasei Corporation
    #[strum(serialize = "Asahi Kasei Corporation")]
    AsahiKaseiCorporation,
    /// PointGuard, LLC
    #[strum(serialize = "PointGuard, LLC")]
    PointGuardLLC,
    /// Neo Materials and Consulting Inc.
    #[strum(serialize = "Neo Materials and Consulting Inc.")]
    NeoMaterialsAndConsultingInc,
    /// Actev Motors, Inc.
    #[strum(serialize = "Actev Motors, Inc.")]
    ActevMotorsInc,
    /// Woan Technology (Shenzhen) Co., Ltd.
    #[strum(serialize = "Woan Technology (Shenzhen) Co., Ltd.")]
    WoanTechnologyShenzhenCoLtd,
    /// dricos, Inc.
    #[strum(serialize = "dricos, Inc.")]
    DricosInc,
    /// Guide ID B.V.
    #[strum(serialize = "Guide ID B.V.")]
    GuideIDBV,
    /// 9374-7319 Quebec inc
    #[strum(serialize = "9374-7319 Quebec inc")]
    N93747319QuebecInc,
    /// Gunwerks, LLC
    #[strum(serialize = "Gunwerks, LLC")]
    GunwerksLLC,
    /// Band Industries, inc.
    #[strum(serialize = "Band Industries, inc.")]
    BandIndustriesInc,
    /// Lund Motion Products, Inc.
    #[strum(serialize = "Lund Motion Products, Inc.")]
    LundMotionProductsInc,
    /// IBA Dosimetry GmbH
    #[strum(serialize = "IBA Dosimetry GmbH")]
    IBADosimetryGmbH,
    /// GA
    #[strum(serialize = "GA")]
    GA,
    /// Closed Joint Stock Company "Zavod Flometr" ("Zavod Flometr" CJSC)
    #[strum(serialize = "Closed Joint Stock Company \"Zavod Flometr\" (\"Zavod Flometr\" CJSC)")]
    ClosedJointStockCompanyZavodFlometrZavodFlometrCJSC,
    /// Popit Oy
    #[strum(serialize = "Popit Oy")]
    PopitOy,
    /// ABEYE
    #[strum(serialize = "ABEYE")]
    ABEYE,
    /// BlueIOT(Beijing) Technology Co.,Ltd
    #[strum(serialize = "BlueIOT(Beijing) Technology Co.,Ltd")]
    BlueIOTBeijingTechnologyCoLtd,
    /// Fauna Audio GmbH
    #[strum(serialize = "Fauna Audio GmbH")]
    FaunaAudioGmbH,
    /// TOYOTA motor corporation
    #[strum(serialize = "TOYOTA motor corporation")]
    TOYOTAMotorCorporation,
    /// ZifferEins GmbH & Co. KG
    #[strum(serialize = "ZifferEins GmbH & Co. KG")]
    ZifferEinsGmbHCoKG,
    /// BIOTRONIK SE & Co. KG
    #[strum(serialize = "BIOTRONIK SE & Co. KG")]
    BIOTRONIKSECoKG,
    /// CORE CORPORATION
    #[strum(serialize = "CORE CORPORATION")]
    CORECORPORATION,
    /// CTEK Sweden AB
    #[strum(serialize = "CTEK Sweden AB")]
    CTEKSwedenAB,
    /// Thorley Industries, LLC
    #[strum(serialize = "Thorley Industries, LLC")]
    ThorleyIndustriesLLC,
    /// CLB B.V.
    #[strum(serialize = "CLB B.V.")]
    CLBBV,
    /// SonicSensory Inc
    #[strum(serialize = "SonicSensory Inc")]
    SonicSensoryInc,
    /// ISEMAR S.R.L.
    #[strum(serialize = "ISEMAR S.R.L.")]
    ISEMARSRL,
    /// DEKRA TESTING AND CERTIFICATION, S.A.U.
    #[strum(serialize = "DEKRA TESTING AND CERTIFICATION, S.A.U.")]
    DEKRATESTINGANDCERTIFICATIONSAU,
    /// Bernard Krone Holding SE & Co.KG
    #[strum(serialize = "Bernard Krone Holding SE & Co.KG")]
    BernardKroneHoldingSECoKG,
    /// ELPRO-BUCHS AG
    #[strum(serialize = "ELPRO-BUCHS AG")]
    ELPROBUCHSAG,
    /// Feedback Sports LLC
    #[strum(serialize = "Feedback Sports LLC")]
    FeedbackSportsLLC,
    /// TeraTron GmbH
    #[strum(serialize = "TeraTron GmbH")]
    TeraTronGmbH,
    /// Lumos Health Inc.
    #[strum(serialize = "Lumos Health Inc.")]
    LumosHealthInc,
    /// Cello Hill, LLC
    #[strum(serialize = "Cello Hill, LLC")]
    CelloHillLLC,
    /// TSE BRAKES, INC.
    #[strum(serialize = "TSE BRAKES, INC.")]
    TSEBRAKESINC,
    /// BHM-Tech Produktionsgesellschaft m.b.H
    #[strum(serialize = "BHM-Tech Produktionsgesellschaft m.b.H")]
    BHMTechProduktionsgesellschaftMBH,
    /// WIKA Alexander Wiegand SE & Co.KG
    #[strum(serialize = "WIKA Alexander Wiegand SE & Co.KG")]
    WIKAAlexanderWiegandSECoKG,
    /// Biovigil
    #[strum(serialize = "Biovigil")]
    Biovigil,
    /// Mequonic Engineering, S.L.
    #[strum(serialize = "Mequonic Engineering, S.L.")]
    MequonicEngineeringSL,
    /// bGrid B.V.
    #[strum(serialize = "bGrid B.V.")]
    BGridBV,
    /// C3-WIRELESS, LLC
    #[strum(serialize = "C3-WIRELESS, LLC")]
    C3WIRELESSLLC,
    /// ADVEEZ
    #[strum(serialize = "ADVEEZ")]
    ADVEEZ,
    /// Aktiebolaget Regin
    #[strum(serialize = "Aktiebolaget Regin")]
    AktiebolagetRegin,
    /// Anton Paar GmbH
    #[strum(serialize = "Anton Paar GmbH")]
    AntonPaarGmbH,
    /// Telenor ASA
    #[strum(serialize = "Telenor ASA")]
    TelenorASA,
    /// Big Kaiser Precision Tooling Ltd
    #[strum(serialize = "Big Kaiser Precision Tooling Ltd")]
    BigKaiserPrecisionToolingLtd,
    /// Absolute Audio Labs B.V.
    #[strum(serialize = "Absolute Audio Labs B.V.")]
    AbsoluteAudioLabsBV,
    /// VT42 Pty Ltd
    #[strum(serialize = "VT42 Pty Ltd")]
    VT42PtyLtd,
    /// Bronkhorst High-Tech B.V.
    #[strum(serialize = "Bronkhorst High-Tech B.V.")]
    BronkhorstHighTechBV,
    /// C. & E. Fein GmbH
    #[strum(serialize = "C. & E. Fein GmbH")]
    CEFeinGmbH,
    /// NextMind
    #[strum(serialize = "NextMind")]
    NextMind,
    /// Pixie Dust Technologies, Inc.
    #[strum(serialize = "Pixie Dust Technologies, Inc.")]
    PixieDustTechnologiesInc,
    /// eTactica ehf
    #[strum(serialize = "eTactica ehf")]
    ETacticaEhf,
    /// New Audio LLC
    #[strum(serialize = "New Audio LLC")]
    NewAudioLLC,
    /// Sendum Wireless Corporation
    #[strum(serialize = "Sendum Wireless Corporation")]
    SendumWirelessCorporation,
    /// deister electronic GmbH
    #[strum(serialize = "deister electronic GmbH")]
    DeisterElectronicGmbH,
    /// YKK AP Inc.
    #[strum(serialize = "YKK AP Inc.")]
    YKKAPInc,
    /// Step One Limited
    #[strum(serialize = "Step One Limited")]
    StepOneLimited,
    /// Koya Medical, Inc.
    #[strum(serialize = "Koya Medical, Inc.")]
    KoyaMedicalInc,
    /// Proof Diagnostics, Inc.
    #[strum(serialize = "Proof Diagnostics, Inc.")]
    ProofDiagnosticsInc,
    /// VOS Systems, LLC
    #[strum(serialize = "VOS Systems, LLC")]
    VOSSystemsLLC,
    /// ENGAGENOW DATA SCIENCES PRIVATE LIMITED
    #[strum(serialize = "ENGAGENOW DATA SCIENCES PRIVATE LIMITED")]
    ENGAGENOWDATASCIENCESPRIVATELIMITED,
    /// ARDUINO SA
    #[strum(serialize = "ARDUINO SA")]
    ARDUINOSA,
    /// KUMHO ELECTRICS, INC
    #[strum(serialize = "KUMHO ELECTRICS, INC")]
    KUMHOELECTRICSINC,
    /// Security Enhancement Systems, LLC
    #[strum(serialize = "Security Enhancement Systems, LLC")]
    SecurityEnhancementSystemsLLC,
    /// BEIJING ELECTRIC VEHICLE CO.,LTD
    #[strum(serialize = "BEIJING ELECTRIC VEHICLE CO.,LTD")]
    BEIJINGELECTRICVEHICLECOLTD,
    /// Paybuddy ApS
    #[strum(serialize = "Paybuddy ApS")]
    PaybuddyApS,
    /// KHN Solutions Inc
    #[strum(serialize = "KHN Solutions Inc")]
    KHNSolutionsInc,
    /// Nippon Ceramic Co.,Ltd.
    #[strum(serialize = "Nippon Ceramic Co.,Ltd.")]
    NipponCeramicCoLtd,
    /// PHOTODYNAMIC INCORPORATED
    #[strum(serialize = "PHOTODYNAMIC INCORPORATED")]
    PHOTODYNAMICINCORPORATED,
    /// DashLogic, Inc.
    #[strum(serialize = "DashLogic, Inc.")]
    DashLogicInc,
    /// Ambiq
    #[strum(serialize = "Ambiq")]
    Ambiq,
    /// Narhwall Inc.
    #[strum(serialize = "Narhwall Inc.")]
    NarhwallInc,
    /// Pozyx NV
    #[strum(serialize = "Pozyx NV")]
    PozyxNV,
    /// ifLink Open Community
    #[strum(serialize = "ifLink Open Community")]
    IfLinkOpenCommunity,
    /// Deublin Company, LLC
    #[strum(serialize = "Deublin Company, LLC")]
    DeublinCompanyLLC,
    /// BLINQY
    #[strum(serialize = "BLINQY")]
    BLINQY,
    /// DYPHI
    #[strum(serialize = "DYPHI")]
    DYPHI,
    /// BlueX Microelectronics Corp Ltd.
    #[strum(serialize = "BlueX Microelectronics Corp Ltd.")]
    BlueXMicroelectronicsCorpLtd,
    /// PentaLock Aps.
    #[strum(serialize = "PentaLock Aps.")]
    PentaLockAps,
    /// AUTEC Gesellschaft fuer Automationstechnik mbH
    #[strum(serialize = "AUTEC Gesellschaft fuer Automationstechnik mbH")]
    AUTECGesellschaftFuerAutomationstechnikMbH,
    /// Pegasus Technologies, Inc.
    #[strum(serialize = "Pegasus Technologies, Inc.")]
    PegasusTechnologiesInc,
    /// Bout Labs, LLC
    #[strum(serialize = "Bout Labs, LLC")]
    BoutLabsLLC,
    /// PlayerData Limited
    #[strum(serialize = "PlayerData Limited")]
    PlayerDataLimited,
    /// SAVOY ELECTRONIC LIGHTING
    #[strum(serialize = "SAVOY ELECTRONIC LIGHTING")]
    SAVOYELECTRONICLIGHTING,
    /// Elimo Engineering Ltd
    #[strum(serialize = "Elimo Engineering Ltd")]
    ElimoEngineeringLtd,
    /// SkyStream Corporation
    #[strum(serialize = "SkyStream Corporation")]
    SkyStreamCorporation,
    /// Aerosens LLC
    #[strum(serialize = "Aerosens LLC")]
    AerosensLLC,
    /// Centre Suisse d'Electronique et de Microtechnique SA
    #[strum(serialize = "Centre Suisse d'Electronique et de Microtechnique SA")]
    CentreSuisseDElectroniqueEtDeMicrotechniqueSA,
    /// Vessel Ltd.
    #[strum(serialize = "Vessel Ltd.")]
    VesselLtd,
    /// Span.IO, Inc.
    #[strum(serialize = "Span.IO, Inc.")]
    SpanIOInc,
    /// AnotherBrain inc.
    #[strum(serialize = "AnotherBrain inc.")]
    AnotherBrainInc,
    /// Rosewill
    #[strum(serialize = "Rosewill")]
    Rosewill,
    /// Universal Audio, Inc.
    #[strum(serialize = "Universal Audio, Inc.")]
    UniversalAudioInc,
    /// JAPAN TOBACCO INC.
    #[strum(serialize = "JAPAN TOBACCO INC.")]
    JAPANTOBACCOINC,
    /// UVISIO
    #[strum(serialize = "UVISIO")]
    UVISIO,
    /// HungYi Microelectronics Co.,Ltd.
    #[strum(serialize = "HungYi Microelectronics Co.,Ltd.")]
    HungYiMicroelectronicsCoLtd,
    /// Honor Device Co., Ltd.
    #[strum(serialize = "Honor Device Co., Ltd.")]
    HonorDeviceCoLtd,
    /// Combustion, LLC
    #[strum(serialize = "Combustion, LLC")]
    CombustionLLC,
    /// XUNTONG
    #[strum(serialize = "XUNTONG")]
    XUNTONG,
    /// CrowdGlow Ltd
    #[strum(serialize = "CrowdGlow Ltd")]
    CrowdGlowLtd,
    /// Mobitrace
    #[strum(serialize = "Mobitrace")]
    Mobitrace,
    /// Hx Engineering, LLC
    #[strum(serialize = "Hx Engineering, LLC")]
    HxEngineeringLLC,
    /// Senso4s d.o.o.
    #[strum(serialize = "Senso4s d.o.o.")]
    Senso4sDOO,
    /// Blyott
    #[strum(serialize = "Blyott")]
    Blyott,
    /// Julius Blum GmbH
    #[strum(serialize = "Julius Blum GmbH")]
    JuliusBlumGmbH,
    /// BlueStreak IoT, LLC
    #[strum(serialize = "BlueStreak IoT, LLC")]
    BlueStreakIoTLLC,
    /// Chess Wise B.V.
    #[strum(serialize = "Chess Wise B.V.")]
    ChessWiseBV,
    /// ABLEPAY TECHNOLOGIES AS
    #[strum(serialize = "ABLEPAY TECHNOLOGIES AS")]
    ABLEPAYTECHNOLOGIESAS,
    /// Temperature Sensitive Solutions Systems Sweden AB
    #[strum(serialize = "Temperature Sensitive Solutions Systems Sweden AB")]
    TemperatureSensitiveSolutionsSystemsSwedenAB,
    /// HeartHero, inc.
    #[strum(serialize = "HeartHero, inc.")]
    HeartHeroInc,
    /// ORBIS Inc.
    #[strum(serialize = "ORBIS Inc.")]
    ORBISInc,
    /// GEAR RADIO ELECTRONICS CORP.
    #[strum(serialize = "GEAR RADIO ELECTRONICS CORP.")]
    GEARRADIOELECTRONICSCORP,
    /// EAR TEKNIK ISITME VE ODIOMETRI CIHAZLARI SANAYI VE TICARET ANONIM SIRKETI
    #[strum(serialize = "EAR TEKNIK ISITME VE ODIOMETRI CIHAZLARI SANAYI VE TICARET ANONIM SIRKETI")]
    EARTEKNIKISITMEVEODIOMETRICIHAZLARISANAYIVETICARETANONIMSIRKETI,
    /// Coyotta
    #[strum(serialize = "Coyotta")]
    Coyotta,
    /// Synergy Tecnologia em Sistemas Ltda
    #[strum(serialize = "Synergy Tecnologia em Sistemas Ltda")]
    SynergyTecnologiaEmSistemasLtda,
    /// VivoSensMedical GmbH
    #[strum(serialize = "VivoSensMedical GmbH")]
    VivoSensMedicalGmbH,
    /// Nagravision SA
    #[strum(serialize = "Nagravision SA")]
    NagravisionSA,
    /// Bionic Avionics Inc.
    #[strum(serialize = "Bionic Avionics Inc.")]
    BionicAvionicsInc,
    /// AON2 Ltd.
    #[strum(serialize = "AON2 Ltd.")]
    AON2Ltd,
    /// Innoware Development AB
    #[strum(serialize = "Innoware Development AB")]
    InnowareDevelopmentAB,
    /// JLD Technology Solutions, LLC
    #[strum(serialize = "JLD Technology Solutions, LLC")]
    JLDTechnologySolutionsLLC,
    /// Magnus Technology Sdn Bhd
    #[strum(serialize = "Magnus Technology Sdn Bhd")]
    MagnusTechnologySdnBhd,
    /// Preddio Technologies Inc.
    #[strum(serialize = "Preddio Technologies Inc.")]
    PreddioTechnologiesInc,
    /// Tag-N-Trac Inc
    #[strum(serialize = "Tag-N-Trac Inc")]
    TagNTracInc,
    /// Wuhan Linptech Co.,Ltd.
    #[strum(serialize = "Wuhan Linptech Co.,Ltd.")]
    WuhanLinptechCoLtd,
    /// Friday Home Aps
    #[strum(serialize = "Friday Home Aps")]
    FridayHomeAps,
    /// CPS AS
    #[strum(serialize = "CPS AS")]
    CPSAS,
    /// Mobilogix
    #[strum(serialize = "Mobilogix")]
    Mobilogix,
    /// Masonite Corporation
    #[strum(serialize = "Masonite Corporation")]
    MasoniteCorporation,
    /// Kabushikigaisha HANERON
    #[strum(serialize = "Kabushikigaisha HANERON")]
    KabushikigaishaHANERON,
    /// Melange Systems Pvt. Ltd.
    #[strum(serialize = "Melange Systems Pvt. Ltd.")]
    MelangeSystemsPvtLtd,
    /// LumenRadio AB
    #[strum(serialize = "LumenRadio AB")]
    LumenRadioAB,
    /// Athlos Oy
    #[strum(serialize = "Athlos Oy")]
    AthlosOy,
    /// KEAN ELECTRONICS PTY LTD
    #[strum(serialize = "KEAN ELECTRONICS PTY LTD")]
    KEANELECTRONICSPTYLTD,
    /// Yukon advanced optics worldwide, UAB
    #[strum(serialize = "Yukon advanced optics worldwide, UAB")]
    YukonAdvancedOpticsWorldwideUAB,
    /// Sibel Inc.
    #[strum(serialize = "Sibel Inc.")]
    SibelInc,
    /// OJMAR SA
    #[strum(serialize = "OJMAR SA")]
    OJMARSA,
    /// Steinel Solutions AG
    #[strum(serialize = "Steinel Solutions AG")]
    SteinelSolutionsAG,
    /// WatchGas B.V.
    #[strum(serialize = "WatchGas B.V.")]
    WatchGasBV,
    /// OM Digital Solutions Corporation
    #[strum(serialize = "OM Digital Solutions Corporation")]
    OMDigitalSolutionsCorporation,
    /// Audeara Pty Ltd
    #[strum(serialize = "Audeara Pty Ltd")]
    AudearaPtyLtd,
    /// Beijing Zero Zero Infinity Technology Co.,Ltd.
    #[strum(serialize = "Beijing Zero Zero Infinity Technology Co.,Ltd.")]
    BeijingZeroZeroInfinityTechnologyCoLtd,
    /// Spectrum Technologies, Inc.
    #[strum(serialize = "Spectrum Technologies, Inc.")]
    SpectrumTechnologiesInc,
    /// OKI Electric Industry Co., Ltd
    #[strum(serialize = "OKI Electric Industry Co., Ltd")]
    OKIElectricIndustryCoLtd,
    /// Mobile Action Technology Inc.
    #[strum(serialize = "Mobile Action Technology Inc.")]
    MobileActionTechnologyInc,
    /// SENSATEC Co., Ltd.
    #[strum(serialize = "SENSATEC Co., Ltd.")]
    SENSATECCoLtd,
    /// R.O. S.R.L.
    #[strum(serialize = "R.O. S.R.L.")]
    ROSRL,
    /// Hangzhou Yaguan Technology Co. LTD
    #[strum(serialize = "Hangzhou Yaguan Technology Co. LTD")]
    HangzhouYaguanTechnologyCoLTD,
    /// Listen Technologies Corporation
    #[strum(serialize = "Listen Technologies Corporation")]
    ListenTechnologiesCorporation,
    /// TOITU CO., LTD.
    #[strum(serialize = "TOITU CO., LTD.")]
    TOITUCOLTD,
    /// Confidex
    #[strum(serialize = "Confidex")]
    Confidex,
    /// Keep Technologies, Inc.
    #[strum(serialize = "Keep Technologies, Inc.")]
    KeepTechnologiesInc,
    /// Lichtvision Engineering GmbH
    #[strum(serialize = "Lichtvision Engineering GmbH")]
    LichtvisionEngineeringGmbH,
    /// AIRSTAR
    #[strum(serialize = "AIRSTAR")]
    AIRSTAR,
    /// Ampler Bikes OU
    #[strum(serialize = "Ampler Bikes OU")]
    AmplerBikesOU,
    /// Cleveron AS
    #[strum(serialize = "Cleveron AS")]
    CleveronAS,
    /// Ayxon-Dynamics GmbH
    #[strum(serialize = "Ayxon-Dynamics GmbH")]
    AyxonDynamicsGmbH,
    /// donutrobotics Co., Ltd.
    #[strum(serialize = "donutrobotics Co., Ltd.")]
    DonutroboticsCoLtd,
    /// Flosonics Medical
    #[strum(serialize = "Flosonics Medical")]
    FlosonicsMedical,
    /// Southwire Company, LLC
    #[strum(serialize = "Southwire Company, LLC")]
    SouthwireCompanyLLC,
    /// Shanghai wuqi microelectronics Co.,Ltd
    #[strum(serialize = "Shanghai wuqi microelectronics Co.,Ltd")]
    ShanghaiWuqiMicroelectronicsCoLtd,
    /// Reflow Pty Ltd
    #[strum(serialize = "Reflow Pty Ltd")]
    ReflowPtyLtd,
    /// Oras Oy
    #[strum(serialize = "Oras Oy")]
    OrasOy,
    /// ECCT
    #[strum(serialize = "ECCT")]
    ECCT,
    /// Volan Technology Inc.
    #[strum(serialize = "Volan Technology Inc.")]
    VolanTechnologyInc,
    /// SIANA Systems
    #[strum(serialize = "SIANA Systems")]
    SIANASystems,
    /// Shanghai Yidian Intelligent Technology Co., Ltd.
    #[strum(serialize = "Shanghai Yidian Intelligent Technology Co., Ltd.")]
    ShanghaiYidianIntelligentTechnologyCoLtd,
    /// Blue Peacock GmbH
    #[strum(serialize = "Blue Peacock GmbH")]
    BluePeacockGmbH,
    /// Roland Corporation
    #[strum(serialize = "Roland Corporation")]
    RolandCorporation,
    /// LIXIL Corporation
    #[strum(serialize = "LIXIL Corporation")]
    LIXILCorporation,
    /// SUBARU Corporation
    #[strum(serialize = "SUBARU Corporation")]
    SUBARUCorporation,
    /// Sensolus
    #[strum(serialize = "Sensolus")]
    Sensolus,
    /// Dyson Technology Limited
    #[strum(serialize = "Dyson Technology Limited")]
    DysonTechnologyLimited,
    /// Tec4med LifeScience GmbH
    #[strum(serialize = "Tec4med LifeScience GmbH")]
    Tec4medLifeScienceGmbH,
    /// CROXEL, INC.
    #[strum(serialize = "CROXEL, INC.")]
    CROXELINC,
    /// Syng Inc
    #[strum(serialize = "Syng Inc")]
    SyngInc,
    /// RIDE VISION LTD
    #[strum(serialize = "RIDE VISION LTD")]
    RIDEVISIONLTD,
    /// Plume Design Inc
    #[strum(serialize = "Plume Design Inc")]
    PlumeDesignInc,
    /// Cambridge Animal Technologies Ltd
    #[strum(serialize = "Cambridge Animal Technologies Ltd")]
    CambridgeAnimalTechnologiesLtd,
    /// Maxell, Ltd.
    #[strum(serialize = "Maxell, Ltd.")]
    MaxellLtd,
    /// Link Labs, Inc.
    #[strum(serialize = "Link Labs, Inc.")]
    LinkLabsInc,
    /// Embrava Pty Ltd
    #[strum(serialize = "Embrava Pty Ltd")]
    EmbravaPtyLtd,
    /// INPEAK S.C.
    #[strum(serialize = "INPEAK S.C.")]
    INPEAKSC,
    /// API-K
    #[strum(serialize = "API-K")]
    APIK,
    /// CombiQ AB
    #[strum(serialize = "CombiQ AB")]
    CombiQAB,
    /// DeVilbiss Healthcare LLC
    #[strum(serialize = "DeVilbiss Healthcare LLC")]
    DeVilbissHealthcareLLC,
    /// Jiangxi Innotech Technology Co., Ltd
    #[strum(serialize = "Jiangxi Innotech Technology Co., Ltd")]
    JiangxiInnotechTechnologyCoLtd,
    /// Apollogic Sp. z o.o.
    #[strum(serialize = "Apollogic Sp. z o.o.")]
    ApollogicSpZOO,
    /// DAIICHIKOSHO CO., LTD.
    #[strum(serialize = "DAIICHIKOSHO CO., LTD.")]
    DAIICHIKOSHOCOLTD,
    /// BIXOLON CO.,LTD
    #[strum(serialize = "BIXOLON CO.,LTD")]
    BIXOLONCOLTD,
    /// Atmosic Technologies, Inc.
    #[strum(serialize = "Atmosic Technologies, Inc.")]
    AtmosicTechnologiesInc,
    /// Eran Financial Services LLC
    #[strum(serialize = "Eran Financial Services LLC")]
    EranFinancialServicesLLC,
    /// Louis Vuitton
    #[strum(serialize = "Louis Vuitton")]
    LouisVuitton,
    /// AYU DEVICES PRIVATE LIMITED
    #[strum(serialize = "AYU DEVICES PRIVATE LIMITED")]
    AYUDEVICESPRIVATELIMITED,
    /// NanoFlex
    #[strum(serialize = "NanoFlex")]
    NanoFlex,
    /// Worthcloud Technology Co.,Ltd
    #[strum(serialize = "Worthcloud Technology Co.,Ltd")]
    WorthcloudTechnologyCoLtd,
    /// Yamaha Corporation
    #[strum(serialize = "Yamaha Corporation")]
    YamahaCorporation,
    /// PaceBait IVS
    #[strum(serialize = "PaceBait IVS")]
    PaceBaitIVS,
    /// Shenzhen H&T Intelligent Control Co., Ltd
    #[strum(serialize = "Shenzhen H&T Intelligent Control Co., Ltd")]
    ShenzhenHTIntelligentControlCoLtd,
    /// Shenzhen Feasycom Technology Co., Ltd.
    #[strum(serialize = "Shenzhen Feasycom Technology Co., Ltd.")]
    ShenzhenFeasycomTechnologyCoLtd,
    /// Zuma Array Limited
    #[strum(serialize = "Zuma Array Limited")]
    ZumaArrayLimited,
    /// Instamic, Inc.
    #[strum(serialize = "Instamic, Inc.")]
    InstamicInc,
    /// Air-Weigh
    #[strum(serialize = "Air-Weigh")]
    AirWeigh,
    /// Nevro Corp.
    #[strum(serialize = "Nevro Corp.")]
    NevroCorp,
    /// Pinnacle Technology, Inc.
    #[strum(serialize = "Pinnacle Technology, Inc.")]
    PinnacleTechnologyInc,
    /// WMF AG
    #[strum(serialize = "WMF AG")]
    WMFAG,
    /// Luxer Corporation
    #[strum(serialize = "Luxer Corporation")]
    LuxerCorporation,
    /// safectory GmbH
    #[strum(serialize = "safectory GmbH")]
    SafectoryGmbH,
    /// NGK SPARK PLUG CO., LTD.
    #[strum(serialize = "NGK SPARK PLUG CO., LTD.")]
    NGKSPARKPLUGCOLTD,
    /// 2587702 Ontario Inc.
    #[strum(serialize = "2587702 Ontario Inc.")]
    N2587702OntarioInc,
    /// Bouffalo Lab (Nanjing)., Ltd.
    #[strum(serialize = "Bouffalo Lab (Nanjing)., Ltd.")]
    BouffaloLabNanjingLtd,
    /// BLUETICKETING SRL
    #[strum(serialize = "BLUETICKETING SRL")]
    BLUETICKETINGSRL,
    /// Incotex Co. Ltd.
    #[strum(serialize = "Incotex Co. Ltd.")]
    IncotexCoLtd,
    /// Galileo Technology Limited
    #[strum(serialize = "Galileo Technology Limited")]
    GalileoTechnologyLimited,
    /// Siteco GmbH
    #[strum(serialize = "Siteco GmbH")]
    SitecoGmbH,
    /// DELABIE
    #[strum(serialize = "DELABIE")]
    DELABIE,
    /// Hefei Yunlian Semiconductor Co., Ltd
    #[strum(serialize = "Hefei Yunlian Semiconductor Co., Ltd")]
    HefeiYunlianSemiconductorCoLtd,
    /// Shenzhen Yopeak Optoelectronics Technology Co., Ltd.
    #[strum(serialize = "Shenzhen Yopeak Optoelectronics Technology Co., Ltd.")]
    ShenzhenYopeakOptoelectronicsTechnologyCoLtd,
    /// GEWISS S.p.A.
    #[strum(serialize = "GEWISS S.p.A.")]
    GEWISSSPA,
    /// OPEX Corporation
    #[strum(serialize = "OPEX Corporation")]
    OPEXCorporation,
    /// Motionalysis, Inc.
    #[strum(serialize = "Motionalysis, Inc.")]
    MotionalysisInc,
    /// Busch Systems International Inc.
    #[strum(serialize = "Busch Systems International Inc.")]
    BuschSystemsInternationalInc,
    /// Novidan, Inc.
    #[strum(serialize = "Novidan, Inc.")]
    NovidanInc,
    /// 3SI Security Systems, Inc
    #[strum(serialize = "3SI Security Systems, Inc")]
    N3SISecuritySystemsInc,
    /// Beijing HC-Infinite Technology Limited
    #[strum(serialize = "Beijing HC-Infinite Technology Limited")]
    BeijingHCInfiniteTechnologyLimited,
    /// The Wand Company Ltd
    #[strum(serialize = "The Wand Company Ltd")]
    TheWandCompanyLtd,
    /// JRC Mobility Inc.
    #[strum(serialize = "JRC Mobility Inc.")]
    JRCMobilityInc,
    /// Venture Research Inc.
    #[strum(serialize = "Venture Research Inc.")]
    VentureResearchInc,
    /// Map Large, Inc.
    #[strum(serialize = "Map Large, Inc.")]
    MapLargeInc,
    /// MistyWest Energy and Transport Ltd.
    #[strum(serialize = "MistyWest Energy and Transport Ltd.")]
    MistyWestEnergyAndTransportLtd,
    /// SiFli Technologies (shanghai) Inc.
    #[strum(serialize = "SiFli Technologies (shanghai) Inc.")]
    SiFliTechnologiesShanghaiInc,
    /// Lockn Technologies Private Limited
    #[strum(serialize = "Lockn Technologies Private Limited")]
    LocknTechnologiesPrivateLimited,
    /// Toytec Corporation
    #[strum(serialize = "Toytec Corporation")]
    ToytecCorporation,
    /// VANMOOF Global Holding B.V.
    #[strum(serialize = "VANMOOF Global Holding B.V.")]
    VANMOOFGlobalHoldingBV,
    /// Nextscape Inc.
    #[strum(serialize = "Nextscape Inc.")]
    NextscapeInc,
    /// CSIRO
    #[strum(serialize = "CSIRO")]
    CSIRO,
    /// Follow Sense Europe B.V.
    #[strum(serialize = "Follow Sense Europe B.V.")]
    FollowSenseEuropeBV,
    /// KKM COMPANY LIMITED
    #[strum(serialize = "KKM COMPANY LIMITED")]
    KKMCOMPANYLIMITED,
    /// SQL Technologies Corp.
    #[strum(serialize = "SQL Technologies Corp.")]
    SQLTechnologiesCorp,
    /// Inugo Systems Limited
    #[strum(serialize = "Inugo Systems Limited")]
    InugoSystemsLimited,
    /// ambie
    #[strum(serialize = "ambie")]
    Ambie,
    /// Meizhou Guo Wei Electronics Co., Ltd
    #[strum(serialize = "Meizhou Guo Wei Electronics Co., Ltd")]
    MeizhouGuoWeiElectronicsCoLtd,
    /// Indigo Diabetes
    #[strum(serialize = "Indigo Diabetes")]
    IndigoDiabetes,
    /// TourBuilt, LLC
    #[strum(serialize = "TourBuilt, LLC")]
    TourBuiltLLC,
    /// Sontheim Industrie Elektronik GmbH
    #[strum(serialize = "Sontheim Industrie Elektronik GmbH")]
    SontheimIndustrieElektronikGmbH,
    /// LEGIC Identsystems AG
    #[strum(serialize = "LEGIC Identsystems AG")]
    LEGICIdentsystemsAG,
    /// Innovative Design Labs Inc.
    #[strum(serialize = "Innovative Design Labs Inc.")]
    InnovativeDesignLabsInc,
    /// MG Energy Systems B.V.
    #[strum(serialize = "MG Energy Systems B.V.")]
    MGEnergySystemsBV,
    /// LaceClips llc
    #[strum(serialize = "LaceClips llc")]
    LaceClipsLlc,
    /// stryker
    #[strum(serialize = "stryker")]
    Stryker,
    /// DATANG SEMICONDUCTOR TECHNOLOGY CO.,LTD
    #[strum(serialize = "DATANG SEMICONDUCTOR TECHNOLOGY CO.,LTD")]
    DATANGSEMICONDUCTORTECHNOLOGYCOLTD,
    /// Smart Parks B.V.
    #[strum(serialize = "Smart Parks B.V.")]
    SmartParksBV,
    /// MOKO TECHNOLOGY Ltd
    #[strum(serialize = "MOKO TECHNOLOGY Ltd")]
    MOKOTECHNOLOGYLtd,
    /// Gremsy JSC
    #[strum(serialize = "Gremsy JSC")]
    GremsyJSC,
    /// Geopal system A/S
    #[strum(serialize = "Geopal system A/S")]
    GeopalSystemAS,
    /// Lytx, INC.
    #[strum(serialize = "Lytx, INC.")]
    LytxINC,
    /// JUSTMORPH PTE. LTD.
    #[strum(serialize = "JUSTMORPH PTE. LTD.")]
    JUSTMORPHPTELTD,
    /// Beijing SuperHexa Century Technology CO. Ltd
    #[strum(serialize = "Beijing SuperHexa Century Technology CO. Ltd")]
    BeijingSuperHexaCenturyTechnologyCOLtd,
    /// Focus Ingenieria SRL
    #[strum(serialize = "Focus Ingenieria SRL")]
    FocusIngenieriaSRL,
    /// HAPPIEST BABY, INC.
    #[strum(serialize = "HAPPIEST BABY, INC.")]
    HAPPIESTBABYINC,
    /// Scribble Design Inc.
    #[strum(serialize = "Scribble Design Inc.")]
    ScribbleDesignInc,
    /// Olympic Ophthalmics, Inc.
    #[strum(serialize = "Olympic Ophthalmics, Inc.")]
    OlympicOphthalmicsInc,
    /// Pokkels
    #[strum(serialize = "Pokkels")]
    Pokkels,
    /// KUUKANJYOKIN Co.,Ltd.
    #[strum(serialize = "KUUKANJYOKIN Co.,Ltd.")]
    KUUKANJYOKINCoLtd,
    /// Pac Sane Limited
    #[strum(serialize = "Pac Sane Limited")]
    PacSaneLimited,
    /// Warner Bros.
    #[strum(serialize = "Warner Bros.")]
    WarnerBros,
    /// Ooma
    #[strum(serialize = "Ooma")]
    Ooma,
    /// Senquip Pty Ltd
    #[strum(serialize = "Senquip Pty Ltd")]
    SenquipPtyLtd,
    /// Jumo GmbH & Co. KG
    #[strum(serialize = "Jumo GmbH & Co. KG")]
    JumoGmbHCoKG,
    /// Innohome Oy
    #[strum(serialize = "Innohome Oy")]
    InnohomeOy,
    /// MICROSON S.A.
    #[strum(serialize = "MICROSON S.A.")]
    MICROSONSA,
    /// Delta Cycle Corporation
    #[strum(serialize = "Delta Cycle Corporation")]
    DeltaCycleCorporation,
    /// Synaptics Incorporated
    #[strum(serialize = "Synaptics Incorporated")]
    SynapticsIncorporated,
    /// JMD PACIFIC PTE. LTD.
    #[strum(serialize = "JMD PACIFIC PTE. LTD.")]
    JMDPACIFICPTELTD,
    /// Shenzhen Sunricher Technology Limited
    #[strum(serialize = "Shenzhen Sunricher Technology Limited")]
    ShenzhenSunricherTechnologyLimited,
    /// Webasto SE
    #[strum(serialize = "Webasto SE")]
    WebastoSE,
    /// Emlid Limited
    #[strum(serialize = "Emlid Limited")]
    EmlidLimited,
    /// UniqAir Oy
    #[strum(serialize = "UniqAir Oy")]
    UniqAirOy,
    /// WAFERLOCK
    #[strum(serialize = "WAFERLOCK")]
    WAFERLOCK,
    /// Freedman Electronics Pty Ltd
    #[strum(serialize = "Freedman Electronics Pty Ltd")]
    FreedmanElectronicsPtyLtd,
    /// Keba AG
    #[strum(serialize = "Keba AG")]
    KebaAG,
    /// Intuity Medical
    #[strum(serialize = "Intuity Medical")]
    IntuityMedical,
    /// Cleer Limited
    #[strum(serialize = "Cleer Limited")]
    CleerLimited,
    /// Universal Biosensors Pty Ltd
    #[strum(serialize = "Universal Biosensors Pty Ltd")]
    UniversalBiosensorsPtyLtd,
    /// Corsair
    #[strum(serialize = "Corsair")]
    Corsair,
    /// Rivata, Inc.
    #[strum(serialize = "Rivata, Inc.")]
    RivataInc,
    /// Greennote Inc,
    #[strum(serialize = "Greennote Inc,")]
    GreennoteInc,
    /// Snowball Technology Co., Ltd.
    #[strum(serialize = "Snowball Technology Co., Ltd.")]
    SnowballTechnologyCoLtd,
    /// ALIZENT International
    #[strum(serialize = "ALIZENT International")]
    ALIZENTInternational,
    /// Shanghai Smart System Technology Co., Ltd
    #[strum(serialize = "Shanghai Smart System Technology Co., Ltd")]
    ShanghaiSmartSystemTechnologyCoLtd,
    /// PSA Peugeot Citroen
    #[strum(serialize = "PSA Peugeot Citroen")]
    PSAPeugeotCitroen,
    /// SES-Imagotag
    #[strum(serialize = "SES-Imagotag")]
    SESImagotag,
    /// HAINBUCH SPANNENDE TECHNIK
    #[strum(serialize = "HAINBUCH SPANNENDE TECHNIK")]
    HAINBUCHSPANNENDETECHNIK,
    /// SANlight GmbH
    #[strum(serialize = "SANlight GmbH")]
    SANlightGmbH,
    /// DelpSys, s.r.o.
    #[strum(serialize = "DelpSys, s.r.o.")]
    DelpSysSRO,
    /// JCM TECHNOLOGIES S.A.
    #[strum(serialize = "JCM TECHNOLOGIES S.A.")]
    JCMTECHNOLOGIESSA,
    /// Perfect Company
    #[strum(serialize = "Perfect Company")]
    PerfectCompany,
    /// TOTO LTD.
    #[strum(serialize = "TOTO LTD.")]
    TOTOLTD,
    /// Shenzhen Grandsun Electronic Co.,Ltd.
    #[strum(serialize = "Shenzhen Grandsun Electronic Co.,Ltd.")]
    ShenzhenGrandsunElectronicCoLtd,
    /// Monarch International Inc.
    #[strum(serialize = "Monarch International Inc.")]
    MonarchInternationalInc,
    /// Carestream Dental LLC
    #[strum(serialize = "Carestream Dental LLC")]
    CarestreamDentalLLC,
    /// GiPStech S.r.l.
    #[strum(serialize = "GiPStech S.r.l.")]
    GiPStechSRL,
    /// OOBIK Inc.
    #[strum(serialize = "OOBIK Inc.")]
    OOBIKInc,
    /// Pamex Inc.
    #[strum(serialize = "Pamex Inc.")]
    PamexInc,
    /// Lightricity Ltd
    #[strum(serialize = "Lightricity Ltd")]
    LightricityLtd,
    /// SensTek
    #[strum(serialize = "SensTek")]
    SensTek,
    /// Foil, Inc.
    #[strum(serialize = "Foil, Inc.")]
    FoilInc,
    /// Shanghai high-flying electronics technology Co.,Ltd
    #[strum(serialize = "Shanghai high-flying electronics technology Co.,Ltd")]
    ShanghaiHighFlyingElectronicsTechnologyCoLtd,
    /// TEMKIN ASSOCIATES, LLC
    #[strum(serialize = "TEMKIN ASSOCIATES, LLC")]
    TEMKINASSOCIATESLLC,
    /// Eello LLC
    #[strum(serialize = "Eello LLC")]
    EelloLLC,
    /// Xi'an Fengyu Information Technology Co., Ltd.
    #[strum(serialize = "Xi'an Fengyu Information Technology Co., Ltd.")]
    XiAnFengyuInformationTechnologyCoLtd,
    /// Canon Finetech Nisca Inc.
    #[strum(serialize = "Canon Finetech Nisca Inc.")]
    CanonFinetechNiscaInc,
    /// LifePlus, Inc.
    #[strum(serialize = "LifePlus, Inc.")]
    LifePlusInc,
    /// ista International GmbH
    #[strum(serialize = "ista International GmbH")]
    IstaInternationalGmbH,
    /// Loy Tec electronics GmbH
    #[strum(serialize = "Loy Tec electronics GmbH")]
    LoyTecElectronicsGmbH,
    /// LINCOGN TECHNOLOGY CO. LIMITED
    #[strum(serialize = "LINCOGN TECHNOLOGY CO. LIMITED")]
    LINCOGNTECHNOLOGYCOLIMITED,
    /// Care Bloom, LLC
    #[strum(serialize = "Care Bloom, LLC")]
    CareBloomLLC,
    /// DIC Corporation
    #[strum(serialize = "DIC Corporation")]
    DICCorporation,
    /// FAZEPRO LLC
    #[strum(serialize = "FAZEPRO LLC")]
    FAZEPROLLC,
    /// Shenzhen Uascent Technology Co., Ltd
    #[strum(serialize = "Shenzhen Uascent Technology Co., Ltd")]
    ShenzhenUascentTechnologyCoLtd,
    /// Realityworks, inc.
    #[strum(serialize = "Realityworks, inc.")]
    RealityworksInc,
    /// Urbanista AB
    #[strum(serialize = "Urbanista AB")]
    UrbanistaAB,
    /// Zencontrol Pty Ltd
    #[strum(serialize = "Zencontrol Pty Ltd")]
    ZencontrolPtyLtd,
    /// Mrinq Technologies LLC
    #[strum(serialize = "Mrinq Technologies LLC")]
    MrinqTechnologiesLLC,
    /// Computime International Ltd
    #[strum(serialize = "Computime International Ltd")]
    ComputimeInternationalLtd,
    /// Anhui Listenai Co
    #[strum(serialize = "Anhui Listenai Co")]
    AnhuiListenaiCo,
    /// OSM HK Limited
    #[strum(serialize = "OSM HK Limited")]
    OSMHKLimited,
    /// Adevo Consulting AB
    #[strum(serialize = "Adevo Consulting AB")]
    AdevoConsultingAB,
    /// PS Engineering, Inc.
    #[strum(serialize = "PS Engineering, Inc.")]
    PSEngineeringInc,
    /// AIAIAI ApS
    #[strum(serialize = "AIAIAI ApS")]
    AIAIAIApS,
    /// Visiontronic s.r.o.
    #[strum(serialize = "Visiontronic s.r.o.")]
    VisiontronicSRO,
    /// InVue Security Products Inc
    #[strum(serialize = "InVue Security Products Inc")]
    InVueSecurityProductsInc,
    /// TouchTronics, Inc.
    #[strum(serialize = "TouchTronics, Inc.")]
    TouchTronicsInc,
    /// INNER RANGE PTY. LTD.
    #[strum(serialize = "INNER RANGE PTY. LTD.")]
    INNERRANGEPTYLTD,
    /// Ellenby Technologies, Inc.
    #[strum(serialize = "Ellenby Technologies, Inc.")]
    EllenbyTechnologiesInc,
    /// Elstat Ltd [ Formerly Elstat Electronics Ltd.]
    #[strum(serialize = "Elstat Ltd [ Formerly Elstat Electronics Ltd.]")]
    ElstatLtdFormerlyElstatElectronicsLtd,
    /// Xenter, Inc.
    #[strum(serialize = "Xenter, Inc.")]
    XenterInc,
    /// LogTag North America Inc.
    #[strum(serialize = "LogTag North America Inc.")]
    LogTagNorthAmericaInc,
    /// Sens.ai Incorporated
    #[strum(serialize = "Sens.ai Incorporated")]
    SensAiIncorporated,
    /// STL
    #[strum(serialize = "STL")]
    STL,
    /// Open Bionics Ltd.
    #[strum(serialize = "Open Bionics Ltd.")]
    OpenBionicsLtd,
    /// R-DAS, s.r.o.
    #[strum(serialize = "R-DAS, s.r.o.")]
    RDASSRO,
    /// KCCS Mobile Engineering Co., Ltd.
    #[strum(serialize = "KCCS Mobile Engineering Co., Ltd.")]
    KCCSMobileEngineeringCoLtd,
    /// Inventas AS
    #[strum(serialize = "Inventas AS")]
    InventasAS,
    /// Robkoo Information & Technologies Co., Ltd.
    #[strum(serialize = "Robkoo Information & Technologies Co., Ltd.")]
    RobkooInformationTechnologiesCoLtd,
    /// PAUL HARTMANN AG
    #[strum(serialize = "PAUL HARTMANN AG")]
    PAULHARTMANNAG,
    /// Omni-ID USA, INC.
    #[strum(serialize = "Omni-ID USA, INC.")]
    OmniIDUSAINC,
    /// Shenzhen Jingxun Technology Co., Ltd.
    #[strum(serialize = "Shenzhen Jingxun Technology Co., Ltd.")]
    ShenzhenJingxunTechnologyCoLtd,
    /// RealMega Microelectronics technology (Shanghai) Co. Ltd.
    #[strum(serialize = "RealMega Microelectronics technology (Shanghai) Co. Ltd.")]
    RealMegaMicroelectronicsTechnologyShanghaiCoLtd,
    /// Kenzen, Inc.
    #[strum(serialize = "Kenzen, Inc.")]
    KenzenInc,
    /// CODIUM
    #[strum(serialize = "CODIUM")]
    CODIUM,
    /// Flexoptix GmbH
    #[strum(serialize = "Flexoptix GmbH")]
    FlexoptixGmbH,
    /// Barnes Group Inc.
    #[strum(serialize = "Barnes Group Inc.")]
    BarnesGroupInc,
    /// Chengdu Aich Technology Co.,Ltd
    #[strum(serialize = "Chengdu Aich Technology Co.,Ltd")]
    ChengduAichTechnologyCoLtd,
    /// Keepin Co., Ltd.
    #[strum(serialize = "Keepin Co., Ltd.")]
    KeepinCoLtd,
    /// Swedlock AB
    #[strum(serialize = "Swedlock AB")]
    SwedlockAB,
    /// Shenzhen CoolKit Technology Co., Ltd
    #[strum(serialize = "Shenzhen CoolKit Technology Co., Ltd")]
    ShenzhenCoolKitTechnologyCoLtd,
    /// ise Individuelle Software und Elektronik GmbH
    #[strum(serialize = "ise Individuelle Software und Elektronik GmbH")]
    IseIndividuelleSoftwareUndElektronikGmbH,
    /// Nuvoton
    #[strum(serialize = "Nuvoton")]
    Nuvoton,
    /// Visuallex Sport International Limited
    #[strum(serialize = "Visuallex Sport International Limited")]
    VisuallexSportInternationalLimited,
    /// KOBATA GAUGE MFG. CO., LTD.
    #[strum(serialize = "KOBATA GAUGE MFG. CO., LTD.")]
    KOBATAGAUGEMFGCOLTD,
    /// CACI Technologies
    #[strum(serialize = "CACI Technologies")]
    CACITechnologies,
    /// Nordic Strong ApS
    #[strum(serialize = "Nordic Strong ApS")]
    NordicStrongApS,
    /// EAGLE KINGDOM TECHNOLOGIES LIMITED
    #[strum(serialize = "EAGLE KINGDOM TECHNOLOGIES LIMITED")]
    EAGLEKINGDOMTECHNOLOGIESLIMITED,
    /// Lautsprecher Teufel GmbH
    #[strum(serialize = "Lautsprecher Teufel GmbH")]
    LautsprecherTeufelGmbH,
    /// SSV Software Systems GmbH
    #[strum(serialize = "SSV Software Systems GmbH")]
    SSVSoftwareSystemsGmbH,
    /// Zhuhai Pantum Electronisc Co., Ltd
    #[strum(serialize = "Zhuhai Pantum Electronisc Co., Ltd")]
    ZhuhaiPantumElectroniscCoLtd,
    /// Streamit B.V.
    #[strum(serialize = "Streamit B.V.")]
    StreamitBV,
    /// nymea GmbH
    #[strum(serialize = "nymea GmbH")]
    NymeaGmbH,
    /// AL-KO Geraete GmbH
    #[strum(serialize = "AL-KO Geraete GmbH")]
    ALKOGeraeteGmbH,
    /// Franz Kaldewei GmbH&Co KG
    #[strum(serialize = "Franz Kaldewei GmbH&Co KG")]
    FranzKaldeweiGmbHCoKG,
    /// Shenzhen Aimore. Co.,Ltd
    #[strum(serialize = "Shenzhen Aimore. Co.,Ltd")]
    ShenzhenAimoreCoLtd,
    /// Codefabrik GmbH
    #[strum(serialize = "Codefabrik GmbH")]
    CodefabrikGmbH,
    /// Reelables, Inc.
    #[strum(serialize = "Reelables, Inc.")]
    ReelablesInc,
    /// Duravit AG
    #[strum(serialize = "Duravit AG")]
    DuravitAG,
    /// Boss Audio
    #[strum(serialize = "Boss Audio")]
    BossAudio,
    /// Vocera Communications, Inc.
    #[strum(serialize = "Vocera Communications, Inc.")]
    VoceraCommunicationsInc,
    /// Douglas Dynamics L.L.C.
    #[strum(serialize = "Douglas Dynamics L.L.C.")]
    DouglasDynamicsLLC,
    /// Viceroy Devices Corporation
    #[strum(serialize = "Viceroy Devices Corporation")]
    ViceroyDevicesCorporation,
    /// ChengDu ForThink Technology Co., Ltd.
    #[strum(serialize = "ChengDu ForThink Technology Co., Ltd.")]
    ChengDuForThinkTechnologyCoLtd,
    /// IMATRIX SYSTEMS, INC.
    #[strum(serialize = "IMATRIX SYSTEMS, INC.")]
    IMATRIXSYSTEMSINC,
    /// GlobalMed
    #[strum(serialize = "GlobalMed")]
    GlobalMed,
    /// DALI Alliance
    #[strum(serialize = "DALI Alliance")]
    DALIAlliance,
    /// unu GmbH
    #[strum(serialize = "unu GmbH")]
    UnuGmbH,
    /// Hexology
    #[strum(serialize = "Hexology")]
    Hexology,
    /// Sunplus Technology Co., Ltd.
    #[strum(serialize = "Sunplus Technology Co., Ltd.")]
    SunplusTechnologyCoLtd,
    /// LEVEL, s.r.o.
    #[strum(serialize = "LEVEL, s.r.o.")]
    LEVELSRO,
    /// FLIR Systems AB
    #[strum(serialize = "FLIR Systems AB")]
    FLIRSystemsAB,
    /// Borda Technology
    #[strum(serialize = "Borda Technology")]
    BordaTechnology,
    /// Square, Inc.
    #[strum(serialize = "Square, Inc.")]
    SquareInc,
    /// FUTEK ADVANCED SENSOR TECHNOLOGY, INC
    #[strum(serialize = "FUTEK ADVANCED SENSOR TECHNOLOGY, INC")]
    FUTEKADVANCEDSENSORTECHNOLOGYINC,
    /// Saxonar GmbH
    #[strum(serialize = "Saxonar GmbH")]
    SaxonarGmbH,
    /// Velentium, LLC
    #[strum(serialize = "Velentium, LLC")]
    VelentiumLLC,
    /// GLP German Light Products GmbH
    #[strum(serialize = "GLP German Light Products GmbH")]
    GLPGermanLightProductsGmbH,
    /// Leupold & Stevens, Inc.
    #[strum(serialize = "Leupold & Stevens, Inc.")]
    LeupoldStevensInc,
    /// CRADERS,CO.,LTD
    #[strum(serialize = "CRADERS,CO.,LTD")]
    CRADERSCOLTD,
    /// Shanghai All Link Microelectronics Co.,Ltd
    #[strum(serialize = "Shanghai All Link Microelectronics Co.,Ltd")]
    ShanghaiAllLinkMicroelectronicsCoLtd,
    /// 701x Inc.
    #[strum(serialize = "701x Inc.")]
    N701xInc,
    /// Radioworks Microelectronics PTY LTD
    #[strum(serialize = "Radioworks Microelectronics PTY LTD")]
    RadioworksMicroelectronicsPTYLTD,
    /// Unitech Electronic Inc.
    #[strum(serialize = "Unitech Electronic Inc.")]
    UnitechElectronicInc,
    /// AMETEK, Inc.
    #[strum(serialize = "AMETEK, Inc.")]
    AMETEKInc,
    /// Irdeto
    #[strum(serialize = "Irdeto")]
    Irdeto,
    /// First Design System Inc.
    #[strum(serialize = "First Design System Inc.")]
    FirstDesignSystemInc,
    /// Unisto AG
    #[strum(serialize = "Unisto AG")]
    UnistoAG,
    /// Chengdu Ambit Technology Co., Ltd.
    #[strum(serialize = "Chengdu Ambit Technology Co., Ltd.")]
    ChengduAmbitTechnologyCoLtd,
    /// SMT ELEKTRONIK GmbH
    #[strum(serialize = "SMT ELEKTRONIK GmbH")]
    SMTELEKTRONIKGmbH,
    /// Cerebrum Sensor Technologies Inc.
    #[strum(serialize = "Cerebrum Sensor Technologies Inc.")]
    CerebrumSensorTechnologiesInc,
    /// Weber Sensors, LLC
    #[strum(serialize = "Weber Sensors, LLC")]
    WeberSensorsLLC,
    /// Earda Technologies Co.,Ltd
    #[strum(serialize = "Earda Technologies Co.,Ltd")]
    EardaTechnologiesCoLtd,
    /// FUSEAWARE LIMITED
    #[strum(serialize = "FUSEAWARE LIMITED")]
    FUSEAWARELIMITED,
    /// Flaircomm Microelectronics Inc.
    #[strum(serialize = "Flaircomm Microelectronics Inc.")]
    FlaircommMicroelectronicsInc,
    /// RESIDEO TECHNOLOGIES, INC.
    #[strum(serialize = "RESIDEO TECHNOLOGIES, INC.")]
    RESIDEOTECHNOLOGIESINC,
    /// IORA Technology Development Ltd. Sti.
    #[strum(serialize = "IORA Technology Development Ltd. Sti.")]
    IORATechnologyDevelopmentLtdSti,
    /// Precision Triathlon Systems Limited
    #[strum(serialize = "Precision Triathlon Systems Limited")]
    PrecisionTriathlonSystemsLimited,
    /// I-PERCUT
    #[strum(serialize = "I-PERCUT")]
    IPERCUT,
    /// Marquardt GmbH
    #[strum(serialize = "Marquardt GmbH")]
    MarquardtGmbH,
    /// FAZUA GmbH
    #[strum(serialize = "FAZUA GmbH")]
    FAZUAGmbH,
    /// Workaround Gmbh
    #[strum(serialize = "Workaround Gmbh")]
    WorkaroundGmbh,
    /// Shenzhen Qianfenyi Intelligent Technology Co., LTD
    #[strum(serialize = "Shenzhen Qianfenyi Intelligent Technology Co., LTD")]
    ShenzhenQianfenyiIntelligentTechnologyCoLTD,
    /// soonisys
    #[strum(serialize = "soonisys")]
    Soonisys,
    /// Belun Technology Company Limited
    #[strum(serialize = "Belun Technology Company Limited")]
    BelunTechnologyCompanyLimited,
    /// Sanistaal A/S
    #[strum(serialize = "Sanistaal A/S")]
    SanistaalAS,
    /// BluPeak
    #[strum(serialize = "BluPeak")]
    BluPeak,
    /// SANYO DENKO Co.,Ltd.
    #[strum(serialize = "SANYO DENKO Co.,Ltd.")]
    SANYODENKOCoLtd,
    /// Honda Lock Mfg. Co.,Ltd.
    #[strum(serialize = "Honda Lock Mfg. Co.,Ltd.")]
    HondaLockMfgCoLtd,
    /// B.E.A. S.A.
    #[strum(serialize = "B.E.A. S.A.")]
    BEASA,
    /// Alfa Laval Corporate AB
    #[strum(serialize = "Alfa Laval Corporate AB")]
    AlfaLavalCorporateAB,
    /// ThermoWorks, Inc.
    #[strum(serialize = "ThermoWorks, Inc.")]
    ThermoWorksInc,
    /// ToughBuilt Industries LLC
    #[strum(serialize = "ToughBuilt Industries LLC")]
    ToughBuiltIndustriesLLC,
    /// IOTOOLS
    #[strum(serialize = "IOTOOLS")]
    IOTOOLS,
    /// Olumee
    #[strum(serialize = "Olumee")]
    Olumee,
    /// NAOS JAPAN K.K.
    #[strum(serialize = "NAOS JAPAN K.K.")]
    NAOSJAPANKK,
    /// Guard RFID Solutions Inc.
    #[strum(serialize = "Guard RFID Solutions Inc.")]
    GuardRFIDSolutionsInc,
    /// SIG SAUER, INC.
    #[strum(serialize = "SIG SAUER, INC.")]
    SIGSAUERINC,
    /// DECATHLON SE
    #[strum(serialize = "DECATHLON SE")]
    DECATHLONSE,
    /// WBS PROJECT H PTY LTD
    #[strum(serialize = "WBS PROJECT H PTY LTD")]
    WBSPROJECTHPTYLTD,
    /// Roca Sanitario, S.A.
    #[strum(serialize = "Roca Sanitario, S.A.")]
    RocaSanitarioSA,
    /// Enerpac Tool Group Corp.
    #[strum(serialize = "Enerpac Tool Group Corp.")]
    EnerpacToolGroupCorp,
    /// Nanoleq AG
    #[strum(serialize = "Nanoleq AG")]
    NanoleqAG,
    /// Accelerated Systems
    #[strum(serialize = "Accelerated Systems")]
    AcceleratedSystems,
    /// PB INC.
    #[strum(serialize = "PB INC.")]
    PBINC,
    /// Beijing ESWIN Computing Technology Co., Ltd.
    #[strum(serialize = "Beijing ESWIN Computing Technology Co., Ltd.")]
    BeijingESWINComputingTechnologyCoLtd,
    /// TKH Security B.V.
    #[strum(serialize = "TKH Security B.V.")]
    TKHSecurityBV,
    /// ams AG
    #[strum(serialize = "ams AG")]
    AmsAG,
    /// Bluetooth SIG Specification Reserved Default Vendor ID for Remote Devices Without Device ID Service Record.
    #[strum(serialize = "Bluetooth SIG Specification Reserved Default Vendor ID for Remote Devices Without Device ID Service Record.")]
    BluetoothSIGSpecificationReservedDefaultVendorIDForRemoteDevicesWithoutDeviceIDServiceRecord,
}
impl From<Manufacturer> for u16 {
    fn from(s: Manufacturer) -> u16 {
        match s {
            Manufacturer::EricssonTechnologyLicensing => 0,
            Manufacturer::NokiaMobilePhones => 1,
            Manufacturer::IntelCorp => 2,
            Manufacturer::IBMCorp => 3,
            Manufacturer::ToshibaCorp => 4,
            Manufacturer::N3Com => 5,
            Manufacturer::Microsoft => 6,
            Manufacturer::Lucent => 7,
            Manufacturer::Motorola => 8,
            Manufacturer::InfineonTechnologiesAG => 9,
            Manufacturer::QualcommTechnologiesInternationalLtdQTIL => 10,
            Manufacturer::SiliconWave => 11,
            Manufacturer::DigianswerAS => 12,
            Manufacturer::TexasInstrumentsInc => 13,
            Manufacturer::ParthusTechnologiesInc => 14,
            Manufacturer::BroadcomCorporation => 15,
            Manufacturer::MitelSemiconductor => 16,
            Manufacturer::WidcommInc => 17,
            Manufacturer::ZeevoInc => 18,
            Manufacturer::AtmelCorporation => 19,
            Manufacturer::MitsubishiElectricCorporation => 20,
            Manufacturer::RTXTelecomAS => 21,
            Manufacturer::KCTechnologyInc => 22,
            Manufacturer::Newlogic => 23,
            Manufacturer::TransilicaInc => 24,
            Manufacturer::RohdeSchwarzGmbHCoKG => 25,
            Manufacturer::TTPComLimited => 26,
            Manufacturer::SigniaTechnologiesInc => 27,
            Manufacturer::ConexantSystemsInc => 28,
            Manufacturer::Qualcomm => 29,
            Manufacturer::Inventel => 30,
            Manufacturer::AVMBerlin => 31,
            Manufacturer::BandSpeedInc => 32,
            Manufacturer::MansellaLtd => 33,
            Manufacturer::NECCorporation => 34,
            Manufacturer::WavePlusTechnologyCoLtd => 35,
            Manufacturer::Alcatel => 36,
            Manufacturer::NXPSemiconductorsFormerlyPhilipsSemiconductors => 37,
            Manufacturer::CTechnologies => 38,
            Manufacturer::OpenInterface => 39,
            Manufacturer::RFMicroDevices => 40,
            Manufacturer::HitachiLtd => 41,
            Manufacturer::SymbolTechnologiesInc => 42,
            Manufacturer::Tenovis => 43,
            Manufacturer::MacronixInternationalCoLtd => 44,
            Manufacturer::GCTSemiconductor => 45,
            Manufacturer::NorwoodSystems => 46,
            Manufacturer::MewTelTechnologyInc => 47,
            Manufacturer::STMicroelectronics => 48,
            Manufacturer::SynopsysInc => 49,
            Manufacturer::RedMCommunicationsLtd => 50,
            Manufacturer::CommilLtd => 51,
            Manufacturer::ComputerAccessTechnologyCorporationCATC => 52,
            Manufacturer::EclipseHQEspanaSL => 53,
            Manufacturer::RenesasElectronicsCorporation => 54,
            Manufacturer::MobilianCorporation => 55,
            Manufacturer::SyntronixCorporation => 56,
            Manufacturer::IntegratedSystemSolutionCorp => 57,
            Manufacturer::PanasonicCorporationFormerlyMatsushitaElectricIndustrialCoLtd => 58,
            Manufacturer::GennumCorporation => 59,
            Manufacturer::BlackBerryLimitedFormerlyResearchInMotion => 60,
            Manufacturer::IPextremeInc => 61,
            Manufacturer::SystemsAndChipsInc => 62,
            Manufacturer::BluetoothSIGInc => 63,
            Manufacturer::SeikoEpsonCorporation => 64,
            Manufacturer::IntegratedSiliconSolutionTaiwanInc => 65,
            Manufacturer::CONWISETechnologyCorporationLtd => 66,
            Manufacturer::PARROTAUTOMOTIVESAS => 67,
            Manufacturer::SocketMobile => 68,
            Manufacturer::AtherosCommunicationsInc => 69,
            Manufacturer::MediaTekInc => 70,
            Manufacturer::Bluegiga => 71,
            Manufacturer::MarvellTechnologyGroupLtd => 72,
            Manufacturer::N3DSPCorporation => 73,
            Manufacturer::AccelSemiconductorLtd => 74,
            Manufacturer::ContinentalAutomotiveSystems => 75,
            Manufacturer::AppleInc => 76,
            Manufacturer::StaccatoCommunicationsInc => 77,
            Manufacturer::AvagoTechnologies => 78,
            Manufacturer::APTLtd => 79,
            Manufacturer::SiRFTechnologyInc => 80,
            Manufacturer::TzeroTechnologiesInc => 81,
            Manufacturer::JMCorporation => 82,
            Manufacturer::Free2moveAB => 83,
            Manufacturer::N3DiJoyCorporation => 84,
            Manufacturer::PlantronicsInc => 85,
            Manufacturer::SonyEricssonMobileCommunications => 86,
            Manufacturer::HarmanInternationalIndustriesInc => 87,
            Manufacturer::VizioInc => 88,
            Manufacturer::NordicSemiconductorASA => 89,
            Manufacturer::EMMicroelectronicMarinSA => 90,
            Manufacturer::RalinkTechnologyCorporation => 91,
            Manufacturer::BelkinInternationalInc => 92,
            Manufacturer::RealtekSemiconductorCorporation => 93,
            Manufacturer::StonestreetOneLLC => 94,
            Manufacturer::WicentricInc => 95,
            Manufacturer::RivieraWavesSAS => 96,
            Manufacturer::RDAMicroelectronics => 97,
            Manufacturer::GibsonGuitars => 98,
            Manufacturer::MiCommandInc => 99,
            Manufacturer::BandXIInternationalLLC => 100,
            Manufacturer::HPInc => 101,
            Manufacturer::N9SolutionsOy => 102,
            Manufacturer::GNNetcomAS => 103,
            Manufacturer::GeneralMotors => 104,
            Manufacturer::ADEngineeringInc => 105,
            Manufacturer::MindTreeLtd => 106,
            Manufacturer::PolarElectroOY => 107,
            Manufacturer::BeautifulEnterpriseCoLtd => 108,
            Manufacturer::BriarTekInc => 109,
            Manufacturer::SummitDataCommunicationsInc => 110,
            Manufacturer::SoundID => 111,
            Manufacturer::MonsterLLC => 112,
            Manufacturer::ConnectBlueAB => 113,
            Manufacturer::ShangHaiSuperSmartElectronicsCoLtd => 114,
            Manufacturer::GroupSenseLtd => 115,
            Manufacturer::ZommLLC => 116,
            Manufacturer::SamsungElectronicsCoLtd => 117,
            Manufacturer::CreativeTechnologyLtd => 118,
            Manufacturer::LairdTechnologies => 119,
            Manufacturer::NikeInc => 120,
            Manufacturer::LesswireAG => 121,
            Manufacturer::MStarSemiconductorInc => 122,
            Manufacturer::HanlynnTechnologies => 123,
            Manufacturer::ARCambridge => 124,
            Manufacturer::SeersTechnologyCoLtd => 125,
            Manufacturer::SportsTrackingTechnologiesLtd => 126,
            Manufacturer::AutonetMobile => 127,
            Manufacturer::DeLormePublishingCompanyInc => 128,
            Manufacturer::WuXiVimicro => 129,
            Manufacturer::SennheiserCommunicationsAS => 130,
            Manufacturer::TimeKeepingSystemsInc => 131,
            Manufacturer::LudusHelsinkiLtd => 132,
            Manufacturer::BlueRadiosInc => 133,
            Manufacturer::EquinuxAG => 134,
            Manufacturer::GarminInternationalInc => 135,
            Manufacturer::Ecotest => 136,
            Manufacturer::GNReSoundAS => 137,
            Manufacturer::Jawbone => 138,
            Manufacturer::TopconPositioningSystemsLLC => 139,
            Manufacturer::GimbalIncFormerlyQualcommLabsIncAndQualcommRetailSolutionsInc => 140,
            Manufacturer::ZscanSoftware => 141,
            Manufacturer::QuinticCorp => 142,
            Manufacturer::TelitWirelessSolutionsGmbHFormerlyStollmannEVGmbH => 143,
            Manufacturer::FunaiElectricCoLtd => 144,
            Manufacturer::AdvancedPANMOBILSystemsGmbHCoKG => 145,
            Manufacturer::ThinkOpticsInc => 146,
            Manufacturer::UniversalElectronicsInc => 147,
            Manufacturer::AirohaTechnologyCorp => 148,
            Manufacturer::NECLightingLtd => 149,
            Manufacturer::ODMTechnologyInc => 150,
            Manufacturer::ConnecteDeviceLtd => 151,
            Manufacturer::Zero1TvGmbH => 152,
            Manufacturer::ITechDynamicGlobalDistributionLtd => 153,
            Manufacturer::Alpwise => 154,
            Manufacturer::JiangsuToppowerAutomotiveElectronicsCoLtd => 155,
            Manufacturer::ColorfyInc => 156,
            Manufacturer::GeoforceInc => 157,
            Manufacturer::BoseCorporation => 158,
            Manufacturer::SuuntoOy => 159,
            Manufacturer::KensingtonComputerProductsGroup => 160,
            Manufacturer::SRMedizinelektronik => 161,
            Manufacturer::VertuCorporationLimited => 162,
            Manufacturer::MetaWatchLtd => 163,
            Manufacturer::LINAKAS => 164,
            Manufacturer::OTLDynamicsLLC => 165,
            Manufacturer::PandaOceanInc => 166,
            Manufacturer::VisteonCorporation => 167,
            Manufacturer::ARPDevicesLimited => 168,
            Manufacturer::MARELLIEUROPESPAFormerlyMagnetiMarelliSPA => 169,
            Manufacturer::CAENRFIDSrl => 170,
            Manufacturer::IngenieurSystemgruppeZahnGmbH => 171,
            Manufacturer::GreenThrottleGames => 172,
            Manufacturer::PeterSystemtechnikGmbH => 173,
            Manufacturer::OmegawaveOy => 174,
            Manufacturer::Cinetix => 175,
            Manufacturer::PassifSemiconductorCorp => 176,
            Manufacturer::SarisCyclingGroupInc => 177,
            Manufacturer::BekeyAS => 178,
            Manufacturer::ClarinoxTechnologiesPtyLtd => 179,
            Manufacturer::BDETechnologyCoLtd => 180,
            Manufacturer::SwirlNetworks => 181,
            Manufacturer::MesoInternational => 182,
            Manufacturer::TreLabLtd => 183,
            Manufacturer::QualcommInnovationCenterIncQuIC => 184,
            Manufacturer::JohnsonControlsInc => 185,
            Manufacturer::StarkeyLaboratoriesInc => 186,
            Manufacturer::SPowerElectronicsLimited => 187,
            Manufacturer::AceSensorInc => 188,
            Manufacturer::AplixCorporation => 189,
            Manufacturer::AAMPOfAmerica => 190,
            Manufacturer::StalmartTechnologyLimited => 191,
            Manufacturer::AMICCOMElectronicsCorporation => 192,
            Manufacturer::ShenzhenExcelsecuDataTechnologyCoLtd => 193,
            Manufacturer::GeneqInc => 194,
            Manufacturer::AdidasAG => 195,
            Manufacturer::LGElectronics => 196,
            Manufacturer::OnsetComputerCorporation => 197,
            Manufacturer::SelflyBV => 198,
            Manufacturer::QuuppaOy => 199,
            Manufacturer::GeLoInc => 200,
            Manufacturer::Evluma => 201,
            Manufacturer::MC10 => 202,
            Manufacturer::BinauricSE => 203,
            Manufacturer::BeatsElectronics => 204,
            Manufacturer::MicrochipTechnologyInc => 205,
            Manufacturer::ElgatoSystemsGmbH => 206,
            Manufacturer::ARCHOSSA => 207,
            Manufacturer::DexcomInc => 208,
            Manufacturer::PolarElectroEuropeBV => 209,
            Manufacturer::DialogSemiconductorBV => 210,
            Manufacturer::TaixingbangTechnologyHKCoLTD => 211,
            Manufacturer::Kawantech => 212,
            Manufacturer::AustcoCommunicationSystems => 213,
            Manufacturer::TimexGroupUSAInc => 214,
            Manufacturer::QualcommTechnologiesInc => 215,
            Manufacturer::QualcommConnectedExperiencesInc => 216,
            Manufacturer::VoyetraTurtleBeach => 217,
            Manufacturer::TxtrGmbH => 218,
            Manufacturer::Biosentronics => 219,
            Manufacturer::ProcterGamble => 220,
            Manufacturer::HosidenCorporation => 221,
            Manufacturer::MuzikLLC => 222,
            Manufacturer::MisfitWearablesCorp => 223,
            Manufacturer::Google => 224,
            Manufacturer::DanlersLtd => 225,
            Manufacturer::SemilinkInc => 226,
            Manufacturer::InMusicBrandsInc => 227,
            Manufacturer::LairdConnectivityIncFormerlyLSResearchInc => 228,
            Manufacturer::EdenSoftwareConsultantsLtd => 229,
            Manufacturer::Freshtemp => 230,
            Manufacturer::KSTechnologies => 231,
            Manufacturer::ACTSTechnologies => 232,
            Manufacturer::VtrackSystems => 233,
            Manufacturer::NielsenKellermanCompany => 234,
            Manufacturer::ServerTechnologyInc => 235,
            Manufacturer::BioResearchAssociates => 236,
            Manufacturer::JollyLogicLLC => 237,
            Manufacturer::AboveAverageOutcomesInc => 238,
            Manufacturer::BitsplittersGmbH => 239,
            Manufacturer::PayPalInc => 240,
            Manufacturer::WitronTechnologyLimited => 241,
            Manufacturer::MorseProjectInc => 242,
            Manufacturer::KentDisplaysInc => 243,
            Manufacturer::NautilusInc => 244,
            Manufacturer::SmartifierOy => 245,
            Manufacturer::ElcometerLimited => 246,
            Manufacturer::VSNTechnologiesInc => 247,
            Manufacturer::AceUniCorpLtd => 248,
            Manufacturer::StickNFind => 249,
            Manufacturer::CrystalCodeAB => 250,
            Manufacturer::KOUKAAMAS => 251,
            Manufacturer::DelphiCorporation => 252,
            Manufacturer::ValenceTechLimited => 253,
            Manufacturer::StanleyBlackAndDecker => 254,
            Manufacturer::TypoProductsLLC => 255,
            Manufacturer::TomTomInternationalBV => 256,
            Manufacturer::FugooInc => 257,
            Manufacturer::KeiserCorporation => 258,
            Manufacturer::BangOlufsenAS => 259,
            Manufacturer::PLUSLocationSystemsPtyLtd => 260,
            Manufacturer::UbiquitousComputingTechnologyCorporation => 261,
            Manufacturer::InnovativeYachtterSolutions => 262,
            Manufacturer::WilliamDemantHoldingAS => 263,
            Manufacturer::ChiconyElectronicsCoLtd => 264,
            Manufacturer::AtusBV => 265,
            Manufacturer::CodegateLtd => 266,
            Manufacturer::ERiInc => 267,
            Manufacturer::TransducersDirectLLC => 268,
            Manufacturer::DENSOTENLIMITEDFormerlyFujitsuTenLImited => 269,
            Manufacturer::AudiAG => 270,
            Manufacturer::HiSiliconTechnologiesCOLIMITED => 271,
            Manufacturer::NipponSeikiCoLtd => 272,
            Manufacturer::SteelseriesApS => 273,
            Manufacturer::VisyblInc => 274,
            Manufacturer::OpenbrainTechnologiesCoLtd => 275,
            Manufacturer::Xensr => 276,
            Manufacturer::ESolutions => 277,
            Manufacturer::N10AKTechnologies => 278,
            Manufacturer::WimotoTechnologiesInc => 279,
            Manufacturer::RadiusNetworksInc => 280,
            Manufacturer::WizeTechnologyCoLtd => 281,
            Manufacturer::QualcommLabsInc => 282,
            Manufacturer::HewlettPackardEnterprise => 283,
            Manufacturer::Baidu => 284,
            Manufacturer::ArendiAG => 285,
            Manufacturer::SkodaAutoAS => 286,
            Manufacturer::VolkswagenAG => 287,
            Manufacturer::PorscheAG => 288,
            Manufacturer::SinoWealthElectronicLtd => 289,
            Manufacturer::AirTurnInc => 290,
            Manufacturer::KinsaInc => 291,
            Manufacturer::HIDGlobal => 292,
            Manufacturer::SEATEs => 293,
            Manufacturer::PrometheanLtd => 294,
            Manufacturer::SaluticaAlliedSolutions => 295,
            Manufacturer::GPSIGroupPtyLtd => 296,
            Manufacturer::NimbleDevicesOy => 297,
            Manufacturer::ChangzhouYongseInfotechCoLtd => 298,
            Manufacturer::SportIQ => 299,
            Manufacturer::TEMECInstrumentsBV => 300,
            Manufacturer::SonyCorporation => 301,
            Manufacturer::ASSAABLOY => 302,
            Manufacturer::ClarionCoInc => 303,
            Manufacturer::WarehouseInnovations => 304,
            Manufacturer::CypressSemiconductor => 305,
            Manufacturer::MADSInc => 306,
            Manufacturer::BlueMaestroLimited => 307,
            Manufacturer::ResolutionProductsLtd => 308,
            Manufacturer::AirewareLLC => 309,
            Manufacturer::SilvairInc => 310,
            Manufacturer::PrestigioPlazaLtd => 311,
            Manufacturer::NTEOInc => 312,
            Manufacturer::FocusSystemsCorporation => 313,
            Manufacturer::TencentHoldingsLtd => 314,
            Manufacturer::Allegion => 315,
            Manufacturer::MurataManufacturingCoLtd => 316,
            Manufacturer::WirelessWERX => 317,
            Manufacturer::NodInc => 318,
            Manufacturer::BBManufacturingCompany => 319,
            Manufacturer::AlpineElectronicsChinaCoLtd => 320,
            Manufacturer::FedExServices => 321,
            Manufacturer::GrapeSystemsInc => 322,
            Manufacturer::BkonConnect => 323,
            Manufacturer::LintechGmbH => 324,
            Manufacturer::NovatelWireless => 325,
            Manufacturer::Ciright => 326,
            Manufacturer::MightyCastInc => 327,
            Manufacturer::AmbimatElectronics => 328,
            Manufacturer::PerytonsLtd => 329,
            Manufacturer::TivoliAudioLLC => 330,
            Manufacturer::MasterLock => 331,
            Manufacturer::MeshNetLtd => 332,
            Manufacturer::HUIZHOUDESAYSVAUTOMOTIVECOLTD => 333,
            Manufacturer::TangerineInc => 334,
            Manufacturer::BWGroupLtd => 335,
            Manufacturer::PioneerCorporation => 336,
            Manufacturer::OnBeep => 337,
            Manufacturer::VernierSoftwareTechnology => 338,
            Manufacturer::ROLErgo => 339,
            Manufacturer::PebbleTechnology => 340,
            Manufacturer::NETATMO => 341,
            Manufacturer::AccumulateAB => 342,
            Manufacturer::AnhuiHuamiInformationTechnologyCoLtd => 343,
            Manufacturer::InmiteSRO => 344,
            Manufacturer::ChefStepsInc => 345,
            Manufacturer::MicasAG => 346,
            Manufacturer::BiomedicalResearchLtd => 347,
            Manufacturer::PitiusTecSL => 348,
            Manufacturer::EstimoteInc => 349,
            Manufacturer::UnikeyTechnologiesInc => 350,
            Manufacturer::TimerCapCo => 351,
            Manufacturer::AwoxFormerlyAwoX => 352,
            Manufacturer::Yikes => 353,
            Manufacturer::MADSGlobalNZLtd => 354,
            Manufacturer::PCHInternational => 355,
            Manufacturer::QingdaoYeelinkInformationTechnologyCoLtd => 356,
            Manufacturer::MilwaukeeToolFormallyMilwaukeeElectricTools => 357,
            Manufacturer::MISHIKPteLtd => 358,
            Manufacturer::AscensiaDiabetesCareUSInc => 359,
            Manufacturer::SpiceboxLLC => 360,
            Manufacturer::Emberlight => 361,
            Manufacturer::CooperAtkinsCorporation => 362,
            Manufacturer::Qblinks => 363,
            Manufacturer::MYSPHERA => 364,
            Manufacturer::LifeScanInc => 365,
            Manufacturer::VolanticAB => 366,
            Manufacturer::PodoLabsInc => 367,
            Manufacturer::RocheDiabetesCareAG => 368,
            Manufacturer::AmazonComServicesLLCFormerlyAmazonFulfillmentService => 369,
            Manufacturer::ConnovateTechnologyPrivateLimited => 370,
            Manufacturer::KocomojoLLC => 371,
            Manufacturer::EverykeyInc => 372,
            Manufacturer::DynamicControls => 373,
            Manufacturer::SentriLock => 374,
            Manufacturer::ISYSTInc => 375,
            Manufacturer::CASIOCOMPUTERCOLTD => 376,
            Manufacturer::LAPISTechnologyCoLtdFormerlyLAPISSemiconductorCoLtd => 377,
            Manufacturer::TelemonitorInc => 378,
            Manufacturer::TaskitGmbH => 379,
            Manufacturer::DaimlerAG => 380,
            Manufacturer::BatAndCat => 381,
            Manufacturer::BluDotzLtd => 382,
            Manufacturer::XTelWirelessApS => 383,
            Manufacturer::GigasetCommunicationsGmbH => 384,
            Manufacturer::GeckoHealthInnovationsInc => 385,
            Manufacturer::HOPUbiquitous => 386,
            Manufacturer::WaltDisney => 387,
            Manufacturer::Nectar => 388,
            Manufacturer::BelAppsLLC => 389,
            Manufacturer::CORELightingLtd => 390,
            Manufacturer::SeraphimSenseLtd => 391,
            Manufacturer::UnicoRBC => 392,
            Manufacturer::PhysicalEnterprisesInc => 393,
            Manufacturer::AbleTrendTechnologyLimited => 394,
            Manufacturer::KonicaMinoltaInc => 395,
            Manufacturer::WiloSE => 396,
            Manufacturer::ExtronDesignServices => 397,
            Manufacturer::FitbitInc => 398,
            Manufacturer::FirefliesSystems => 399,
            Manufacturer::IntellettoTechnologiesInc => 400,
            Manufacturer::FDKCORPORATION => 401,
            Manufacturer::CloudleafInc => 402,
            Manufacturer::MavericAutomationLLC => 403,
            Manufacturer::AcousticStreamCorporation => 404,
            Manufacturer::Zuli => 405,
            Manufacturer::PaxtonAccessLtd => 406,
            Manufacturer::WiSilicaInc => 407,
            Manufacturer::VENGITKorlatoltFelelosseguTarsasag => 408,
            Manufacturer::SALTOSYSTEMSSL => 409,
            Manufacturer::TRONForumFormerlyTEngineForum => 410,
            Manufacturer::CUBETECHSRO => 411,
            Manufacturer::CokiyaIncorporated => 412,
            Manufacturer::CVSHealth => 413,
            Manufacturer::Ceruus => 414,
            Manufacturer::StrainstallLtd => 415,
            Manufacturer::ChannelEnterprisesHKLtd => 416,
            Manufacturer::FIAMM => 417,
            Manufacturer::GIGALANECOLTD => 418,
            Manufacturer::EROAD => 419,
            Manufacturer::MineSafetyAppliances => 420,
            Manufacturer::IconHealthAndFitness => 421,
            Manufacturer::WilleEngineeringFormelyAsAsandooGmbH => 422,
            Manufacturer::ENERGOUSCORPORATION => 423,
            Manufacturer::Taobao => 424,
            Manufacturer::CanonInc => 425,
            Manufacturer::GeophysicalTechnologyInc => 426,
            Manufacturer::FacebookInc => 427,
            Manufacturer::TrividiaHealthInc => 428,
            Manufacturer::FlightSafetyInternational => 429,
            Manufacturer::EarlensCorporation => 430,
            Manufacturer::SunriseMicroDevicesInc => 431,
            Manufacturer::StarMicronicsCoLtd => 432,
            Manufacturer::NetizensSpZOO => 433,
            Manufacturer::NymiInc => 434,
            Manufacturer::NytecInc => 435,
            Manufacturer::TrineoSpZOO => 436,
            Manufacturer::NestLabsInc => 437,
            Manufacturer::LMTechnologiesLtd => 438,
            Manufacturer::GeneralElectricCompany => 439,
            Manufacturer::ID3SL => 440,
            Manufacturer::HANAMicron => 441,
            Manufacturer::StagesCyclingLLC => 442,
            Manufacturer::CochlearBoneAnchoredSolutionsAB => 443,
            Manufacturer::SenionLabAB => 444,
            Manufacturer::SyszoneCoLtd => 445,
            Manufacturer::PulsateMobileLtd => 446,
            Manufacturer::HongKongHunterSunElectronicLimited => 447,
            Manufacturer::PironexGmbH => 448,
            Manufacturer::BRADATECHCorp => 449,
            Manufacturer::TransenergooilAG => 450,
            Manufacturer::Bunch => 451,
            Manufacturer::DMEMicroelectronics => 452,
            Manufacturer::BitcrazeAB => 453,
            Manufacturer::HASWAREInc => 454,
            Manufacturer::AbiogenixInc => 455,
            Manufacturer::PolyControlApS => 456,
            Manufacturer::AviOn => 457,
            Manufacturer::LaerdalMedicalAS => 458,
            Manufacturer::FetchMyPet => 459,
            Manufacturer::SamLabsLtd => 460,
            Manufacturer::ChengduSynwingTechnologyLtd => 461,
            Manufacturer::HOUWASYSTEMDESIGNKK => 462,
            Manufacturer::BSH => 463,
            Manufacturer::PrimusInterParesLtd => 464,
            Manufacturer::AugustHomeInc => 465,
            Manufacturer::GillElectronics => 466,
            Manufacturer::SkyWaveDesign => 467,
            Manufacturer::NewlabSRL => 468,
            Manufacturer::ELADSrl => 469,
            Manufacturer::GWearablesInc => 470,
            Manufacturer::SquadroneSystemsInc => 471,
            Manufacturer::CodeCorporation => 472,
            Manufacturer::SavantSystemsLLC => 473,
            Manufacturer::LogitechInternationalSA => 474,
            Manufacturer::InnblueConsulting => 475,
            Manufacturer::IParkingLtd => 476,
            Manufacturer::KoninklijkePhilipsElectronicsNV => 477,
            Manufacturer::MinelabElectronicsPtyLimited => 478,
            Manufacturer::BisonGroupLtd => 479,
            Manufacturer::WidexAS => 480,
            Manufacturer::JollaLtd => 481,
            Manufacturer::LectronixInc => 482,
            Manufacturer::CaterpillarInc => 483,
            Manufacturer::FreedomInnovations => 484,
            Manufacturer::DynamicDevicesLtd => 485,
            Manufacturer::TechnologySolutionsUKLtd => 486,
            Manufacturer::IPSGroupInc => 487,
            Manufacturer::STIR => 488,
            Manufacturer::SanoInc => 489,
            Manufacturer::AdvancedApplicationDesignInc => 490,
            Manufacturer::AutoMapLLC => 491,
            Manufacturer::SpreadtrumCommunicationsShanghaiLtd => 492,
            Manufacturer::CuteCircuitLTD => 493,
            Manufacturer::ValeoService => 494,
            Manufacturer::FullpowerTechnologiesInc => 495,
            Manufacturer::KloudNation => 496,
            Manufacturer::ZebraTechnologiesCorporation => 497,
            Manufacturer::ItronInc => 498,
            Manufacturer::TheUniversityOfTokyo => 499,
            Manufacturer::UTCFireAndSecurity => 500,
            Manufacturer::CoolWebthingsLimited => 501,
            Manufacturer::DJOGlobal => 502,
            Manufacturer::GellinerLimited => 503,
            Manufacturer::AnykaGuangzhouMicroelectronicsTechnologyCoLTD => 504,
            Manufacturer::MedtronicInc => 505,
            Manufacturer::GozioInc => 506,
            Manufacturer::FormLiftingLLC => 507,
            Manufacturer::WahooFitnessLLC => 508,
            Manufacturer::KontaktMicroLocationSpZOO => 509,
            Manufacturer::RadioSystemsCorporation => 510,
            Manufacturer::FreescaleSemiconductorInc => 511,
            Manufacturer::VerifoneSystemsPteLtdTaiwanBranch => 512,
            Manufacturer::ARTiming => 513,
            Manufacturer::RigadoLLC => 514,
            Manufacturer::KemppiOy => 515,
            Manufacturer::TapcentiveInc => 516,
            Manufacturer::SmartboticsInc => 517,
            Manufacturer::OtterProductsLLC => 518,
            Manufacturer::STEMPInc => 519,
            Manufacturer::LumiGeekLLC => 520,
            Manufacturer::InvisionHeartInc => 521,
            Manufacturer::MacnicaInc => 522,
            Manufacturer::JaguarLandRoverLimited => 523,
            Manufacturer::CoroWareTechnologiesInc => 524,
            Manufacturer::SimploTechnologyCoLTD => 525,
            Manufacturer::OmronHealthcareCoLTD => 526,
            Manufacturer::ComoduleGMBH => 527,
            Manufacturer::IkeGPS => 528,
            Manufacturer::TelinkSemiconductorCoLtd => 529,
            Manufacturer::InterplanCoLtd => 530,
            Manufacturer::WylerAG => 531,
            Manufacturer::IKMultimediaProductionSrl => 532,
            Manufacturer::LukotonExperienceOy => 533,
            Manufacturer::MTILtd => 534,
            Manufacturer::Tech4homeLda => 535,
            Manufacturer::HiotechAB => 536,
            Manufacturer::DOTTLimited => 537,
            Manufacturer::BlueSpeckLabsLLC => 538,
            Manufacturer::CiscoSystemsInc => 539,
            Manufacturer::MobicommInc => 540,
            Manufacturer::Edamic => 541,
            Manufacturer::GoodnetLtd => 542,
            Manufacturer::LusterLeafProductsInc => 543,
            Manufacturer::ManusMachinaBV => 544,
            Manufacturer::MobiquityNetworksInc => 545,
            Manufacturer::PraxisDynamics => 546,
            Manufacturer::PhilipMorrisProductsSA => 547,
            Manufacturer::ComarchSA => 548,
            Manufacturer::NestlNespressoSA => 549,
            Manufacturer::MerliniaAS => 550,
            Manufacturer::LifeBEAMTechnologies => 551,
            Manufacturer::TwocanoesLabsLLC => 552,
            Manufacturer::MuovertiLimited => 553,
            Manufacturer::StamerMusikanlagenGMBH => 554,
            Manufacturer::TeslaMotors => 555,
            Manufacturer::PharynksCorporation => 556,
            Manufacturer::Lupine => 557,
            Manufacturer::SiemensAG => 558,
            Manufacturer::HuamiShanghaiCultureCommunicationCOLTD => 559,
            Manufacturer::FosterElectricCompanyLtd => 560,
            Manufacturer::ETASA => 561,
            Manufacturer::XSensoSolutionsKft => 562,
            Manufacturer::ShenzhenSuLongCommunicationLtd => 563,
            Manufacturer::FengFanBeiJingTechnologyCoLtd => 564,
            Manufacturer::QrioInc => 565,
            Manufacturer::PitpatpetLtd => 566,
            Manufacturer::MSHeliSRL => 567,
            Manufacturer::Trakm8Ltd => 568,
            Manufacturer::JINCOLtd => 569,
            Manufacturer::AlatechTehnology => 570,
            Manufacturer::BeijingCarePulseElectronicTechnologyCoLtd => 571,
            Manufacturer::Awarepoint => 572,
            Manufacturer::ViCentraBV => 573,
            Manufacturer::RavenIndustries => 574,
            Manufacturer::WaveWareTechnologiesInc => 575,
            Manufacturer::ArgenoxTechnologies => 576,
            Manufacturer::BragiGmbH => 577,
            Manufacturer::N16LabInc => 578,
            Manufacturer::MasimoCorp => 579,
            Manufacturer::IoteraInc => 580,
            Manufacturer::EndressHauser => 581,
            Manufacturer::ACKmeNetworksInc => 582,
            Manufacturer::FiftyThreeInc => 583,
            Manufacturer::ParkerHannifinCorp => 584,
            Manufacturer::TranscranialLtd => 585,
            Manufacturer::UwatecAG => 586,
            Manufacturer::OrlanLLC => 587,
            Manufacturer::BlueCloverDevices => 588,
            Manufacturer::MWaySolutionsGmbH => 589,
            Manufacturer::MicrotronicsEngineeringGmbH => 590,
            Manufacturer::SchneiderSchreibgerTeGmbH => 591,
            Manufacturer::SapphireCircuitsLLC => 592,
            Manufacturer::LumoBodytechInc => 593,
            Manufacturer::UKCTechnosolution => 594,
            Manufacturer::XicatoInc => 595,
            Manufacturer::Playbrush => 596,
            Manufacturer::DaiNipponPrintingCoLtd => 597,
            Manufacturer::G24PowerLimited => 598,
            Manufacturer::AdBabbleLocalCommerceInc => 599,
            Manufacturer::DevialetSA => 600,
            Manufacturer::ALTYOR => 601,
            Manufacturer::UniversityOfAppliedSciencesValaisHauteEcoleValaisanne => 602,
            Manufacturer::FiveInteractiveLLCDbaZendo => 603,
            Manufacturer::NetEaseHangzhouNetworkCoLtd => 604,
            Manufacturer::LexmarkInternationalInc => 605,
            Manufacturer::FlukeCorporation => 606,
            Manufacturer::YardarmTechnologies => 607,
            Manufacturer::SensaRx => 608,
            Manufacturer::SECVREGmbH => 609,
            Manufacturer::GlacialRidgeTechnologies => 610,
            Manufacturer::IdentivInc => 611,
            Manufacturer::DDSInc => 612,
            Manufacturer::SMKCorporation => 613,
            Manufacturer::SchawbelTechnologiesLLC => 614,
            Manufacturer::XMISystemsSA => 615,
            Manufacturer::Cerevo => 616,
            Manufacturer::TorroxGmbHCoKG => 617,
            Manufacturer::Gemalto => 618,
            Manufacturer::DEKAResearchDevelopmentCorp => 619,
            Manufacturer::DomsterTadeuszSzydlowski => 620,
            Manufacturer::TechnogymSPA => 621,
            Manufacturer::FLEURBAEYBVBA => 622,
            Manufacturer::AptcodeSolutions => 623,
            Manufacturer::LSIADLTechnology => 624,
            Manufacturer::AnimasCorp => 625,
            Manufacturer::AlpsAlpineCoLtd => 626,
            Manufacturer::OCEASOFT => 627,
            Manufacturer::MotsaiResearch => 628,
            Manufacturer::Geotab => 629,
            Manufacturer::EGOElektroGeraetebauGmbH => 630,
            Manufacturer::BewhereInc => 631,
            Manufacturer::JohnsonOutdoorsInc => 632,
            Manufacturer::SteuteSchaltgerateGmbHCoKG => 633,
            Manufacturer::EkominiInc => 634,
            Manufacturer::DEFAAS => 635,
            Manufacturer::AseptikaLtd => 636,
            Manufacturer::HUAWEITechnologiesCoLtd => 637,
            Manufacturer::HabitAwareLLC => 638,
            Manufacturer::RuwidoAustriaGmbh => 639,
            Manufacturer::ITECCorporation => 640,
            Manufacturer::StoneL => 641,
            Manufacturer::SonovaAG => 642,
            Manufacturer::MavenMachinesInc => 643,
            Manufacturer::SynapseElectronics => 644,
            Manufacturer::StandardInnovationInc => 645,
            Manufacturer::RFCodeInc => 646,
            Manufacturer::WallyVenturesSL => 647,
            Manufacturer::WillowbankElectronicsLtd => 648,
            Manufacturer::SKTelecom => 649,
            Manufacturer::JetroAS => 650,
            Manufacturer::CodeGearsLTD => 651,
            Manufacturer::NANOLINKAPS => 652,
            Manufacturer::IFLLC => 653,
            Manufacturer::RFDigitalCorp => 654,
            Manufacturer::ChurchDwightCoInc => 655,
            Manufacturer::MultibitOy => 656,
            Manufacturer::CliniCloudInc => 657,
            Manufacturer::SwiftSensors => 658,
            Manufacturer::BlueBite => 659,
            Manufacturer::ELIASGmbH => 660,
            Manufacturer::SivantosGmbH => 661,
            Manufacturer::Petzl => 662,
            Manufacturer::StormPowerLtd => 663,
            Manufacturer::EISSTLtd => 664,
            Manufacturer::InexessTechnologySimmaKG => 665,
            Manufacturer::CurrantInc => 666,
            Manufacturer::C2DevelopmentInc => 667,
            Manufacturer::BlueSkyScientificLLC => 668,
            Manufacturer::ALOTTAZSLABSLLC => 669,
            Manufacturer::KupsonSpolSRO => 670,
            Manufacturer::AreusEngineeringGmbH => 671,
            Manufacturer::ImpossibleCameraGmbH => 672,
            Manufacturer::InventureTrackSystems => 673,
            Manufacturer::LockedUp => 674,
            Manufacturer::Itude => 675,
            Manufacturer::PacificLockCompany => 676,
            Manufacturer::TendyronCorporation => 677,
            Manufacturer::RobertBoschGmbH => 678,
            Manufacturer::IlluxtronInternationalBV => 679,
            Manufacturer::MiSportLtd => 680,
            Manufacturer::Chargelib => 681,
            Manufacturer::DopplerLab => 682,
            Manufacturer::BBPOSLimited => 683,
            Manufacturer::RTBElektronikGmbHCoKG => 684,
            Manufacturer::RxNetworksInc => 685,
            Manufacturer::WeatherFlowInc => 686,
            Manufacturer::TechnicolorUSAInc => 687,
            Manufacturer::BestechnicShanghaiLtd => 688,
            Manufacturer::RadenInc => 689,
            Manufacturer::JouZenOy => 690,
            Manufacturer::CLABERSPA => 691,
            Manufacturer::HyginexInc => 692,
            Manufacturer::HANSHINELECTRICRAILWAYCOLTD => 693,
            Manufacturer::SchneiderElectric => 694,
            Manufacturer::OortTechnologiesLLC => 695,
            Manufacturer::ChronoTherapeutics => 696,
            Manufacturer::RinnaiCorporation => 697,
            Manufacturer::SwissprimeTechnologiesAG => 698,
            Manufacturer::KohaCoLtd => 699,
            Manufacturer::GenevacLtd => 700,
            Manufacturer::Chemtronics => 701,
            Manufacturer::SeguroTechnologySpZOO => 702,
            Manufacturer::RedbirdFlightSimulations => 703,
            Manufacturer::DashRobotics => 704,
            Manufacturer::LINECorporation => 705,
            Manufacturer::GuillemotCorporation => 706,
            Manufacturer::TechtronicPowerToolsTechnologyLimited => 707,
            Manufacturer::WilsonSportingGoods => 708,
            Manufacturer::LenovoSingaporePteLtd => 709,
            Manufacturer::AyatanSensors => 710,
            Manufacturer::ElectronicsTomorrowLimited => 711,
            Manufacturer::OneSpan => 712,
            Manufacturer::PayRangeInc => 713,
            Manufacturer::ABOVSemiconductor => 714,
            Manufacturer::AINAWirelessInc => 715,
            Manufacturer::EijkelkampSoilWater => 716,
            Manufacturer::BMAErgonomicsBV => 717,
            Manufacturer::TevaBrandedPharmaceuticalProductsRDInc => 718,
            Manufacturer::Anima => 719,
            Manufacturer::N3M => 720,
            Manufacturer::EmpaticaSrl => 721,
            Manufacturer::AferoInc => 722,
            Manufacturer::PowercastCorporation => 723,
            Manufacturer::SecuyouApS => 724,
            Manufacturer::OMRONCorporation => 725,
            Manufacturer::SendSolutions => 726,
            Manufacturer::NIPPONSYSTEMWARECOLTD => 727,
            Manufacturer::Neosfar => 728,
            Manufacturer::FlieglAgrartechnikGmbH => 729,
            Manufacturer::Gilvader => 730,
            Manufacturer::DigiInternationalIncR => 731,
            Manufacturer::DeWalchTechnologiesInc => 732,
            Manufacturer::FlintRehabilitationDevicesLLC => 733,
            Manufacturer::SamsungSDSCoLtd => 734,
            Manufacturer::BlurProductDevelopment => 735,
            Manufacturer::UniversityOfMichigan => 736,
            Manufacturer::VictronEnergyBV => 737,
            Manufacturer::NTTDocomo => 738,
            Manufacturer::CarmanahTechnologiesCorp => 739,
            Manufacturer::BytestormLtd => 740,
            Manufacturer::EspressifIncorporated => 741,
            Manufacturer::Unwire => 742,
            Manufacturer::ConnectedYardInc => 743,
            Manufacturer::AmericanMusicEnvironments => 744,
            Manufacturer::SensogramTechnologiesInc => 745,
            Manufacturer::FujitsuLimited => 746,
            Manufacturer::ArdicTechnology => 747,
            Manufacturer::DeltaSystemsInc => 748,
            Manufacturer::HTCCorporation => 749,
            Manufacturer::CitizenHoldingsCoLtd => 750,
            Manufacturer::SMARTINNOVATIONInc => 751,
            Manufacturer::BlackratSoftware => 752,
            Manufacturer::TheIdeaCaveLLC => 753,
            Manufacturer::GoProInc => 754,
            Manufacturer::AuthAirInc => 755,
            Manufacturer::VensiInc => 756,
            Manufacturer::IndagemTechLLC => 757,
            Manufacturer::IntemoTechnologies => 758,
            Manufacturer::DreamVisionsCoLtd => 759,
            Manufacturer::RunteqOyLtd => 760,
            Manufacturer::IMAGINATIONTECHNOLOGIESLTD => 761,
            Manufacturer::CoSTARTEchnologies => 762,
            Manufacturer::ClariusMobileHealthCorp => 763,
            Manufacturer::ShanghaiFrequenMicroelectronicsCoLtd => 764,
            Manufacturer::UwannaInc => 765,
            Manufacturer::LierdaScienceTechnologyGroupCoLtd => 766,
            Manufacturer::SiliconLaboratories => 767,
            Manufacturer::WorldMotoInc => 768,
            Manufacturer::GiatecScientificInc => 769,
            Manufacturer::LoopDevicesInc => 770,
            Manufacturer::IACAElectronique => 771,
            Manufacturer::ProxyTechnologiesInc => 772,
            Manufacturer::SwippApS => 773,
            Manufacturer::LifeLaboratoryInc => 774,
            Manufacturer::FUJIINDUSTRIALCOLTD => 775,
            Manufacturer::SurefireLLC => 776,
            Manufacturer::DolbyLabs => 777,
            Manufacturer::Ellisys => 778,
            Manufacturer::MagnitudeLightingConverters => 779,
            Manufacturer::HiltiAG => 780,
            Manufacturer::DevdataSRL => 781,
            Manufacturer::Deviceworx => 782,
            Manufacturer::ShortcutLabs => 783,
            Manufacturer::SGLItaliaSRL => 784,
            Manufacturer::PEEQDATA => 785,
            Manufacturer::DucereTechnologiesPvtLtd => 786,
            Manufacturer::DiveNavInc => 787,
            Manufacturer::RIIGAISpZOO => 788,
            Manufacturer::ThermoFisherScientific => 789,
            Manufacturer::AGMeasurematicsPvtLtd => 790,
            Manufacturer::CHUOElectronicsCOLTD => 791,
            Manufacturer::AspentaInternational => 792,
            Manufacturer::EugsterFrismagAG => 793,
            Manufacturer::WurthElektronikEiSosGmbHCoKGFormerlyAmberWirelessGmbH => 794,
            Manufacturer::HQInc => 795,
            Manufacturer::LabSensorSolutions => 796,
            Manufacturer::EnterlabApS => 797,
            Manufacturer::EyefiInc => 798,
            Manufacturer::MetaSystemSPA => 799,
            Manufacturer::SONOELECTRONICSCOLTD => 800,
            Manufacturer::Jewelbots => 801,
            Manufacturer::CompumedicsLimited => 802,
            Manufacturer::RotorBikeComponents => 803,
            Manufacturer::AstroInc => 804,
            Manufacturer::AmotusSolutions => 805,
            Manufacturer::HealthwearTechnologiesChangzhouLtd => 806,
            Manufacturer::EssexElectronics => 807,
            Manufacturer::GrundfosAS => 808,
            Manufacturer::EargoInc => 809,
            Manufacturer::ElectronicDesignLab => 810,
            Manufacturer::ESYLUX => 811,
            Manufacturer::NIPPONSMTCOLtd => 812,
            Manufacturer::BMInnovationsGmbH => 813,
            Manufacturer::Indoormap => 814,
            Manufacturer::OttoQInc => 815,
            Manufacturer::NorthPoleEngineering => 816,
            Manufacturer::N3flaresTechnologiesInc => 817,
            Manufacturer::ElectrocompanietAS => 818,
            Manufacturer::MulTLock => 819,
            Manufacturer::CorentiumAS => 820,
            Manufacturer::EnlightedInc => 821,
            Manufacturer::GISTIC => 822,
            Manufacturer::AJP2HoldingsLLC => 823,
            Manufacturer::COBIGmbH => 824,
            Manufacturer::BlueSkyScientificLLC1 => 825,
            Manufacturer::AppceptionInc => 826,
            Manufacturer::CourtneyThorneLimited => 827,
            Manufacturer::Virtuosys => 828,
            Manufacturer::TPVTechnologyLimited => 829,
            Manufacturer::MonitraSA => 830,
            Manufacturer::AutomationComponentsInc => 831,
            Manufacturer::LetsenseSRL => 832,
            Manufacturer::EtesianTechnologiesLLC => 833,
            Manufacturer::GERTECBRASILLTDA => 834,
            Manufacturer::DrekkerDevelopmentPtyLtd => 835,
            Manufacturer::WhirlInc => 836,
            Manufacturer::LocusPositioning => 837,
            Manufacturer::AcuityBrandsLightingInc => 838,
            Manufacturer::PreventBiometrics => 839,
            Manufacturer::Arioneo => 840,
            Manufacturer::VersaMe => 841,
            Manufacturer::Vaddio => 842,
            Manufacturer::LibratoneAS => 843,
            Manufacturer::HMElectronicsInc => 844,
            Manufacturer::TASERInternationalInc => 845,
            Manufacturer::SafeTrustInc => 846,
            Manufacturer::HeartlandPaymentSystems => 847,
            Manufacturer::BitstrataSystemsInc => 848,
            Manufacturer::PiepsGmbH => 849,
            Manufacturer::IRidingXiamenTechnologyCoLtd => 850,
            Manufacturer::AlphaAudiotronicsInc => 851,
            Manufacturer::TOPPANFORMSCOLTD => 852,
            Manufacturer::SigmaDesignsInc => 853,
            Manufacturer::SpectrumBrandsInc => 854,
            Manufacturer::PolymapWireless => 855,
            Manufacturer::MagniWareLtd => 856,
            Manufacturer::NovotecMedicalGmbH => 857,
            Manufacturer::MedicomInnovationPartnerAS => 858,
            Manufacturer::MatrixInc => 859,
            Manufacturer::EatonCorporation => 860,
            Manufacturer::KYS => 861,
            Manufacturer::NayaHealthInc => 862,
            Manufacturer::Acromag => 863,
            Manufacturer::InsuletCorporation => 864,
            Manufacturer::WellinksInc => 865,
            Manufacturer::ONSemiconductor => 866,
            Manufacturer::FREELAPSA => 867,
            Manufacturer::FaveroElectronicsSrl => 868,
            Manufacturer::BioMechSensorLLC => 869,
            Manufacturer::BOLTTSportsTechnologiesPrivateLimited => 870,
            Manufacturer::SapheInternational => 871,
            Manufacturer::MetormoteAB => 872,
            Manufacturer::LittleBits => 873,
            Manufacturer::SetPointMedical => 874,
            Manufacturer::BRControlsProductsBV => 875,
            Manufacturer::Zipcar => 876,
            Manufacturer::AirBoltPtyLtd => 877,
            Manufacturer::KeepTruckinInc => 878,
            Manufacturer::MotivInc => 879,
            Manufacturer::WazombiLabsO => 880,
            Manufacturer::ORBCOMM => 881,
            Manufacturer::NixieLabsInc => 882,
            Manufacturer::AppNearMeLtd => 883,
            Manufacturer::HolmanIndustries => 884,
            Manufacturer::ExpainAS => 885,
            Manufacturer::ElectronicTemperatureInstrumentsLtd => 886,
            Manufacturer::PlejdAB => 887,
            Manufacturer::PropellerHealth => 888,
            Manufacturer::ShenzhenIMCOElectronicTechnologyCoLtd => 889,
            Manufacturer::Algoria => 890,
            Manufacturer::ApptionLabsInc => 891,
            Manufacturer::CronologicsCorporation => 892,
            Manufacturer::MICRODIALtd => 893,
            Manufacturer::LulabytesSL => 894,
            Manufacturer::SociTDesProduitsNestlSAFormerlyNestecSA => 895,
            Manufacturer::LLCMEGAFService => 896,
            Manufacturer::SharpCorporation => 897,
            Manufacturer::PrecisionOutcomesLtd => 898,
            Manufacturer::KronosIncorporated => 899,
            Manufacturer::OCOSMOSCoLtd => 900,
            Manufacturer::EmbeddedElectronicSolutionsLtdDbaE2Solutions => 901,
            Manufacturer::AtericaInc => 902,
            Manufacturer::BluStorPMCInc => 903,
            Manufacturer::KapschTrafficComAB => 904,
            Manufacturer::ActiveBluCorporation => 905,
            Manufacturer::KohlerMiraLimited => 906,
            Manufacturer::Noke => 907,
            Manufacturer::AppionInc => 908,
            Manufacturer::ResmedLtd => 909,
            Manufacturer::CrownstoneBV => 910,
            Manufacturer::XiaomiInc => 911,
            Manufacturer::INFOTECHSRO => 912,
            Manufacturer::ThingsquareAB => 913,
            Manufacturer::TD => 914,
            Manufacturer::LAVAZZASPA => 915,
            Manufacturer::NetclearanceSystemsInc => 916,
            Manufacturer::SDATAWAY => 917,
            Manufacturer::BLOKSGmbH => 918,
            Manufacturer::LEGOSystemAS => 919,
            Manufacturer::ThetatronicsLtd => 920,
            Manufacturer::NikonCorporation => 921,
            Manufacturer::NeST => 922,
            Manufacturer::SouthSiliconValleyMicroelectronics => 923,
            Manufacturer::ALEInternational => 924,
            Manufacturer::CareViewCommunicationsInc => 925,
            Manufacturer::SchoolBoardLimited => 926,
            Manufacturer::MolexCorporation => 927,
            Manufacturer::IVTWirelessLimited => 928,
            Manufacturer::AlpineLabsLLC => 929,
            Manufacturer::CanduraInstruments => 930,
            Manufacturer::SmartMovtTechnologyCoLtd => 931,
            Manufacturer::TokenZeroLtd => 932,
            Manufacturer::ACECADEnterpriseCoLtdACECAD => 933,
            Manufacturer::MedelaInc => 934,
            Manufacturer::AeroScout => 935,
            Manufacturer::EsrilleInc => 936,
            Manufacturer::THINKERLYSRL => 937,
            Manufacturer::ExonSpZOO => 938,
            Manufacturer::MeizuTechnologyCoLtd => 939,
            Manufacturer::SmabloLTD => 940,
            Manufacturer::XiQ => 941,
            Manufacturer::AllswellInc => 942,
            Manufacturer::CommNSenseCorpDBAVerigo => 943,
            Manufacturer::VIBRADORMGmbH => 944,
            Manufacturer::OtodataWirelessNetworkInc => 945,
            Manufacturer::PropagationSystemsLimited => 946,
            Manufacturer::MidwestInstrumentsControls => 947,
            Manufacturer::AlphaNodusInc => 948,
            Manufacturer::PetPOMMInc => 949,
            Manufacturer::Mattel => 950,
            Manufacturer::AirblyInc => 951,
            Manufacturer::ASafeLimited => 952,
            Manufacturer::FREDERIQUECONSTANTSA => 953,
            Manufacturer::MaxscendMicroelectronicsCompanyLimited => 954,
            Manufacturer::Abbott => 955,
            Manufacturer::ASBBankLtd => 956,
            Manufacturer::Amadas => 957,
            Manufacturer::AppliedScienceInc => 958,
            Manufacturer::ILumiSolutionsInc => 959,
            Manufacturer::ArchSystemsInc => 960,
            Manufacturer::EmberTechnologiesInc => 961,
            Manufacturer::SnapchatInc => 962,
            Manufacturer::CasambiTechnologiesOy => 963,
            Manufacturer::PicoTechnologyInc => 964,
            Manufacturer::StJudeMedicalInc => 965,
            Manufacturer::Intricon => 966,
            Manufacturer::StructuralHealthSystemsInc => 967,
            Manufacturer::AvvelInternational => 968,
            Manufacturer::GallagherGroup => 969,
            Manufacturer::In2thingsAutomationPvtLtd => 970,
            Manufacturer::SYSDEVSrl => 971,
            Manufacturer::VonkilTechnologiesLtd => 972,
            Manufacturer::WyndTechnologiesInc => 973,
            Manufacturer::CONTRINEXSA => 974,
            Manufacturer::MIRAInc => 975,
            Manufacturer::WatteamLtd => 976,
            Manufacturer::DensityInc => 977,
            Manufacturer::IOTPotIndiaPrivateLimited => 978,
            Manufacturer::SigmaConnectivityAB => 979,
            Manufacturer::PEGPEREGOSPA => 980,
            Manufacturer::WyzelinkSystemsInc => 981,
            Manufacturer::YotaDevicesLTD => 982,
            Manufacturer::FINSECUR => 983,
            Manufacturer::ZenMeLabsLtd => 984,
            Manufacturer::N3IWareCoLtd => 985,
            Manufacturer::EnOceanGmbH => 986,
            Manufacturer::InstabeatInc => 987,
            Manufacturer::NimaLabs => 988,
            Manufacturer::AndreasStihlAGCoKG => 989,
            Manufacturer::NathanRhoadesLLC => 990,
            Manufacturer::GrobTechnologiesLLC => 991,
            Manufacturer::ActionsZhuhaiTechnologyCoLimited => 992,
            Manufacturer::SPDDevelopmentCompanyLtd => 993,
            Manufacturer::SensoanOy => 994,
            Manufacturer::QualcommLifeInc => 995,
            Manufacturer::ChipIngAG => 996,
            Manufacturer::Ffly4u => 997,
            Manufacturer::IoTInstrumentsOy => 998,
            Manufacturer::TRUEFitnessTechnology => 999,
            Manufacturer::ReinerKartengeraeteGmbHCoKG => 1000,
            Manufacturer::SHENZHENLEMONJOYTECHNOLOGYCOLTD => 1001,
            Manufacturer::HelloInc => 1002,
            Manufacturer::EvollveInc => 1003,
            Manufacturer::JigowattsInc => 1004,
            Manufacturer::BASICMICROCOMINC => 1005,
            Manufacturer::CUBETECHNOLOGIES => 1006,
            Manufacturer::FoolographyGmbH => 1007,
            Manufacturer::CLINK => 1008,
            Manufacturer::HestanSmartCookingInc => 1009,
            Manufacturer::WindowMasterAS => 1010,
            Manufacturer::FlowscapeAB => 1011,
            Manufacturer::PALTechnologiesLtd => 1012,
            Manufacturer::WHEREInc => 1013,
            Manufacturer::ItonTechnologyCorp => 1014,
            Manufacturer::OwlLabsInc => 1015,
            Manufacturer::RockfordCorp => 1016,
            Manufacturer::BeconTechnologiesCoLtd => 1017,
            Manufacturer::VyassoftTechnologiesInc => 1018,
            Manufacturer::NoxMedical => 1019,
            Manufacturer::KimberlyClark => 1020,
            Manufacturer::TrimbleNavigationLtd => 1021,
            Manufacturer::Littelfuse => 1022,
            Manufacturer::Withings => 1023,
            Manufacturer::IDeveloperITBeratungUG => 1024,
            Manufacturer::RelationsInc => 1025,
            Manufacturer::SearsHoldingsCorporation => 1026,
            Manufacturer::GantnerElectronicGmbH => 1027,
            Manufacturer::AuthomateInc => 1028,
            Manufacturer::VertexInternationalInc => 1029,
            Manufacturer::Airtago => 1030,
            Manufacturer::SwissAudioSA => 1031,
            Manufacturer::ToGetHomeInc => 1032,
            Manufacturer::AXIS => 1033,
            Manufacturer::Openmatics => 1034,
            Manufacturer::JanaCareInc => 1035,
            Manufacturer::SenixCorporation => 1036,
            Manufacturer::NorthStarBatteryCompanyLLC => 1037,
            Manufacturer::SKFUKLimited => 1038,
            Manufacturer::COAXTechnologyInc => 1039,
            Manufacturer::FenderMusicalInstruments => 1040,
            Manufacturer::LuidiaInc => 1041,
            Manufacturer::SEFAM => 1042,
            Manufacturer::WirelessCablesInc => 1043,
            Manufacturer::LightningProtectionInternationalPtyLtd => 1044,
            Manufacturer::UberTechnologiesInc => 1045,
            Manufacturer::SODAGmbH => 1046,
            Manufacturer::FatigueScience => 1047,
            Manufacturer::Reserved => 1048,
            Manufacturer::NovalogyLTD => 1049,
            Manufacturer::FridayLabsLimited => 1050,
            Manufacturer::OrthoAccelTechnologies => 1051,
            Manufacturer::WaterGuruInc => 1052,
            Manufacturer::BenningElektrotechnikUndElektronikGmbHCoKG => 1053,
            Manufacturer::DellComputerCorporation => 1054,
            Manufacturer::KopinCorporation => 1055,
            Manufacturer::TecBakeryGmbH => 1056,
            Manufacturer::BackboneLabsInc => 1057,
            Manufacturer::DELSEYSA => 1058,
            Manufacturer::ChargifiLimited => 1059,
            Manufacturer::TrainesenseLtd => 1060,
            Manufacturer::UnifySoftwareAndSolutionsGmbHCoKG => 1061,
            Manufacturer::HusqvarnaAB => 1062,
            Manufacturer::FocusFleetAndFuelManagementInc => 1063,
            Manufacturer::SmallLoopLLC => 1064,
            Manufacturer::ProlonInc => 1065,
            Manufacturer::BDMedical => 1066,
            Manufacturer::IMicroMedIncorporated => 1067,
            Manufacturer::TictoNV => 1068,
            Manufacturer::MeshtechAS => 1069,
            Manufacturer::MemCachierInc => 1070,
            Manufacturer::DanfossAS => 1071,
            Manufacturer::SnapStykInc => 1072,
            Manufacturer::AmwayCorporation => 1073,
            Manufacturer::SilkLabsInc => 1074,
            Manufacturer::PillsyInc => 1075,
            Manufacturer::HatchBabyInc => 1076,
            Manufacturer::BlocksWearablesLtd => 1077,
            Manufacturer::DraysonTechnologiesEuropeLimited => 1078,
            Manufacturer::EBestIOTInc => 1079,
            Manufacturer::HelvarLtd => 1080,
            Manufacturer::RadianceTechnologies => 1081,
            Manufacturer::NuhearaLimited => 1082,
            Manufacturer::AppsideCoLtd => 1083,
            Manufacturer::DeLaval => 1084,
            Manufacturer::CoilerCorporation => 1085,
            Manufacturer::ThermomedicsInc => 1086,
            Manufacturer::TentacleSyncGmbH => 1087,
            Manufacturer::ValencellInc => 1088,
            Manufacturer::IProtoXiOy => 1089,
            Manufacturer::SECOMCOLTD => 1090,
            Manufacturer::TuckerInternationalLLC => 1091,
            Manufacturer::MetanateLimited => 1092,
            Manufacturer::KobianCanadaInc => 1093,
            Manufacturer::NETGEARInc => 1094,
            Manufacturer::FabtronicsAustraliaPtyLtd => 1095,
            Manufacturer::GrandCentrixGmbH => 1096,
            Manufacturer::N1UPUSAComLlc => 1097,
            Manufacturer::SHIMANOINC => 1098,
            Manufacturer::NainInc => 1099,
            Manufacturer::LifeStyleLockLLC => 1100,
            Manufacturer::VEGAGrieshaberKG => 1101,
            Manufacturer::XtravaInc => 1102,
            Manufacturer::TTSTooltechnicSystemsAGCoKG => 1103,
            Manufacturer::TeenageEngineeringAB => 1104,
            Manufacturer::TunstallNordicAB => 1105,
            Manufacturer::SvepDesignCenterAB => 1106,
            Manufacturer::QorvoUtrechtBVFormerlyGreenPeakTechnologiesBV => 1107,
            Manufacturer::SphinxElectronicsGmbHCoKG => 1108,
            Manufacturer::Atomation => 1109,
            Manufacturer::NemikConsultingInc => 1110,
            Manufacturer::RFINNOVATION => 1111,
            Manufacturer::MiniSolutionCoLtd => 1112,
            Manufacturer::LumenetixInc => 1113,
            Manufacturer::N2048450OntarioInc => 1114,
            Manufacturer::SPACEEKLTD => 1115,
            Manufacturer::DeltaTCorporation => 1116,
            Manufacturer::BostonScientificCorporation => 1117,
            Manufacturer::NuvizInc => 1118,
            Manufacturer::RealTimeAutomationInc => 1119,
            Manufacturer::Kolibree => 1120,
            Manufacturer::VhfElektronikGmbH => 1121,
            Manufacturer::BonsaiSystemsGmbH => 1122,
            Manufacturer::FathomSystemsInc => 1123,
            Manufacturer::BellmanSymfon => 1124,
            Manufacturer::InternationalForteGroupLLC => 1125,
            Manufacturer::CycleLabsSolutionsInc => 1126,
            Manufacturer::CodenexOy => 1127,
            Manufacturer::KynesimLtd => 1128,
            Manufacturer::PalagoAB => 1129,
            Manufacturer::INSIGMAINC => 1130,
            Manufacturer::PMDSolutions => 1131,
            Manufacturer::QingdaoRealtimeTechnologyCoLtd => 1132,
            Manufacturer::BEGAGantenbrinkLeuchtenKG => 1133,
            Manufacturer::PamborLtd => 1134,
            Manufacturer::DevelcoProductsAS => 1135,
            Manufacturer::IDesignSRL => 1136,
            Manufacturer::TiVoCorp => 1137,
            Manufacturer::ControlJPtyLtd => 1138,
            Manufacturer::SteelcaseInc => 1139,
            Manufacturer::IApartmentCoLtd => 1140,
            Manufacturer::IcomInc => 1141,
            Manufacturer::OxstrenWearableTechnologiesPrivateLimited => 1142,
            Manufacturer::BlueSparkTechnologies => 1143,
            Manufacturer::FarSiteCommunicationsLimited => 1144,
            Manufacturer::MywerkSystemGmbH => 1145,
            Manufacturer::SinosunTechnologyCoLtd => 1146,
            Manufacturer::MIYOSHIELECTRONICSCORPORATION => 1147,
            Manufacturer::POWERMATLTD => 1148,
            Manufacturer::OcclyLLC => 1149,
            Manufacturer::OurHubDevIvS => 1150,
            Manufacturer::ProMarkInc => 1151,
            Manufacturer::DynometricsInc => 1152,
            Manufacturer::QuintraxLimited => 1153,
            Manufacturer::POSTuningUdoVosshenrichGmbHCoKG => 1154,
            Manufacturer::MultiCareSystemsBV => 1155,
            Manufacturer::RevolTechnologiesInc => 1156,
            Manufacturer::SKIDATAAG => 1157,
            Manufacturer::DEVTECNOLOGIAINDUSTRIACOMERCIOEMANUTENCAODEEQUIPAMENTOSLTDAME => 1158,
            Manufacturer::CentricaConnectedHome => 1159,
            Manufacturer::AutomotiveDataSolutionsInc => 1160,
            Manufacturer::IgarashiEngineering => 1161,
            Manufacturer::TaelekOy => 1162,
            Manufacturer::CPElectronicsLimited => 1163,
            Manufacturer::VectronixAG => 1164,
            Manufacturer::SLabsSpZOO => 1165,
            Manufacturer::CompanionMedicalInc => 1166,
            Manufacturer::BlueKitchenGmbH => 1167,
            Manufacturer::MattingAB => 1168,
            Manufacturer::SOREXWirelessSolutionsGmbH => 1169,
            Manufacturer::ADCTechnologyInc => 1170,
            Manufacturer::LynxemiPteLtd => 1171,
            Manufacturer::SENNHEISERElectronicGmbHCoKG => 1172,
            Manufacturer::LMTMercerGroupInc => 1173,
            Manufacturer::PolymorphicLabsLLC => 1174,
            Manufacturer::CochlearLimited => 1175,
            Manufacturer::METERGroupIncUSA => 1176,
            Manufacturer::RuuviInnovationsLtd => 1177,
            Manufacturer::SituneAS => 1178,
            Manufacturer::NVistiLLC => 1179,
            Manufacturer::DyOcean => 1180,
            Manufacturer::UhlmannZacherGmbH => 1181,
            Manufacturer::ANDXORLLC => 1182,
            Manufacturer::TictoteAB => 1183,
            Manufacturer::VypinLLC => 1184,
            Manufacturer::PNISensorCorporation => 1185,
            Manufacturer::OvrEngineeredLLC => 1186,
            Manufacturer::GTTronicsHKLtd => 1187,
            Manufacturer::HerbertWaldmannGmbHCoKG => 1188,
            Manufacturer::GuangzhouFiiOElectronicsTechnologyCoLtd => 1189,
            Manufacturer::VinetechCoLtd => 1190,
            Manufacturer::DallasLogicCorporation => 1191,
            Manufacturer::BioTexInc => 1192,
            Manufacturer::DISCOVERYSOUNDTECHNOLOGYLLC => 1193,
            Manufacturer::LINKIOSAS => 1194,
            Manufacturer::HarbortronicsInc => 1195,
            Manufacturer::UndagridBV => 1196,
            Manufacturer::ShureInc => 1197,
            Manufacturer::ERMElectronicSystemsLTD => 1198,
            Manufacturer::BIOROWERHandelsagenturGmbH => 1199,
            Manufacturer::WebaSportUndMedArtikelGmbH => 1200,
            Manufacturer::KartographersTechnologiesPvtLtd => 1201,
            Manufacturer::TheShadowOnTheMoon => 1202,
            Manufacturer::MobikeHongKongLimited => 1203,
            Manufacturer::InuheatGroupAB => 1204,
            Manufacturer::SwiftronixAB => 1205,
            Manufacturer::DiagnopticsTechnologies => 1206,
            Manufacturer::AnalogDevicesInc => 1207,
            Manufacturer::SoraaInc => 1208,
            Manufacturer::CSRBuildingProductsLimited => 1209,
            Manufacturer::CrestronElectronicsInc => 1210,
            Manufacturer::NeateboxLtd => 1211,
            Manufacturer::DraegerwerkAGCoKGaA => 1212,
            Manufacturer::AlbynMedical => 1213,
            Manufacturer::AverosFZCO => 1214,
            Manufacturer::VITInitiativeLLC => 1215,
            Manufacturer::StatsportsInternational => 1216,
            Manufacturer::SospitasSRO => 1217,
            Manufacturer::DmetProductsCorp => 1218,
            Manufacturer::MantracourtElectronicsLimited => 1219,
            Manufacturer::TeAMHutchinsAB => 1220,
            Manufacturer::SeibertWilliamsGlassLLC => 1221,
            Manufacturer::InstaGmbH => 1222,
            Manufacturer::SvantekSpZOO => 1223,
            Manufacturer::ShanghaiFlycoElectricalApplianceCoLtd => 1224,
            Manufacturer::ThornwaveLabsInc => 1225,
            Manufacturer::SteinerOptikGmbH => 1226,
            Manufacturer::NovoNordiskAS => 1227,
            Manufacturer::EnfluxInc => 1228,
            Manufacturer::SafetechProductsLLC => 1229,
            Manufacturer::GOOOLEDSRL => 1230,
            Manufacturer::DOMSicherheitstechnikGmbHCoKG => 1231,
            Manufacturer::OlympusCorporation => 1232,
            Manufacturer::KTSGmbH => 1233,
            Manufacturer::AnloqTechnologiesInc => 1234,
            Manufacturer::QueerconInc => 1235,
            Manufacturer::N5thElementLtd => 1236,
            Manufacturer::GooeeLimited => 1237,
            Manufacturer::LUGLOCLLC => 1238,
            Manufacturer::BlincamInc => 1239,
            Manufacturer::FUJIFILMCorporation => 1240,
            Manufacturer::RandMcNally => 1241,
            Manufacturer::FranceschiMarinaSnc => 1242,
            Manufacturer::EngineeredAudioLLC => 1243,
            Manufacturer::IOTTIVEOPCPRIVATELIMITED => 1244,
            Manufacturer::N4MODTechnology => 1245,
            Manufacturer::LutronElectronicsCoInc => 1246,
            Manufacturer::Emerson => 1247,
            Manufacturer::GuardtecInc => 1248,
            Manufacturer::REACTECLIMITED => 1249,
            Manufacturer::EllieGrid => 1250,
            Manufacturer::UnderArmour => 1251,
            Manufacturer::Woodenshark => 1252,
            Manufacturer::AvackOy => 1253,
            Manufacturer::SmartSolutionTechnologyInc => 1254,
            Manufacturer::REHABTRONICSINC => 1255,
            Manufacturer::STABILOInternational => 1256,
            Manufacturer::BuschJaegerElektroGmbH => 1257,
            Manufacturer::PacificBioscienceLaboratoriesInc => 1258,
            Manufacturer::BirdHomeAutomationGmbH => 1259,
            Manufacturer::MotorolaSolutions => 1260,
            Manufacturer::R9TechnologyInc => 1261,
            Manufacturer::Auxivia => 1262,
            Manufacturer::DaisyWorksInc => 1263,
            Manufacturer::KosiLimited => 1264,
            Manufacturer::ThebenAG => 1265,
            Manufacturer::InDreamerTechsolPrivateLimited => 1266,
            Manufacturer::CerevastMedical => 1267,
            Manufacturer::ZanComputeInc => 1268,
            Manufacturer::PirelliTyreSPA => 1269,
            Manufacturer::McLearLimited => 1270,
            Manufacturer::ShenzhenHuidingTechnologyCoLtd => 1271,
            Manufacturer::ConvergenceSystemsLimited => 1272,
            Manufacturer::Interactio => 1273,
            Manufacturer::AndrotecGmbH => 1274,
            Manufacturer::BenchmarkDrivesGmbHCoKG => 1275,
            Manufacturer::SwingLyncLLC => 1276,
            Manufacturer::TapkeyGmbH => 1277,
            Manufacturer::WoosimSystemsInc => 1278,
            Manufacturer::MicrosemiCorporation => 1279,
            Manufacturer::WiliotLTD => 1280,
            Manufacturer::PolarisIND => 1281,
            Manufacturer::SpecifiKaliLLC => 1282,
            Manufacturer::LocorollInc => 1283,
            Manufacturer::PHYPLUSInc => 1284,
            Manufacturer::InPlayInc => 1285,
            Manufacturer::Hager => 1286,
            Manufacturer::Yellowcog => 1287,
            Manufacturer::AxesSystemSpZOO => 1288,
            Manufacturer::MyLIFTERInc => 1289,
            Manufacturer::ShakeOnBV => 1290,
            Manufacturer::VibrissaInc => 1291,
            Manufacturer::OSRAMGmbH => 1292,
            Manufacturer::TRSystemsGmbH => 1293,
            Manufacturer::YichipMicroelectronicsHangzhouCoLtd => 1294,
            Manufacturer::FoundationEngineeringLLC => 1295,
            Manufacturer::UNIELECTRONICSINC => 1296,
            Manufacturer::BrookfieldEquinoxLLC => 1297,
            Manufacturer::SoprodSA => 1298,
            Manufacturer::N9974091CanadaInc => 1299,
            Manufacturer::FIBROGmbH => 1300,
            Manufacturer::RBControlsCoLtd => 1301,
            Manufacturer::Footmarks => 1302,
            Manufacturer::AmtronicSverigeABFormerlyAmcoreAB => 1303,
            Manufacturer::MAMORIOInc => 1304,
            Manufacturer::TytoLifeLLC => 1305,
            Manufacturer::LeicaCameraAG => 1306,
            Manufacturer::AngeeTechnologiesLtd => 1307,
            Manufacturer::EDPS => 1308,
            Manufacturer::OFFLineCoLtd => 1309,
            Manufacturer::DetectBlueLimited => 1310,
            Manufacturer::SetecPtyLtd => 1311,
            Manufacturer::TargetCorporation => 1312,
            Manufacturer::IAICorporation => 1313,
            Manufacturer::NSTechInc => 1314,
            Manufacturer::MTGCoLtd => 1315,
            Manufacturer::HangzhouIMagicTechnologyCoLtd => 1316,
            Manufacturer::HONGKONGNANOICTECHNOLOGIESCOLIMITED => 1317,
            Manufacturer::HoneywellInternationalInc => 1318,
            Manufacturer::AlbrechtJUNG => 1319,
            Manufacturer::LuneraLightingInc => 1320,
            Manufacturer::LumenUAB => 1321,
            Manufacturer::KeynesControlsLtd => 1322,
            Manufacturer::NovartisAG => 1323,
            Manufacturer::GeosatisSA => 1324,
            Manufacturer::EXFOInc => 1325,
            Manufacturer::LEDVANCEGmbH => 1326,
            Manufacturer::CenterIDCorp => 1327,
            Manufacturer::AdoleneInc => 1328,
            Manufacturer::DMHoldingsInc => 1329,
            Manufacturer::CRESCOWirelessInc => 1330,
            Manufacturer::NuraOperationsPtyLtd => 1331,
            Manufacturer::FrontiergadgetInc => 1332,
            Manufacturer::SmartComponentTechnologiesLimited => 1333,
            Manufacturer::ZTRControlSystemsLLC => 1334,
            Manufacturer::MetaLogicsCorporation => 1335,
            Manufacturer::MedelaAG => 1336,
            Manufacturer::OPPLELightingCoLtd => 1337,
            Manufacturer::SavitechCorp => 1338,
            Manufacturer::Prodigy => 1339,
            Manufacturer::ScreenovateTechnologiesLtd => 1340,
            Manufacturer::TESASA => 1341,
            Manufacturer::CLIM8LIMITED => 1342,
            Manufacturer::SilergyCorp => 1343,
            Manufacturer::SilverPlusInc => 1344,
            Manufacturer::SharknetSrl => 1345,
            Manufacturer::MistSystemsInc => 1346,
            Manufacturer::MIWALOCKCOLtd => 1347,
            Manufacturer::OrthoSensorInc => 1348,
            Manufacturer::CandyHooverGroupSRL => 1349,
            Manufacturer::ApexarTechnologiesSA => 1350,
            Manufacturer::LOGICDATADOO => 1351,
            Manufacturer::KnickElektronischeMessgeraeteGmbHCoKG => 1352,
            Manufacturer::SmartTechnologiesAndInvestmentLimited => 1353,
            Manufacturer::LinoughInc => 1354,
            Manufacturer::AdvancedElectronicDesignsInc => 1355,
            Manufacturer::CarefreeScottFetzerCoInc => 1356,
            Manufacturer::Sensome => 1357,
            Manufacturer::FORTRONIKStoritveDOO => 1358,
            Manufacturer::Sinnoz => 1359,
            Manufacturer::VersaNetworksInc => 1360,
            Manufacturer::Sylero => 1361,
            Manufacturer::AvempaceSARL => 1362,
            Manufacturer::NintendoCoLtd => 1363,
            Manufacturer::NationalInstruments => 1364,
            Manufacturer::KROHNEMesstechnikGmbH => 1365,
            Manufacturer::OtodynamicsLtd => 1366,
            Manufacturer::ArwinTechnologyLimited => 1367,
            Manufacturer::BenegearInc => 1368,
            Manufacturer::NewconOptik => 1369,
            Manufacturer::CANDYHOUSEInc => 1370,
            Manufacturer::FRANKLINTECHNOLOGYINC => 1371,
            Manufacturer::Lely => 1372,
            Manufacturer::ValveCorporation => 1373,
            Manufacturer::HekatronVertriebsGmbH => 1374,
            Manufacturer::PROTECHSASDIGIRARDIANDREAC => 1375,
            Manufacturer::SaritaCareTechAPSFormerlySaritaCareTechIVS => 1376,
            Manufacturer::FinderSPA => 1377,
            Manufacturer::ThalmicLabsInc => 1378,
            Manufacturer::SteinelVertriebGmbH => 1379,
            Manufacturer::BeghelliSpa => 1380,
            Manufacturer::BeijingSmartspaceTechnologiesInc => 1381,
            Manufacturer::CORETRANSPORTTECHNOLOGIESNZLIMITED => 1382,
            Manufacturer::XiamenEveresportsGoodsCoLtd => 1383,
            Manufacturer::BodyportInc => 1384,
            Manufacturer::AudionicsSystemINC => 1385,
            Manufacturer::FlipnaviCoLtd => 1386,
            Manufacturer::RionCoLtd => 1387,
            Manufacturer::LongRangeSystemsLLC => 1388,
            Manufacturer::RedmondIndustrialGroupLLC => 1389,
            Manufacturer::VIZPININC => 1390,
            Manufacturer::BikeFinderAS => 1391,
            Manufacturer::ConsumerSleepSolutionsLLC => 1392,
            Manufacturer::PSIKICKINC => 1393,
            Manufacturer::AntTailCom => 1394,
            Manufacturer::LightingScienceGroupCorp => 1395,
            Manufacturer::AFFORDABLEELECTRONICSINC => 1396,
            Manufacturer::IntegralMemroyPlc => 1397,
            Manufacturer::GlobalstarInc => 1398,
            Manufacturer::TrueWearablesInc => 1399,
            Manufacturer::WellingtonDriveTechnologiesLtd => 1400,
            Manufacturer::EnsembleTechPrivateLimited => 1401,
            Manufacturer::OMNIRemotes => 1402,
            Manufacturer::DuracellUSOperationsInc => 1403,
            Manufacturer::ToorTechnologiesLLC => 1404,
            Manufacturer::InstinctPerformance => 1405,
            Manufacturer::BecoInc => 1406,
            Manufacturer::ScufGamingInternationalLLC => 1407,
            Manufacturer::ARANZMedicalLimited => 1408,
            Manufacturer::LYSTECHNOLOGIESLTD => 1409,
            Manufacturer::BreakwallAnalyticsLLC => 1410,
            Manufacturer::CodeBlueCommunications => 1411,
            Manufacturer::GiraGiersiepenGmbHCoKG => 1412,
            Manufacturer::HearingLabTechnology => 1413,
            Manufacturer::LEGRAND => 1414,
            Manufacturer::DerichsGmbH => 1415,
            Manufacturer::ALTTEKNIKLLC => 1416,
            Manufacturer::StarTechnologies => 1417,
            Manufacturer::STARTTODAYCOLTD => 1418,
            Manufacturer::MaximIntegratedProducts => 1419,
            Manufacturer::MERCKKommanditgesellschaftAufAktien => 1420,
            Manufacturer::JungheinrichAktiengesellschaft => 1421,
            Manufacturer::OculusVRLLC => 1422,
            Manufacturer::HENDONSEMICONDUCTORSPTYLTD => 1423,
            Manufacturer::Pur3Ltd => 1424,
            Manufacturer::ViasatGroupSPA => 1425,
            Manufacturer::IZITHERM => 1426,
            Manufacturer::SpauldingClinicalResearch => 1427,
            Manufacturer::KohlerCompany => 1428,
            Manufacturer::InorProcessAB => 1429,
            Manufacturer::MySmartBlinds => 1430,
            Manufacturer::RadioPulseInc => 1431,
            Manufacturer::RapitagGmbH => 1432,
            Manufacturer::Lazlo326LLC => 1433,
            Manufacturer::TeledyneLecroyInc => 1434,
            Manufacturer::DataflowSystemsLimited => 1435,
            Manufacturer::MacrogigaElectronics => 1436,
            Manufacturer::TandemDiabetesCare => 1437,
            Manufacturer::PolycomInc => 1438,
            Manufacturer::FisherPaykelHealthcare => 1439,
            Manufacturer::RCPSoftwareOy => 1440,
            Manufacturer::ShanghaiXiaoyiTechnologyCoLtd => 1441,
            Manufacturer::ADHERIUMNZLIMITED => 1442,
            Manufacturer::AxiomwareSystemsIncorporated => 1443,
            Manufacturer::OEMControlsInc => 1444,
            Manufacturer::KiirooBV => 1445,
            Manufacturer::TeleconMobileLimited => 1446,
            Manufacturer::SonosInc => 1447,
            Manufacturer::TomAllebrandiConsulting => 1448,
            Manufacturer::Monidor => 1449,
            Manufacturer::TramexLimited => 1450,
            Manufacturer::NofenceAS => 1451,
            Manufacturer::GoerTekDynaudioCoLtd => 1452,
            Manufacturer::INIA => 1453,
            Manufacturer::CARMATEMFGCOLTD => 1454,
            Manufacturer::OVLOOPINCFormerlyONvocal => 1455,
            Manufacturer::NewTecGmbH => 1456,
            Manufacturer::MedallionInstrumentationSystems => 1457,
            Manufacturer::CARELINDUSTRIESSPA => 1458,
            Manufacturer::ParabitSystemsInc => 1459,
            Manufacturer::WhiteHorseScientificLtd => 1460,
            Manufacturer::Verisilicon => 1461,
            Manufacturer::ElecsIndustryCoLtd => 1462,
            Manufacturer::BeijingPineconeElectronicsCoLtd => 1463,
            Manufacturer::AmbystomaLabsInc => 1464,
            Manufacturer::SuzhouPairlinkNetworkTechnology => 1465,
            Manufacturer::Igloohome => 1466,
            Manufacturer::OxfordMetricsPlc => 1467,
            Manufacturer::LevitonMfgCoInc => 1468,
            Manufacturer::ULCRoboticsInc => 1469,
            Manufacturer::RFIDGlobalBySoftworkSrL => 1470,
            Manufacturer::RealWorldSystemsCorporation => 1471,
            Manufacturer::NaluMedicalInc => 1472,
            Manufacturer::PIEngineering => 1473,
            Manufacturer::GroteIndustries => 1474,
            Manufacturer::RuntimeInc => 1475,
            Manufacturer::CodecoupSpZOOSpK => 1476,
            Manufacturer::SELVEGmbHCoKG => 1477,
            Manufacturer::SmartAnimalTrainingSystemsLLC => 1478,
            Manufacturer::LippertComponentsINC => 1479,
            Manufacturer::SOMFYSAS => 1480,
            Manufacturer::TBSElectronicsBV => 1481,
            Manufacturer::MHLCustomInc => 1482,
            Manufacturer::LucentWearLLC => 1483,
            Manufacturer::WATTSELECTRONICS => 1484,
            Manufacturer::RJBrandsLLC => 1485,
            Manufacturer::VZUGLtd => 1486,
            Manufacturer::BiowatchSA => 1487,
            Manufacturer::AnovaAppliedElectronics => 1488,
            Manufacturer::LindabAB => 1489,
            Manufacturer::FrogblueTECHNOLOGYGmbH => 1490,
            Manufacturer::AcurableLimited => 1491,
            Manufacturer::LAMPLIGHTCoLtd => 1492,
            Manufacturer::TEGAMInc => 1493,
            Manufacturer::ZhuhaiJieliTechnologyCoLtd => 1494,
            Manufacturer::ModumIoAG => 1495,
            Manufacturer::FarmJennyLLC => 1496,
            Manufacturer::ToyoElectronicsCorporation => 1497,
            Manufacturer::AppliedNeuralResearchCorp => 1498,
            Manufacturer::AvidIdentificationSystemsInc => 1499,
            Manufacturer::PetronicsInc => 1500,
            Manufacturer::EssentimGmbH => 1501,
            Manufacturer::QTMedicalINC => 1502,
            Manufacturer::VIRTUALCLINICDIRECTLIMITED => 1503,
            Manufacturer::ViperDesignLLC => 1504,
            Manufacturer::HumanIncorporated => 1505,
            Manufacturer::StAPPtronicsGmbH => 1506,
            Manufacturer::ElementalMachinesInc => 1507,
            Manufacturer::TaiyoYudenCoLtd => 1508,
            Manufacturer::INEOENERGYSYSTEMS => 1509,
            Manufacturer::MotionInstrumentsInc => 1510,
            Manufacturer::PressurePro => 1511,
            Manufacturer::COWBOY => 1512,
            Manufacturer::IconmobileGmbH => 1513,
            Manufacturer::ACSControlSystemGmbH => 1514,
            Manufacturer::BayerischeMotorenWerkeAG => 1515,
            Manufacturer::GycomSvenskaAB => 1516,
            Manufacturer::FujiXeroxCoLtd => 1517,
            Manufacturer::GlideInc => 1518,
            Manufacturer::SIKOMAS => 1519,
            Manufacturer::Beken => 1520,
            Manufacturer::TheLinuxFoundation => 1521,
            Manufacturer::TryAndECOLTD => 1522,
            Manufacturer::SeeScan => 1523,
            Manufacturer::ClearityLLC => 1524,
            Manufacturer::GSTAG => 1525,
            Manufacturer::DPTechnics => 1526,
            Manufacturer::TRACMOINC => 1527,
            Manufacturer::AnkiInc => 1528,
            Manufacturer::HagleitnerHygieneInternationalGmbH => 1529,
            Manufacturer::KonamiSportsLifeCoLtd => 1530,
            Manufacturer::ArbletInc => 1531,
            Manufacturer::MasbandoGmbH => 1532,
            Manufacturer::Innoseis => 1533,
            Manufacturer::NikoNv => 1534,
            Manufacturer::WellnomicsLtd => 1535,
            Manufacturer::IRobotCorporation => 1536,
            Manufacturer::SchraderElectronics => 1537,
            Manufacturer::GeberitInternationalAG => 1538,
            Manufacturer::FourthEvolutionInc => 1539,
            Manufacturer::Cell2JackLLC => 1540,
            Manufacturer::FMWElectronicFuttererUMaierWolfOHG => 1541,
            Manufacturer::JohnDeere => 1542,
            Manufacturer::RookeryTechnologyLtd => 1543,
            Manufacturer::KeySafeCloud => 1544,
            Manufacturer::BUCHILabortechnikAG => 1545,
            Manufacturer::IQAirAG => 1546,
            Manufacturer::TriaxTechnologiesInc => 1547,
            Manufacturer::VuzixCorporation => 1548,
            Manufacturer::TDKCorporation => 1549,
            Manufacturer::BlueairAB => 1550,
            Manufacturer::SignifyNetherlands => 1551,
            Manufacturer::ADHGUARDIANUSALLC => 1552,
            Manufacturer::BeurerGmbH => 1553,
            Manufacturer::PlayfinityAS => 1554,
            Manufacturer::HansDinslageGmbH => 1555,
            Manufacturer::OnAssetIntelligenceInc => 1556,
            Manufacturer::INTERACTIONCorporation => 1557,
            Manufacturer::OS42UGHaftungsbeschraenkt => 1558,
            Manufacturer::WIZCONNECTEDCOMPANYLIMITED => 1559,
            Manufacturer::AudioTechnicaCorporation => 1560,
            Manufacturer::SixGuysLabsSRO => 1561,
            Manufacturer::RWBeckettCorporation => 1562,
            Manufacturer::SilexTechnologyInc => 1563,
            Manufacturer::UnivationsLimited => 1564,
            Manufacturer::SENSInnovationApS => 1565,
            Manufacturer::DiamondKineticsInc => 1566,
            Manufacturer::PhrameInc => 1567,
            Manufacturer::ForciotOy => 1568,
            Manufacturer::NoordungDOO => 1569,
            Manufacturer::BeamLabsLLC => 1570,
            Manufacturer::PhiladelphiaScientificUKLimited => 1571,
            Manufacturer::BiovotionAG => 1572,
            Manufacturer::SquarePandaInc => 1573,
            Manufacturer::Amplifico => 1574,
            Manufacturer::WEGSA => 1575,
            Manufacturer::EnstoOy => 1576,
            Manufacturer::PHONEPEPVTLTD => 1577,
            Manufacturer::LunaticoAstronomiaSL => 1578,
            Manufacturer::MinebeaMitsumiInc => 1579,
            Manufacturer::ASPionGmbH => 1580,
            Manufacturer::VosslohSchwabeDeutschlandGmbH => 1581,
            Manufacturer::Procept => 1582,
            Manufacturer::ONKYOCorporation => 1583,
            Manufacturer::AsthreaDOO => 1584,
            Manufacturer::FortioriDesignLLC => 1585,
            Manufacturer::HugoMullerGmbHCoKG => 1586,
            Manufacturer::WangiLaiPLT => 1587,
            Manufacturer::FanstelCorp => 1588,
            Manufacturer::Crookwood => 1589,
            Manufacturer::ELECTRONICAINTEGRALDESONIDOSA => 1590,
            Manufacturer::GiPInnovationToolsGmbH => 1591,
            Manufacturer::LXSOLUTIONSPTYLIMITED => 1592,
            Manufacturer::ShenzhenMinewTechnologiesCoLtd => 1593,
            Manufacturer::ProlojikLimited => 1594,
            Manufacturer::KromekGroupPlc => 1595,
            Manufacturer::ContecMedicalSystemsCoLtd => 1596,
            Manufacturer::XradioTechnologyCoLtd => 1597,
            Manufacturer::TheIndoorLabLLC => 1598,
            Manufacturer::LDLTECHNOLOGY => 1599,
            Manufacturer::Parkifi => 1600,
            Manufacturer::RevenueCollectionSystemsFRANCESAS => 1601,
            Manufacturer::BluetrumTechnologyCoLtd => 1602,
            Manufacturer::MakitaCorporation => 1603,
            Manufacturer::ApogeeInstruments => 1604,
            Manufacturer::BM3 => 1605,
            Manufacturer::SGVGroupHoldingGmbHCoKG => 1606,
            Manufacturer::MEDEL => 1607,
            Manufacturer::UltuneTechnologies => 1608,
            Manufacturer::RyeexTechnologyCoLtd => 1609,
            Manufacturer::OpenResearchInstituteInc => 1610,
            Manufacturer::ScaleTecLtd => 1611,
            Manufacturer::ZumtobelGroupAG => 1612,
            Manufacturer::ILOQOy => 1613,
            Manufacturer::KRUXWorksTechnologiesPrivateLimited => 1614,
            Manufacturer::DigitalMatterPtyLtd => 1615,
            Manufacturer::CoravinInc => 1616,
            Manufacturer::StasisLabsInc => 1617,
            Manufacturer::ITZInnovationsUndTechnologiezentrumGmbH => 1618,
            Manufacturer::MeggittSA => 1619,
            Manufacturer::LedlenserGmbHCoKG => 1620,
            Manufacturer::RenishawPLC => 1621,
            Manufacturer::ZhuHaiAdvanProTechnologyCompanyLimited => 1622,
            Manufacturer::MeshtronixLimited => 1623,
            Manufacturer::PayexNorgeAS => 1624,
            Manufacturer::UnSeenTechnologiesOy => 1625,
            Manufacturer::ZoundIndustriesInternationalAB => 1626,
            Manufacturer::SesamSolutionsBV => 1627,
            Manufacturer::PixArtImagingInc => 1628,
            Manufacturer::PanduitCorp => 1629,
            Manufacturer::AloAB => 1630,
            Manufacturer::RicohCompanyLtd => 1631,
            Manufacturer::RTCIndustriesInc => 1632,
            Manufacturer::ModeLightingLimited => 1633,
            Manufacturer::ParticleIndustriesInc => 1634,
            Manufacturer::AdvancedTelemetrySystemsInc => 1635,
            Manufacturer::RHATECHNOLOGIESLTD => 1636,
            Manufacturer::PureInternationalLimited => 1637,
            Manufacturer::WTOWerkzeugEinrichtungenGmbH => 1638,
            Manufacturer::SparkTechnologyLabsInc => 1639,
            Manufacturer::BlebTechnologySrl => 1640,
            Manufacturer::LivanovaUSAInc => 1641,
            Manufacturer::BradyWorldwideInc => 1642,
            Manufacturer::DewertOkinGmbH => 1643,
            Manufacturer::ZtoveApS => 1644,
            Manufacturer::VensoEcoSolutionsAB => 1645,
            Manufacturer::EurotronikKranjDOO => 1646,
            Manufacturer::HugTechnologyLtd => 1647,
            Manufacturer::GemaSwitzerlandGmbH => 1648,
            Manufacturer::BuzzProductsLtd => 1649,
            Manufacturer::Kopi => 1650,
            Manufacturer::InnovaIdeasLimited => 1651,
            Manufacturer::BeSpoon => 1652,
            Manufacturer::DecoEnterprisesInc => 1653,
            Manufacturer::ExpaiSolutionsPrivateLimited => 1654,
            Manufacturer::InnovationFirstInc => 1655,
            Manufacturer::SABIKOffshoreGmbH => 1656,
            Manufacturer::N4iiiiInnovationsInc => 1657,
            Manufacturer::TheEnergyConservatoryInc => 1658,
            Manufacturer::IFARMINC => 1659,
            Manufacturer::TileInc => 1660,
            Manufacturer::FormAthleticaInc => 1661,
            Manufacturer::MbientLabInc => 1662,
            Manufacturer::NETGRIDSNCDIBISSOLIMATTEOCAMPOREALESIMONETOGNETTIFEDERICO => 1663,
            Manufacturer::MannkindCorporation => 1664,
            Manufacturer::TradeFIDESAS => 1665,
            Manufacturer::PhotronLimited => 1666,
            Manufacturer::EltakoGmbH => 1667,
            Manufacturer::DermalappsLLC => 1668,
            Manufacturer::GreenwaldIndustries => 1669,
            Manufacturer::InQsCoLtd => 1670,
            Manufacturer::CherryGmbH => 1671,
            Manufacturer::AmstedDigitalSolutionsInc => 1672,
            Manufacturer::TacxBV => 1673,
            Manufacturer::RaytacCorporation => 1674,
            Manufacturer::JiangsuTeranovoTechCoLtd => 1675,
            Manufacturer::ChangzhouSoundDragonElectronicsAndAcousticsCoLtd => 1676,
            Manufacturer::JetBeepInc => 1677,
            Manufacturer::RazerInc => 1678,
            Manufacturer::JRMGroupLimited => 1679,
            Manufacturer::EccrineSystemsInc => 1680,
            Manufacturer::CuriePointAB => 1681,
            Manufacturer::GeorgFischerAG => 1682,
            Manufacturer::HachDanaher => 1683,
            Manufacturer::TALaboratoriesLLC => 1684,
            Manufacturer::KokiHoldingsCoLtd => 1685,
            Manufacturer::GunakarPrivateLimited => 1686,
            Manufacturer::StemcoProductsInc => 1687,
            Manufacturer::WoodITSecurityLLC => 1688,
            Manufacturer::RandomLabSAS => 1689,
            Manufacturer::AderoIncFormerlyAsTrackRInc => 1690,
            Manufacturer::DragonchipLimited => 1691,
            Manufacturer::NoomiAB => 1692,
            Manufacturer::VakarosLLC => 1693,
            Manufacturer::DeltaElectronicsInc => 1694,
            Manufacturer::FlowMotionTechnologiesAS => 1695,
            Manufacturer::OBIQLocationTechnologyInc => 1696,
            Manufacturer::CardoSystemsLtd => 1697,
            Manufacturer::GlobalworxGmbH => 1698,
            Manufacturer::NymbusLLC => 1699,
            Manufacturer::SanyoTechnoSolutionsTottoriCoLtd => 1700,
            Manufacturer::TEKZITELPTYLTD => 1701,
            Manufacturer::RoambeeCorporation => 1702,
            Manufacturer::ChipseaTechnologiesShenZhenCorp => 1703,
            Manufacturer::GDMideaAirConditioningEquipmentCoLtd => 1704,
            Manufacturer::SoundmaxElectronicsLimited => 1705,
            Manufacturer::ProdualOy => 1706,
            Manufacturer::HMSIndustrialNetworksAB => 1707,
            Manufacturer::IngchipsTechnologyCoLtd => 1708,
            Manufacturer::InnovaSeaSystemsInc => 1709,
            Manufacturer::SenseQInc => 1710,
            Manufacturer::ShoofTechnologies => 1711,
            Manufacturer::BRKBrandsInc => 1712,
            Manufacturer::SimpliSafeInc => 1713,
            Manufacturer::TussockInnovation2013Limited => 1714,
            Manufacturer::TheHablabApS => 1715,
            Manufacturer::SencilionOy => 1716,
            Manufacturer::WabilogicLtd => 1717,
            Manufacturer::SociometricSolutionsInc => 1718,
            Manufacturer::ICOGNIZEGmbH => 1719,
            Manufacturer::ShadeCraftInc => 1720,
            Manufacturer::BeflexInc => 1721,
            Manufacturer::BeaconzoneLtd => 1722,
            Manufacturer::LeaftronixAnalogicSolutionsPrivateLimited => 1723,
            Manufacturer::TWSSrl => 1724,
            Manufacturer::ABBOy => 1725,
            Manufacturer::HitSeedOy => 1726,
            Manufacturer::DelcomProductsInc => 1727,
            Manufacturer::CAMESPA => 1728,
            Manufacturer::AlarmComHoldingsInc => 1729,
            Manufacturer::MeasurlogicInc => 1730,
            Manufacturer::KingIElectronicsCoLtd => 1731,
            Manufacturer::DreamLabsGmbH => 1732,
            Manufacturer::UrbanCompassInc => 1733,
            Manufacturer::SimmTronicLimited => 1734,
            Manufacturer::SomatixInc => 1735,
            Manufacturer::StorzBickelGmbHCoKG => 1736,
            Manufacturer::MYLAPSBV => 1737,
            Manufacturer::ShenzhenZhongguangInfotechTechnologyDevelopmentCoLtd => 1738,
            Manufacturer::DyewareLLC => 1739,
            Manufacturer::DongguanSmartActionTechnologyCoLtd => 1740,
            Manufacturer::DIGCorporation => 1741,
            Manufacturer::FIORGENTZ => 1742,
            Manufacturer::BelpartsNV => 1743,
            Manufacturer::EtekcityCorporation => 1744,
            Manufacturer::MeyerSoundLaboratoriesIncorporated => 1745,
            Manufacturer::CeoTronicsAG => 1746,
            Manufacturer::TriTeqLockAndSecurityLLC => 1747,
            Manufacturer::DYNAKODETECHNOLOGYPRIVATELIMITED => 1748,
            Manufacturer::SensirionAG => 1749,
            Manufacturer::JCTHealthcarePtyLtd => 1750,
            Manufacturer::FUBAAutomotiveElectronicsGmbH => 1751,
            Manufacturer::AWCompany => 1752,
            Manufacturer::ShanghaiMountainViewSiliconCoLtd => 1753,
            Manufacturer::ZliideTechnologiesApS => 1754,
            Manufacturer::AutomaticLabsInc => 1755,
            Manufacturer::IndustrialNetworkControlsLLC => 1756,
            Manufacturer::IntellithingsLtd => 1757,
            Manufacturer::NavcastInc => 1758,
            Manufacturer::HubbellLightingInc => 1759,
            Manufacturer::Avaya => 1760,
            Manufacturer::MilestoneAVTechnologiesLLC => 1761,
            Manufacturer::AlangoTechnologiesLtd => 1762,
            Manufacturer::SpinlockLtd => 1763,
            Manufacturer::Aluna => 1764,
            Manufacturer::OPTEXCOLTD => 1765,
            Manufacturer::NIHONDENGYOKOUSAKU => 1766,
            Manufacturer::VELUXAS => 1767,
            Manufacturer::AlmendoTechnologiesGmbH => 1768,
            Manufacturer::ZmartfunElectronicsInc => 1769,
            Manufacturer::SafeLineSwedenAB => 1770,
            Manufacturer::HoustonRadarLLC => 1771,
            Manufacturer::Sigur => 1772,
            Manufacturer::JNeadesLtd => 1773,
            Manufacturer::AvantisSystemsLimited => 1774,
            Manufacturer::ALCARECoLtd => 1775,
            Manufacturer::ChargyTechnologiesSL => 1776,
            Manufacturer::ShibutaniCoLtd => 1777,
            Manufacturer::TrapperDataAB => 1778,
            Manufacturer::AlfredInternationalInc => 1779,
            Manufacturer::NearFieldSolutionsLtd => 1780,
            Manufacturer::VigilTechnologiesInc => 1781,
            Manufacturer::VituloPlusBV => 1782,
            Manufacturer::WILKASchliesstechnikGmbH => 1783,
            Manufacturer::BodyPlusTechnologyCoLtd => 1784,
            Manufacturer::HappybrushGmbH => 1785,
            Manufacturer::EnequiAB => 1786,
            Manufacturer::SartoriusAG => 1787,
            Manufacturer::TomCommunicationIndustrialCoLtd => 1788,
            Manufacturer::ESSEmbeddedSystemSolutionsInc => 1789,
            Manufacturer::MahrGmbH => 1790,
            Manufacturer::RedpineSignalsInc => 1791,
            Manufacturer::TraqFreqLLC => 1792,
            Manufacturer::PAFERSTECH => 1793,
            Manufacturer::AkcijuSabiedribaSAFTEHNIKA => 1794,
            Manufacturer::BeijingJingdongCenturyTradingCoLtd => 1795,
            Manufacturer::JBXDesignsInc => 1796,
            Manufacturer::ABElectrolux => 1797,
            Manufacturer::WernherVonBraunCenterForASdvancedResearch => 1798,
            Manufacturer::EssityHygieneAndHealthAktiebolag => 1799,
            Manufacturer::BeInteractiveCoLtd => 1800,
            Manufacturer::CarewearCorp => 1801,
            Manufacturer::HufHLsbeckFRstGmbHCoKG => 1802,
            Manufacturer::ElementProductsInc => 1803,
            Manufacturer::BeijingWinnerMicroelectronicsCoLtd => 1804,
            Manufacturer::SmartSnuggPtyLtd => 1805,
            Manufacturer::FiveCoSarl => 1806,
            Manufacturer::CaliforniaThingsInc => 1807,
            Manufacturer::AudiodoAB => 1808,
            Manufacturer::ABAXAS => 1809,
            Manufacturer::BullGroupCompanyLimited => 1810,
            Manufacturer::RespiriLimited => 1811,
            Manufacturer::MindPeaceSafetyLLC => 1812,
            Manufacturer::VgyanSolutions => 1813,
            Manufacturer::Altonics => 1814,
            Manufacturer::IQsquareBV => 1815,
            Manufacturer::IDIBAIXEnginneering => 1816,
            Manufacturer::ECSG => 1817,
            Manufacturer::REVSMARTWEARABLEHKCOLTD => 1818,
            Manufacturer::Precor => 1819,
            Manufacturer::F5SportsInc => 1820,
            Manufacturer::ExoTICSystems => 1821,
            Manufacturer::DONGGUANHELEELECTRONICSCOLTD => 1822,
            Manufacturer::DongguanLieshengElectronicCoLtd => 1823,
            Manufacturer::OculeveInc => 1824,
            Manufacturer::CloverNetworkInc => 1825,
            Manufacturer::XiamenEholderElectronicsCoLtd => 1826,
            Manufacturer::FordMotorCompany => 1827,
            Manufacturer::GuangzhouSuperSoundInformationTechnologyCoLtd => 1828,
            Manufacturer::TedeeSpZOO => 1829,
            Manufacturer::PHCCorporation => 1830,
            Manufacturer::STALKITAS => 1831,
            Manufacturer::EliLillyAndCompany => 1832,
            Manufacturer::SwaraLinkTechnologies => 1833,
            Manufacturer::JMREmbeddedSystemsGmbH => 1834,
            Manufacturer::BitkeyInc => 1835,
            Manufacturer::GWAHygieneGmbH => 1836,
            Manufacturer::SaferaOy => 1837,
            Manufacturer::OpenPlatformSystemsLLC => 1838,
            Manufacturer::OnePlusElectronicsShenzhenCoLtd => 1839,
            Manufacturer::WildlifeAcousticsInc => 1840,
            Manufacturer::ABLICInc => 1841,
            Manufacturer::DairyTechInc => 1842,
            Manufacturer::IguanavationInc => 1843,
            Manufacturer::DiUSComputingPtyLtd => 1844,
            Manufacturer::UpRightTechnologiesLTD => 1845,
            Manufacturer::FrancisFundLLC => 1846,
            Manufacturer::LLCNavitek => 1847,
            Manufacturer::GlassSecurityPteLtd => 1848,
            Manufacturer::JiangsuQinhengCoLtd => 1849,
            Manufacturer::ChandlerSystemsInc => 1850,
            Manufacturer::FantiniCosmiSPA => 1851,
            Manufacturer::AcubitApS => 1852,
            Manufacturer::BeijingHaoHengTianTechCoLtd => 1853,
            Manufacturer::BluepackSRL => 1854,
            Manufacturer::BeijingUnisocTechnologiesCoLtd => 1855,
            Manufacturer::HITIQLIMITED => 1856,
            Manufacturer::MACSRL => 1857,
            Manufacturer::DMLLLC => 1858,
            Manufacturer::Sanofi => 1859,
            Manufacturer::SOCOMEC => 1860,
            Manufacturer::WIZNOVAInc => 1861,
            Manufacturer::SeitecElektronikGmbH => 1862,
            Manufacturer::ORTechnologiesPtyLtd => 1863,
            Manufacturer::GuangZhouKuGouComputerTechnologyCoLtd => 1864,
            Manufacturer::DIAODIAOBeijingTechnologyCoLtd => 1865,
            Manufacturer::IllusoryStudiosLLC => 1866,
            Manufacturer::SarvavidSoftwareSolutionsLLP => 1867,
            Manufacturer::IopoolSA => 1868,
            Manufacturer::AmtechSystemsLLC => 1869,
            Manufacturer::EAGLEDETECTIONSA => 1870,
            Manufacturer::MEDIATECHSRL => 1871,
            Manufacturer::HamiltonProfessionalServicesOfCanadaIncorporated => 1872,
            Manufacturer::ChangshaJEMOICDesignCoLtd => 1873,
            Manufacturer::ElatecGmbH => 1874,
            Manufacturer::JLGIndustriesInc => 1875,
            Manufacturer::MichaelParkin => 1876,
            Manufacturer::BrotherIndustriesLtd => 1877,
            Manufacturer::LumensForLessInc => 1878,
            Manufacturer::ELAInnovation => 1879,
            Manufacturer::UmanSenseAB => 1880,
            Manufacturer::ShanghaiInGeekCyberSecurityCoLtd => 1881,
            Manufacturer::HARMANCOLTD => 1882,
            Manufacturer::SmartSensorDevicesAB => 1883,
            Manufacturer::AntitronicsInc => 1884,
            Manufacturer::RHOMBUSSYSTEMSINC => 1885,
            Manufacturer::KaterraInc => 1886,
            Manufacturer::RemoteSolutionCoLTD => 1887,
            Manufacturer::VimarSpA => 1888,
            Manufacturer::MantisTechLLC => 1889,
            Manufacturer::TerOptaLtd => 1890,
            Manufacturer::PIKOLINSL => 1891,
            Manufacturer::WWZNInformationTechnologyCompanyLimited => 1892,
            Manufacturer::VoxxInternational => 1893,
            Manufacturer::ARTANDPROGRAMINC => 1894,
            Manufacturer::NITTODENKOASIATECHNICALCENTREPTELTD => 1895,
            Manufacturer::PelotonInteractiveInc => 1896,
            Manufacturer::ForceImpactTechnologies => 1897,
            Manufacturer::DmacMobileDevelopmentsLLC => 1898,
            Manufacturer::EngineeredMedicalTechnologies => 1899,
            Manufacturer::NoodleTechnologyInc => 1900,
            Manufacturer::GraesslinGmbH => 1901,
            Manufacturer::WuQiTechnologiesInc => 1902,
            Manufacturer::SuccessfulEndeavoursPtyLtd => 1903,
            Manufacturer::InnoConMedicalApS => 1904,
            Manufacturer::CorvexConnectedSafety => 1905,
            Manufacturer::ThirdwayvInc => 1906,
            Manufacturer::EchoflexSolutionsInc => 1907,
            Manufacturer::CMAXAsiaLimited => 1908,
            Manufacturer::N4eBusinessGmbH => 1909,
            Manufacturer::CyberTransportControlGmbH => 1910,
            Manufacturer::Cue => 1911,
            Manufacturer::KOAMTACINC => 1912,
            Manufacturer::LoopshoreOy => 1913,
            Manufacturer::NiruhaSystemsPrivateLimited => 1914,
            Manufacturer::AmaterZInc => 1915,
            Manufacturer::RadiusCoLtd => 1916,
            Manufacturer::SensoritySRO => 1917,
            Manufacturer::SparkageInc => 1918,
            Manufacturer::GlenviewSoftwareCorporation => 1919,
            Manufacturer::FinchTechnologiesLtd => 1920,
            Manufacturer::QingpingTechnologyBeijingCoLtd => 1921,
            Manufacturer::DeviceDriveAS => 1922,
            Manufacturer::ESEMBERLIMITEDLIABILITYCOMPANY => 1923,
            Manufacturer::AudifonGmbHCoKG => 1924,
            Manufacturer::O2MicroInc => 1925,
            Manufacturer::HLPControlsPtyLimited => 1926,
            Manufacturer::PangaeaSolution => 1927,
            Manufacturer::BubblyNetLLC => 1928,
            Manufacturer::NotAssigned => 1929,
            Manufacturer::TheWildflowerFoundation => 1930,
            Manufacturer::OptikamTechInc => 1931,
            Manufacturer::MINIBREWHOLDINGBV => 1932,
            Manufacturer::CybexGmbH => 1933,
            Manufacturer::FUJIMICNIIGATAINC => 1934,
            Manufacturer::HannaInstrumentsInc => 1935,
            Manufacturer::KOMPANAS => 1936,
            Manufacturer::ScoscheIndustriesInc => 1937,
            Manufacturer::ProvoCraft => 1938,
            Manufacturer::AEVSpolSRO => 1939,
            Manufacturer::TheCocaColaCompany => 1940,
            Manufacturer::GASTECCORPORATION => 1941,
            Manufacturer::StarLeafLtd => 1942,
            Manufacturer::WaterIDGmbH => 1943,
            Manufacturer::HoloKitInc => 1944,
            Manufacturer::PlantChoirInc => 1945,
            Manufacturer::GuangDongOppoMobileTelecommunicationsCorpLtd => 1946,
            Manufacturer::CSTELECTRONICSPROPRIETARYLIMITED => 1947,
            Manufacturer::SkyUKLimited => 1948,
            Manufacturer::DigibalePtyLtd => 1949,
            Manufacturer::SmartloxxGmbH => 1950,
            Manufacturer::PuneScientificLLP => 1951,
            Manufacturer::RegentBeleuchtungskorperAG => 1952,
            Manufacturer::ApolloNeuroscienceInc => 1953,
            Manufacturer::RokuInc => 1954,
            Manufacturer::ComcastCable => 1955,
            Manufacturer::XiamenMageInformationTechnologyCoLtd => 1956,
            Manufacturer::RABLightingInc => 1957,
            Manufacturer::MusenConnectInc => 1958,
            Manufacturer::ZumeInc => 1959,
            Manufacturer::ConbeeGmbH => 1960,
            Manufacturer::BruelKjaerSoundVibration => 1961,
            Manufacturer::TheKrogerCo => 1962,
            Manufacturer::GraniteRiverSolutionsInc => 1963,
            Manufacturer::LoupeDeckOy => 1964,
            Manufacturer::NewH3CTechnologiesCoLtd => 1965,
            Manufacturer::AureaSolucoesTecnologicasLtda => 1966,
            Manufacturer::HongKongBouffaloLabLimited => 1967,
            Manufacturer::GVConceptsInc => 1968,
            Manufacturer::ThomasDynamicsLLC => 1969,
            Manufacturer::MoecoIOTInc => 1970,
            Manufacturer::N2NTELEKOMUNIKACEAS => 1971,
            Manufacturer::HormannKGAntriebstechnik => 1972,
            Manufacturer::CRONOCHIPSL => 1973,
            Manufacturer::SoundbrennerLimited => 1974,
            Manufacturer::ETABLISSEMENTSGEORGESRENAULT => 1975,
            Manufacturer::ISwip => 1976,
            Manufacturer::EponaBiotecLimited => 1977,
            Manufacturer::BatteryBizInc => 1978,
            Manufacturer::EPICSRL => 1979,
            Manufacturer::KDCIRCUITSLLC => 1980,
            Manufacturer::GenedriveDiagnosticsLtd => 1981,
            Manufacturer::AxentiaTechnologiesAB => 1982,
            Manufacturer::REGULALtd => 1983,
            Manufacturer::BiralAG => 1984,
            Manufacturer::AWChestertonCompany => 1985,
            Manufacturer::RadinnAB => 1986,
            Manufacturer::CIMTechniquesInc => 1987,
            Manufacturer::JohnsonHealthTechNA => 1988,
            Manufacturer::JuneLifeInc => 1989,
            Manufacturer::BlueneticsGmbH => 1990,
            Manufacturer::IaconicDesignInc => 1991,
            Manufacturer::WRLDSCreationsAB => 1992,
            Manufacturer::SkullcandyInc => 1993,
            Manufacturer::ModulSystemHHAB => 1994,
            Manufacturer::WestPharmaceuticalServicesInc => 1995,
            Manufacturer::BarnacleSystemsInc => 1996,
            Manufacturer::SmartWaveTechnologiesCanadaInc => 1997,
            Manufacturer::ShanghaiTopChipMicroelectronicsTechCoLTD => 1998,
            Manufacturer::NeoSensoryInc => 1999,
            Manufacturer::HangzhouTuyaInformationTechnologyCoLtd => 2000,
            Manufacturer::ShanghaiPanchipMicroelectronicsCoLtd => 2001,
            Manufacturer::ReactAccessibilityLimited => 2002,
            Manufacturer::LIVNEXCoLtd => 2003,
            Manufacturer::KanoComputingLimited => 2004,
            Manufacturer::HootsClassicGmbH => 2005,
            Manufacturer::EcobeeInc => 2006,
            Manufacturer::NanjingQinhengMicroelectronicsCoLtd => 2007,
            Manufacturer::SOLUTIONSAMBRAINC => 2008,
            Manufacturer::MicroDesignInc => 2009,
            Manufacturer::STARLITECoLtd => 2010,
            Manufacturer::RemedeeLabs => 2011,
            Manufacturer::ThingOSGmbH => 2012,
            Manufacturer::LinearCircuits => 2013,
            Manufacturer::UnlimitedEngineeringSL => 2014,
            Manufacturer::SnapOnIncorporated => 2015,
            Manufacturer::EdifierInternationalLimited => 2016,
            Manufacturer::LucieLabs => 2017,
            Manufacturer::AlfredKaercherSECoKG => 2018,
            Manufacturer::AudiowiseTechnologyInc => 2019,
            Manufacturer::GeeksmeSL => 2020,
            Manufacturer::MinutInc => 2021,
            Manufacturer::AutogrowSystemsLimited => 2022,
            Manufacturer::KomfortIQInc => 2023,
            Manufacturer::PacketcraftInc => 2024,
            Manufacturer::HFeleGmbHCoKG => 2025,
            Manufacturer::ShapeLogInc => 2026,
            Manufacturer::NOVABASESRL => 2027,
            Manufacturer::FrecceLLC => 2028,
            Manufacturer::JouleIQINC => 2029,
            Manufacturer::KidzTekLLC => 2030,
            Manufacturer::AktiebolagetSandvikCoromant => 2031,
            Manufacturer::EMoolaComPtyLtd => 2032,
            Manufacturer::ZimiInnovationsPtyLtd => 2033,
            Manufacturer::SERENEGROUPINC => 2034,
            Manufacturer::DIGISINEENERGYTECHCOLTD => 2035,
            Manufacturer::MEDIRLABOrvosbiologiaiFejlesztoKorlatoltFelelosseguTarsasag => 2036,
            Manufacturer::BytonNorthAmericaCorporation => 2037,
            Manufacturer::ShenzhenTonliScienceAndTechnologyDevelopmentCoLtd => 2038,
            Manufacturer::CesarSystemsLtd => 2039,
            Manufacturer::QuipNYCInc => 2040,
            Manufacturer::DirectCommunicationSolutionsInc => 2041,
            Manufacturer::KlipschGroupInc => 2042,
            Manufacturer::AccessCoLtd => 2043,
            Manufacturer::RenaultSA => 2044,
            Manufacturer::JSKCOLTD => 2045,
            Manufacturer::BIROTA => 2046,
            Manufacturer::MaxonMotorLtd => 2047,
            Manufacturer::Optek => 2048,
            Manufacturer::CRONUSELECTRONICSLTD => 2049,
            Manufacturer::NantSoundInc => 2050,
            Manufacturer::DomintellSA => 2051,
            Manufacturer::AndonHealthCoLtd => 2052,
            Manufacturer::UrbanmindedLtd => 2053,
            Manufacturer::TYRISwedenAB => 2054,
            Manufacturer::ECDElectronicComponentsGmbHDresden => 2055,
            Manufacturer::SISTEMASKERNSOCIEDADANMINA => 2056,
            Manufacturer::TrulliAudio => 2057,
            Manufacturer::Altaneos => 2058,
            Manufacturer::NanoleafCanadaLimited => 2059,
            Manufacturer::IngyBV => 2060,
            Manufacturer::AzbilCo => 2061,
            Manufacturer::TATTCOMLLC => 2062,
            Manufacturer::ParadoxEngineeringSA => 2063,
            Manufacturer::LECOCorporation => 2064,
            Manufacturer::BeckerAntriebeGmbH => 2065,
            Manufacturer::MstreamTechnologiesInc => 2066,
            Manufacturer::FlextronicsInternationalUSAInc => 2067,
            Manufacturer::OssurHf => 2068,
            Manufacturer::SKCInc => 2069,
            Manufacturer::SPICASYSTEMSLLC => 2070,
            Manufacturer::WangsAllianceCorporation => 2071,
            Manufacturer::TatwahSA => 2072,
            Manufacturer::HunterDouglasInc => 2073,
            Manufacturer::ShenzhenConex => 2074,
            Manufacturer::DIM3 => 2075,
            Manufacturer::BobrickWashroomEquipmentInc => 2076,
            Manufacturer::PotrykusHoldingsAndDevelopmentLLC => 2077,
            Manufacturer::INFORMTechnologyGmbH => 2078,
            Manufacturer::ESenseLabLTD => 2079,
            Manufacturer::BrilliantHomeTechnologyInc => 2080,
            Manufacturer::INOVAGeophysicalInc => 2081,
            Manufacturer::AdafruitIndustries => 2082,
            Manufacturer::NexiteLtd => 2083,
            Manufacturer::N8PowerLimited => 2084,
            Manufacturer::CMEPTELTD => 2085,
            Manufacturer::HyundaiMotorCompany => 2086,
            Manufacturer::Kickmaker => 2087,
            Manufacturer::ShanghaiSuishengInformationTechnologyCoLtd => 2088,
            Manufacturer::HEXAGON => 2089,
            Manufacturer::MitutoyoCorporation => 2090,
            Manufacturer::ShenzhenFitcareElectronicsCoLtd => 2091,
            Manufacturer::INGICSTECHNOLOGYCOLTD => 2092,
            Manufacturer::INCUSPERFORMANCELTD => 2093,
            Manufacturer::ABBSPA => 2094,
            Manufacturer::BlippitAB => 2095,
            Manufacturer::CoreHealthAndFitnessLLC => 2096,
            Manufacturer::FoxbleLLC => 2097,
            Manufacturer::IntermotiveInc => 2098,
            Manufacturer::ConneqtechBV => 2099,
            Manufacturer::RIKENKEIKICOLTD => 2100,
            Manufacturer::CanopyGrowthCorporation => 2101,
            Manufacturer::BitwardsOy => 2102,
            Manufacturer::VivoMobileCommunicationCoLtd => 2103,
            Manufacturer::EtymoticResearchInc => 2104,
            Manufacturer::APuissance3 => 2105,
            Manufacturer::BPWBergischeAchsenKommanditgesellschaft => 2106,
            Manufacturer::PiaggioFastForward => 2107,
            Manufacturer::BeerTechLTD => 2108,
            Manufacturer::TokenizeInc => 2109,
            Manufacturer::ZorachkaLTD => 2110,
            Manufacturer::DLinkCorp => 2111,
            Manufacturer::DownRangeSystemsLLC => 2112,
            Manufacturer::GeneralLuminaireShanghaiCoLtd => 2113,
            Manufacturer::TangshanHongJiaElectronicTechnologyCoLTD => 2114,
            Manufacturer::FRAGRANCEDELIVERYTECHNOLOGIESLTD => 2115,
            Manufacturer::PepperlFuchsGmbH => 2116,
            Manufacturer::DometicCorporation => 2117,
            Manufacturer::USoundGmbH => 2118,
            Manufacturer::DNANUDGELIMITED => 2119,
            Manufacturer::JUJUJOINTSCANADACORP => 2120,
            Manufacturer::DoppleTechnologiesBV => 2121,
            Manufacturer::ARCOM => 2122,
            Manufacturer::BiotechwareSRL => 2123,
            Manufacturer::ORSOInc => 2124,
            Manufacturer::SafePort => 2125,
            Manufacturer::CarolColeCompany => 2126,
            Manufacturer::EmbeddedFitnessBV => 2127,
            Manufacturer::YealinkXiamenNetworkTechnologyCoLTD => 2128,
            Manufacturer::SubecaInc => 2129,
            Manufacturer::CognososInc => 2130,
            Manufacturer::PektronGroupLimited => 2131,
            Manufacturer::TapSoundSystem => 2132,
            Manufacturer::HeliosHockeyInc => 2133,
            Manufacturer::CanopyGrowthCorporation1 => 2134,
            Manufacturer::ParsylInc => 2135,
            Manufacturer::SOUNDBOKS => 2136,
            Manufacturer::BlueUp => 2137,
            Manufacturer::DAKATECH => 2138,
            Manufacturer::RICOHELECTRONICDEVICESCOLTD => 2139,
            Manufacturer::ACOSCOLTD => 2140,
            Manufacturer::GuilinZhishenInformationTechnologyCoLtd => 2141,
            Manufacturer::KrogSystemsLLC => 2142,
            Manufacturer::COMPEGPSTEAMSOCIEDADLIMITADA => 2143,
            Manufacturer::AlflexProductsBV => 2144,
            Manufacturer::SmartSensorLabsLtd => 2145,
            Manufacturer::SmartDriveInc => 2146,
            Manufacturer::YoTronicsTechnologyCoLtd => 2147,
            Manufacturer::Rafaelmicro => 2148,
            Manufacturer::EmergencyLightingProductsLimited => 2149,
            Manufacturer::LAONZCoLtd => 2150,
            Manufacturer::WesternDigitalTechologiesInc => 2151,
            Manufacturer::WIOsenseGmbHCoKG => 2152,
            Manufacturer::EVVASicherheitstechnologieGmbH => 2153,
            Manufacturer::OdicIncorporated => 2154,
            Manufacturer::PacificTrackLLC => 2155,
            Manufacturer::RevvoTechnologiesInc => 2156,
            Manufacturer::BiometrikaDOO => 2157,
            Manufacturer::VorwerkElektrowerkeGmbHCoKG => 2158,
            Manufacturer::TrackunitAS => 2159,
            Manufacturer::WyzeLabsInc => 2160,
            Manufacturer::DensionElektronikaiKftFormerlyDensionAudioSystemsLtd => 2161,
            Manufacturer::N11HealthTechnologiesLimited => 2162,
            Manufacturer::InnophaseIncorporated => 2163,
            Manufacturer::TreegreenLimited => 2164,
            Manufacturer::BernerInternationalLLC => 2165,
            Manufacturer::SmartResQApS => 2166,
            Manufacturer::TomeInc => 2167,
            Manufacturer::TheChamberlainGroupInc => 2168,
            Manufacturer::MIZUNOCorporation => 2169,
            Manufacturer::ZRFLLC => 2170,
            Manufacturer::BYSTAMP => 2171,
            Manufacturer::CrosscanGmbH => 2172,
            Manufacturer::KonftelAB => 2173,
            Manufacturer::N1barNetLimited => 2174,
            Manufacturer::PhillipsConnectTechnologiesLLC => 2175,
            Manufacturer::ImagiLabsAB => 2176,
            Manufacturer::Optalert => 2177,
            Manufacturer::PSYONICInc => 2178,
            Manufacturer::WintersteigerAG => 2179,
            Manufacturer::ControlidIndustriaComercioDeHardwareEServicosDeTecnologiaLtda => 2180,
            Manufacturer::LEVOLORINC => 2181,
            Manufacturer::XsensTechnologiesBV => 2182,
            Manufacturer::HydroGearLimitedPartnership => 2183,
            Manufacturer::EnPointeFencingPtyLtd => 2184,
            Manufacturer::XANTHIO => 2185,
            Manufacturer::SclakSRL => 2186,
            Manufacturer::TricorderArraayTechnologiesLLC => 2187,
            Manufacturer::GBSolutionCoLtd => 2188,
            Manufacturer::SolitonSystemsKK => 2189,
            Manufacturer::GIGATMSINC => 2190,
            Manufacturer::TaitInternationalLimited => 2191,
            Manufacturer::NICHIEIINTECCOLTD => 2192,
            Manufacturer::SmartWirelessGmbHCoKG => 2193,
            Manufacturer::IngenieurbueroBirnfeldUGHaftungsbeschraenkt => 2194,
            Manufacturer::MaytronicsLtd => 2195,
            Manufacturer::EPIFIT => 2196,
            Manufacturer::GimerMedical => 2197,
            Manufacturer::NokianRenkaatOyj => 2198,
            Manufacturer::CurrentLightingSolutionsLLC => 2199,
            Manufacturer::SensiboInc => 2200,
            Manufacturer::SFSUnimarketAG => 2201,
            Manufacturer::PrivateLimitedCompanyTeltonika => 2202,
            Manufacturer::SauconTechnologies => 2203,
            Manufacturer::EmbeddedDevicesCoCompany => 2204,
            Manufacturer::JJADEEnterpriseLLC => 2205,
            Manufacturer::ISENSInc => 2206,
            Manufacturer::WitschiElectronicLtd => 2207,
            Manufacturer::AclaraTechnologiesLLC => 2208,
            Manufacturer::EXEOTECHCORPORATION => 2209,
            Manufacturer::EpicSystemsCoLtd => 2210,
            Manufacturer::HoffmannSE => 2211,
            Manufacturer::RealmeChongqingMobileTelecommunicationsCorpLtd => 2212,
            Manufacturer::UMEHEALLtd => 2213,
            Manufacturer::IntelligenceworksInc => 2214,
            Manufacturer::TGR1618Limited => 2215,
            Manufacturer::ShanghaiKfcubeInc => 2216,
            Manufacturer::FraunhoferIIS => 2217,
            Manufacturer::SZDJITECHNOLOGYCOLTD => 2218,
            Manufacturer::CoburnTechnologyLLC => 2219,
            Manufacturer::TopreCorporation => 2220,
            Manufacturer::KayamaticsLimited => 2221,
            Manufacturer::MoticonReGoAG => 2222,
            Manufacturer::PolideaSpZOO => 2223,
            Manufacturer::TrivediAdvancedTechnologiesLLC => 2224,
            Manufacturer::COREVisionBV => 2225,
            Manufacturer::PFSCHWEISSTECHNOLOGIEGMBH => 2226,
            Manufacturer::IONIQSkincareGmbHCoKG => 2227,
            Manufacturer::SengledCoLtd => 2228,
            Manufacturer::TransferFi => 2229,
            Manufacturer::BoehringerIngelheimVetmedicaGmbH => 2230,
            Manufacturer::ABBInc => 2231,
            Manufacturer::CheckTechnologySolutionsLLC => 2232,
            Manufacturer::UShinLtd => 2233,
            Manufacturer::HYPERICEINC => 2234,
            Manufacturer::TokaiRikaCoLtd => 2235,
            Manufacturer::PrevaylLimited => 2236,
            Manufacturer::Bf1systemsLimited => 2237,
            Manufacturer::UbisysTechnologiesGmbH => 2238,
            Manufacturer::SIRCCoLtd => 2239,
            Manufacturer::AccentAdvancedSystemsSLU => 2240,
            Manufacturer::RaydenEarthLTD => 2241,
            Manufacturer::LindinventAB => 2242,
            Manufacturer::CHIPOLODOO => 2243,
            Manufacturer::CellAssistLLC => 2244,
            Manufacturer::JWagnerGmbH => 2245,
            Manufacturer::IntegraOpticsInc => 2246,
            Manufacturer::MonadnockSystemsLtd => 2247,
            Manufacturer::LiteboxerTechnologiesInc => 2248,
            Manufacturer::NoventaAG => 2249,
            Manufacturer::NubiaTechnologyCoLtd => 2250,
            Manufacturer::JTINNOVATIONSLIMITED => 2251,
            Manufacturer::TGMTECHNOLOGYCOLTD => 2252,
            Manufacturer::Ifly => 2253,
            Manufacturer::ZIMICORPORATION => 2254,
            Manufacturer::BetternotstealmybikeUGWithLimitedLiability => 2255,
            Manufacturer::ESTOMInfotechKft => 2256,
            Manufacturer::SensoviumInc => 2257,
            Manufacturer::VirscientLimited => 2258,
            Manufacturer::NovelBitsLLC => 2259,
            Manufacturer::ADATATechnologyCoLTD => 2260,
            Manufacturer::KEYes => 2261,
            Manufacturer::NomeOy => 2262,
            Manufacturer::InovonicsCorp => 2263,
            Manufacturer::WARES => 2264,
            Manufacturer::PointrLabsLimited => 2265,
            Manufacturer::MiridiaTechnologyIncorporated => 2266,
            Manufacturer::TertiumTechnology => 2267,
            Manufacturer::SHENZHENAUKEYEBUSINESSCOLTD => 2268,
            Manufacturer::CodeQ => 2269,
            Manufacturer::TycoElectronicsCorporationATEConnectivityLtdCompany => 2270,
            Manufacturer::IRISOHYAMACOLTD => 2271,
            Manufacturer::PhiliaTechnology => 2272,
            Manufacturer::KOZOKEIKAKUENGINEERINGInc => 2273,
            Manufacturer::ShenzhenSimoTechnologyCoLTD => 2274,
            Manufacturer::RepublicWirelessInc => 2275,
            Manufacturer::RashidovLtd => 2276,
            Manufacturer::CrowdConnectedLtd => 2277,
            Manufacturer::EnesoTecnologiaDeAdaptacionSL => 2278,
            Manufacturer::BarrotTechnologyLimited => 2279,
            Manufacturer::Naonext => 2280,
            Manufacturer::TaiwanIntelligentHomeCorp => 2281,
            Manufacturer::COWBELLENGINEERINGCOLTD => 2282,
            Manufacturer::BeijingBigMomentTechnologyCoLtd => 2283,
            Manufacturer::DensoCorporation => 2284,
            Manufacturer::IMIHydronicEngineeringInternationalSA => 2285,
            Manufacturer::ASKEY => 2286,
            Manufacturer::CumulusDigitalSystemsInc => 2287,
            Manufacturer::JoovvInc => 2288,
            Manufacturer::TheLSStarrettCompany => 2289,
            Manufacturer::Microoled => 2290,
            Manufacturer::PSPPauliServicesProductsGmbH => 2291,
            Manufacturer::KodimoTechnologiesCompanyLimited => 2292,
            Manufacturer::TymtixTechnologiesPrivateLimited => 2293,
            Manufacturer::DermalPhotonicsCorporation => 2294,
            Manufacturer::MTDProductsIncAffiliates => 2295,
            Manufacturer::InstagridGmbH => 2296,
            Manufacturer::SpacelabsMedicalInc => 2297,
            Manufacturer::TrooCorporation => 2298,
            Manufacturer::DarkglassElectronicsOy => 2299,
            Manufacturer::HillRom => 2300,
            Manufacturer::BioIntelliSenseInc => 2301,
            Manufacturer::KetronixsSdnBhd => 2302,
            Manufacturer::PlastimoldProductsInc => 2303,
            Manufacturer::BeijingZizaiTechnologyCoLTD => 2304,
            Manufacturer::Lucimed => 2305,
            Manufacturer::TSCAutoIDTechnologyCoLtd => 2306,
            Manufacturer::DATAMARSInc => 2307,
            Manufacturer::SUNCORPORATION => 2308,
            Manufacturer::YandexServicesAG => 2309,
            Manufacturer::ScopeLogisticalSolutions => 2310,
            Manufacturer::UserHelloLLC => 2311,
            Manufacturer::PinpointInnovationsLimited => 2312,
            Manufacturer::N70maiCoLtd => 2313,
            Manufacturer::ZhuhaiHoksiTechnologyCOLTD => 2314,
            Manufacturer::EMBRLabsINC => 2315,
            Manufacturer::RadiawaveTechnologiesCoLtd => 2316,
            Manufacturer::IOTInventGmbH => 2317,
            Manufacturer::OPTIMUSIOTTECHLLP => 2318,
            Manufacturer::VCInc => 2319,
            Manufacturer::ASRMicroelectronicsShanghaiCoLtd => 2320,
            Manufacturer::DouglasLightingControlsInc => 2321,
            Manufacturer::NerbioMedicalSoftwarePlatformsInc => 2322,
            Manufacturer::BraveheartWirelessInc => 2323,
            Manufacturer::INEOSENSE => 2324,
            Manufacturer::HondaMotorCoLtd => 2325,
            Manufacturer::AmbientSensorsLLC => 2326,
            Manufacturer::ASRMicroelectronicsShenZhenCoLtd => 2327,
            Manufacturer::TechnosphereLabsPvtLtd => 2328,
            Manufacturer::NOSMDLIMITED => 2329,
            Manufacturer::AlbertronicBV => 2330,
            Manufacturer::LuminosticsInc => 2331,
            Manufacturer::OblamatikAG => 2332,
            Manufacturer::InnokindInc => 2333,
            Manufacturer::MelbotStudiosSociedadLimitada => 2334,
            Manufacturer::MyzeeTechnology => 2335,
            Manufacturer::OmnisenseLimited => 2336,
            Manufacturer::KAHAPTELTD => 2337,
            Manufacturer::ShanghaiMXCHIPInformationTechnologyCoLtd => 2338,
            Manufacturer::JSBTECHPTELTD => 2339,
            Manufacturer::FundacionTecnaliaResearchAndInnovation => 2340,
            Manufacturer::YukaiEngineeringInc => 2341,
            Manufacturer::GooligumTechnologiesPtyLtd => 2342,
            Manufacturer::ROOQGmbH => 2343,
            Manufacturer::AiRISTA => 2344,
            Manufacturer::QingdaoHaierTechnologyCoLtd => 2345,
            Manufacturer::SapplVerwaltungsUndBetriebsGmbH => 2346,
            Manufacturer::TekHome => 2347,
            Manufacturer::PCIPrivateLimited => 2348,
            Manufacturer::LeggettPlattIncorporated => 2349,
            Manufacturer::PSGmbH => 2350,
            Manufacturer::COBOSpA => 2351,
            Manufacturer::JamesWalkerRotaBoltLimited => 2352,
            Manufacturer::BREATHINGSCoLtd => 2353,
            Manufacturer::BarVisionLLC => 2354,
            Manufacturer::SRAM => 2355,
            Manufacturer::KiteSpringInc => 2356,
            Manufacturer::ReconnectInc => 2357,
            Manufacturer::ElekonAG => 2358,
            Manufacturer::RealThingksGmbH => 2359,
            Manufacturer::HenwayTechnologiesLTD => 2360,
            Manufacturer::ASTEMCoLtd => 2361,
            Manufacturer::LinkedSemiMicroelectronicsXiamenCoLtd => 2362,
            Manufacturer::ENSESOLLC => 2363,
            Manufacturer::XenomaInc => 2364,
            Manufacturer::AdolfWuerthGmbHCoKG => 2365,
            Manufacturer::CatalyftLabsInc => 2366,
            Manufacturer::JEPICOCorporation => 2367,
            Manufacturer::HeroWorkoutGmbH => 2368,
            Manufacturer::RivianAutomotiveLLC => 2369,
            Manufacturer::TRANSSIONHOLDINGSLIMITED => 2370,
            Manufacturer::InovonicsCorp1 => 2371,
            Manufacturer::AgitronDOO => 2372,
            Manufacturer::GlobeJiangsuCoLtd => 2373,
            Manufacturer::AMCInternationalAlfaMetalcraftCorporationAG => 2374,
            Manufacturer::FirstLightTechnologiesLtd => 2375,
            Manufacturer::WearableLinkLimited => 2376,
            Manufacturer::MetronomHealthEurope => 2377,
            Manufacturer::ZwiftInc => 2378,
            Manufacturer::KindevaDrugDeliveryLP => 2379,
            Manufacturer::GimmiSysGmbH => 2380,
            Manufacturer::TkLABSINC => 2381,
            Manufacturer::PassiveBoltInc => 2382,
            Manufacturer::LimitedLiabilityCompanyMikrotikls => 2383,
            Manufacturer::Capetech => 2384,
            Manufacturer::PPRS => 2385,
            Manufacturer::ApptricityCorporation => 2386,
            Manufacturer::LogiLubeLLC => 2387,
            Manufacturer::Julbo => 2388,
            Manufacturer::BrevilleGroup => 2389,
            Manufacturer::Kerlink => 2390,
            Manufacturer::OhsungElectronics => 2391,
            Manufacturer::ZTECorporation => 2392,
            Manufacturer::HerdDoggInc => 2393,
            Manufacturer::SelektBilgisayarLletisimUrunleriLnsaatSanayiVeTicaretLimitedSirketi => 2394,
            Manufacturer::LismoreInstrumentsLimited => 2395,
            Manufacturer::LogiLubeLLC1 => 2396,
            Manufacturer::ETC => 2397,
            Manufacturer::BioEchoNetInc => 2398,
            Manufacturer::NUANCEHEARINGLTD => 2399,
            Manufacturer::SenaTechnologiesInc => 2400,
            Manufacturer::LinkuraAB => 2401,
            Manufacturer::GLSolutionsKK => 2402,
            Manufacturer::MoonbirdBV => 2403,
            Manufacturer::CountrymateTechnologyLimited => 2404,
            Manufacturer::AsahiKaseiCorporation => 2405,
            Manufacturer::PointGuardLLC => 2406,
            Manufacturer::NeoMaterialsAndConsultingInc => 2407,
            Manufacturer::ActevMotorsInc => 2408,
            Manufacturer::WoanTechnologyShenzhenCoLtd => 2409,
            Manufacturer::DricosInc => 2410,
            Manufacturer::GuideIDBV => 2411,
            Manufacturer::N93747319QuebecInc => 2412,
            Manufacturer::GunwerksLLC => 2413,
            Manufacturer::BandIndustriesInc => 2414,
            Manufacturer::LundMotionProductsInc => 2415,
            Manufacturer::IBADosimetryGmbH => 2416,
            Manufacturer::GA => 2417,
            Manufacturer::ClosedJointStockCompanyZavodFlometrZavodFlometrCJSC => 2418,
            Manufacturer::PopitOy => 2419,
            Manufacturer::ABEYE => 2420,
            Manufacturer::BlueIOTBeijingTechnologyCoLtd => 2421,
            Manufacturer::FaunaAudioGmbH => 2422,
            Manufacturer::TOYOTAMotorCorporation => 2423,
            Manufacturer::ZifferEinsGmbHCoKG => 2424,
            Manufacturer::BIOTRONIKSECoKG => 2425,
            Manufacturer::CORECORPORATION => 2426,
            Manufacturer::CTEKSwedenAB => 2427,
            Manufacturer::ThorleyIndustriesLLC => 2428,
            Manufacturer::CLBBV => 2429,
            Manufacturer::SonicSensoryInc => 2430,
            Manufacturer::ISEMARSRL => 2431,
            Manufacturer::DEKRATESTINGANDCERTIFICATIONSAU => 2432,
            Manufacturer::BernardKroneHoldingSECoKG => 2433,
            Manufacturer::ELPROBUCHSAG => 2434,
            Manufacturer::FeedbackSportsLLC => 2435,
            Manufacturer::TeraTronGmbH => 2436,
            Manufacturer::LumosHealthInc => 2437,
            Manufacturer::CelloHillLLC => 2438,
            Manufacturer::TSEBRAKESINC => 2439,
            Manufacturer::BHMTechProduktionsgesellschaftMBH => 2440,
            Manufacturer::WIKAAlexanderWiegandSECoKG => 2441,
            Manufacturer::Biovigil => 2442,
            Manufacturer::MequonicEngineeringSL => 2443,
            Manufacturer::BGridBV => 2444,
            Manufacturer::C3WIRELESSLLC => 2445,
            Manufacturer::ADVEEZ => 2446,
            Manufacturer::AktiebolagetRegin => 2447,
            Manufacturer::AntonPaarGmbH => 2448,
            Manufacturer::TelenorASA => 2449,
            Manufacturer::BigKaiserPrecisionToolingLtd => 2450,
            Manufacturer::AbsoluteAudioLabsBV => 2451,
            Manufacturer::VT42PtyLtd => 2452,
            Manufacturer::BronkhorstHighTechBV => 2453,
            Manufacturer::CEFeinGmbH => 2454,
            Manufacturer::NextMind => 2455,
            Manufacturer::PixieDustTechnologiesInc => 2456,
            Manufacturer::ETacticaEhf => 2457,
            Manufacturer::NewAudioLLC => 2458,
            Manufacturer::SendumWirelessCorporation => 2459,
            Manufacturer::DeisterElectronicGmbH => 2460,
            Manufacturer::YKKAPInc => 2461,
            Manufacturer::StepOneLimited => 2462,
            Manufacturer::KoyaMedicalInc => 2463,
            Manufacturer::ProofDiagnosticsInc => 2464,
            Manufacturer::VOSSystemsLLC => 2465,
            Manufacturer::ENGAGENOWDATASCIENCESPRIVATELIMITED => 2466,
            Manufacturer::ARDUINOSA => 2467,
            Manufacturer::KUMHOELECTRICSINC => 2468,
            Manufacturer::SecurityEnhancementSystemsLLC => 2469,
            Manufacturer::BEIJINGELECTRICVEHICLECOLTD => 2470,
            Manufacturer::PaybuddyApS => 2471,
            Manufacturer::KHNSolutionsInc => 2472,
            Manufacturer::NipponCeramicCoLtd => 2473,
            Manufacturer::PHOTODYNAMICINCORPORATED => 2474,
            Manufacturer::DashLogicInc => 2475,
            Manufacturer::Ambiq => 2476,
            Manufacturer::NarhwallInc => 2477,
            Manufacturer::PozyxNV => 2478,
            Manufacturer::IfLinkOpenCommunity => 2479,
            Manufacturer::DeublinCompanyLLC => 2480,
            Manufacturer::BLINQY => 2481,
            Manufacturer::DYPHI => 2482,
            Manufacturer::BlueXMicroelectronicsCorpLtd => 2483,
            Manufacturer::PentaLockAps => 2484,
            Manufacturer::AUTECGesellschaftFuerAutomationstechnikMbH => 2485,
            Manufacturer::PegasusTechnologiesInc => 2486,
            Manufacturer::BoutLabsLLC => 2487,
            Manufacturer::PlayerDataLimited => 2488,
            Manufacturer::SAVOYELECTRONICLIGHTING => 2489,
            Manufacturer::ElimoEngineeringLtd => 2490,
            Manufacturer::SkyStreamCorporation => 2491,
            Manufacturer::AerosensLLC => 2492,
            Manufacturer::CentreSuisseDElectroniqueEtDeMicrotechniqueSA => 2493,
            Manufacturer::VesselLtd => 2494,
            Manufacturer::SpanIOInc => 2495,
            Manufacturer::AnotherBrainInc => 2496,
            Manufacturer::Rosewill => 2497,
            Manufacturer::UniversalAudioInc => 2498,
            Manufacturer::JAPANTOBACCOINC => 2499,
            Manufacturer::UVISIO => 2500,
            Manufacturer::HungYiMicroelectronicsCoLtd => 2501,
            Manufacturer::HonorDeviceCoLtd => 2502,
            Manufacturer::CombustionLLC => 2503,
            Manufacturer::XUNTONG => 2504,
            Manufacturer::CrowdGlowLtd => 2505,
            Manufacturer::Mobitrace => 2506,
            Manufacturer::HxEngineeringLLC => 2507,
            Manufacturer::Senso4sDOO => 2508,
            Manufacturer::Blyott => 2509,
            Manufacturer::JuliusBlumGmbH => 2510,
            Manufacturer::BlueStreakIoTLLC => 2511,
            Manufacturer::ChessWiseBV => 2512,
            Manufacturer::ABLEPAYTECHNOLOGIESAS => 2513,
            Manufacturer::TemperatureSensitiveSolutionsSystemsSwedenAB => 2514,
            Manufacturer::HeartHeroInc => 2515,
            Manufacturer::ORBISInc => 2516,
            Manufacturer::GEARRADIOELECTRONICSCORP => 2517,
            Manufacturer::EARTEKNIKISITMEVEODIOMETRICIHAZLARISANAYIVETICARETANONIMSIRKETI => 2518,
            Manufacturer::Coyotta => 2519,
            Manufacturer::SynergyTecnologiaEmSistemasLtda => 2520,
            Manufacturer::VivoSensMedicalGmbH => 2521,
            Manufacturer::NagravisionSA => 2522,
            Manufacturer::BionicAvionicsInc => 2523,
            Manufacturer::AON2Ltd => 2524,
            Manufacturer::InnowareDevelopmentAB => 2525,
            Manufacturer::JLDTechnologySolutionsLLC => 2526,
            Manufacturer::MagnusTechnologySdnBhd => 2527,
            Manufacturer::PreddioTechnologiesInc => 2528,
            Manufacturer::TagNTracInc => 2529,
            Manufacturer::WuhanLinptechCoLtd => 2530,
            Manufacturer::FridayHomeAps => 2531,
            Manufacturer::CPSAS => 2532,
            Manufacturer::Mobilogix => 2533,
            Manufacturer::MasoniteCorporation => 2534,
            Manufacturer::KabushikigaishaHANERON => 2535,
            Manufacturer::MelangeSystemsPvtLtd => 2536,
            Manufacturer::LumenRadioAB => 2537,
            Manufacturer::AthlosOy => 2538,
            Manufacturer::KEANELECTRONICSPTYLTD => 2539,
            Manufacturer::YukonAdvancedOpticsWorldwideUAB => 2540,
            Manufacturer::SibelInc => 2541,
            Manufacturer::OJMARSA => 2542,
            Manufacturer::SteinelSolutionsAG => 2543,
            Manufacturer::WatchGasBV => 2544,
            Manufacturer::OMDigitalSolutionsCorporation => 2545,
            Manufacturer::AudearaPtyLtd => 2546,
            Manufacturer::BeijingZeroZeroInfinityTechnologyCoLtd => 2547,
            Manufacturer::SpectrumTechnologiesInc => 2548,
            Manufacturer::OKIElectricIndustryCoLtd => 2549,
            Manufacturer::MobileActionTechnologyInc => 2550,
            Manufacturer::SENSATECCoLtd => 2551,
            Manufacturer::ROSRL => 2552,
            Manufacturer::HangzhouYaguanTechnologyCoLTD => 2553,
            Manufacturer::ListenTechnologiesCorporation => 2554,
            Manufacturer::TOITUCOLTD => 2555,
            Manufacturer::Confidex => 2556,
            Manufacturer::KeepTechnologiesInc => 2557,
            Manufacturer::LichtvisionEngineeringGmbH => 2558,
            Manufacturer::AIRSTAR => 2559,
            Manufacturer::AmplerBikesOU => 2560,
            Manufacturer::CleveronAS => 2561,
            Manufacturer::AyxonDynamicsGmbH => 2562,
            Manufacturer::DonutroboticsCoLtd => 2563,
            Manufacturer::FlosonicsMedical => 2564,
            Manufacturer::SouthwireCompanyLLC => 2565,
            Manufacturer::ShanghaiWuqiMicroelectronicsCoLtd => 2566,
            Manufacturer::ReflowPtyLtd => 2567,
            Manufacturer::OrasOy => 2568,
            Manufacturer::ECCT => 2569,
            Manufacturer::VolanTechnologyInc => 2570,
            Manufacturer::SIANASystems => 2571,
            Manufacturer::ShanghaiYidianIntelligentTechnologyCoLtd => 2572,
            Manufacturer::BluePeacockGmbH => 2573,
            Manufacturer::RolandCorporation => 2574,
            Manufacturer::LIXILCorporation => 2575,
            Manufacturer::SUBARUCorporation => 2576,
            Manufacturer::Sensolus => 2577,
            Manufacturer::DysonTechnologyLimited => 2578,
            Manufacturer::Tec4medLifeScienceGmbH => 2579,
            Manufacturer::CROXELINC => 2580,
            Manufacturer::SyngInc => 2581,
            Manufacturer::RIDEVISIONLTD => 2582,
            Manufacturer::PlumeDesignInc => 2583,
            Manufacturer::CambridgeAnimalTechnologiesLtd => 2584,
            Manufacturer::MaxellLtd => 2585,
            Manufacturer::LinkLabsInc => 2586,
            Manufacturer::EmbravaPtyLtd => 2587,
            Manufacturer::INPEAKSC => 2588,
            Manufacturer::APIK => 2589,
            Manufacturer::CombiQAB => 2590,
            Manufacturer::DeVilbissHealthcareLLC => 2591,
            Manufacturer::JiangxiInnotechTechnologyCoLtd => 2592,
            Manufacturer::ApollogicSpZOO => 2593,
            Manufacturer::DAIICHIKOSHOCOLTD => 2594,
            Manufacturer::BIXOLONCOLTD => 2595,
            Manufacturer::AtmosicTechnologiesInc => 2596,
            Manufacturer::EranFinancialServicesLLC => 2597,
            Manufacturer::LouisVuitton => 2598,
            Manufacturer::AYUDEVICESPRIVATELIMITED => 2599,
            Manufacturer::NanoFlex => 2600,
            Manufacturer::WorthcloudTechnologyCoLtd => 2601,
            Manufacturer::YamahaCorporation => 2602,
            Manufacturer::PaceBaitIVS => 2603,
            Manufacturer::ShenzhenHTIntelligentControlCoLtd => 2604,
            Manufacturer::ShenzhenFeasycomTechnologyCoLtd => 2605,
            Manufacturer::ZumaArrayLimited => 2606,
            Manufacturer::InstamicInc => 2607,
            Manufacturer::AirWeigh => 2608,
            Manufacturer::NevroCorp => 2609,
            Manufacturer::PinnacleTechnologyInc => 2610,
            Manufacturer::WMFAG => 2611,
            Manufacturer::LuxerCorporation => 2612,
            Manufacturer::SafectoryGmbH => 2613,
            Manufacturer::NGKSPARKPLUGCOLTD => 2614,
            Manufacturer::N2587702OntarioInc => 2615,
            Manufacturer::BouffaloLabNanjingLtd => 2616,
            Manufacturer::BLUETICKETINGSRL => 2617,
            Manufacturer::IncotexCoLtd => 2618,
            Manufacturer::GalileoTechnologyLimited => 2619,
            Manufacturer::SitecoGmbH => 2620,
            Manufacturer::DELABIE => 2621,
            Manufacturer::HefeiYunlianSemiconductorCoLtd => 2622,
            Manufacturer::ShenzhenYopeakOptoelectronicsTechnologyCoLtd => 2623,
            Manufacturer::GEWISSSPA => 2624,
            Manufacturer::OPEXCorporation => 2625,
            Manufacturer::MotionalysisInc => 2626,
            Manufacturer::BuschSystemsInternationalInc => 2627,
            Manufacturer::NovidanInc => 2628,
            Manufacturer::N3SISecuritySystemsInc => 2629,
            Manufacturer::BeijingHCInfiniteTechnologyLimited => 2630,
            Manufacturer::TheWandCompanyLtd => 2631,
            Manufacturer::JRCMobilityInc => 2632,
            Manufacturer::VentureResearchInc => 2633,
            Manufacturer::MapLargeInc => 2634,
            Manufacturer::MistyWestEnergyAndTransportLtd => 2635,
            Manufacturer::SiFliTechnologiesShanghaiInc => 2636,
            Manufacturer::LocknTechnologiesPrivateLimited => 2637,
            Manufacturer::ToytecCorporation => 2638,
            Manufacturer::VANMOOFGlobalHoldingBV => 2639,
            Manufacturer::NextscapeInc => 2640,
            Manufacturer::CSIRO => 2641,
            Manufacturer::FollowSenseEuropeBV => 2642,
            Manufacturer::KKMCOMPANYLIMITED => 2643,
            Manufacturer::SQLTechnologiesCorp => 2644,
            Manufacturer::InugoSystemsLimited => 2645,
            Manufacturer::Ambie => 2646,
            Manufacturer::MeizhouGuoWeiElectronicsCoLtd => 2647,
            Manufacturer::IndigoDiabetes => 2648,
            Manufacturer::TourBuiltLLC => 2649,
            Manufacturer::SontheimIndustrieElektronikGmbH => 2650,
            Manufacturer::LEGICIdentsystemsAG => 2651,
            Manufacturer::InnovativeDesignLabsInc => 2652,
            Manufacturer::MGEnergySystemsBV => 2653,
            Manufacturer::LaceClipsLlc => 2654,
            Manufacturer::Stryker => 2655,
            Manufacturer::DATANGSEMICONDUCTORTECHNOLOGYCOLTD => 2656,
            Manufacturer::SmartParksBV => 2657,
            Manufacturer::MOKOTECHNOLOGYLtd => 2658,
            Manufacturer::GremsyJSC => 2659,
            Manufacturer::GeopalSystemAS => 2660,
            Manufacturer::LytxINC => 2661,
            Manufacturer::JUSTMORPHPTELTD => 2662,
            Manufacturer::BeijingSuperHexaCenturyTechnologyCOLtd => 2663,
            Manufacturer::FocusIngenieriaSRL => 2664,
            Manufacturer::HAPPIESTBABYINC => 2665,
            Manufacturer::ScribbleDesignInc => 2666,
            Manufacturer::OlympicOphthalmicsInc => 2667,
            Manufacturer::Pokkels => 2668,
            Manufacturer::KUUKANJYOKINCoLtd => 2669,
            Manufacturer::PacSaneLimited => 2670,
            Manufacturer::WarnerBros => 2671,
            Manufacturer::Ooma => 2672,
            Manufacturer::SenquipPtyLtd => 2673,
            Manufacturer::JumoGmbHCoKG => 2674,
            Manufacturer::InnohomeOy => 2675,
            Manufacturer::MICROSONSA => 2676,
            Manufacturer::DeltaCycleCorporation => 2677,
            Manufacturer::SynapticsIncorporated => 2678,
            Manufacturer::JMDPACIFICPTELTD => 2679,
            Manufacturer::ShenzhenSunricherTechnologyLimited => 2680,
            Manufacturer::WebastoSE => 2681,
            Manufacturer::EmlidLimited => 2682,
            Manufacturer::UniqAirOy => 2683,
            Manufacturer::WAFERLOCK => 2684,
            Manufacturer::FreedmanElectronicsPtyLtd => 2685,
            Manufacturer::KebaAG => 2686,
            Manufacturer::IntuityMedical => 2687,
            Manufacturer::CleerLimited => 2688,
            Manufacturer::UniversalBiosensorsPtyLtd => 2689,
            Manufacturer::Corsair => 2690,
            Manufacturer::RivataInc => 2691,
            Manufacturer::GreennoteInc => 2692,
            Manufacturer::SnowballTechnologyCoLtd => 2693,
            Manufacturer::ALIZENTInternational => 2694,
            Manufacturer::ShanghaiSmartSystemTechnologyCoLtd => 2695,
            Manufacturer::PSAPeugeotCitroen => 2696,
            Manufacturer::SESImagotag => 2697,
            Manufacturer::HAINBUCHSPANNENDETECHNIK => 2698,
            Manufacturer::SANlightGmbH => 2699,
            Manufacturer::DelpSysSRO => 2700,
            Manufacturer::JCMTECHNOLOGIESSA => 2701,
            Manufacturer::PerfectCompany => 2702,
            Manufacturer::TOTOLTD => 2703,
            Manufacturer::ShenzhenGrandsunElectronicCoLtd => 2704,
            Manufacturer::MonarchInternationalInc => 2705,
            Manufacturer::CarestreamDentalLLC => 2706,
            Manufacturer::GiPStechSRL => 2707,
            Manufacturer::OOBIKInc => 2708,
            Manufacturer::PamexInc => 2709,
            Manufacturer::LightricityLtd => 2710,
            Manufacturer::SensTek => 2711,
            Manufacturer::FoilInc => 2712,
            Manufacturer::ShanghaiHighFlyingElectronicsTechnologyCoLtd => 2713,
            Manufacturer::TEMKINASSOCIATESLLC => 2714,
            Manufacturer::EelloLLC => 2715,
            Manufacturer::XiAnFengyuInformationTechnologyCoLtd => 2716,
            Manufacturer::CanonFinetechNiscaInc => 2717,
            Manufacturer::LifePlusInc => 2718,
            Manufacturer::IstaInternationalGmbH => 2719,
            Manufacturer::LoyTecElectronicsGmbH => 2720,
            Manufacturer::LINCOGNTECHNOLOGYCOLIMITED => 2721,
            Manufacturer::CareBloomLLC => 2722,
            Manufacturer::DICCorporation => 2723,
            Manufacturer::FAZEPROLLC => 2724,
            Manufacturer::ShenzhenUascentTechnologyCoLtd => 2725,
            Manufacturer::RealityworksInc => 2726,
            Manufacturer::UrbanistaAB => 2727,
            Manufacturer::ZencontrolPtyLtd => 2728,
            Manufacturer::MrinqTechnologiesLLC => 2729,
            Manufacturer::ComputimeInternationalLtd => 2730,
            Manufacturer::AnhuiListenaiCo => 2731,
            Manufacturer::OSMHKLimited => 2732,
            Manufacturer::AdevoConsultingAB => 2733,
            Manufacturer::PSEngineeringInc => 2734,
            Manufacturer::AIAIAIApS => 2735,
            Manufacturer::VisiontronicSRO => 2736,
            Manufacturer::InVueSecurityProductsInc => 2737,
            Manufacturer::TouchTronicsInc => 2738,
            Manufacturer::INNERRANGEPTYLTD => 2739,
            Manufacturer::EllenbyTechnologiesInc => 2740,
            Manufacturer::ElstatLtdFormerlyElstatElectronicsLtd => 2741,
            Manufacturer::XenterInc => 2742,
            Manufacturer::LogTagNorthAmericaInc => 2743,
            Manufacturer::SensAiIncorporated => 2744,
            Manufacturer::STL => 2745,
            Manufacturer::OpenBionicsLtd => 2746,
            Manufacturer::RDASSRO => 2747,
            Manufacturer::KCCSMobileEngineeringCoLtd => 2748,
            Manufacturer::InventasAS => 2749,
            Manufacturer::RobkooInformationTechnologiesCoLtd => 2750,
            Manufacturer::PAULHARTMANNAG => 2751,
            Manufacturer::OmniIDUSAINC => 2752,
            Manufacturer::ShenzhenJingxunTechnologyCoLtd => 2753,
            Manufacturer::RealMegaMicroelectronicsTechnologyShanghaiCoLtd => 2754,
            Manufacturer::KenzenInc => 2755,
            Manufacturer::CODIUM => 2756,
            Manufacturer::FlexoptixGmbH => 2757,
            Manufacturer::BarnesGroupInc => 2758,
            Manufacturer::ChengduAichTechnologyCoLtd => 2759,
            Manufacturer::KeepinCoLtd => 2760,
            Manufacturer::SwedlockAB => 2761,
            Manufacturer::ShenzhenCoolKitTechnologyCoLtd => 2762,
            Manufacturer::IseIndividuelleSoftwareUndElektronikGmbH => 2763,
            Manufacturer::Nuvoton => 2764,
            Manufacturer::VisuallexSportInternationalLimited => 2765,
            Manufacturer::KOBATAGAUGEMFGCOLTD => 2766,
            Manufacturer::CACITechnologies => 2767,
            Manufacturer::NordicStrongApS => 2768,
            Manufacturer::EAGLEKINGDOMTECHNOLOGIESLIMITED => 2769,
            Manufacturer::LautsprecherTeufelGmbH => 2770,
            Manufacturer::SSVSoftwareSystemsGmbH => 2771,
            Manufacturer::ZhuhaiPantumElectroniscCoLtd => 2772,
            Manufacturer::StreamitBV => 2773,
            Manufacturer::NymeaGmbH => 2774,
            Manufacturer::ALKOGeraeteGmbH => 2775,
            Manufacturer::FranzKaldeweiGmbHCoKG => 2776,
            Manufacturer::ShenzhenAimoreCoLtd => 2777,
            Manufacturer::CodefabrikGmbH => 2778,
            Manufacturer::ReelablesInc => 2779,
            Manufacturer::DuravitAG => 2780,
            Manufacturer::BossAudio => 2781,
            Manufacturer::VoceraCommunicationsInc => 2782,
            Manufacturer::DouglasDynamicsLLC => 2783,
            Manufacturer::ViceroyDevicesCorporation => 2784,
            Manufacturer::ChengDuForThinkTechnologyCoLtd => 2785,
            Manufacturer::IMATRIXSYSTEMSINC => 2786,
            Manufacturer::GlobalMed => 2787,
            Manufacturer::DALIAlliance => 2788,
            Manufacturer::UnuGmbH => 2789,
            Manufacturer::Hexology => 2790,
            Manufacturer::SunplusTechnologyCoLtd => 2791,
            Manufacturer::LEVELSRO => 2792,
            Manufacturer::FLIRSystemsAB => 2793,
            Manufacturer::BordaTechnology => 2794,
            Manufacturer::SquareInc => 2795,
            Manufacturer::FUTEKADVANCEDSENSORTECHNOLOGYINC => 2796,
            Manufacturer::SaxonarGmbH => 2797,
            Manufacturer::VelentiumLLC => 2798,
            Manufacturer::GLPGermanLightProductsGmbH => 2799,
            Manufacturer::LeupoldStevensInc => 2800,
            Manufacturer::CRADERSCOLTD => 2801,
            Manufacturer::ShanghaiAllLinkMicroelectronicsCoLtd => 2802,
            Manufacturer::N701xInc => 2803,
            Manufacturer::RadioworksMicroelectronicsPTYLTD => 2804,
            Manufacturer::UnitechElectronicInc => 2805,
            Manufacturer::AMETEKInc => 2806,
            Manufacturer::Irdeto => 2807,
            Manufacturer::FirstDesignSystemInc => 2808,
            Manufacturer::UnistoAG => 2809,
            Manufacturer::ChengduAmbitTechnologyCoLtd => 2810,
            Manufacturer::SMTELEKTRONIKGmbH => 2811,
            Manufacturer::CerebrumSensorTechnologiesInc => 2812,
            Manufacturer::WeberSensorsLLC => 2813,
            Manufacturer::EardaTechnologiesCoLtd => 2814,
            Manufacturer::FUSEAWARELIMITED => 2815,
            Manufacturer::FlaircommMicroelectronicsInc => 2816,
            Manufacturer::RESIDEOTECHNOLOGIESINC => 2817,
            Manufacturer::IORATechnologyDevelopmentLtdSti => 2818,
            Manufacturer::PrecisionTriathlonSystemsLimited => 2819,
            Manufacturer::IPERCUT => 2820,
            Manufacturer::MarquardtGmbH => 2821,
            Manufacturer::FAZUAGmbH => 2822,
            Manufacturer::WorkaroundGmbh => 2823,
            Manufacturer::ShenzhenQianfenyiIntelligentTechnologyCoLTD => 2824,
            Manufacturer::Soonisys => 2825,
            Manufacturer::BelunTechnologyCompanyLimited => 2826,
            Manufacturer::SanistaalAS => 2827,
            Manufacturer::BluPeak => 2828,
            Manufacturer::SANYODENKOCoLtd => 2829,
            Manufacturer::HondaLockMfgCoLtd => 2830,
            Manufacturer::BEASA => 2831,
            Manufacturer::AlfaLavalCorporateAB => 2832,
            Manufacturer::ThermoWorksInc => 2833,
            Manufacturer::ToughBuiltIndustriesLLC => 2834,
            Manufacturer::IOTOOLS => 2835,
            Manufacturer::Olumee => 2836,
            Manufacturer::NAOSJAPANKK => 2837,
            Manufacturer::GuardRFIDSolutionsInc => 2838,
            Manufacturer::SIGSAUERINC => 2839,
            Manufacturer::DECATHLONSE => 2840,
            Manufacturer::WBSPROJECTHPTYLTD => 2841,
            Manufacturer::RocaSanitarioSA => 2842,
            Manufacturer::EnerpacToolGroupCorp => 2843,
            Manufacturer::NanoleqAG => 2844,
            Manufacturer::AcceleratedSystems => 2845,
            Manufacturer::PBINC => 2846,
            Manufacturer::BeijingESWINComputingTechnologyCoLtd => 2847,
            Manufacturer::TKHSecurityBV => 2848,
            Manufacturer::AmsAG => 2849,
            Manufacturer::BluetoothSIGSpecificationReservedDefaultVendorIDForRemoteDevicesWithoutDeviceIDServiceRecord => 65535,
        }
    }
}

impl TryFrom<u16> for Manufacturer {
    type Error = u16;
    fn try_from(code: u16) -> Result<Self, u16> {
        #[allow(unreachable_patterns)]
        match code {
            0 => Ok(Self::EricssonTechnologyLicensing),
            1 => Ok(Self::NokiaMobilePhones),
            2 => Ok(Self::IntelCorp),
            3 => Ok(Self::IBMCorp),
            4 => Ok(Self::ToshibaCorp),
            5 => Ok(Self::N3Com),
            6 => Ok(Self::Microsoft),
            7 => Ok(Self::Lucent),
            8 => Ok(Self::Motorola),
            9 => Ok(Self::InfineonTechnologiesAG),
            10 => Ok(Self::QualcommTechnologiesInternationalLtdQTIL),
            11 => Ok(Self::SiliconWave),
            12 => Ok(Self::DigianswerAS),
            13 => Ok(Self::TexasInstrumentsInc),
            14 => Ok(Self::ParthusTechnologiesInc),
            15 => Ok(Self::BroadcomCorporation),
            16 => Ok(Self::MitelSemiconductor),
            17 => Ok(Self::WidcommInc),
            18 => Ok(Self::ZeevoInc),
            19 => Ok(Self::AtmelCorporation),
            20 => Ok(Self::MitsubishiElectricCorporation),
            21 => Ok(Self::RTXTelecomAS),
            22 => Ok(Self::KCTechnologyInc),
            23 => Ok(Self::Newlogic),
            24 => Ok(Self::TransilicaInc),
            25 => Ok(Self::RohdeSchwarzGmbHCoKG),
            26 => Ok(Self::TTPComLimited),
            27 => Ok(Self::SigniaTechnologiesInc),
            28 => Ok(Self::ConexantSystemsInc),
            29 => Ok(Self::Qualcomm),
            30 => Ok(Self::Inventel),
            31 => Ok(Self::AVMBerlin),
            32 => Ok(Self::BandSpeedInc),
            33 => Ok(Self::MansellaLtd),
            34 => Ok(Self::NECCorporation),
            35 => Ok(Self::WavePlusTechnologyCoLtd),
            36 => Ok(Self::Alcatel),
            37 => Ok(Self::NXPSemiconductorsFormerlyPhilipsSemiconductors),
            38 => Ok(Self::CTechnologies),
            39 => Ok(Self::OpenInterface),
            40 => Ok(Self::RFMicroDevices),
            41 => Ok(Self::HitachiLtd),
            42 => Ok(Self::SymbolTechnologiesInc),
            43 => Ok(Self::Tenovis),
            44 => Ok(Self::MacronixInternationalCoLtd),
            45 => Ok(Self::GCTSemiconductor),
            46 => Ok(Self::NorwoodSystems),
            47 => Ok(Self::MewTelTechnologyInc),
            48 => Ok(Self::STMicroelectronics),
            49 => Ok(Self::SynopsysInc),
            50 => Ok(Self::RedMCommunicationsLtd),
            51 => Ok(Self::CommilLtd),
            52 => Ok(Self::ComputerAccessTechnologyCorporationCATC),
            53 => Ok(Self::EclipseHQEspanaSL),
            54 => Ok(Self::RenesasElectronicsCorporation),
            55 => Ok(Self::MobilianCorporation),
            56 => Ok(Self::SyntronixCorporation),
            57 => Ok(Self::IntegratedSystemSolutionCorp),
            58 => Ok(Self::PanasonicCorporationFormerlyMatsushitaElectricIndustrialCoLtd),
            59 => Ok(Self::GennumCorporation),
            60 => Ok(Self::BlackBerryLimitedFormerlyResearchInMotion),
            61 => Ok(Self::IPextremeInc),
            62 => Ok(Self::SystemsAndChipsInc),
            63 => Ok(Self::BluetoothSIGInc),
            64 => Ok(Self::SeikoEpsonCorporation),
            65 => Ok(Self::IntegratedSiliconSolutionTaiwanInc),
            66 => Ok(Self::CONWISETechnologyCorporationLtd),
            67 => Ok(Self::PARROTAUTOMOTIVESAS),
            68 => Ok(Self::SocketMobile),
            69 => Ok(Self::AtherosCommunicationsInc),
            70 => Ok(Self::MediaTekInc),
            71 => Ok(Self::Bluegiga),
            72 => Ok(Self::MarvellTechnologyGroupLtd),
            73 => Ok(Self::N3DSPCorporation),
            74 => Ok(Self::AccelSemiconductorLtd),
            75 => Ok(Self::ContinentalAutomotiveSystems),
            76 => Ok(Self::AppleInc),
            77 => Ok(Self::StaccatoCommunicationsInc),
            78 => Ok(Self::AvagoTechnologies),
            79 => Ok(Self::APTLtd),
            80 => Ok(Self::SiRFTechnologyInc),
            81 => Ok(Self::TzeroTechnologiesInc),
            82 => Ok(Self::JMCorporation),
            83 => Ok(Self::Free2moveAB),
            84 => Ok(Self::N3DiJoyCorporation),
            85 => Ok(Self::PlantronicsInc),
            86 => Ok(Self::SonyEricssonMobileCommunications),
            87 => Ok(Self::HarmanInternationalIndustriesInc),
            88 => Ok(Self::VizioInc),
            89 => Ok(Self::NordicSemiconductorASA),
            90 => Ok(Self::EMMicroelectronicMarinSA),
            91 => Ok(Self::RalinkTechnologyCorporation),
            92 => Ok(Self::BelkinInternationalInc),
            93 => Ok(Self::RealtekSemiconductorCorporation),
            94 => Ok(Self::StonestreetOneLLC),
            95 => Ok(Self::WicentricInc),
            96 => Ok(Self::RivieraWavesSAS),
            97 => Ok(Self::RDAMicroelectronics),
            98 => Ok(Self::GibsonGuitars),
            99 => Ok(Self::MiCommandInc),
            100 => Ok(Self::BandXIInternationalLLC),
            101 => Ok(Self::HPInc),
            102 => Ok(Self::N9SolutionsOy),
            103 => Ok(Self::GNNetcomAS),
            104 => Ok(Self::GeneralMotors),
            105 => Ok(Self::ADEngineeringInc),
            106 => Ok(Self::MindTreeLtd),
            107 => Ok(Self::PolarElectroOY),
            108 => Ok(Self::BeautifulEnterpriseCoLtd),
            109 => Ok(Self::BriarTekInc),
            110 => Ok(Self::SummitDataCommunicationsInc),
            111 => Ok(Self::SoundID),
            112 => Ok(Self::MonsterLLC),
            113 => Ok(Self::ConnectBlueAB),
            114 => Ok(Self::ShangHaiSuperSmartElectronicsCoLtd),
            115 => Ok(Self::GroupSenseLtd),
            116 => Ok(Self::ZommLLC),
            117 => Ok(Self::SamsungElectronicsCoLtd),
            118 => Ok(Self::CreativeTechnologyLtd),
            119 => Ok(Self::LairdTechnologies),
            120 => Ok(Self::NikeInc),
            121 => Ok(Self::LesswireAG),
            122 => Ok(Self::MStarSemiconductorInc),
            123 => Ok(Self::HanlynnTechnologies),
            124 => Ok(Self::ARCambridge),
            125 => Ok(Self::SeersTechnologyCoLtd),
            126 => Ok(Self::SportsTrackingTechnologiesLtd),
            127 => Ok(Self::AutonetMobile),
            128 => Ok(Self::DeLormePublishingCompanyInc),
            129 => Ok(Self::WuXiVimicro),
            130 => Ok(Self::SennheiserCommunicationsAS),
            131 => Ok(Self::TimeKeepingSystemsInc),
            132 => Ok(Self::LudusHelsinkiLtd),
            133 => Ok(Self::BlueRadiosInc),
            134 => Ok(Self::EquinuxAG),
            135 => Ok(Self::GarminInternationalInc),
            136 => Ok(Self::Ecotest),
            137 => Ok(Self::GNReSoundAS),
            138 => Ok(Self::Jawbone),
            139 => Ok(Self::TopconPositioningSystemsLLC),
            140 => Ok(Self::GimbalIncFormerlyQualcommLabsIncAndQualcommRetailSolutionsInc),
            141 => Ok(Self::ZscanSoftware),
            142 => Ok(Self::QuinticCorp),
            143 => Ok(Self::TelitWirelessSolutionsGmbHFormerlyStollmannEVGmbH),
            144 => Ok(Self::FunaiElectricCoLtd),
            145 => Ok(Self::AdvancedPANMOBILSystemsGmbHCoKG),
            146 => Ok(Self::ThinkOpticsInc),
            147 => Ok(Self::UniversalElectronicsInc),
            148 => Ok(Self::AirohaTechnologyCorp),
            149 => Ok(Self::NECLightingLtd),
            150 => Ok(Self::ODMTechnologyInc),
            151 => Ok(Self::ConnecteDeviceLtd),
            152 => Ok(Self::Zero1TvGmbH),
            153 => Ok(Self::ITechDynamicGlobalDistributionLtd),
            154 => Ok(Self::Alpwise),
            155 => Ok(Self::JiangsuToppowerAutomotiveElectronicsCoLtd),
            156 => Ok(Self::ColorfyInc),
            157 => Ok(Self::GeoforceInc),
            158 => Ok(Self::BoseCorporation),
            159 => Ok(Self::SuuntoOy),
            160 => Ok(Self::KensingtonComputerProductsGroup),
            161 => Ok(Self::SRMedizinelektronik),
            162 => Ok(Self::VertuCorporationLimited),
            163 => Ok(Self::MetaWatchLtd),
            164 => Ok(Self::LINAKAS),
            165 => Ok(Self::OTLDynamicsLLC),
            166 => Ok(Self::PandaOceanInc),
            167 => Ok(Self::VisteonCorporation),
            168 => Ok(Self::ARPDevicesLimited),
            169 => Ok(Self::MARELLIEUROPESPAFormerlyMagnetiMarelliSPA),
            170 => Ok(Self::CAENRFIDSrl),
            171 => Ok(Self::IngenieurSystemgruppeZahnGmbH),
            172 => Ok(Self::GreenThrottleGames),
            173 => Ok(Self::PeterSystemtechnikGmbH),
            174 => Ok(Self::OmegawaveOy),
            175 => Ok(Self::Cinetix),
            176 => Ok(Self::PassifSemiconductorCorp),
            177 => Ok(Self::SarisCyclingGroupInc),
            178 => Ok(Self::BekeyAS),
            179 => Ok(Self::ClarinoxTechnologiesPtyLtd),
            180 => Ok(Self::BDETechnologyCoLtd),
            181 => Ok(Self::SwirlNetworks),
            182 => Ok(Self::MesoInternational),
            183 => Ok(Self::TreLabLtd),
            184 => Ok(Self::QualcommInnovationCenterIncQuIC),
            185 => Ok(Self::JohnsonControlsInc),
            186 => Ok(Self::StarkeyLaboratoriesInc),
            187 => Ok(Self::SPowerElectronicsLimited),
            188 => Ok(Self::AceSensorInc),
            189 => Ok(Self::AplixCorporation),
            190 => Ok(Self::AAMPOfAmerica),
            191 => Ok(Self::StalmartTechnologyLimited),
            192 => Ok(Self::AMICCOMElectronicsCorporation),
            193 => Ok(Self::ShenzhenExcelsecuDataTechnologyCoLtd),
            194 => Ok(Self::GeneqInc),
            195 => Ok(Self::AdidasAG),
            196 => Ok(Self::LGElectronics),
            197 => Ok(Self::OnsetComputerCorporation),
            198 => Ok(Self::SelflyBV),
            199 => Ok(Self::QuuppaOy),
            200 => Ok(Self::GeLoInc),
            201 => Ok(Self::Evluma),
            202 => Ok(Self::MC10),
            203 => Ok(Self::BinauricSE),
            204 => Ok(Self::BeatsElectronics),
            205 => Ok(Self::MicrochipTechnologyInc),
            206 => Ok(Self::ElgatoSystemsGmbH),
            207 => Ok(Self::ARCHOSSA),
            208 => Ok(Self::DexcomInc),
            209 => Ok(Self::PolarElectroEuropeBV),
            210 => Ok(Self::DialogSemiconductorBV),
            211 => Ok(Self::TaixingbangTechnologyHKCoLTD),
            212 => Ok(Self::Kawantech),
            213 => Ok(Self::AustcoCommunicationSystems),
            214 => Ok(Self::TimexGroupUSAInc),
            215 => Ok(Self::QualcommTechnologiesInc),
            216 => Ok(Self::QualcommConnectedExperiencesInc),
            217 => Ok(Self::VoyetraTurtleBeach),
            218 => Ok(Self::TxtrGmbH),
            219 => Ok(Self::Biosentronics),
            220 => Ok(Self::ProcterGamble),
            221 => Ok(Self::HosidenCorporation),
            222 => Ok(Self::MuzikLLC),
            223 => Ok(Self::MisfitWearablesCorp),
            224 => Ok(Self::Google),
            225 => Ok(Self::DanlersLtd),
            226 => Ok(Self::SemilinkInc),
            227 => Ok(Self::InMusicBrandsInc),
            228 => Ok(Self::LairdConnectivityIncFormerlyLSResearchInc),
            229 => Ok(Self::EdenSoftwareConsultantsLtd),
            230 => Ok(Self::Freshtemp),
            231 => Ok(Self::KSTechnologies),
            232 => Ok(Self::ACTSTechnologies),
            233 => Ok(Self::VtrackSystems),
            234 => Ok(Self::NielsenKellermanCompany),
            235 => Ok(Self::ServerTechnologyInc),
            236 => Ok(Self::BioResearchAssociates),
            237 => Ok(Self::JollyLogicLLC),
            238 => Ok(Self::AboveAverageOutcomesInc),
            239 => Ok(Self::BitsplittersGmbH),
            240 => Ok(Self::PayPalInc),
            241 => Ok(Self::WitronTechnologyLimited),
            242 => Ok(Self::MorseProjectInc),
            243 => Ok(Self::KentDisplaysInc),
            244 => Ok(Self::NautilusInc),
            245 => Ok(Self::SmartifierOy),
            246 => Ok(Self::ElcometerLimited),
            247 => Ok(Self::VSNTechnologiesInc),
            248 => Ok(Self::AceUniCorpLtd),
            249 => Ok(Self::StickNFind),
            250 => Ok(Self::CrystalCodeAB),
            251 => Ok(Self::KOUKAAMAS),
            252 => Ok(Self::DelphiCorporation),
            253 => Ok(Self::ValenceTechLimited),
            254 => Ok(Self::StanleyBlackAndDecker),
            255 => Ok(Self::TypoProductsLLC),
            256 => Ok(Self::TomTomInternationalBV),
            257 => Ok(Self::FugooInc),
            258 => Ok(Self::KeiserCorporation),
            259 => Ok(Self::BangOlufsenAS),
            260 => Ok(Self::PLUSLocationSystemsPtyLtd),
            261 => Ok(Self::UbiquitousComputingTechnologyCorporation),
            262 => Ok(Self::InnovativeYachtterSolutions),
            263 => Ok(Self::WilliamDemantHoldingAS),
            264 => Ok(Self::ChiconyElectronicsCoLtd),
            265 => Ok(Self::AtusBV),
            266 => Ok(Self::CodegateLtd),
            267 => Ok(Self::ERiInc),
            268 => Ok(Self::TransducersDirectLLC),
            269 => Ok(Self::DENSOTENLIMITEDFormerlyFujitsuTenLImited),
            270 => Ok(Self::AudiAG),
            271 => Ok(Self::HiSiliconTechnologiesCOLIMITED),
            272 => Ok(Self::NipponSeikiCoLtd),
            273 => Ok(Self::SteelseriesApS),
            274 => Ok(Self::VisyblInc),
            275 => Ok(Self::OpenbrainTechnologiesCoLtd),
            276 => Ok(Self::Xensr),
            277 => Ok(Self::ESolutions),
            278 => Ok(Self::N10AKTechnologies),
            279 => Ok(Self::WimotoTechnologiesInc),
            280 => Ok(Self::RadiusNetworksInc),
            281 => Ok(Self::WizeTechnologyCoLtd),
            282 => Ok(Self::QualcommLabsInc),
            283 => Ok(Self::HewlettPackardEnterprise),
            284 => Ok(Self::Baidu),
            285 => Ok(Self::ArendiAG),
            286 => Ok(Self::SkodaAutoAS),
            287 => Ok(Self::VolkswagenAG),
            288 => Ok(Self::PorscheAG),
            289 => Ok(Self::SinoWealthElectronicLtd),
            290 => Ok(Self::AirTurnInc),
            291 => Ok(Self::KinsaInc),
            292 => Ok(Self::HIDGlobal),
            293 => Ok(Self::SEATEs),
            294 => Ok(Self::PrometheanLtd),
            295 => Ok(Self::SaluticaAlliedSolutions),
            296 => Ok(Self::GPSIGroupPtyLtd),
            297 => Ok(Self::NimbleDevicesOy),
            298 => Ok(Self::ChangzhouYongseInfotechCoLtd),
            299 => Ok(Self::SportIQ),
            300 => Ok(Self::TEMECInstrumentsBV),
            301 => Ok(Self::SonyCorporation),
            302 => Ok(Self::ASSAABLOY),
            303 => Ok(Self::ClarionCoInc),
            304 => Ok(Self::WarehouseInnovations),
            305 => Ok(Self::CypressSemiconductor),
            306 => Ok(Self::MADSInc),
            307 => Ok(Self::BlueMaestroLimited),
            308 => Ok(Self::ResolutionProductsLtd),
            309 => Ok(Self::AirewareLLC),
            310 => Ok(Self::SilvairInc),
            311 => Ok(Self::PrestigioPlazaLtd),
            312 => Ok(Self::NTEOInc),
            313 => Ok(Self::FocusSystemsCorporation),
            314 => Ok(Self::TencentHoldingsLtd),
            315 => Ok(Self::Allegion),
            316 => Ok(Self::MurataManufacturingCoLtd),
            317 => Ok(Self::WirelessWERX),
            318 => Ok(Self::NodInc),
            319 => Ok(Self::BBManufacturingCompany),
            320 => Ok(Self::AlpineElectronicsChinaCoLtd),
            321 => Ok(Self::FedExServices),
            322 => Ok(Self::GrapeSystemsInc),
            323 => Ok(Self::BkonConnect),
            324 => Ok(Self::LintechGmbH),
            325 => Ok(Self::NovatelWireless),
            326 => Ok(Self::Ciright),
            327 => Ok(Self::MightyCastInc),
            328 => Ok(Self::AmbimatElectronics),
            329 => Ok(Self::PerytonsLtd),
            330 => Ok(Self::TivoliAudioLLC),
            331 => Ok(Self::MasterLock),
            332 => Ok(Self::MeshNetLtd),
            333 => Ok(Self::HUIZHOUDESAYSVAUTOMOTIVECOLTD),
            334 => Ok(Self::TangerineInc),
            335 => Ok(Self::BWGroupLtd),
            336 => Ok(Self::PioneerCorporation),
            337 => Ok(Self::OnBeep),
            338 => Ok(Self::VernierSoftwareTechnology),
            339 => Ok(Self::ROLErgo),
            340 => Ok(Self::PebbleTechnology),
            341 => Ok(Self::NETATMO),
            342 => Ok(Self::AccumulateAB),
            343 => Ok(Self::AnhuiHuamiInformationTechnologyCoLtd),
            344 => Ok(Self::InmiteSRO),
            345 => Ok(Self::ChefStepsInc),
            346 => Ok(Self::MicasAG),
            347 => Ok(Self::BiomedicalResearchLtd),
            348 => Ok(Self::PitiusTecSL),
            349 => Ok(Self::EstimoteInc),
            350 => Ok(Self::UnikeyTechnologiesInc),
            351 => Ok(Self::TimerCapCo),
            352 => Ok(Self::AwoxFormerlyAwoX),
            353 => Ok(Self::Yikes),
            354 => Ok(Self::MADSGlobalNZLtd),
            355 => Ok(Self::PCHInternational),
            356 => Ok(Self::QingdaoYeelinkInformationTechnologyCoLtd),
            357 => Ok(Self::MilwaukeeToolFormallyMilwaukeeElectricTools),
            358 => Ok(Self::MISHIKPteLtd),
            359 => Ok(Self::AscensiaDiabetesCareUSInc),
            360 => Ok(Self::SpiceboxLLC),
            361 => Ok(Self::Emberlight),
            362 => Ok(Self::CooperAtkinsCorporation),
            363 => Ok(Self::Qblinks),
            364 => Ok(Self::MYSPHERA),
            365 => Ok(Self::LifeScanInc),
            366 => Ok(Self::VolanticAB),
            367 => Ok(Self::PodoLabsInc),
            368 => Ok(Self::RocheDiabetesCareAG),
            369 => Ok(Self::AmazonComServicesLLCFormerlyAmazonFulfillmentService),
            370 => Ok(Self::ConnovateTechnologyPrivateLimited),
            371 => Ok(Self::KocomojoLLC),
            372 => Ok(Self::EverykeyInc),
            373 => Ok(Self::DynamicControls),
            374 => Ok(Self::SentriLock),
            375 => Ok(Self::ISYSTInc),
            376 => Ok(Self::CASIOCOMPUTERCOLTD),
            377 => Ok(Self::LAPISTechnologyCoLtdFormerlyLAPISSemiconductorCoLtd),
            378 => Ok(Self::TelemonitorInc),
            379 => Ok(Self::TaskitGmbH),
            380 => Ok(Self::DaimlerAG),
            381 => Ok(Self::BatAndCat),
            382 => Ok(Self::BluDotzLtd),
            383 => Ok(Self::XTelWirelessApS),
            384 => Ok(Self::GigasetCommunicationsGmbH),
            385 => Ok(Self::GeckoHealthInnovationsInc),
            386 => Ok(Self::HOPUbiquitous),
            387 => Ok(Self::WaltDisney),
            388 => Ok(Self::Nectar),
            389 => Ok(Self::BelAppsLLC),
            390 => Ok(Self::CORELightingLtd),
            391 => Ok(Self::SeraphimSenseLtd),
            392 => Ok(Self::UnicoRBC),
            393 => Ok(Self::PhysicalEnterprisesInc),
            394 => Ok(Self::AbleTrendTechnologyLimited),
            395 => Ok(Self::KonicaMinoltaInc),
            396 => Ok(Self::WiloSE),
            397 => Ok(Self::ExtronDesignServices),
            398 => Ok(Self::FitbitInc),
            399 => Ok(Self::FirefliesSystems),
            400 => Ok(Self::IntellettoTechnologiesInc),
            401 => Ok(Self::FDKCORPORATION),
            402 => Ok(Self::CloudleafInc),
            403 => Ok(Self::MavericAutomationLLC),
            404 => Ok(Self::AcousticStreamCorporation),
            405 => Ok(Self::Zuli),
            406 => Ok(Self::PaxtonAccessLtd),
            407 => Ok(Self::WiSilicaInc),
            408 => Ok(Self::VENGITKorlatoltFelelosseguTarsasag),
            409 => Ok(Self::SALTOSYSTEMSSL),
            410 => Ok(Self::TRONForumFormerlyTEngineForum),
            411 => Ok(Self::CUBETECHSRO),
            412 => Ok(Self::CokiyaIncorporated),
            413 => Ok(Self::CVSHealth),
            414 => Ok(Self::Ceruus),
            415 => Ok(Self::StrainstallLtd),
            416 => Ok(Self::ChannelEnterprisesHKLtd),
            417 => Ok(Self::FIAMM),
            418 => Ok(Self::GIGALANECOLTD),
            419 => Ok(Self::EROAD),
            420 => Ok(Self::MineSafetyAppliances),
            421 => Ok(Self::IconHealthAndFitness),
            422 => Ok(Self::WilleEngineeringFormelyAsAsandooGmbH),
            423 => Ok(Self::ENERGOUSCORPORATION),
            424 => Ok(Self::Taobao),
            425 => Ok(Self::CanonInc),
            426 => Ok(Self::GeophysicalTechnologyInc),
            427 => Ok(Self::FacebookInc),
            428 => Ok(Self::TrividiaHealthInc),
            429 => Ok(Self::FlightSafetyInternational),
            430 => Ok(Self::EarlensCorporation),
            431 => Ok(Self::SunriseMicroDevicesInc),
            432 => Ok(Self::StarMicronicsCoLtd),
            433 => Ok(Self::NetizensSpZOO),
            434 => Ok(Self::NymiInc),
            435 => Ok(Self::NytecInc),
            436 => Ok(Self::TrineoSpZOO),
            437 => Ok(Self::NestLabsInc),
            438 => Ok(Self::LMTechnologiesLtd),
            439 => Ok(Self::GeneralElectricCompany),
            440 => Ok(Self::ID3SL),
            441 => Ok(Self::HANAMicron),
            442 => Ok(Self::StagesCyclingLLC),
            443 => Ok(Self::CochlearBoneAnchoredSolutionsAB),
            444 => Ok(Self::SenionLabAB),
            445 => Ok(Self::SyszoneCoLtd),
            446 => Ok(Self::PulsateMobileLtd),
            447 => Ok(Self::HongKongHunterSunElectronicLimited),
            448 => Ok(Self::PironexGmbH),
            449 => Ok(Self::BRADATECHCorp),
            450 => Ok(Self::TransenergooilAG),
            451 => Ok(Self::Bunch),
            452 => Ok(Self::DMEMicroelectronics),
            453 => Ok(Self::BitcrazeAB),
            454 => Ok(Self::HASWAREInc),
            455 => Ok(Self::AbiogenixInc),
            456 => Ok(Self::PolyControlApS),
            457 => Ok(Self::AviOn),
            458 => Ok(Self::LaerdalMedicalAS),
            459 => Ok(Self::FetchMyPet),
            460 => Ok(Self::SamLabsLtd),
            461 => Ok(Self::ChengduSynwingTechnologyLtd),
            462 => Ok(Self::HOUWASYSTEMDESIGNKK),
            463 => Ok(Self::BSH),
            464 => Ok(Self::PrimusInterParesLtd),
            465 => Ok(Self::AugustHomeInc),
            466 => Ok(Self::GillElectronics),
            467 => Ok(Self::SkyWaveDesign),
            468 => Ok(Self::NewlabSRL),
            469 => Ok(Self::ELADSrl),
            470 => Ok(Self::GWearablesInc),
            471 => Ok(Self::SquadroneSystemsInc),
            472 => Ok(Self::CodeCorporation),
            473 => Ok(Self::SavantSystemsLLC),
            474 => Ok(Self::LogitechInternationalSA),
            475 => Ok(Self::InnblueConsulting),
            476 => Ok(Self::IParkingLtd),
            477 => Ok(Self::KoninklijkePhilipsElectronicsNV),
            478 => Ok(Self::MinelabElectronicsPtyLimited),
            479 => Ok(Self::BisonGroupLtd),
            480 => Ok(Self::WidexAS),
            481 => Ok(Self::JollaLtd),
            482 => Ok(Self::LectronixInc),
            483 => Ok(Self::CaterpillarInc),
            484 => Ok(Self::FreedomInnovations),
            485 => Ok(Self::DynamicDevicesLtd),
            486 => Ok(Self::TechnologySolutionsUKLtd),
            487 => Ok(Self::IPSGroupInc),
            488 => Ok(Self::STIR),
            489 => Ok(Self::SanoInc),
            490 => Ok(Self::AdvancedApplicationDesignInc),
            491 => Ok(Self::AutoMapLLC),
            492 => Ok(Self::SpreadtrumCommunicationsShanghaiLtd),
            493 => Ok(Self::CuteCircuitLTD),
            494 => Ok(Self::ValeoService),
            495 => Ok(Self::FullpowerTechnologiesInc),
            496 => Ok(Self::KloudNation),
            497 => Ok(Self::ZebraTechnologiesCorporation),
            498 => Ok(Self::ItronInc),
            499 => Ok(Self::TheUniversityOfTokyo),
            500 => Ok(Self::UTCFireAndSecurity),
            501 => Ok(Self::CoolWebthingsLimited),
            502 => Ok(Self::DJOGlobal),
            503 => Ok(Self::GellinerLimited),
            504 => Ok(Self::AnykaGuangzhouMicroelectronicsTechnologyCoLTD),
            505 => Ok(Self::MedtronicInc),
            506 => Ok(Self::GozioInc),
            507 => Ok(Self::FormLiftingLLC),
            508 => Ok(Self::WahooFitnessLLC),
            509 => Ok(Self::KontaktMicroLocationSpZOO),
            510 => Ok(Self::RadioSystemsCorporation),
            511 => Ok(Self::FreescaleSemiconductorInc),
            512 => Ok(Self::VerifoneSystemsPteLtdTaiwanBranch),
            513 => Ok(Self::ARTiming),
            514 => Ok(Self::RigadoLLC),
            515 => Ok(Self::KemppiOy),
            516 => Ok(Self::TapcentiveInc),
            517 => Ok(Self::SmartboticsInc),
            518 => Ok(Self::OtterProductsLLC),
            519 => Ok(Self::STEMPInc),
            520 => Ok(Self::LumiGeekLLC),
            521 => Ok(Self::InvisionHeartInc),
            522 => Ok(Self::MacnicaInc),
            523 => Ok(Self::JaguarLandRoverLimited),
            524 => Ok(Self::CoroWareTechnologiesInc),
            525 => Ok(Self::SimploTechnologyCoLTD),
            526 => Ok(Self::OmronHealthcareCoLTD),
            527 => Ok(Self::ComoduleGMBH),
            528 => Ok(Self::IkeGPS),
            529 => Ok(Self::TelinkSemiconductorCoLtd),
            530 => Ok(Self::InterplanCoLtd),
            531 => Ok(Self::WylerAG),
            532 => Ok(Self::IKMultimediaProductionSrl),
            533 => Ok(Self::LukotonExperienceOy),
            534 => Ok(Self::MTILtd),
            535 => Ok(Self::Tech4homeLda),
            536 => Ok(Self::HiotechAB),
            537 => Ok(Self::DOTTLimited),
            538 => Ok(Self::BlueSpeckLabsLLC),
            539 => Ok(Self::CiscoSystemsInc),
            540 => Ok(Self::MobicommInc),
            541 => Ok(Self::Edamic),
            542 => Ok(Self::GoodnetLtd),
            543 => Ok(Self::LusterLeafProductsInc),
            544 => Ok(Self::ManusMachinaBV),
            545 => Ok(Self::MobiquityNetworksInc),
            546 => Ok(Self::PraxisDynamics),
            547 => Ok(Self::PhilipMorrisProductsSA),
            548 => Ok(Self::ComarchSA),
            549 => Ok(Self::NestlNespressoSA),
            550 => Ok(Self::MerliniaAS),
            551 => Ok(Self::LifeBEAMTechnologies),
            552 => Ok(Self::TwocanoesLabsLLC),
            553 => Ok(Self::MuovertiLimited),
            554 => Ok(Self::StamerMusikanlagenGMBH),
            555 => Ok(Self::TeslaMotors),
            556 => Ok(Self::PharynksCorporation),
            557 => Ok(Self::Lupine),
            558 => Ok(Self::SiemensAG),
            559 => Ok(Self::HuamiShanghaiCultureCommunicationCOLTD),
            560 => Ok(Self::FosterElectricCompanyLtd),
            561 => Ok(Self::ETASA),
            562 => Ok(Self::XSensoSolutionsKft),
            563 => Ok(Self::ShenzhenSuLongCommunicationLtd),
            564 => Ok(Self::FengFanBeiJingTechnologyCoLtd),
            565 => Ok(Self::QrioInc),
            566 => Ok(Self::PitpatpetLtd),
            567 => Ok(Self::MSHeliSRL),
            568 => Ok(Self::Trakm8Ltd),
            569 => Ok(Self::JINCOLtd),
            570 => Ok(Self::AlatechTehnology),
            571 => Ok(Self::BeijingCarePulseElectronicTechnologyCoLtd),
            572 => Ok(Self::Awarepoint),
            573 => Ok(Self::ViCentraBV),
            574 => Ok(Self::RavenIndustries),
            575 => Ok(Self::WaveWareTechnologiesInc),
            576 => Ok(Self::ArgenoxTechnologies),
            577 => Ok(Self::BragiGmbH),
            578 => Ok(Self::N16LabInc),
            579 => Ok(Self::MasimoCorp),
            580 => Ok(Self::IoteraInc),
            581 => Ok(Self::EndressHauser),
            582 => Ok(Self::ACKmeNetworksInc),
            583 => Ok(Self::FiftyThreeInc),
            584 => Ok(Self::ParkerHannifinCorp),
            585 => Ok(Self::TranscranialLtd),
            586 => Ok(Self::UwatecAG),
            587 => Ok(Self::OrlanLLC),
            588 => Ok(Self::BlueCloverDevices),
            589 => Ok(Self::MWaySolutionsGmbH),
            590 => Ok(Self::MicrotronicsEngineeringGmbH),
            591 => Ok(Self::SchneiderSchreibgerTeGmbH),
            592 => Ok(Self::SapphireCircuitsLLC),
            593 => Ok(Self::LumoBodytechInc),
            594 => Ok(Self::UKCTechnosolution),
            595 => Ok(Self::XicatoInc),
            596 => Ok(Self::Playbrush),
            597 => Ok(Self::DaiNipponPrintingCoLtd),
            598 => Ok(Self::G24PowerLimited),
            599 => Ok(Self::AdBabbleLocalCommerceInc),
            600 => Ok(Self::DevialetSA),
            601 => Ok(Self::ALTYOR),
            602 => Ok(Self::UniversityOfAppliedSciencesValaisHauteEcoleValaisanne),
            603 => Ok(Self::FiveInteractiveLLCDbaZendo),
            604 => Ok(Self::NetEaseHangzhouNetworkCoLtd),
            605 => Ok(Self::LexmarkInternationalInc),
            606 => Ok(Self::FlukeCorporation),
            607 => Ok(Self::YardarmTechnologies),
            608 => Ok(Self::SensaRx),
            609 => Ok(Self::SECVREGmbH),
            610 => Ok(Self::GlacialRidgeTechnologies),
            611 => Ok(Self::IdentivInc),
            612 => Ok(Self::DDSInc),
            613 => Ok(Self::SMKCorporation),
            614 => Ok(Self::SchawbelTechnologiesLLC),
            615 => Ok(Self::XMISystemsSA),
            616 => Ok(Self::Cerevo),
            617 => Ok(Self::TorroxGmbHCoKG),
            618 => Ok(Self::Gemalto),
            619 => Ok(Self::DEKAResearchDevelopmentCorp),
            620 => Ok(Self::DomsterTadeuszSzydlowski),
            621 => Ok(Self::TechnogymSPA),
            622 => Ok(Self::FLEURBAEYBVBA),
            623 => Ok(Self::AptcodeSolutions),
            624 => Ok(Self::LSIADLTechnology),
            625 => Ok(Self::AnimasCorp),
            626 => Ok(Self::AlpsAlpineCoLtd),
            627 => Ok(Self::OCEASOFT),
            628 => Ok(Self::MotsaiResearch),
            629 => Ok(Self::Geotab),
            630 => Ok(Self::EGOElektroGeraetebauGmbH),
            631 => Ok(Self::BewhereInc),
            632 => Ok(Self::JohnsonOutdoorsInc),
            633 => Ok(Self::SteuteSchaltgerateGmbHCoKG),
            634 => Ok(Self::EkominiInc),
            635 => Ok(Self::DEFAAS),
            636 => Ok(Self::AseptikaLtd),
            637 => Ok(Self::HUAWEITechnologiesCoLtd),
            638 => Ok(Self::HabitAwareLLC),
            639 => Ok(Self::RuwidoAustriaGmbh),
            640 => Ok(Self::ITECCorporation),
            641 => Ok(Self::StoneL),
            642 => Ok(Self::SonovaAG),
            643 => Ok(Self::MavenMachinesInc),
            644 => Ok(Self::SynapseElectronics),
            645 => Ok(Self::StandardInnovationInc),
            646 => Ok(Self::RFCodeInc),
            647 => Ok(Self::WallyVenturesSL),
            648 => Ok(Self::WillowbankElectronicsLtd),
            649 => Ok(Self::SKTelecom),
            650 => Ok(Self::JetroAS),
            651 => Ok(Self::CodeGearsLTD),
            652 => Ok(Self::NANOLINKAPS),
            653 => Ok(Self::IFLLC),
            654 => Ok(Self::RFDigitalCorp),
            655 => Ok(Self::ChurchDwightCoInc),
            656 => Ok(Self::MultibitOy),
            657 => Ok(Self::CliniCloudInc),
            658 => Ok(Self::SwiftSensors),
            659 => Ok(Self::BlueBite),
            660 => Ok(Self::ELIASGmbH),
            661 => Ok(Self::SivantosGmbH),
            662 => Ok(Self::Petzl),
            663 => Ok(Self::StormPowerLtd),
            664 => Ok(Self::EISSTLtd),
            665 => Ok(Self::InexessTechnologySimmaKG),
            666 => Ok(Self::CurrantInc),
            667 => Ok(Self::C2DevelopmentInc),
            668 => Ok(Self::BlueSkyScientificLLC),
            669 => Ok(Self::ALOTTAZSLABSLLC),
            670 => Ok(Self::KupsonSpolSRO),
            671 => Ok(Self::AreusEngineeringGmbH),
            672 => Ok(Self::ImpossibleCameraGmbH),
            673 => Ok(Self::InventureTrackSystems),
            674 => Ok(Self::LockedUp),
            675 => Ok(Self::Itude),
            676 => Ok(Self::PacificLockCompany),
            677 => Ok(Self::TendyronCorporation),
            678 => Ok(Self::RobertBoschGmbH),
            679 => Ok(Self::IlluxtronInternationalBV),
            680 => Ok(Self::MiSportLtd),
            681 => Ok(Self::Chargelib),
            682 => Ok(Self::DopplerLab),
            683 => Ok(Self::BBPOSLimited),
            684 => Ok(Self::RTBElektronikGmbHCoKG),
            685 => Ok(Self::RxNetworksInc),
            686 => Ok(Self::WeatherFlowInc),
            687 => Ok(Self::TechnicolorUSAInc),
            688 => Ok(Self::BestechnicShanghaiLtd),
            689 => Ok(Self::RadenInc),
            690 => Ok(Self::JouZenOy),
            691 => Ok(Self::CLABERSPA),
            692 => Ok(Self::HyginexInc),
            693 => Ok(Self::HANSHINELECTRICRAILWAYCOLTD),
            694 => Ok(Self::SchneiderElectric),
            695 => Ok(Self::OortTechnologiesLLC),
            696 => Ok(Self::ChronoTherapeutics),
            697 => Ok(Self::RinnaiCorporation),
            698 => Ok(Self::SwissprimeTechnologiesAG),
            699 => Ok(Self::KohaCoLtd),
            700 => Ok(Self::GenevacLtd),
            701 => Ok(Self::Chemtronics),
            702 => Ok(Self::SeguroTechnologySpZOO),
            703 => Ok(Self::RedbirdFlightSimulations),
            704 => Ok(Self::DashRobotics),
            705 => Ok(Self::LINECorporation),
            706 => Ok(Self::GuillemotCorporation),
            707 => Ok(Self::TechtronicPowerToolsTechnologyLimited),
            708 => Ok(Self::WilsonSportingGoods),
            709 => Ok(Self::LenovoSingaporePteLtd),
            710 => Ok(Self::AyatanSensors),
            711 => Ok(Self::ElectronicsTomorrowLimited),
            712 => Ok(Self::OneSpan),
            713 => Ok(Self::PayRangeInc),
            714 => Ok(Self::ABOVSemiconductor),
            715 => Ok(Self::AINAWirelessInc),
            716 => Ok(Self::EijkelkampSoilWater),
            717 => Ok(Self::BMAErgonomicsBV),
            718 => Ok(Self::TevaBrandedPharmaceuticalProductsRDInc),
            719 => Ok(Self::Anima),
            720 => Ok(Self::N3M),
            721 => Ok(Self::EmpaticaSrl),
            722 => Ok(Self::AferoInc),
            723 => Ok(Self::PowercastCorporation),
            724 => Ok(Self::SecuyouApS),
            725 => Ok(Self::OMRONCorporation),
            726 => Ok(Self::SendSolutions),
            727 => Ok(Self::NIPPONSYSTEMWARECOLTD),
            728 => Ok(Self::Neosfar),
            729 => Ok(Self::FlieglAgrartechnikGmbH),
            730 => Ok(Self::Gilvader),
            731 => Ok(Self::DigiInternationalIncR),
            732 => Ok(Self::DeWalchTechnologiesInc),
            733 => Ok(Self::FlintRehabilitationDevicesLLC),
            734 => Ok(Self::SamsungSDSCoLtd),
            735 => Ok(Self::BlurProductDevelopment),
            736 => Ok(Self::UniversityOfMichigan),
            737 => Ok(Self::VictronEnergyBV),
            738 => Ok(Self::NTTDocomo),
            739 => Ok(Self::CarmanahTechnologiesCorp),
            740 => Ok(Self::BytestormLtd),
            741 => Ok(Self::EspressifIncorporated),
            742 => Ok(Self::Unwire),
            743 => Ok(Self::ConnectedYardInc),
            744 => Ok(Self::AmericanMusicEnvironments),
            745 => Ok(Self::SensogramTechnologiesInc),
            746 => Ok(Self::FujitsuLimited),
            747 => Ok(Self::ArdicTechnology),
            748 => Ok(Self::DeltaSystemsInc),
            749 => Ok(Self::HTCCorporation),
            750 => Ok(Self::CitizenHoldingsCoLtd),
            751 => Ok(Self::SMARTINNOVATIONInc),
            752 => Ok(Self::BlackratSoftware),
            753 => Ok(Self::TheIdeaCaveLLC),
            754 => Ok(Self::GoProInc),
            755 => Ok(Self::AuthAirInc),
            756 => Ok(Self::VensiInc),
            757 => Ok(Self::IndagemTechLLC),
            758 => Ok(Self::IntemoTechnologies),
            759 => Ok(Self::DreamVisionsCoLtd),
            760 => Ok(Self::RunteqOyLtd),
            761 => Ok(Self::IMAGINATIONTECHNOLOGIESLTD),
            762 => Ok(Self::CoSTARTEchnologies),
            763 => Ok(Self::ClariusMobileHealthCorp),
            764 => Ok(Self::ShanghaiFrequenMicroelectronicsCoLtd),
            765 => Ok(Self::UwannaInc),
            766 => Ok(Self::LierdaScienceTechnologyGroupCoLtd),
            767 => Ok(Self::SiliconLaboratories),
            768 => Ok(Self::WorldMotoInc),
            769 => Ok(Self::GiatecScientificInc),
            770 => Ok(Self::LoopDevicesInc),
            771 => Ok(Self::IACAElectronique),
            772 => Ok(Self::ProxyTechnologiesInc),
            773 => Ok(Self::SwippApS),
            774 => Ok(Self::LifeLaboratoryInc),
            775 => Ok(Self::FUJIINDUSTRIALCOLTD),
            776 => Ok(Self::SurefireLLC),
            777 => Ok(Self::DolbyLabs),
            778 => Ok(Self::Ellisys),
            779 => Ok(Self::MagnitudeLightingConverters),
            780 => Ok(Self::HiltiAG),
            781 => Ok(Self::DevdataSRL),
            782 => Ok(Self::Deviceworx),
            783 => Ok(Self::ShortcutLabs),
            784 => Ok(Self::SGLItaliaSRL),
            785 => Ok(Self::PEEQDATA),
            786 => Ok(Self::DucereTechnologiesPvtLtd),
            787 => Ok(Self::DiveNavInc),
            788 => Ok(Self::RIIGAISpZOO),
            789 => Ok(Self::ThermoFisherScientific),
            790 => Ok(Self::AGMeasurematicsPvtLtd),
            791 => Ok(Self::CHUOElectronicsCOLTD),
            792 => Ok(Self::AspentaInternational),
            793 => Ok(Self::EugsterFrismagAG),
            794 => Ok(Self::WurthElektronikEiSosGmbHCoKGFormerlyAmberWirelessGmbH),
            795 => Ok(Self::HQInc),
            796 => Ok(Self::LabSensorSolutions),
            797 => Ok(Self::EnterlabApS),
            798 => Ok(Self::EyefiInc),
            799 => Ok(Self::MetaSystemSPA),
            800 => Ok(Self::SONOELECTRONICSCOLTD),
            801 => Ok(Self::Jewelbots),
            802 => Ok(Self::CompumedicsLimited),
            803 => Ok(Self::RotorBikeComponents),
            804 => Ok(Self::AstroInc),
            805 => Ok(Self::AmotusSolutions),
            806 => Ok(Self::HealthwearTechnologiesChangzhouLtd),
            807 => Ok(Self::EssexElectronics),
            808 => Ok(Self::GrundfosAS),
            809 => Ok(Self::EargoInc),
            810 => Ok(Self::ElectronicDesignLab),
            811 => Ok(Self::ESYLUX),
            812 => Ok(Self::NIPPONSMTCOLtd),
            813 => Ok(Self::BMInnovationsGmbH),
            814 => Ok(Self::Indoormap),
            815 => Ok(Self::OttoQInc),
            816 => Ok(Self::NorthPoleEngineering),
            817 => Ok(Self::N3flaresTechnologiesInc),
            818 => Ok(Self::ElectrocompanietAS),
            819 => Ok(Self::MulTLock),
            820 => Ok(Self::CorentiumAS),
            821 => Ok(Self::EnlightedInc),
            822 => Ok(Self::GISTIC),
            823 => Ok(Self::AJP2HoldingsLLC),
            824 => Ok(Self::COBIGmbH),
            825 => Ok(Self::BlueSkyScientificLLC1),
            826 => Ok(Self::AppceptionInc),
            827 => Ok(Self::CourtneyThorneLimited),
            828 => Ok(Self::Virtuosys),
            829 => Ok(Self::TPVTechnologyLimited),
            830 => Ok(Self::MonitraSA),
            831 => Ok(Self::AutomationComponentsInc),
            832 => Ok(Self::LetsenseSRL),
            833 => Ok(Self::EtesianTechnologiesLLC),
            834 => Ok(Self::GERTECBRASILLTDA),
            835 => Ok(Self::DrekkerDevelopmentPtyLtd),
            836 => Ok(Self::WhirlInc),
            837 => Ok(Self::LocusPositioning),
            838 => Ok(Self::AcuityBrandsLightingInc),
            839 => Ok(Self::PreventBiometrics),
            840 => Ok(Self::Arioneo),
            841 => Ok(Self::VersaMe),
            842 => Ok(Self::Vaddio),
            843 => Ok(Self::LibratoneAS),
            844 => Ok(Self::HMElectronicsInc),
            845 => Ok(Self::TASERInternationalInc),
            846 => Ok(Self::SafeTrustInc),
            847 => Ok(Self::HeartlandPaymentSystems),
            848 => Ok(Self::BitstrataSystemsInc),
            849 => Ok(Self::PiepsGmbH),
            850 => Ok(Self::IRidingXiamenTechnologyCoLtd),
            851 => Ok(Self::AlphaAudiotronicsInc),
            852 => Ok(Self::TOPPANFORMSCOLTD),
            853 => Ok(Self::SigmaDesignsInc),
            854 => Ok(Self::SpectrumBrandsInc),
            855 => Ok(Self::PolymapWireless),
            856 => Ok(Self::MagniWareLtd),
            857 => Ok(Self::NovotecMedicalGmbH),
            858 => Ok(Self::MedicomInnovationPartnerAS),
            859 => Ok(Self::MatrixInc),
            860 => Ok(Self::EatonCorporation),
            861 => Ok(Self::KYS),
            862 => Ok(Self::NayaHealthInc),
            863 => Ok(Self::Acromag),
            864 => Ok(Self::InsuletCorporation),
            865 => Ok(Self::WellinksInc),
            866 => Ok(Self::ONSemiconductor),
            867 => Ok(Self::FREELAPSA),
            868 => Ok(Self::FaveroElectronicsSrl),
            869 => Ok(Self::BioMechSensorLLC),
            870 => Ok(Self::BOLTTSportsTechnologiesPrivateLimited),
            871 => Ok(Self::SapheInternational),
            872 => Ok(Self::MetormoteAB),
            873 => Ok(Self::LittleBits),
            874 => Ok(Self::SetPointMedical),
            875 => Ok(Self::BRControlsProductsBV),
            876 => Ok(Self::Zipcar),
            877 => Ok(Self::AirBoltPtyLtd),
            878 => Ok(Self::KeepTruckinInc),
            879 => Ok(Self::MotivInc),
            880 => Ok(Self::WazombiLabsO),
            881 => Ok(Self::ORBCOMM),
            882 => Ok(Self::NixieLabsInc),
            883 => Ok(Self::AppNearMeLtd),
            884 => Ok(Self::HolmanIndustries),
            885 => Ok(Self::ExpainAS),
            886 => Ok(Self::ElectronicTemperatureInstrumentsLtd),
            887 => Ok(Self::PlejdAB),
            888 => Ok(Self::PropellerHealth),
            889 => Ok(Self::ShenzhenIMCOElectronicTechnologyCoLtd),
            890 => Ok(Self::Algoria),
            891 => Ok(Self::ApptionLabsInc),
            892 => Ok(Self::CronologicsCorporation),
            893 => Ok(Self::MICRODIALtd),
            894 => Ok(Self::LulabytesSL),
            895 => Ok(Self::SociTDesProduitsNestlSAFormerlyNestecSA),
            896 => Ok(Self::LLCMEGAFService),
            897 => Ok(Self::SharpCorporation),
            898 => Ok(Self::PrecisionOutcomesLtd),
            899 => Ok(Self::KronosIncorporated),
            900 => Ok(Self::OCOSMOSCoLtd),
            901 => Ok(Self::EmbeddedElectronicSolutionsLtdDbaE2Solutions),
            902 => Ok(Self::AtericaInc),
            903 => Ok(Self::BluStorPMCInc),
            904 => Ok(Self::KapschTrafficComAB),
            905 => Ok(Self::ActiveBluCorporation),
            906 => Ok(Self::KohlerMiraLimited),
            907 => Ok(Self::Noke),
            908 => Ok(Self::AppionInc),
            909 => Ok(Self::ResmedLtd),
            910 => Ok(Self::CrownstoneBV),
            911 => Ok(Self::XiaomiInc),
            912 => Ok(Self::INFOTECHSRO),
            913 => Ok(Self::ThingsquareAB),
            914 => Ok(Self::TD),
            915 => Ok(Self::LAVAZZASPA),
            916 => Ok(Self::NetclearanceSystemsInc),
            917 => Ok(Self::SDATAWAY),
            918 => Ok(Self::BLOKSGmbH),
            919 => Ok(Self::LEGOSystemAS),
            920 => Ok(Self::ThetatronicsLtd),
            921 => Ok(Self::NikonCorporation),
            922 => Ok(Self::NeST),
            923 => Ok(Self::SouthSiliconValleyMicroelectronics),
            924 => Ok(Self::ALEInternational),
            925 => Ok(Self::CareViewCommunicationsInc),
            926 => Ok(Self::SchoolBoardLimited),
            927 => Ok(Self::MolexCorporation),
            928 => Ok(Self::IVTWirelessLimited),
            929 => Ok(Self::AlpineLabsLLC),
            930 => Ok(Self::CanduraInstruments),
            931 => Ok(Self::SmartMovtTechnologyCoLtd),
            932 => Ok(Self::TokenZeroLtd),
            933 => Ok(Self::ACECADEnterpriseCoLtdACECAD),
            934 => Ok(Self::MedelaInc),
            935 => Ok(Self::AeroScout),
            936 => Ok(Self::EsrilleInc),
            937 => Ok(Self::THINKERLYSRL),
            938 => Ok(Self::ExonSpZOO),
            939 => Ok(Self::MeizuTechnologyCoLtd),
            940 => Ok(Self::SmabloLTD),
            941 => Ok(Self::XiQ),
            942 => Ok(Self::AllswellInc),
            943 => Ok(Self::CommNSenseCorpDBAVerigo),
            944 => Ok(Self::VIBRADORMGmbH),
            945 => Ok(Self::OtodataWirelessNetworkInc),
            946 => Ok(Self::PropagationSystemsLimited),
            947 => Ok(Self::MidwestInstrumentsControls),
            948 => Ok(Self::AlphaNodusInc),
            949 => Ok(Self::PetPOMMInc),
            950 => Ok(Self::Mattel),
            951 => Ok(Self::AirblyInc),
            952 => Ok(Self::ASafeLimited),
            953 => Ok(Self::FREDERIQUECONSTANTSA),
            954 => Ok(Self::MaxscendMicroelectronicsCompanyLimited),
            955 => Ok(Self::Abbott),
            956 => Ok(Self::ASBBankLtd),
            957 => Ok(Self::Amadas),
            958 => Ok(Self::AppliedScienceInc),
            959 => Ok(Self::ILumiSolutionsInc),
            960 => Ok(Self::ArchSystemsInc),
            961 => Ok(Self::EmberTechnologiesInc),
            962 => Ok(Self::SnapchatInc),
            963 => Ok(Self::CasambiTechnologiesOy),
            964 => Ok(Self::PicoTechnologyInc),
            965 => Ok(Self::StJudeMedicalInc),
            966 => Ok(Self::Intricon),
            967 => Ok(Self::StructuralHealthSystemsInc),
            968 => Ok(Self::AvvelInternational),
            969 => Ok(Self::GallagherGroup),
            970 => Ok(Self::In2thingsAutomationPvtLtd),
            971 => Ok(Self::SYSDEVSrl),
            972 => Ok(Self::VonkilTechnologiesLtd),
            973 => Ok(Self::WyndTechnologiesInc),
            974 => Ok(Self::CONTRINEXSA),
            975 => Ok(Self::MIRAInc),
            976 => Ok(Self::WatteamLtd),
            977 => Ok(Self::DensityInc),
            978 => Ok(Self::IOTPotIndiaPrivateLimited),
            979 => Ok(Self::SigmaConnectivityAB),
            980 => Ok(Self::PEGPEREGOSPA),
            981 => Ok(Self::WyzelinkSystemsInc),
            982 => Ok(Self::YotaDevicesLTD),
            983 => Ok(Self::FINSECUR),
            984 => Ok(Self::ZenMeLabsLtd),
            985 => Ok(Self::N3IWareCoLtd),
            986 => Ok(Self::EnOceanGmbH),
            987 => Ok(Self::InstabeatInc),
            988 => Ok(Self::NimaLabs),
            989 => Ok(Self::AndreasStihlAGCoKG),
            990 => Ok(Self::NathanRhoadesLLC),
            991 => Ok(Self::GrobTechnologiesLLC),
            992 => Ok(Self::ActionsZhuhaiTechnologyCoLimited),
            993 => Ok(Self::SPDDevelopmentCompanyLtd),
            994 => Ok(Self::SensoanOy),
            995 => Ok(Self::QualcommLifeInc),
            996 => Ok(Self::ChipIngAG),
            997 => Ok(Self::Ffly4u),
            998 => Ok(Self::IoTInstrumentsOy),
            999 => Ok(Self::TRUEFitnessTechnology),
            1000 => Ok(Self::ReinerKartengeraeteGmbHCoKG),
            1001 => Ok(Self::SHENZHENLEMONJOYTECHNOLOGYCOLTD),
            1002 => Ok(Self::HelloInc),
            1003 => Ok(Self::EvollveInc),
            1004 => Ok(Self::JigowattsInc),
            1005 => Ok(Self::BASICMICROCOMINC),
            1006 => Ok(Self::CUBETECHNOLOGIES),
            1007 => Ok(Self::FoolographyGmbH),
            1008 => Ok(Self::CLINK),
            1009 => Ok(Self::HestanSmartCookingInc),
            1010 => Ok(Self::WindowMasterAS),
            1011 => Ok(Self::FlowscapeAB),
            1012 => Ok(Self::PALTechnologiesLtd),
            1013 => Ok(Self::WHEREInc),
            1014 => Ok(Self::ItonTechnologyCorp),
            1015 => Ok(Self::OwlLabsInc),
            1016 => Ok(Self::RockfordCorp),
            1017 => Ok(Self::BeconTechnologiesCoLtd),
            1018 => Ok(Self::VyassoftTechnologiesInc),
            1019 => Ok(Self::NoxMedical),
            1020 => Ok(Self::KimberlyClark),
            1021 => Ok(Self::TrimbleNavigationLtd),
            1022 => Ok(Self::Littelfuse),
            1023 => Ok(Self::Withings),
            1024 => Ok(Self::IDeveloperITBeratungUG),
            1025 => Ok(Self::RelationsInc),
            1026 => Ok(Self::SearsHoldingsCorporation),
            1027 => Ok(Self::GantnerElectronicGmbH),
            1028 => Ok(Self::AuthomateInc),
            1029 => Ok(Self::VertexInternationalInc),
            1030 => Ok(Self::Airtago),
            1031 => Ok(Self::SwissAudioSA),
            1032 => Ok(Self::ToGetHomeInc),
            1033 => Ok(Self::AXIS),
            1034 => Ok(Self::Openmatics),
            1035 => Ok(Self::JanaCareInc),
            1036 => Ok(Self::SenixCorporation),
            1037 => Ok(Self::NorthStarBatteryCompanyLLC),
            1038 => Ok(Self::SKFUKLimited),
            1039 => Ok(Self::COAXTechnologyInc),
            1040 => Ok(Self::FenderMusicalInstruments),
            1041 => Ok(Self::LuidiaInc),
            1042 => Ok(Self::SEFAM),
            1043 => Ok(Self::WirelessCablesInc),
            1044 => Ok(Self::LightningProtectionInternationalPtyLtd),
            1045 => Ok(Self::UberTechnologiesInc),
            1046 => Ok(Self::SODAGmbH),
            1047 => Ok(Self::FatigueScience),
            1048 => Ok(Self::Reserved),
            1049 => Ok(Self::NovalogyLTD),
            1050 => Ok(Self::FridayLabsLimited),
            1051 => Ok(Self::OrthoAccelTechnologies),
            1052 => Ok(Self::WaterGuruInc),
            1053 => Ok(Self::BenningElektrotechnikUndElektronikGmbHCoKG),
            1054 => Ok(Self::DellComputerCorporation),
            1055 => Ok(Self::KopinCorporation),
            1056 => Ok(Self::TecBakeryGmbH),
            1057 => Ok(Self::BackboneLabsInc),
            1058 => Ok(Self::DELSEYSA),
            1059 => Ok(Self::ChargifiLimited),
            1060 => Ok(Self::TrainesenseLtd),
            1061 => Ok(Self::UnifySoftwareAndSolutionsGmbHCoKG),
            1062 => Ok(Self::HusqvarnaAB),
            1063 => Ok(Self::FocusFleetAndFuelManagementInc),
            1064 => Ok(Self::SmallLoopLLC),
            1065 => Ok(Self::ProlonInc),
            1066 => Ok(Self::BDMedical),
            1067 => Ok(Self::IMicroMedIncorporated),
            1068 => Ok(Self::TictoNV),
            1069 => Ok(Self::MeshtechAS),
            1070 => Ok(Self::MemCachierInc),
            1071 => Ok(Self::DanfossAS),
            1072 => Ok(Self::SnapStykInc),
            1073 => Ok(Self::AmwayCorporation),
            1074 => Ok(Self::SilkLabsInc),
            1075 => Ok(Self::PillsyInc),
            1076 => Ok(Self::HatchBabyInc),
            1077 => Ok(Self::BlocksWearablesLtd),
            1078 => Ok(Self::DraysonTechnologiesEuropeLimited),
            1079 => Ok(Self::EBestIOTInc),
            1080 => Ok(Self::HelvarLtd),
            1081 => Ok(Self::RadianceTechnologies),
            1082 => Ok(Self::NuhearaLimited),
            1083 => Ok(Self::AppsideCoLtd),
            1084 => Ok(Self::DeLaval),
            1085 => Ok(Self::CoilerCorporation),
            1086 => Ok(Self::ThermomedicsInc),
            1087 => Ok(Self::TentacleSyncGmbH),
            1088 => Ok(Self::ValencellInc),
            1089 => Ok(Self::IProtoXiOy),
            1090 => Ok(Self::SECOMCOLTD),
            1091 => Ok(Self::TuckerInternationalLLC),
            1092 => Ok(Self::MetanateLimited),
            1093 => Ok(Self::KobianCanadaInc),
            1094 => Ok(Self::NETGEARInc),
            1095 => Ok(Self::FabtronicsAustraliaPtyLtd),
            1096 => Ok(Self::GrandCentrixGmbH),
            1097 => Ok(Self::N1UPUSAComLlc),
            1098 => Ok(Self::SHIMANOINC),
            1099 => Ok(Self::NainInc),
            1100 => Ok(Self::LifeStyleLockLLC),
            1101 => Ok(Self::VEGAGrieshaberKG),
            1102 => Ok(Self::XtravaInc),
            1103 => Ok(Self::TTSTooltechnicSystemsAGCoKG),
            1104 => Ok(Self::TeenageEngineeringAB),
            1105 => Ok(Self::TunstallNordicAB),
            1106 => Ok(Self::SvepDesignCenterAB),
            1107 => Ok(Self::QorvoUtrechtBVFormerlyGreenPeakTechnologiesBV),
            1108 => Ok(Self::SphinxElectronicsGmbHCoKG),
            1109 => Ok(Self::Atomation),
            1110 => Ok(Self::NemikConsultingInc),
            1111 => Ok(Self::RFINNOVATION),
            1112 => Ok(Self::MiniSolutionCoLtd),
            1113 => Ok(Self::LumenetixInc),
            1114 => Ok(Self::N2048450OntarioInc),
            1115 => Ok(Self::SPACEEKLTD),
            1116 => Ok(Self::DeltaTCorporation),
            1117 => Ok(Self::BostonScientificCorporation),
            1118 => Ok(Self::NuvizInc),
            1119 => Ok(Self::RealTimeAutomationInc),
            1120 => Ok(Self::Kolibree),
            1121 => Ok(Self::VhfElektronikGmbH),
            1122 => Ok(Self::BonsaiSystemsGmbH),
            1123 => Ok(Self::FathomSystemsInc),
            1124 => Ok(Self::BellmanSymfon),
            1125 => Ok(Self::InternationalForteGroupLLC),
            1126 => Ok(Self::CycleLabsSolutionsInc),
            1127 => Ok(Self::CodenexOy),
            1128 => Ok(Self::KynesimLtd),
            1129 => Ok(Self::PalagoAB),
            1130 => Ok(Self::INSIGMAINC),
            1131 => Ok(Self::PMDSolutions),
            1132 => Ok(Self::QingdaoRealtimeTechnologyCoLtd),
            1133 => Ok(Self::BEGAGantenbrinkLeuchtenKG),
            1134 => Ok(Self::PamborLtd),
            1135 => Ok(Self::DevelcoProductsAS),
            1136 => Ok(Self::IDesignSRL),
            1137 => Ok(Self::TiVoCorp),
            1138 => Ok(Self::ControlJPtyLtd),
            1139 => Ok(Self::SteelcaseInc),
            1140 => Ok(Self::IApartmentCoLtd),
            1141 => Ok(Self::IcomInc),
            1142 => Ok(Self::OxstrenWearableTechnologiesPrivateLimited),
            1143 => Ok(Self::BlueSparkTechnologies),
            1144 => Ok(Self::FarSiteCommunicationsLimited),
            1145 => Ok(Self::MywerkSystemGmbH),
            1146 => Ok(Self::SinosunTechnologyCoLtd),
            1147 => Ok(Self::MIYOSHIELECTRONICSCORPORATION),
            1148 => Ok(Self::POWERMATLTD),
            1149 => Ok(Self::OcclyLLC),
            1150 => Ok(Self::OurHubDevIvS),
            1151 => Ok(Self::ProMarkInc),
            1152 => Ok(Self::DynometricsInc),
            1153 => Ok(Self::QuintraxLimited),
            1154 => Ok(Self::POSTuningUdoVosshenrichGmbHCoKG),
            1155 => Ok(Self::MultiCareSystemsBV),
            1156 => Ok(Self::RevolTechnologiesInc),
            1157 => Ok(Self::SKIDATAAG),
            1158 => Ok(Self::DEVTECNOLOGIAINDUSTRIACOMERCIOEMANUTENCAODEEQUIPAMENTOSLTDAME),
            1159 => Ok(Self::CentricaConnectedHome),
            1160 => Ok(Self::AutomotiveDataSolutionsInc),
            1161 => Ok(Self::IgarashiEngineering),
            1162 => Ok(Self::TaelekOy),
            1163 => Ok(Self::CPElectronicsLimited),
            1164 => Ok(Self::VectronixAG),
            1165 => Ok(Self::SLabsSpZOO),
            1166 => Ok(Self::CompanionMedicalInc),
            1167 => Ok(Self::BlueKitchenGmbH),
            1168 => Ok(Self::MattingAB),
            1169 => Ok(Self::SOREXWirelessSolutionsGmbH),
            1170 => Ok(Self::ADCTechnologyInc),
            1171 => Ok(Self::LynxemiPteLtd),
            1172 => Ok(Self::SENNHEISERElectronicGmbHCoKG),
            1173 => Ok(Self::LMTMercerGroupInc),
            1174 => Ok(Self::PolymorphicLabsLLC),
            1175 => Ok(Self::CochlearLimited),
            1176 => Ok(Self::METERGroupIncUSA),
            1177 => Ok(Self::RuuviInnovationsLtd),
            1178 => Ok(Self::SituneAS),
            1179 => Ok(Self::NVistiLLC),
            1180 => Ok(Self::DyOcean),
            1181 => Ok(Self::UhlmannZacherGmbH),
            1182 => Ok(Self::ANDXORLLC),
            1183 => Ok(Self::TictoteAB),
            1184 => Ok(Self::VypinLLC),
            1185 => Ok(Self::PNISensorCorporation),
            1186 => Ok(Self::OvrEngineeredLLC),
            1187 => Ok(Self::GTTronicsHKLtd),
            1188 => Ok(Self::HerbertWaldmannGmbHCoKG),
            1189 => Ok(Self::GuangzhouFiiOElectronicsTechnologyCoLtd),
            1190 => Ok(Self::VinetechCoLtd),
            1191 => Ok(Self::DallasLogicCorporation),
            1192 => Ok(Self::BioTexInc),
            1193 => Ok(Self::DISCOVERYSOUNDTECHNOLOGYLLC),
            1194 => Ok(Self::LINKIOSAS),
            1195 => Ok(Self::HarbortronicsInc),
            1196 => Ok(Self::UndagridBV),
            1197 => Ok(Self::ShureInc),
            1198 => Ok(Self::ERMElectronicSystemsLTD),
            1199 => Ok(Self::BIOROWERHandelsagenturGmbH),
            1200 => Ok(Self::WebaSportUndMedArtikelGmbH),
            1201 => Ok(Self::KartographersTechnologiesPvtLtd),
            1202 => Ok(Self::TheShadowOnTheMoon),
            1203 => Ok(Self::MobikeHongKongLimited),
            1204 => Ok(Self::InuheatGroupAB),
            1205 => Ok(Self::SwiftronixAB),
            1206 => Ok(Self::DiagnopticsTechnologies),
            1207 => Ok(Self::AnalogDevicesInc),
            1208 => Ok(Self::SoraaInc),
            1209 => Ok(Self::CSRBuildingProductsLimited),
            1210 => Ok(Self::CrestronElectronicsInc),
            1211 => Ok(Self::NeateboxLtd),
            1212 => Ok(Self::DraegerwerkAGCoKGaA),
            1213 => Ok(Self::AlbynMedical),
            1214 => Ok(Self::AverosFZCO),
            1215 => Ok(Self::VITInitiativeLLC),
            1216 => Ok(Self::StatsportsInternational),
            1217 => Ok(Self::SospitasSRO),
            1218 => Ok(Self::DmetProductsCorp),
            1219 => Ok(Self::MantracourtElectronicsLimited),
            1220 => Ok(Self::TeAMHutchinsAB),
            1221 => Ok(Self::SeibertWilliamsGlassLLC),
            1222 => Ok(Self::InstaGmbH),
            1223 => Ok(Self::SvantekSpZOO),
            1224 => Ok(Self::ShanghaiFlycoElectricalApplianceCoLtd),
            1225 => Ok(Self::ThornwaveLabsInc),
            1226 => Ok(Self::SteinerOptikGmbH),
            1227 => Ok(Self::NovoNordiskAS),
            1228 => Ok(Self::EnfluxInc),
            1229 => Ok(Self::SafetechProductsLLC),
            1230 => Ok(Self::GOOOLEDSRL),
            1231 => Ok(Self::DOMSicherheitstechnikGmbHCoKG),
            1232 => Ok(Self::OlympusCorporation),
            1233 => Ok(Self::KTSGmbH),
            1234 => Ok(Self::AnloqTechnologiesInc),
            1235 => Ok(Self::QueerconInc),
            1236 => Ok(Self::N5thElementLtd),
            1237 => Ok(Self::GooeeLimited),
            1238 => Ok(Self::LUGLOCLLC),
            1239 => Ok(Self::BlincamInc),
            1240 => Ok(Self::FUJIFILMCorporation),
            1241 => Ok(Self::RandMcNally),
            1242 => Ok(Self::FranceschiMarinaSnc),
            1243 => Ok(Self::EngineeredAudioLLC),
            1244 => Ok(Self::IOTTIVEOPCPRIVATELIMITED),
            1245 => Ok(Self::N4MODTechnology),
            1246 => Ok(Self::LutronElectronicsCoInc),
            1247 => Ok(Self::Emerson),
            1248 => Ok(Self::GuardtecInc),
            1249 => Ok(Self::REACTECLIMITED),
            1250 => Ok(Self::EllieGrid),
            1251 => Ok(Self::UnderArmour),
            1252 => Ok(Self::Woodenshark),
            1253 => Ok(Self::AvackOy),
            1254 => Ok(Self::SmartSolutionTechnologyInc),
            1255 => Ok(Self::REHABTRONICSINC),
            1256 => Ok(Self::STABILOInternational),
            1257 => Ok(Self::BuschJaegerElektroGmbH),
            1258 => Ok(Self::PacificBioscienceLaboratoriesInc),
            1259 => Ok(Self::BirdHomeAutomationGmbH),
            1260 => Ok(Self::MotorolaSolutions),
            1261 => Ok(Self::R9TechnologyInc),
            1262 => Ok(Self::Auxivia),
            1263 => Ok(Self::DaisyWorksInc),
            1264 => Ok(Self::KosiLimited),
            1265 => Ok(Self::ThebenAG),
            1266 => Ok(Self::InDreamerTechsolPrivateLimited),
            1267 => Ok(Self::CerevastMedical),
            1268 => Ok(Self::ZanComputeInc),
            1269 => Ok(Self::PirelliTyreSPA),
            1270 => Ok(Self::McLearLimited),
            1271 => Ok(Self::ShenzhenHuidingTechnologyCoLtd),
            1272 => Ok(Self::ConvergenceSystemsLimited),
            1273 => Ok(Self::Interactio),
            1274 => Ok(Self::AndrotecGmbH),
            1275 => Ok(Self::BenchmarkDrivesGmbHCoKG),
            1276 => Ok(Self::SwingLyncLLC),
            1277 => Ok(Self::TapkeyGmbH),
            1278 => Ok(Self::WoosimSystemsInc),
            1279 => Ok(Self::MicrosemiCorporation),
            1280 => Ok(Self::WiliotLTD),
            1281 => Ok(Self::PolarisIND),
            1282 => Ok(Self::SpecifiKaliLLC),
            1283 => Ok(Self::LocorollInc),
            1284 => Ok(Self::PHYPLUSInc),
            1285 => Ok(Self::InPlayInc),
            1286 => Ok(Self::Hager),
            1287 => Ok(Self::Yellowcog),
            1288 => Ok(Self::AxesSystemSpZOO),
            1289 => Ok(Self::MyLIFTERInc),
            1290 => Ok(Self::ShakeOnBV),
            1291 => Ok(Self::VibrissaInc),
            1292 => Ok(Self::OSRAMGmbH),
            1293 => Ok(Self::TRSystemsGmbH),
            1294 => Ok(Self::YichipMicroelectronicsHangzhouCoLtd),
            1295 => Ok(Self::FoundationEngineeringLLC),
            1296 => Ok(Self::UNIELECTRONICSINC),
            1297 => Ok(Self::BrookfieldEquinoxLLC),
            1298 => Ok(Self::SoprodSA),
            1299 => Ok(Self::N9974091CanadaInc),
            1300 => Ok(Self::FIBROGmbH),
            1301 => Ok(Self::RBControlsCoLtd),
            1302 => Ok(Self::Footmarks),
            1303 => Ok(Self::AmtronicSverigeABFormerlyAmcoreAB),
            1304 => Ok(Self::MAMORIOInc),
            1305 => Ok(Self::TytoLifeLLC),
            1306 => Ok(Self::LeicaCameraAG),
            1307 => Ok(Self::AngeeTechnologiesLtd),
            1308 => Ok(Self::EDPS),
            1309 => Ok(Self::OFFLineCoLtd),
            1310 => Ok(Self::DetectBlueLimited),
            1311 => Ok(Self::SetecPtyLtd),
            1312 => Ok(Self::TargetCorporation),
            1313 => Ok(Self::IAICorporation),
            1314 => Ok(Self::NSTechInc),
            1315 => Ok(Self::MTGCoLtd),
            1316 => Ok(Self::HangzhouIMagicTechnologyCoLtd),
            1317 => Ok(Self::HONGKONGNANOICTECHNOLOGIESCOLIMITED),
            1318 => Ok(Self::HoneywellInternationalInc),
            1319 => Ok(Self::AlbrechtJUNG),
            1320 => Ok(Self::LuneraLightingInc),
            1321 => Ok(Self::LumenUAB),
            1322 => Ok(Self::KeynesControlsLtd),
            1323 => Ok(Self::NovartisAG),
            1324 => Ok(Self::GeosatisSA),
            1325 => Ok(Self::EXFOInc),
            1326 => Ok(Self::LEDVANCEGmbH),
            1327 => Ok(Self::CenterIDCorp),
            1328 => Ok(Self::AdoleneInc),
            1329 => Ok(Self::DMHoldingsInc),
            1330 => Ok(Self::CRESCOWirelessInc),
            1331 => Ok(Self::NuraOperationsPtyLtd),
            1332 => Ok(Self::FrontiergadgetInc),
            1333 => Ok(Self::SmartComponentTechnologiesLimited),
            1334 => Ok(Self::ZTRControlSystemsLLC),
            1335 => Ok(Self::MetaLogicsCorporation),
            1336 => Ok(Self::MedelaAG),
            1337 => Ok(Self::OPPLELightingCoLtd),
            1338 => Ok(Self::SavitechCorp),
            1339 => Ok(Self::Prodigy),
            1340 => Ok(Self::ScreenovateTechnologiesLtd),
            1341 => Ok(Self::TESASA),
            1342 => Ok(Self::CLIM8LIMITED),
            1343 => Ok(Self::SilergyCorp),
            1344 => Ok(Self::SilverPlusInc),
            1345 => Ok(Self::SharknetSrl),
            1346 => Ok(Self::MistSystemsInc),
            1347 => Ok(Self::MIWALOCKCOLtd),
            1348 => Ok(Self::OrthoSensorInc),
            1349 => Ok(Self::CandyHooverGroupSRL),
            1350 => Ok(Self::ApexarTechnologiesSA),
            1351 => Ok(Self::LOGICDATADOO),
            1352 => Ok(Self::KnickElektronischeMessgeraeteGmbHCoKG),
            1353 => Ok(Self::SmartTechnologiesAndInvestmentLimited),
            1354 => Ok(Self::LinoughInc),
            1355 => Ok(Self::AdvancedElectronicDesignsInc),
            1356 => Ok(Self::CarefreeScottFetzerCoInc),
            1357 => Ok(Self::Sensome),
            1358 => Ok(Self::FORTRONIKStoritveDOO),
            1359 => Ok(Self::Sinnoz),
            1360 => Ok(Self::VersaNetworksInc),
            1361 => Ok(Self::Sylero),
            1362 => Ok(Self::AvempaceSARL),
            1363 => Ok(Self::NintendoCoLtd),
            1364 => Ok(Self::NationalInstruments),
            1365 => Ok(Self::KROHNEMesstechnikGmbH),
            1366 => Ok(Self::OtodynamicsLtd),
            1367 => Ok(Self::ArwinTechnologyLimited),
            1368 => Ok(Self::BenegearInc),
            1369 => Ok(Self::NewconOptik),
            1370 => Ok(Self::CANDYHOUSEInc),
            1371 => Ok(Self::FRANKLINTECHNOLOGYINC),
            1372 => Ok(Self::Lely),
            1373 => Ok(Self::ValveCorporation),
            1374 => Ok(Self::HekatronVertriebsGmbH),
            1375 => Ok(Self::PROTECHSASDIGIRARDIANDREAC),
            1376 => Ok(Self::SaritaCareTechAPSFormerlySaritaCareTechIVS),
            1377 => Ok(Self::FinderSPA),
            1378 => Ok(Self::ThalmicLabsInc),
            1379 => Ok(Self::SteinelVertriebGmbH),
            1380 => Ok(Self::BeghelliSpa),
            1381 => Ok(Self::BeijingSmartspaceTechnologiesInc),
            1382 => Ok(Self::CORETRANSPORTTECHNOLOGIESNZLIMITED),
            1383 => Ok(Self::XiamenEveresportsGoodsCoLtd),
            1384 => Ok(Self::BodyportInc),
            1385 => Ok(Self::AudionicsSystemINC),
            1386 => Ok(Self::FlipnaviCoLtd),
            1387 => Ok(Self::RionCoLtd),
            1388 => Ok(Self::LongRangeSystemsLLC),
            1389 => Ok(Self::RedmondIndustrialGroupLLC),
            1390 => Ok(Self::VIZPININC),
            1391 => Ok(Self::BikeFinderAS),
            1392 => Ok(Self::ConsumerSleepSolutionsLLC),
            1393 => Ok(Self::PSIKICKINC),
            1394 => Ok(Self::AntTailCom),
            1395 => Ok(Self::LightingScienceGroupCorp),
            1396 => Ok(Self::AFFORDABLEELECTRONICSINC),
            1397 => Ok(Self::IntegralMemroyPlc),
            1398 => Ok(Self::GlobalstarInc),
            1399 => Ok(Self::TrueWearablesInc),
            1400 => Ok(Self::WellingtonDriveTechnologiesLtd),
            1401 => Ok(Self::EnsembleTechPrivateLimited),
            1402 => Ok(Self::OMNIRemotes),
            1403 => Ok(Self::DuracellUSOperationsInc),
            1404 => Ok(Self::ToorTechnologiesLLC),
            1405 => Ok(Self::InstinctPerformance),
            1406 => Ok(Self::BecoInc),
            1407 => Ok(Self::ScufGamingInternationalLLC),
            1408 => Ok(Self::ARANZMedicalLimited),
            1409 => Ok(Self::LYSTECHNOLOGIESLTD),
            1410 => Ok(Self::BreakwallAnalyticsLLC),
            1411 => Ok(Self::CodeBlueCommunications),
            1412 => Ok(Self::GiraGiersiepenGmbHCoKG),
            1413 => Ok(Self::HearingLabTechnology),
            1414 => Ok(Self::LEGRAND),
            1415 => Ok(Self::DerichsGmbH),
            1416 => Ok(Self::ALTTEKNIKLLC),
            1417 => Ok(Self::StarTechnologies),
            1418 => Ok(Self::STARTTODAYCOLTD),
            1419 => Ok(Self::MaximIntegratedProducts),
            1420 => Ok(Self::MERCKKommanditgesellschaftAufAktien),
            1421 => Ok(Self::JungheinrichAktiengesellschaft),
            1422 => Ok(Self::OculusVRLLC),
            1423 => Ok(Self::HENDONSEMICONDUCTORSPTYLTD),
            1424 => Ok(Self::Pur3Ltd),
            1425 => Ok(Self::ViasatGroupSPA),
            1426 => Ok(Self::IZITHERM),
            1427 => Ok(Self::SpauldingClinicalResearch),
            1428 => Ok(Self::KohlerCompany),
            1429 => Ok(Self::InorProcessAB),
            1430 => Ok(Self::MySmartBlinds),
            1431 => Ok(Self::RadioPulseInc),
            1432 => Ok(Self::RapitagGmbH),
            1433 => Ok(Self::Lazlo326LLC),
            1434 => Ok(Self::TeledyneLecroyInc),
            1435 => Ok(Self::DataflowSystemsLimited),
            1436 => Ok(Self::MacrogigaElectronics),
            1437 => Ok(Self::TandemDiabetesCare),
            1438 => Ok(Self::PolycomInc),
            1439 => Ok(Self::FisherPaykelHealthcare),
            1440 => Ok(Self::RCPSoftwareOy),
            1441 => Ok(Self::ShanghaiXiaoyiTechnologyCoLtd),
            1442 => Ok(Self::ADHERIUMNZLIMITED),
            1443 => Ok(Self::AxiomwareSystemsIncorporated),
            1444 => Ok(Self::OEMControlsInc),
            1445 => Ok(Self::KiirooBV),
            1446 => Ok(Self::TeleconMobileLimited),
            1447 => Ok(Self::SonosInc),
            1448 => Ok(Self::TomAllebrandiConsulting),
            1449 => Ok(Self::Monidor),
            1450 => Ok(Self::TramexLimited),
            1451 => Ok(Self::NofenceAS),
            1452 => Ok(Self::GoerTekDynaudioCoLtd),
            1453 => Ok(Self::INIA),
            1454 => Ok(Self::CARMATEMFGCOLTD),
            1455 => Ok(Self::OVLOOPINCFormerlyONvocal),
            1456 => Ok(Self::NewTecGmbH),
            1457 => Ok(Self::MedallionInstrumentationSystems),
            1458 => Ok(Self::CARELINDUSTRIESSPA),
            1459 => Ok(Self::ParabitSystemsInc),
            1460 => Ok(Self::WhiteHorseScientificLtd),
            1461 => Ok(Self::Verisilicon),
            1462 => Ok(Self::ElecsIndustryCoLtd),
            1463 => Ok(Self::BeijingPineconeElectronicsCoLtd),
            1464 => Ok(Self::AmbystomaLabsInc),
            1465 => Ok(Self::SuzhouPairlinkNetworkTechnology),
            1466 => Ok(Self::Igloohome),
            1467 => Ok(Self::OxfordMetricsPlc),
            1468 => Ok(Self::LevitonMfgCoInc),
            1469 => Ok(Self::ULCRoboticsInc),
            1470 => Ok(Self::RFIDGlobalBySoftworkSrL),
            1471 => Ok(Self::RealWorldSystemsCorporation),
            1472 => Ok(Self::NaluMedicalInc),
            1473 => Ok(Self::PIEngineering),
            1474 => Ok(Self::GroteIndustries),
            1475 => Ok(Self::RuntimeInc),
            1476 => Ok(Self::CodecoupSpZOOSpK),
            1477 => Ok(Self::SELVEGmbHCoKG),
            1478 => Ok(Self::SmartAnimalTrainingSystemsLLC),
            1479 => Ok(Self::LippertComponentsINC),
            1480 => Ok(Self::SOMFYSAS),
            1481 => Ok(Self::TBSElectronicsBV),
            1482 => Ok(Self::MHLCustomInc),
            1483 => Ok(Self::LucentWearLLC),
            1484 => Ok(Self::WATTSELECTRONICS),
            1485 => Ok(Self::RJBrandsLLC),
            1486 => Ok(Self::VZUGLtd),
            1487 => Ok(Self::BiowatchSA),
            1488 => Ok(Self::AnovaAppliedElectronics),
            1489 => Ok(Self::LindabAB),
            1490 => Ok(Self::FrogblueTECHNOLOGYGmbH),
            1491 => Ok(Self::AcurableLimited),
            1492 => Ok(Self::LAMPLIGHTCoLtd),
            1493 => Ok(Self::TEGAMInc),
            1494 => Ok(Self::ZhuhaiJieliTechnologyCoLtd),
            1495 => Ok(Self::ModumIoAG),
            1496 => Ok(Self::FarmJennyLLC),
            1497 => Ok(Self::ToyoElectronicsCorporation),
            1498 => Ok(Self::AppliedNeuralResearchCorp),
            1499 => Ok(Self::AvidIdentificationSystemsInc),
            1500 => Ok(Self::PetronicsInc),
            1501 => Ok(Self::EssentimGmbH),
            1502 => Ok(Self::QTMedicalINC),
            1503 => Ok(Self::VIRTUALCLINICDIRECTLIMITED),
            1504 => Ok(Self::ViperDesignLLC),
            1505 => Ok(Self::HumanIncorporated),
            1506 => Ok(Self::StAPPtronicsGmbH),
            1507 => Ok(Self::ElementalMachinesInc),
            1508 => Ok(Self::TaiyoYudenCoLtd),
            1509 => Ok(Self::INEOENERGYSYSTEMS),
            1510 => Ok(Self::MotionInstrumentsInc),
            1511 => Ok(Self::PressurePro),
            1512 => Ok(Self::COWBOY),
            1513 => Ok(Self::IconmobileGmbH),
            1514 => Ok(Self::ACSControlSystemGmbH),
            1515 => Ok(Self::BayerischeMotorenWerkeAG),
            1516 => Ok(Self::GycomSvenskaAB),
            1517 => Ok(Self::FujiXeroxCoLtd),
            1518 => Ok(Self::GlideInc),
            1519 => Ok(Self::SIKOMAS),
            1520 => Ok(Self::Beken),
            1521 => Ok(Self::TheLinuxFoundation),
            1522 => Ok(Self::TryAndECOLTD),
            1523 => Ok(Self::SeeScan),
            1524 => Ok(Self::ClearityLLC),
            1525 => Ok(Self::GSTAG),
            1526 => Ok(Self::DPTechnics),
            1527 => Ok(Self::TRACMOINC),
            1528 => Ok(Self::AnkiInc),
            1529 => Ok(Self::HagleitnerHygieneInternationalGmbH),
            1530 => Ok(Self::KonamiSportsLifeCoLtd),
            1531 => Ok(Self::ArbletInc),
            1532 => Ok(Self::MasbandoGmbH),
            1533 => Ok(Self::Innoseis),
            1534 => Ok(Self::NikoNv),
            1535 => Ok(Self::WellnomicsLtd),
            1536 => Ok(Self::IRobotCorporation),
            1537 => Ok(Self::SchraderElectronics),
            1538 => Ok(Self::GeberitInternationalAG),
            1539 => Ok(Self::FourthEvolutionInc),
            1540 => Ok(Self::Cell2JackLLC),
            1541 => Ok(Self::FMWElectronicFuttererUMaierWolfOHG),
            1542 => Ok(Self::JohnDeere),
            1543 => Ok(Self::RookeryTechnologyLtd),
            1544 => Ok(Self::KeySafeCloud),
            1545 => Ok(Self::BUCHILabortechnikAG),
            1546 => Ok(Self::IQAirAG),
            1547 => Ok(Self::TriaxTechnologiesInc),
            1548 => Ok(Self::VuzixCorporation),
            1549 => Ok(Self::TDKCorporation),
            1550 => Ok(Self::BlueairAB),
            1551 => Ok(Self::SignifyNetherlands),
            1552 => Ok(Self::ADHGUARDIANUSALLC),
            1553 => Ok(Self::BeurerGmbH),
            1554 => Ok(Self::PlayfinityAS),
            1555 => Ok(Self::HansDinslageGmbH),
            1556 => Ok(Self::OnAssetIntelligenceInc),
            1557 => Ok(Self::INTERACTIONCorporation),
            1558 => Ok(Self::OS42UGHaftungsbeschraenkt),
            1559 => Ok(Self::WIZCONNECTEDCOMPANYLIMITED),
            1560 => Ok(Self::AudioTechnicaCorporation),
            1561 => Ok(Self::SixGuysLabsSRO),
            1562 => Ok(Self::RWBeckettCorporation),
            1563 => Ok(Self::SilexTechnologyInc),
            1564 => Ok(Self::UnivationsLimited),
            1565 => Ok(Self::SENSInnovationApS),
            1566 => Ok(Self::DiamondKineticsInc),
            1567 => Ok(Self::PhrameInc),
            1568 => Ok(Self::ForciotOy),
            1569 => Ok(Self::NoordungDOO),
            1570 => Ok(Self::BeamLabsLLC),
            1571 => Ok(Self::PhiladelphiaScientificUKLimited),
            1572 => Ok(Self::BiovotionAG),
            1573 => Ok(Self::SquarePandaInc),
            1574 => Ok(Self::Amplifico),
            1575 => Ok(Self::WEGSA),
            1576 => Ok(Self::EnstoOy),
            1577 => Ok(Self::PHONEPEPVTLTD),
            1578 => Ok(Self::LunaticoAstronomiaSL),
            1579 => Ok(Self::MinebeaMitsumiInc),
            1580 => Ok(Self::ASPionGmbH),
            1581 => Ok(Self::VosslohSchwabeDeutschlandGmbH),
            1582 => Ok(Self::Procept),
            1583 => Ok(Self::ONKYOCorporation),
            1584 => Ok(Self::AsthreaDOO),
            1585 => Ok(Self::FortioriDesignLLC),
            1586 => Ok(Self::HugoMullerGmbHCoKG),
            1587 => Ok(Self::WangiLaiPLT),
            1588 => Ok(Self::FanstelCorp),
            1589 => Ok(Self::Crookwood),
            1590 => Ok(Self::ELECTRONICAINTEGRALDESONIDOSA),
            1591 => Ok(Self::GiPInnovationToolsGmbH),
            1592 => Ok(Self::LXSOLUTIONSPTYLIMITED),
            1593 => Ok(Self::ShenzhenMinewTechnologiesCoLtd),
            1594 => Ok(Self::ProlojikLimited),
            1595 => Ok(Self::KromekGroupPlc),
            1596 => Ok(Self::ContecMedicalSystemsCoLtd),
            1597 => Ok(Self::XradioTechnologyCoLtd),
            1598 => Ok(Self::TheIndoorLabLLC),
            1599 => Ok(Self::LDLTECHNOLOGY),
            1600 => Ok(Self::Parkifi),
            1601 => Ok(Self::RevenueCollectionSystemsFRANCESAS),
            1602 => Ok(Self::BluetrumTechnologyCoLtd),
            1603 => Ok(Self::MakitaCorporation),
            1604 => Ok(Self::ApogeeInstruments),
            1605 => Ok(Self::BM3),
            1606 => Ok(Self::SGVGroupHoldingGmbHCoKG),
            1607 => Ok(Self::MEDEL),
            1608 => Ok(Self::UltuneTechnologies),
            1609 => Ok(Self::RyeexTechnologyCoLtd),
            1610 => Ok(Self::OpenResearchInstituteInc),
            1611 => Ok(Self::ScaleTecLtd),
            1612 => Ok(Self::ZumtobelGroupAG),
            1613 => Ok(Self::ILOQOy),
            1614 => Ok(Self::KRUXWorksTechnologiesPrivateLimited),
            1615 => Ok(Self::DigitalMatterPtyLtd),
            1616 => Ok(Self::CoravinInc),
            1617 => Ok(Self::StasisLabsInc),
            1618 => Ok(Self::ITZInnovationsUndTechnologiezentrumGmbH),
            1619 => Ok(Self::MeggittSA),
            1620 => Ok(Self::LedlenserGmbHCoKG),
            1621 => Ok(Self::RenishawPLC),
            1622 => Ok(Self::ZhuHaiAdvanProTechnologyCompanyLimited),
            1623 => Ok(Self::MeshtronixLimited),
            1624 => Ok(Self::PayexNorgeAS),
            1625 => Ok(Self::UnSeenTechnologiesOy),
            1626 => Ok(Self::ZoundIndustriesInternationalAB),
            1627 => Ok(Self::SesamSolutionsBV),
            1628 => Ok(Self::PixArtImagingInc),
            1629 => Ok(Self::PanduitCorp),
            1630 => Ok(Self::AloAB),
            1631 => Ok(Self::RicohCompanyLtd),
            1632 => Ok(Self::RTCIndustriesInc),
            1633 => Ok(Self::ModeLightingLimited),
            1634 => Ok(Self::ParticleIndustriesInc),
            1635 => Ok(Self::AdvancedTelemetrySystemsInc),
            1636 => Ok(Self::RHATECHNOLOGIESLTD),
            1637 => Ok(Self::PureInternationalLimited),
            1638 => Ok(Self::WTOWerkzeugEinrichtungenGmbH),
            1639 => Ok(Self::SparkTechnologyLabsInc),
            1640 => Ok(Self::BlebTechnologySrl),
            1641 => Ok(Self::LivanovaUSAInc),
            1642 => Ok(Self::BradyWorldwideInc),
            1643 => Ok(Self::DewertOkinGmbH),
            1644 => Ok(Self::ZtoveApS),
            1645 => Ok(Self::VensoEcoSolutionsAB),
            1646 => Ok(Self::EurotronikKranjDOO),
            1647 => Ok(Self::HugTechnologyLtd),
            1648 => Ok(Self::GemaSwitzerlandGmbH),
            1649 => Ok(Self::BuzzProductsLtd),
            1650 => Ok(Self::Kopi),
            1651 => Ok(Self::InnovaIdeasLimited),
            1652 => Ok(Self::BeSpoon),
            1653 => Ok(Self::DecoEnterprisesInc),
            1654 => Ok(Self::ExpaiSolutionsPrivateLimited),
            1655 => Ok(Self::InnovationFirstInc),
            1656 => Ok(Self::SABIKOffshoreGmbH),
            1657 => Ok(Self::N4iiiiInnovationsInc),
            1658 => Ok(Self::TheEnergyConservatoryInc),
            1659 => Ok(Self::IFARMINC),
            1660 => Ok(Self::TileInc),
            1661 => Ok(Self::FormAthleticaInc),
            1662 => Ok(Self::MbientLabInc),
            1663 => Ok(Self::NETGRIDSNCDIBISSOLIMATTEOCAMPOREALESIMONETOGNETTIFEDERICO),
            1664 => Ok(Self::MannkindCorporation),
            1665 => Ok(Self::TradeFIDESAS),
            1666 => Ok(Self::PhotronLimited),
            1667 => Ok(Self::EltakoGmbH),
            1668 => Ok(Self::DermalappsLLC),
            1669 => Ok(Self::GreenwaldIndustries),
            1670 => Ok(Self::InQsCoLtd),
            1671 => Ok(Self::CherryGmbH),
            1672 => Ok(Self::AmstedDigitalSolutionsInc),
            1673 => Ok(Self::TacxBV),
            1674 => Ok(Self::RaytacCorporation),
            1675 => Ok(Self::JiangsuTeranovoTechCoLtd),
            1676 => Ok(Self::ChangzhouSoundDragonElectronicsAndAcousticsCoLtd),
            1677 => Ok(Self::JetBeepInc),
            1678 => Ok(Self::RazerInc),
            1679 => Ok(Self::JRMGroupLimited),
            1680 => Ok(Self::EccrineSystemsInc),
            1681 => Ok(Self::CuriePointAB),
            1682 => Ok(Self::GeorgFischerAG),
            1683 => Ok(Self::HachDanaher),
            1684 => Ok(Self::TALaboratoriesLLC),
            1685 => Ok(Self::KokiHoldingsCoLtd),
            1686 => Ok(Self::GunakarPrivateLimited),
            1687 => Ok(Self::StemcoProductsInc),
            1688 => Ok(Self::WoodITSecurityLLC),
            1689 => Ok(Self::RandomLabSAS),
            1690 => Ok(Self::AderoIncFormerlyAsTrackRInc),
            1691 => Ok(Self::DragonchipLimited),
            1692 => Ok(Self::NoomiAB),
            1693 => Ok(Self::VakarosLLC),
            1694 => Ok(Self::DeltaElectronicsInc),
            1695 => Ok(Self::FlowMotionTechnologiesAS),
            1696 => Ok(Self::OBIQLocationTechnologyInc),
            1697 => Ok(Self::CardoSystemsLtd),
            1698 => Ok(Self::GlobalworxGmbH),
            1699 => Ok(Self::NymbusLLC),
            1700 => Ok(Self::SanyoTechnoSolutionsTottoriCoLtd),
            1701 => Ok(Self::TEKZITELPTYLTD),
            1702 => Ok(Self::RoambeeCorporation),
            1703 => Ok(Self::ChipseaTechnologiesShenZhenCorp),
            1704 => Ok(Self::GDMideaAirConditioningEquipmentCoLtd),
            1705 => Ok(Self::SoundmaxElectronicsLimited),
            1706 => Ok(Self::ProdualOy),
            1707 => Ok(Self::HMSIndustrialNetworksAB),
            1708 => Ok(Self::IngchipsTechnologyCoLtd),
            1709 => Ok(Self::InnovaSeaSystemsInc),
            1710 => Ok(Self::SenseQInc),
            1711 => Ok(Self::ShoofTechnologies),
            1712 => Ok(Self::BRKBrandsInc),
            1713 => Ok(Self::SimpliSafeInc),
            1714 => Ok(Self::TussockInnovation2013Limited),
            1715 => Ok(Self::TheHablabApS),
            1716 => Ok(Self::SencilionOy),
            1717 => Ok(Self::WabilogicLtd),
            1718 => Ok(Self::SociometricSolutionsInc),
            1719 => Ok(Self::ICOGNIZEGmbH),
            1720 => Ok(Self::ShadeCraftInc),
            1721 => Ok(Self::BeflexInc),
            1722 => Ok(Self::BeaconzoneLtd),
            1723 => Ok(Self::LeaftronixAnalogicSolutionsPrivateLimited),
            1724 => Ok(Self::TWSSrl),
            1725 => Ok(Self::ABBOy),
            1726 => Ok(Self::HitSeedOy),
            1727 => Ok(Self::DelcomProductsInc),
            1728 => Ok(Self::CAMESPA),
            1729 => Ok(Self::AlarmComHoldingsInc),
            1730 => Ok(Self::MeasurlogicInc),
            1731 => Ok(Self::KingIElectronicsCoLtd),
            1732 => Ok(Self::DreamLabsGmbH),
            1733 => Ok(Self::UrbanCompassInc),
            1734 => Ok(Self::SimmTronicLimited),
            1735 => Ok(Self::SomatixInc),
            1736 => Ok(Self::StorzBickelGmbHCoKG),
            1737 => Ok(Self::MYLAPSBV),
            1738 => Ok(Self::ShenzhenZhongguangInfotechTechnologyDevelopmentCoLtd),
            1739 => Ok(Self::DyewareLLC),
            1740 => Ok(Self::DongguanSmartActionTechnologyCoLtd),
            1741 => Ok(Self::DIGCorporation),
            1742 => Ok(Self::FIORGENTZ),
            1743 => Ok(Self::BelpartsNV),
            1744 => Ok(Self::EtekcityCorporation),
            1745 => Ok(Self::MeyerSoundLaboratoriesIncorporated),
            1746 => Ok(Self::CeoTronicsAG),
            1747 => Ok(Self::TriTeqLockAndSecurityLLC),
            1748 => Ok(Self::DYNAKODETECHNOLOGYPRIVATELIMITED),
            1749 => Ok(Self::SensirionAG),
            1750 => Ok(Self::JCTHealthcarePtyLtd),
            1751 => Ok(Self::FUBAAutomotiveElectronicsGmbH),
            1752 => Ok(Self::AWCompany),
            1753 => Ok(Self::ShanghaiMountainViewSiliconCoLtd),
            1754 => Ok(Self::ZliideTechnologiesApS),
            1755 => Ok(Self::AutomaticLabsInc),
            1756 => Ok(Self::IndustrialNetworkControlsLLC),
            1757 => Ok(Self::IntellithingsLtd),
            1758 => Ok(Self::NavcastInc),
            1759 => Ok(Self::HubbellLightingInc),
            1760 => Ok(Self::Avaya),
            1761 => Ok(Self::MilestoneAVTechnologiesLLC),
            1762 => Ok(Self::AlangoTechnologiesLtd),
            1763 => Ok(Self::SpinlockLtd),
            1764 => Ok(Self::Aluna),
            1765 => Ok(Self::OPTEXCOLTD),
            1766 => Ok(Self::NIHONDENGYOKOUSAKU),
            1767 => Ok(Self::VELUXAS),
            1768 => Ok(Self::AlmendoTechnologiesGmbH),
            1769 => Ok(Self::ZmartfunElectronicsInc),
            1770 => Ok(Self::SafeLineSwedenAB),
            1771 => Ok(Self::HoustonRadarLLC),
            1772 => Ok(Self::Sigur),
            1773 => Ok(Self::JNeadesLtd),
            1774 => Ok(Self::AvantisSystemsLimited),
            1775 => Ok(Self::ALCARECoLtd),
            1776 => Ok(Self::ChargyTechnologiesSL),
            1777 => Ok(Self::ShibutaniCoLtd),
            1778 => Ok(Self::TrapperDataAB),
            1779 => Ok(Self::AlfredInternationalInc),
            1780 => Ok(Self::NearFieldSolutionsLtd),
            1781 => Ok(Self::VigilTechnologiesInc),
            1782 => Ok(Self::VituloPlusBV),
            1783 => Ok(Self::WILKASchliesstechnikGmbH),
            1784 => Ok(Self::BodyPlusTechnologyCoLtd),
            1785 => Ok(Self::HappybrushGmbH),
            1786 => Ok(Self::EnequiAB),
            1787 => Ok(Self::SartoriusAG),
            1788 => Ok(Self::TomCommunicationIndustrialCoLtd),
            1789 => Ok(Self::ESSEmbeddedSystemSolutionsInc),
            1790 => Ok(Self::MahrGmbH),
            1791 => Ok(Self::RedpineSignalsInc),
            1792 => Ok(Self::TraqFreqLLC),
            1793 => Ok(Self::PAFERSTECH),
            1794 => Ok(Self::AkcijuSabiedribaSAFTEHNIKA),
            1795 => Ok(Self::BeijingJingdongCenturyTradingCoLtd),
            1796 => Ok(Self::JBXDesignsInc),
            1797 => Ok(Self::ABElectrolux),
            1798 => Ok(Self::WernherVonBraunCenterForASdvancedResearch),
            1799 => Ok(Self::EssityHygieneAndHealthAktiebolag),
            1800 => Ok(Self::BeInteractiveCoLtd),
            1801 => Ok(Self::CarewearCorp),
            1802 => Ok(Self::HufHLsbeckFRstGmbHCoKG),
            1803 => Ok(Self::ElementProductsInc),
            1804 => Ok(Self::BeijingWinnerMicroelectronicsCoLtd),
            1805 => Ok(Self::SmartSnuggPtyLtd),
            1806 => Ok(Self::FiveCoSarl),
            1807 => Ok(Self::CaliforniaThingsInc),
            1808 => Ok(Self::AudiodoAB),
            1809 => Ok(Self::ABAXAS),
            1810 => Ok(Self::BullGroupCompanyLimited),
            1811 => Ok(Self::RespiriLimited),
            1812 => Ok(Self::MindPeaceSafetyLLC),
            1813 => Ok(Self::VgyanSolutions),
            1814 => Ok(Self::Altonics),
            1815 => Ok(Self::IQsquareBV),
            1816 => Ok(Self::IDIBAIXEnginneering),
            1817 => Ok(Self::ECSG),
            1818 => Ok(Self::REVSMARTWEARABLEHKCOLTD),
            1819 => Ok(Self::Precor),
            1820 => Ok(Self::F5SportsInc),
            1821 => Ok(Self::ExoTICSystems),
            1822 => Ok(Self::DONGGUANHELEELECTRONICSCOLTD),
            1823 => Ok(Self::DongguanLieshengElectronicCoLtd),
            1824 => Ok(Self::OculeveInc),
            1825 => Ok(Self::CloverNetworkInc),
            1826 => Ok(Self::XiamenEholderElectronicsCoLtd),
            1827 => Ok(Self::FordMotorCompany),
            1828 => Ok(Self::GuangzhouSuperSoundInformationTechnologyCoLtd),
            1829 => Ok(Self::TedeeSpZOO),
            1830 => Ok(Self::PHCCorporation),
            1831 => Ok(Self::STALKITAS),
            1832 => Ok(Self::EliLillyAndCompany),
            1833 => Ok(Self::SwaraLinkTechnologies),
            1834 => Ok(Self::JMREmbeddedSystemsGmbH),
            1835 => Ok(Self::BitkeyInc),
            1836 => Ok(Self::GWAHygieneGmbH),
            1837 => Ok(Self::SaferaOy),
            1838 => Ok(Self::OpenPlatformSystemsLLC),
            1839 => Ok(Self::OnePlusElectronicsShenzhenCoLtd),
            1840 => Ok(Self::WildlifeAcousticsInc),
            1841 => Ok(Self::ABLICInc),
            1842 => Ok(Self::DairyTechInc),
            1843 => Ok(Self::IguanavationInc),
            1844 => Ok(Self::DiUSComputingPtyLtd),
            1845 => Ok(Self::UpRightTechnologiesLTD),
            1846 => Ok(Self::FrancisFundLLC),
            1847 => Ok(Self::LLCNavitek),
            1848 => Ok(Self::GlassSecurityPteLtd),
            1849 => Ok(Self::JiangsuQinhengCoLtd),
            1850 => Ok(Self::ChandlerSystemsInc),
            1851 => Ok(Self::FantiniCosmiSPA),
            1852 => Ok(Self::AcubitApS),
            1853 => Ok(Self::BeijingHaoHengTianTechCoLtd),
            1854 => Ok(Self::BluepackSRL),
            1855 => Ok(Self::BeijingUnisocTechnologiesCoLtd),
            1856 => Ok(Self::HITIQLIMITED),
            1857 => Ok(Self::MACSRL),
            1858 => Ok(Self::DMLLLC),
            1859 => Ok(Self::Sanofi),
            1860 => Ok(Self::SOCOMEC),
            1861 => Ok(Self::WIZNOVAInc),
            1862 => Ok(Self::SeitecElektronikGmbH),
            1863 => Ok(Self::ORTechnologiesPtyLtd),
            1864 => Ok(Self::GuangZhouKuGouComputerTechnologyCoLtd),
            1865 => Ok(Self::DIAODIAOBeijingTechnologyCoLtd),
            1866 => Ok(Self::IllusoryStudiosLLC),
            1867 => Ok(Self::SarvavidSoftwareSolutionsLLP),
            1868 => Ok(Self::IopoolSA),
            1869 => Ok(Self::AmtechSystemsLLC),
            1870 => Ok(Self::EAGLEDETECTIONSA),
            1871 => Ok(Self::MEDIATECHSRL),
            1872 => Ok(Self::HamiltonProfessionalServicesOfCanadaIncorporated),
            1873 => Ok(Self::ChangshaJEMOICDesignCoLtd),
            1874 => Ok(Self::ElatecGmbH),
            1875 => Ok(Self::JLGIndustriesInc),
            1876 => Ok(Self::MichaelParkin),
            1877 => Ok(Self::BrotherIndustriesLtd),
            1878 => Ok(Self::LumensForLessInc),
            1879 => Ok(Self::ELAInnovation),
            1880 => Ok(Self::UmanSenseAB),
            1881 => Ok(Self::ShanghaiInGeekCyberSecurityCoLtd),
            1882 => Ok(Self::HARMANCOLTD),
            1883 => Ok(Self::SmartSensorDevicesAB),
            1884 => Ok(Self::AntitronicsInc),
            1885 => Ok(Self::RHOMBUSSYSTEMSINC),
            1886 => Ok(Self::KaterraInc),
            1887 => Ok(Self::RemoteSolutionCoLTD),
            1888 => Ok(Self::VimarSpA),
            1889 => Ok(Self::MantisTechLLC),
            1890 => Ok(Self::TerOptaLtd),
            1891 => Ok(Self::PIKOLINSL),
            1892 => Ok(Self::WWZNInformationTechnologyCompanyLimited),
            1893 => Ok(Self::VoxxInternational),
            1894 => Ok(Self::ARTANDPROGRAMINC),
            1895 => Ok(Self::NITTODENKOASIATECHNICALCENTREPTELTD),
            1896 => Ok(Self::PelotonInteractiveInc),
            1897 => Ok(Self::ForceImpactTechnologies),
            1898 => Ok(Self::DmacMobileDevelopmentsLLC),
            1899 => Ok(Self::EngineeredMedicalTechnologies),
            1900 => Ok(Self::NoodleTechnologyInc),
            1901 => Ok(Self::GraesslinGmbH),
            1902 => Ok(Self::WuQiTechnologiesInc),
            1903 => Ok(Self::SuccessfulEndeavoursPtyLtd),
            1904 => Ok(Self::InnoConMedicalApS),
            1905 => Ok(Self::CorvexConnectedSafety),
            1906 => Ok(Self::ThirdwayvInc),
            1907 => Ok(Self::EchoflexSolutionsInc),
            1908 => Ok(Self::CMAXAsiaLimited),
            1909 => Ok(Self::N4eBusinessGmbH),
            1910 => Ok(Self::CyberTransportControlGmbH),
            1911 => Ok(Self::Cue),
            1912 => Ok(Self::KOAMTACINC),
            1913 => Ok(Self::LoopshoreOy),
            1914 => Ok(Self::NiruhaSystemsPrivateLimited),
            1915 => Ok(Self::AmaterZInc),
            1916 => Ok(Self::RadiusCoLtd),
            1917 => Ok(Self::SensoritySRO),
            1918 => Ok(Self::SparkageInc),
            1919 => Ok(Self::GlenviewSoftwareCorporation),
            1920 => Ok(Self::FinchTechnologiesLtd),
            1921 => Ok(Self::QingpingTechnologyBeijingCoLtd),
            1922 => Ok(Self::DeviceDriveAS),
            1923 => Ok(Self::ESEMBERLIMITEDLIABILITYCOMPANY),
            1924 => Ok(Self::AudifonGmbHCoKG),
            1925 => Ok(Self::O2MicroInc),
            1926 => Ok(Self::HLPControlsPtyLimited),
            1927 => Ok(Self::PangaeaSolution),
            1928 => Ok(Self::BubblyNetLLC),
            1929 => Ok(Self::NotAssigned),
            1930 => Ok(Self::TheWildflowerFoundation),
            1931 => Ok(Self::OptikamTechInc),
            1932 => Ok(Self::MINIBREWHOLDINGBV),
            1933 => Ok(Self::CybexGmbH),
            1934 => Ok(Self::FUJIMICNIIGATAINC),
            1935 => Ok(Self::HannaInstrumentsInc),
            1936 => Ok(Self::KOMPANAS),
            1937 => Ok(Self::ScoscheIndustriesInc),
            1938 => Ok(Self::ProvoCraft),
            1939 => Ok(Self::AEVSpolSRO),
            1940 => Ok(Self::TheCocaColaCompany),
            1941 => Ok(Self::GASTECCORPORATION),
            1942 => Ok(Self::StarLeafLtd),
            1943 => Ok(Self::WaterIDGmbH),
            1944 => Ok(Self::HoloKitInc),
            1945 => Ok(Self::PlantChoirInc),
            1946 => Ok(Self::GuangDongOppoMobileTelecommunicationsCorpLtd),
            1947 => Ok(Self::CSTELECTRONICSPROPRIETARYLIMITED),
            1948 => Ok(Self::SkyUKLimited),
            1949 => Ok(Self::DigibalePtyLtd),
            1950 => Ok(Self::SmartloxxGmbH),
            1951 => Ok(Self::PuneScientificLLP),
            1952 => Ok(Self::RegentBeleuchtungskorperAG),
            1953 => Ok(Self::ApolloNeuroscienceInc),
            1954 => Ok(Self::RokuInc),
            1955 => Ok(Self::ComcastCable),
            1956 => Ok(Self::XiamenMageInformationTechnologyCoLtd),
            1957 => Ok(Self::RABLightingInc),
            1958 => Ok(Self::MusenConnectInc),
            1959 => Ok(Self::ZumeInc),
            1960 => Ok(Self::ConbeeGmbH),
            1961 => Ok(Self::BruelKjaerSoundVibration),
            1962 => Ok(Self::TheKrogerCo),
            1963 => Ok(Self::GraniteRiverSolutionsInc),
            1964 => Ok(Self::LoupeDeckOy),
            1965 => Ok(Self::NewH3CTechnologiesCoLtd),
            1966 => Ok(Self::AureaSolucoesTecnologicasLtda),
            1967 => Ok(Self::HongKongBouffaloLabLimited),
            1968 => Ok(Self::GVConceptsInc),
            1969 => Ok(Self::ThomasDynamicsLLC),
            1970 => Ok(Self::MoecoIOTInc),
            1971 => Ok(Self::N2NTELEKOMUNIKACEAS),
            1972 => Ok(Self::HormannKGAntriebstechnik),
            1973 => Ok(Self::CRONOCHIPSL),
            1974 => Ok(Self::SoundbrennerLimited),
            1975 => Ok(Self::ETABLISSEMENTSGEORGESRENAULT),
            1976 => Ok(Self::ISwip),
            1977 => Ok(Self::EponaBiotecLimited),
            1978 => Ok(Self::BatteryBizInc),
            1979 => Ok(Self::EPICSRL),
            1980 => Ok(Self::KDCIRCUITSLLC),
            1981 => Ok(Self::GenedriveDiagnosticsLtd),
            1982 => Ok(Self::AxentiaTechnologiesAB),
            1983 => Ok(Self::REGULALtd),
            1984 => Ok(Self::BiralAG),
            1985 => Ok(Self::AWChestertonCompany),
            1986 => Ok(Self::RadinnAB),
            1987 => Ok(Self::CIMTechniquesInc),
            1988 => Ok(Self::JohnsonHealthTechNA),
            1989 => Ok(Self::JuneLifeInc),
            1990 => Ok(Self::BlueneticsGmbH),
            1991 => Ok(Self::IaconicDesignInc),
            1992 => Ok(Self::WRLDSCreationsAB),
            1993 => Ok(Self::SkullcandyInc),
            1994 => Ok(Self::ModulSystemHHAB),
            1995 => Ok(Self::WestPharmaceuticalServicesInc),
            1996 => Ok(Self::BarnacleSystemsInc),
            1997 => Ok(Self::SmartWaveTechnologiesCanadaInc),
            1998 => Ok(Self::ShanghaiTopChipMicroelectronicsTechCoLTD),
            1999 => Ok(Self::NeoSensoryInc),
            2000 => Ok(Self::HangzhouTuyaInformationTechnologyCoLtd),
            2001 => Ok(Self::ShanghaiPanchipMicroelectronicsCoLtd),
            2002 => Ok(Self::ReactAccessibilityLimited),
            2003 => Ok(Self::LIVNEXCoLtd),
            2004 => Ok(Self::KanoComputingLimited),
            2005 => Ok(Self::HootsClassicGmbH),
            2006 => Ok(Self::EcobeeInc),
            2007 => Ok(Self::NanjingQinhengMicroelectronicsCoLtd),
            2008 => Ok(Self::SOLUTIONSAMBRAINC),
            2009 => Ok(Self::MicroDesignInc),
            2010 => Ok(Self::STARLITECoLtd),
            2011 => Ok(Self::RemedeeLabs),
            2012 => Ok(Self::ThingOSGmbH),
            2013 => Ok(Self::LinearCircuits),
            2014 => Ok(Self::UnlimitedEngineeringSL),
            2015 => Ok(Self::SnapOnIncorporated),
            2016 => Ok(Self::EdifierInternationalLimited),
            2017 => Ok(Self::LucieLabs),
            2018 => Ok(Self::AlfredKaercherSECoKG),
            2019 => Ok(Self::AudiowiseTechnologyInc),
            2020 => Ok(Self::GeeksmeSL),
            2021 => Ok(Self::MinutInc),
            2022 => Ok(Self::AutogrowSystemsLimited),
            2023 => Ok(Self::KomfortIQInc),
            2024 => Ok(Self::PacketcraftInc),
            2025 => Ok(Self::HFeleGmbHCoKG),
            2026 => Ok(Self::ShapeLogInc),
            2027 => Ok(Self::NOVABASESRL),
            2028 => Ok(Self::FrecceLLC),
            2029 => Ok(Self::JouleIQINC),
            2030 => Ok(Self::KidzTekLLC),
            2031 => Ok(Self::AktiebolagetSandvikCoromant),
            2032 => Ok(Self::EMoolaComPtyLtd),
            2033 => Ok(Self::ZimiInnovationsPtyLtd),
            2034 => Ok(Self::SERENEGROUPINC),
            2035 => Ok(Self::DIGISINEENERGYTECHCOLTD),
            2036 => Ok(Self::MEDIRLABOrvosbiologiaiFejlesztoKorlatoltFelelosseguTarsasag),
            2037 => Ok(Self::BytonNorthAmericaCorporation),
            2038 => Ok(Self::ShenzhenTonliScienceAndTechnologyDevelopmentCoLtd),
            2039 => Ok(Self::CesarSystemsLtd),
            2040 => Ok(Self::QuipNYCInc),
            2041 => Ok(Self::DirectCommunicationSolutionsInc),
            2042 => Ok(Self::KlipschGroupInc),
            2043 => Ok(Self::AccessCoLtd),
            2044 => Ok(Self::RenaultSA),
            2045 => Ok(Self::JSKCOLTD),
            2046 => Ok(Self::BIROTA),
            2047 => Ok(Self::MaxonMotorLtd),
            2048 => Ok(Self::Optek),
            2049 => Ok(Self::CRONUSELECTRONICSLTD),
            2050 => Ok(Self::NantSoundInc),
            2051 => Ok(Self::DomintellSA),
            2052 => Ok(Self::AndonHealthCoLtd),
            2053 => Ok(Self::UrbanmindedLtd),
            2054 => Ok(Self::TYRISwedenAB),
            2055 => Ok(Self::ECDElectronicComponentsGmbHDresden),
            2056 => Ok(Self::SISTEMASKERNSOCIEDADANMINA),
            2057 => Ok(Self::TrulliAudio),
            2058 => Ok(Self::Altaneos),
            2059 => Ok(Self::NanoleafCanadaLimited),
            2060 => Ok(Self::IngyBV),
            2061 => Ok(Self::AzbilCo),
            2062 => Ok(Self::TATTCOMLLC),
            2063 => Ok(Self::ParadoxEngineeringSA),
            2064 => Ok(Self::LECOCorporation),
            2065 => Ok(Self::BeckerAntriebeGmbH),
            2066 => Ok(Self::MstreamTechnologiesInc),
            2067 => Ok(Self::FlextronicsInternationalUSAInc),
            2068 => Ok(Self::OssurHf),
            2069 => Ok(Self::SKCInc),
            2070 => Ok(Self::SPICASYSTEMSLLC),
            2071 => Ok(Self::WangsAllianceCorporation),
            2072 => Ok(Self::TatwahSA),
            2073 => Ok(Self::HunterDouglasInc),
            2074 => Ok(Self::ShenzhenConex),
            2075 => Ok(Self::DIM3),
            2076 => Ok(Self::BobrickWashroomEquipmentInc),
            2077 => Ok(Self::PotrykusHoldingsAndDevelopmentLLC),
            2078 => Ok(Self::INFORMTechnologyGmbH),
            2079 => Ok(Self::ESenseLabLTD),
            2080 => Ok(Self::BrilliantHomeTechnologyInc),
            2081 => Ok(Self::INOVAGeophysicalInc),
            2082 => Ok(Self::AdafruitIndustries),
            2083 => Ok(Self::NexiteLtd),
            2084 => Ok(Self::N8PowerLimited),
            2085 => Ok(Self::CMEPTELTD),
            2086 => Ok(Self::HyundaiMotorCompany),
            2087 => Ok(Self::Kickmaker),
            2088 => Ok(Self::ShanghaiSuishengInformationTechnologyCoLtd),
            2089 => Ok(Self::HEXAGON),
            2090 => Ok(Self::MitutoyoCorporation),
            2091 => Ok(Self::ShenzhenFitcareElectronicsCoLtd),
            2092 => Ok(Self::INGICSTECHNOLOGYCOLTD),
            2093 => Ok(Self::INCUSPERFORMANCELTD),
            2094 => Ok(Self::ABBSPA),
            2095 => Ok(Self::BlippitAB),
            2096 => Ok(Self::CoreHealthAndFitnessLLC),
            2097 => Ok(Self::FoxbleLLC),
            2098 => Ok(Self::IntermotiveInc),
            2099 => Ok(Self::ConneqtechBV),
            2100 => Ok(Self::RIKENKEIKICOLTD),
            2101 => Ok(Self::CanopyGrowthCorporation),
            2102 => Ok(Self::BitwardsOy),
            2103 => Ok(Self::VivoMobileCommunicationCoLtd),
            2104 => Ok(Self::EtymoticResearchInc),
            2105 => Ok(Self::APuissance3),
            2106 => Ok(Self::BPWBergischeAchsenKommanditgesellschaft),
            2107 => Ok(Self::PiaggioFastForward),
            2108 => Ok(Self::BeerTechLTD),
            2109 => Ok(Self::TokenizeInc),
            2110 => Ok(Self::ZorachkaLTD),
            2111 => Ok(Self::DLinkCorp),
            2112 => Ok(Self::DownRangeSystemsLLC),
            2113 => Ok(Self::GeneralLuminaireShanghaiCoLtd),
            2114 => Ok(Self::TangshanHongJiaElectronicTechnologyCoLTD),
            2115 => Ok(Self::FRAGRANCEDELIVERYTECHNOLOGIESLTD),
            2116 => Ok(Self::PepperlFuchsGmbH),
            2117 => Ok(Self::DometicCorporation),
            2118 => Ok(Self::USoundGmbH),
            2119 => Ok(Self::DNANUDGELIMITED),
            2120 => Ok(Self::JUJUJOINTSCANADACORP),
            2121 => Ok(Self::DoppleTechnologiesBV),
            2122 => Ok(Self::ARCOM),
            2123 => Ok(Self::BiotechwareSRL),
            2124 => Ok(Self::ORSOInc),
            2125 => Ok(Self::SafePort),
            2126 => Ok(Self::CarolColeCompany),
            2127 => Ok(Self::EmbeddedFitnessBV),
            2128 => Ok(Self::YealinkXiamenNetworkTechnologyCoLTD),
            2129 => Ok(Self::SubecaInc),
            2130 => Ok(Self::CognososInc),
            2131 => Ok(Self::PektronGroupLimited),
            2132 => Ok(Self::TapSoundSystem),
            2133 => Ok(Self::HeliosHockeyInc),
            2134 => Ok(Self::CanopyGrowthCorporation1),
            2135 => Ok(Self::ParsylInc),
            2136 => Ok(Self::SOUNDBOKS),
            2137 => Ok(Self::BlueUp),
            2138 => Ok(Self::DAKATECH),
            2139 => Ok(Self::RICOHELECTRONICDEVICESCOLTD),
            2140 => Ok(Self::ACOSCOLTD),
            2141 => Ok(Self::GuilinZhishenInformationTechnologyCoLtd),
            2142 => Ok(Self::KrogSystemsLLC),
            2143 => Ok(Self::COMPEGPSTEAMSOCIEDADLIMITADA),
            2144 => Ok(Self::AlflexProductsBV),
            2145 => Ok(Self::SmartSensorLabsLtd),
            2146 => Ok(Self::SmartDriveInc),
            2147 => Ok(Self::YoTronicsTechnologyCoLtd),
            2148 => Ok(Self::Rafaelmicro),
            2149 => Ok(Self::EmergencyLightingProductsLimited),
            2150 => Ok(Self::LAONZCoLtd),
            2151 => Ok(Self::WesternDigitalTechologiesInc),
            2152 => Ok(Self::WIOsenseGmbHCoKG),
            2153 => Ok(Self::EVVASicherheitstechnologieGmbH),
            2154 => Ok(Self::OdicIncorporated),
            2155 => Ok(Self::PacificTrackLLC),
            2156 => Ok(Self::RevvoTechnologiesInc),
            2157 => Ok(Self::BiometrikaDOO),
            2158 => Ok(Self::VorwerkElektrowerkeGmbHCoKG),
            2159 => Ok(Self::TrackunitAS),
            2160 => Ok(Self::WyzeLabsInc),
            2161 => Ok(Self::DensionElektronikaiKftFormerlyDensionAudioSystemsLtd),
            2162 => Ok(Self::N11HealthTechnologiesLimited),
            2163 => Ok(Self::InnophaseIncorporated),
            2164 => Ok(Self::TreegreenLimited),
            2165 => Ok(Self::BernerInternationalLLC),
            2166 => Ok(Self::SmartResQApS),
            2167 => Ok(Self::TomeInc),
            2168 => Ok(Self::TheChamberlainGroupInc),
            2169 => Ok(Self::MIZUNOCorporation),
            2170 => Ok(Self::ZRFLLC),
            2171 => Ok(Self::BYSTAMP),
            2172 => Ok(Self::CrosscanGmbH),
            2173 => Ok(Self::KonftelAB),
            2174 => Ok(Self::N1barNetLimited),
            2175 => Ok(Self::PhillipsConnectTechnologiesLLC),
            2176 => Ok(Self::ImagiLabsAB),
            2177 => Ok(Self::Optalert),
            2178 => Ok(Self::PSYONICInc),
            2179 => Ok(Self::WintersteigerAG),
            2180 => Ok(Self::ControlidIndustriaComercioDeHardwareEServicosDeTecnologiaLtda),
            2181 => Ok(Self::LEVOLORINC),
            2182 => Ok(Self::XsensTechnologiesBV),
            2183 => Ok(Self::HydroGearLimitedPartnership),
            2184 => Ok(Self::EnPointeFencingPtyLtd),
            2185 => Ok(Self::XANTHIO),
            2186 => Ok(Self::SclakSRL),
            2187 => Ok(Self::TricorderArraayTechnologiesLLC),
            2188 => Ok(Self::GBSolutionCoLtd),
            2189 => Ok(Self::SolitonSystemsKK),
            2190 => Ok(Self::GIGATMSINC),
            2191 => Ok(Self::TaitInternationalLimited),
            2192 => Ok(Self::NICHIEIINTECCOLTD),
            2193 => Ok(Self::SmartWirelessGmbHCoKG),
            2194 => Ok(Self::IngenieurbueroBirnfeldUGHaftungsbeschraenkt),
            2195 => Ok(Self::MaytronicsLtd),
            2196 => Ok(Self::EPIFIT),
            2197 => Ok(Self::GimerMedical),
            2198 => Ok(Self::NokianRenkaatOyj),
            2199 => Ok(Self::CurrentLightingSolutionsLLC),
            2200 => Ok(Self::SensiboInc),
            2201 => Ok(Self::SFSUnimarketAG),
            2202 => Ok(Self::PrivateLimitedCompanyTeltonika),
            2203 => Ok(Self::SauconTechnologies),
            2204 => Ok(Self::EmbeddedDevicesCoCompany),
            2205 => Ok(Self::JJADEEnterpriseLLC),
            2206 => Ok(Self::ISENSInc),
            2207 => Ok(Self::WitschiElectronicLtd),
            2208 => Ok(Self::AclaraTechnologiesLLC),
            2209 => Ok(Self::EXEOTECHCORPORATION),
            2210 => Ok(Self::EpicSystemsCoLtd),
            2211 => Ok(Self::HoffmannSE),
            2212 => Ok(Self::RealmeChongqingMobileTelecommunicationsCorpLtd),
            2213 => Ok(Self::UMEHEALLtd),
            2214 => Ok(Self::IntelligenceworksInc),
            2215 => Ok(Self::TGR1618Limited),
            2216 => Ok(Self::ShanghaiKfcubeInc),
            2217 => Ok(Self::FraunhoferIIS),
            2218 => Ok(Self::SZDJITECHNOLOGYCOLTD),
            2219 => Ok(Self::CoburnTechnologyLLC),
            2220 => Ok(Self::TopreCorporation),
            2221 => Ok(Self::KayamaticsLimited),
            2222 => Ok(Self::MoticonReGoAG),
            2223 => Ok(Self::PolideaSpZOO),
            2224 => Ok(Self::TrivediAdvancedTechnologiesLLC),
            2225 => Ok(Self::COREVisionBV),
            2226 => Ok(Self::PFSCHWEISSTECHNOLOGIEGMBH),
            2227 => Ok(Self::IONIQSkincareGmbHCoKG),
            2228 => Ok(Self::SengledCoLtd),
            2229 => Ok(Self::TransferFi),
            2230 => Ok(Self::BoehringerIngelheimVetmedicaGmbH),
            2231 => Ok(Self::ABBInc),
            2232 => Ok(Self::CheckTechnologySolutionsLLC),
            2233 => Ok(Self::UShinLtd),
            2234 => Ok(Self::HYPERICEINC),
            2235 => Ok(Self::TokaiRikaCoLtd),
            2236 => Ok(Self::PrevaylLimited),
            2237 => Ok(Self::Bf1systemsLimited),
            2238 => Ok(Self::UbisysTechnologiesGmbH),
            2239 => Ok(Self::SIRCCoLtd),
            2240 => Ok(Self::AccentAdvancedSystemsSLU),
            2241 => Ok(Self::RaydenEarthLTD),
            2242 => Ok(Self::LindinventAB),
            2243 => Ok(Self::CHIPOLODOO),
            2244 => Ok(Self::CellAssistLLC),
            2245 => Ok(Self::JWagnerGmbH),
            2246 => Ok(Self::IntegraOpticsInc),
            2247 => Ok(Self::MonadnockSystemsLtd),
            2248 => Ok(Self::LiteboxerTechnologiesInc),
            2249 => Ok(Self::NoventaAG),
            2250 => Ok(Self::NubiaTechnologyCoLtd),
            2251 => Ok(Self::JTINNOVATIONSLIMITED),
            2252 => Ok(Self::TGMTECHNOLOGYCOLTD),
            2253 => Ok(Self::Ifly),
            2254 => Ok(Self::ZIMICORPORATION),
            2255 => Ok(Self::BetternotstealmybikeUGWithLimitedLiability),
            2256 => Ok(Self::ESTOMInfotechKft),
            2257 => Ok(Self::SensoviumInc),
            2258 => Ok(Self::VirscientLimited),
            2259 => Ok(Self::NovelBitsLLC),
            2260 => Ok(Self::ADATATechnologyCoLTD),
            2261 => Ok(Self::KEYes),
            2262 => Ok(Self::NomeOy),
            2263 => Ok(Self::InovonicsCorp),
            2264 => Ok(Self::WARES),
            2265 => Ok(Self::PointrLabsLimited),
            2266 => Ok(Self::MiridiaTechnologyIncorporated),
            2267 => Ok(Self::TertiumTechnology),
            2268 => Ok(Self::SHENZHENAUKEYEBUSINESSCOLTD),
            2269 => Ok(Self::CodeQ),
            2270 => Ok(Self::TycoElectronicsCorporationATEConnectivityLtdCompany),
            2271 => Ok(Self::IRISOHYAMACOLTD),
            2272 => Ok(Self::PhiliaTechnology),
            2273 => Ok(Self::KOZOKEIKAKUENGINEERINGInc),
            2274 => Ok(Self::ShenzhenSimoTechnologyCoLTD),
            2275 => Ok(Self::RepublicWirelessInc),
            2276 => Ok(Self::RashidovLtd),
            2277 => Ok(Self::CrowdConnectedLtd),
            2278 => Ok(Self::EnesoTecnologiaDeAdaptacionSL),
            2279 => Ok(Self::BarrotTechnologyLimited),
            2280 => Ok(Self::Naonext),
            2281 => Ok(Self::TaiwanIntelligentHomeCorp),
            2282 => Ok(Self::COWBELLENGINEERINGCOLTD),
            2283 => Ok(Self::BeijingBigMomentTechnologyCoLtd),
            2284 => Ok(Self::DensoCorporation),
            2285 => Ok(Self::IMIHydronicEngineeringInternationalSA),
            2286 => Ok(Self::ASKEY),
            2287 => Ok(Self::CumulusDigitalSystemsInc),
            2288 => Ok(Self::JoovvInc),
            2289 => Ok(Self::TheLSStarrettCompany),
            2290 => Ok(Self::Microoled),
            2291 => Ok(Self::PSPPauliServicesProductsGmbH),
            2292 => Ok(Self::KodimoTechnologiesCompanyLimited),
            2293 => Ok(Self::TymtixTechnologiesPrivateLimited),
            2294 => Ok(Self::DermalPhotonicsCorporation),
            2295 => Ok(Self::MTDProductsIncAffiliates),
            2296 => Ok(Self::InstagridGmbH),
            2297 => Ok(Self::SpacelabsMedicalInc),
            2298 => Ok(Self::TrooCorporation),
            2299 => Ok(Self::DarkglassElectronicsOy),
            2300 => Ok(Self::HillRom),
            2301 => Ok(Self::BioIntelliSenseInc),
            2302 => Ok(Self::KetronixsSdnBhd),
            2303 => Ok(Self::PlastimoldProductsInc),
            2304 => Ok(Self::BeijingZizaiTechnologyCoLTD),
            2305 => Ok(Self::Lucimed),
            2306 => Ok(Self::TSCAutoIDTechnologyCoLtd),
            2307 => Ok(Self::DATAMARSInc),
            2308 => Ok(Self::SUNCORPORATION),
            2309 => Ok(Self::YandexServicesAG),
            2310 => Ok(Self::ScopeLogisticalSolutions),
            2311 => Ok(Self::UserHelloLLC),
            2312 => Ok(Self::PinpointInnovationsLimited),
            2313 => Ok(Self::N70maiCoLtd),
            2314 => Ok(Self::ZhuhaiHoksiTechnologyCOLTD),
            2315 => Ok(Self::EMBRLabsINC),
            2316 => Ok(Self::RadiawaveTechnologiesCoLtd),
            2317 => Ok(Self::IOTInventGmbH),
            2318 => Ok(Self::OPTIMUSIOTTECHLLP),
            2319 => Ok(Self::VCInc),
            2320 => Ok(Self::ASRMicroelectronicsShanghaiCoLtd),
            2321 => Ok(Self::DouglasLightingControlsInc),
            2322 => Ok(Self::NerbioMedicalSoftwarePlatformsInc),
            2323 => Ok(Self::BraveheartWirelessInc),
            2324 => Ok(Self::INEOSENSE),
            2325 => Ok(Self::HondaMotorCoLtd),
            2326 => Ok(Self::AmbientSensorsLLC),
            2327 => Ok(Self::ASRMicroelectronicsShenZhenCoLtd),
            2328 => Ok(Self::TechnosphereLabsPvtLtd),
            2329 => Ok(Self::NOSMDLIMITED),
            2330 => Ok(Self::AlbertronicBV),
            2331 => Ok(Self::LuminosticsInc),
            2332 => Ok(Self::OblamatikAG),
            2333 => Ok(Self::InnokindInc),
            2334 => Ok(Self::MelbotStudiosSociedadLimitada),
            2335 => Ok(Self::MyzeeTechnology),
            2336 => Ok(Self::OmnisenseLimited),
            2337 => Ok(Self::KAHAPTELTD),
            2338 => Ok(Self::ShanghaiMXCHIPInformationTechnologyCoLtd),
            2339 => Ok(Self::JSBTECHPTELTD),
            2340 => Ok(Self::FundacionTecnaliaResearchAndInnovation),
            2341 => Ok(Self::YukaiEngineeringInc),
            2342 => Ok(Self::GooligumTechnologiesPtyLtd),
            2343 => Ok(Self::ROOQGmbH),
            2344 => Ok(Self::AiRISTA),
            2345 => Ok(Self::QingdaoHaierTechnologyCoLtd),
            2346 => Ok(Self::SapplVerwaltungsUndBetriebsGmbH),
            2347 => Ok(Self::TekHome),
            2348 => Ok(Self::PCIPrivateLimited),
            2349 => Ok(Self::LeggettPlattIncorporated),
            2350 => Ok(Self::PSGmbH),
            2351 => Ok(Self::COBOSpA),
            2352 => Ok(Self::JamesWalkerRotaBoltLimited),
            2353 => Ok(Self::BREATHINGSCoLtd),
            2354 => Ok(Self::BarVisionLLC),
            2355 => Ok(Self::SRAM),
            2356 => Ok(Self::KiteSpringInc),
            2357 => Ok(Self::ReconnectInc),
            2358 => Ok(Self::ElekonAG),
            2359 => Ok(Self::RealThingksGmbH),
            2360 => Ok(Self::HenwayTechnologiesLTD),
            2361 => Ok(Self::ASTEMCoLtd),
            2362 => Ok(Self::LinkedSemiMicroelectronicsXiamenCoLtd),
            2363 => Ok(Self::ENSESOLLC),
            2364 => Ok(Self::XenomaInc),
            2365 => Ok(Self::AdolfWuerthGmbHCoKG),
            2366 => Ok(Self::CatalyftLabsInc),
            2367 => Ok(Self::JEPICOCorporation),
            2368 => Ok(Self::HeroWorkoutGmbH),
            2369 => Ok(Self::RivianAutomotiveLLC),
            2370 => Ok(Self::TRANSSIONHOLDINGSLIMITED),
            2371 => Ok(Self::InovonicsCorp1),
            2372 => Ok(Self::AgitronDOO),
            2373 => Ok(Self::GlobeJiangsuCoLtd),
            2374 => Ok(Self::AMCInternationalAlfaMetalcraftCorporationAG),
            2375 => Ok(Self::FirstLightTechnologiesLtd),
            2376 => Ok(Self::WearableLinkLimited),
            2377 => Ok(Self::MetronomHealthEurope),
            2378 => Ok(Self::ZwiftInc),
            2379 => Ok(Self::KindevaDrugDeliveryLP),
            2380 => Ok(Self::GimmiSysGmbH),
            2381 => Ok(Self::TkLABSINC),
            2382 => Ok(Self::PassiveBoltInc),
            2383 => Ok(Self::LimitedLiabilityCompanyMikrotikls),
            2384 => Ok(Self::Capetech),
            2385 => Ok(Self::PPRS),
            2386 => Ok(Self::ApptricityCorporation),
            2387 => Ok(Self::LogiLubeLLC),
            2388 => Ok(Self::Julbo),
            2389 => Ok(Self::BrevilleGroup),
            2390 => Ok(Self::Kerlink),
            2391 => Ok(Self::OhsungElectronics),
            2392 => Ok(Self::ZTECorporation),
            2393 => Ok(Self::HerdDoggInc),
            2394 => Ok(Self::SelektBilgisayarLletisimUrunleriLnsaatSanayiVeTicaretLimitedSirketi),
            2395 => Ok(Self::LismoreInstrumentsLimited),
            2396 => Ok(Self::LogiLubeLLC1),
            2397 => Ok(Self::ETC),
            2398 => Ok(Self::BioEchoNetInc),
            2399 => Ok(Self::NUANCEHEARINGLTD),
            2400 => Ok(Self::SenaTechnologiesInc),
            2401 => Ok(Self::LinkuraAB),
            2402 => Ok(Self::GLSolutionsKK),
            2403 => Ok(Self::MoonbirdBV),
            2404 => Ok(Self::CountrymateTechnologyLimited),
            2405 => Ok(Self::AsahiKaseiCorporation),
            2406 => Ok(Self::PointGuardLLC),
            2407 => Ok(Self::NeoMaterialsAndConsultingInc),
            2408 => Ok(Self::ActevMotorsInc),
            2409 => Ok(Self::WoanTechnologyShenzhenCoLtd),
            2410 => Ok(Self::DricosInc),
            2411 => Ok(Self::GuideIDBV),
            2412 => Ok(Self::N93747319QuebecInc),
            2413 => Ok(Self::GunwerksLLC),
            2414 => Ok(Self::BandIndustriesInc),
            2415 => Ok(Self::LundMotionProductsInc),
            2416 => Ok(Self::IBADosimetryGmbH),
            2417 => Ok(Self::GA),
            2418 => Ok(Self::ClosedJointStockCompanyZavodFlometrZavodFlometrCJSC),
            2419 => Ok(Self::PopitOy),
            2420 => Ok(Self::ABEYE),
            2421 => Ok(Self::BlueIOTBeijingTechnologyCoLtd),
            2422 => Ok(Self::FaunaAudioGmbH),
            2423 => Ok(Self::TOYOTAMotorCorporation),
            2424 => Ok(Self::ZifferEinsGmbHCoKG),
            2425 => Ok(Self::BIOTRONIKSECoKG),
            2426 => Ok(Self::CORECORPORATION),
            2427 => Ok(Self::CTEKSwedenAB),
            2428 => Ok(Self::ThorleyIndustriesLLC),
            2429 => Ok(Self::CLBBV),
            2430 => Ok(Self::SonicSensoryInc),
            2431 => Ok(Self::ISEMARSRL),
            2432 => Ok(Self::DEKRATESTINGANDCERTIFICATIONSAU),
            2433 => Ok(Self::BernardKroneHoldingSECoKG),
            2434 => Ok(Self::ELPROBUCHSAG),
            2435 => Ok(Self::FeedbackSportsLLC),
            2436 => Ok(Self::TeraTronGmbH),
            2437 => Ok(Self::LumosHealthInc),
            2438 => Ok(Self::CelloHillLLC),
            2439 => Ok(Self::TSEBRAKESINC),
            2440 => Ok(Self::BHMTechProduktionsgesellschaftMBH),
            2441 => Ok(Self::WIKAAlexanderWiegandSECoKG),
            2442 => Ok(Self::Biovigil),
            2443 => Ok(Self::MequonicEngineeringSL),
            2444 => Ok(Self::BGridBV),
            2445 => Ok(Self::C3WIRELESSLLC),
            2446 => Ok(Self::ADVEEZ),
            2447 => Ok(Self::AktiebolagetRegin),
            2448 => Ok(Self::AntonPaarGmbH),
            2449 => Ok(Self::TelenorASA),
            2450 => Ok(Self::BigKaiserPrecisionToolingLtd),
            2451 => Ok(Self::AbsoluteAudioLabsBV),
            2452 => Ok(Self::VT42PtyLtd),
            2453 => Ok(Self::BronkhorstHighTechBV),
            2454 => Ok(Self::CEFeinGmbH),
            2455 => Ok(Self::NextMind),
            2456 => Ok(Self::PixieDustTechnologiesInc),
            2457 => Ok(Self::ETacticaEhf),
            2458 => Ok(Self::NewAudioLLC),
            2459 => Ok(Self::SendumWirelessCorporation),
            2460 => Ok(Self::DeisterElectronicGmbH),
            2461 => Ok(Self::YKKAPInc),
            2462 => Ok(Self::StepOneLimited),
            2463 => Ok(Self::KoyaMedicalInc),
            2464 => Ok(Self::ProofDiagnosticsInc),
            2465 => Ok(Self::VOSSystemsLLC),
            2466 => Ok(Self::ENGAGENOWDATASCIENCESPRIVATELIMITED),
            2467 => Ok(Self::ARDUINOSA),
            2468 => Ok(Self::KUMHOELECTRICSINC),
            2469 => Ok(Self::SecurityEnhancementSystemsLLC),
            2470 => Ok(Self::BEIJINGELECTRICVEHICLECOLTD),
            2471 => Ok(Self::PaybuddyApS),
            2472 => Ok(Self::KHNSolutionsInc),
            2473 => Ok(Self::NipponCeramicCoLtd),
            2474 => Ok(Self::PHOTODYNAMICINCORPORATED),
            2475 => Ok(Self::DashLogicInc),
            2476 => Ok(Self::Ambiq),
            2477 => Ok(Self::NarhwallInc),
            2478 => Ok(Self::PozyxNV),
            2479 => Ok(Self::IfLinkOpenCommunity),
            2480 => Ok(Self::DeublinCompanyLLC),
            2481 => Ok(Self::BLINQY),
            2482 => Ok(Self::DYPHI),
            2483 => Ok(Self::BlueXMicroelectronicsCorpLtd),
            2484 => Ok(Self::PentaLockAps),
            2485 => Ok(Self::AUTECGesellschaftFuerAutomationstechnikMbH),
            2486 => Ok(Self::PegasusTechnologiesInc),
            2487 => Ok(Self::BoutLabsLLC),
            2488 => Ok(Self::PlayerDataLimited),
            2489 => Ok(Self::SAVOYELECTRONICLIGHTING),
            2490 => Ok(Self::ElimoEngineeringLtd),
            2491 => Ok(Self::SkyStreamCorporation),
            2492 => Ok(Self::AerosensLLC),
            2493 => Ok(Self::CentreSuisseDElectroniqueEtDeMicrotechniqueSA),
            2494 => Ok(Self::VesselLtd),
            2495 => Ok(Self::SpanIOInc),
            2496 => Ok(Self::AnotherBrainInc),
            2497 => Ok(Self::Rosewill),
            2498 => Ok(Self::UniversalAudioInc),
            2499 => Ok(Self::JAPANTOBACCOINC),
            2500 => Ok(Self::UVISIO),
            2501 => Ok(Self::HungYiMicroelectronicsCoLtd),
            2502 => Ok(Self::HonorDeviceCoLtd),
            2503 => Ok(Self::CombustionLLC),
            2504 => Ok(Self::XUNTONG),
            2505 => Ok(Self::CrowdGlowLtd),
            2506 => Ok(Self::Mobitrace),
            2507 => Ok(Self::HxEngineeringLLC),
            2508 => Ok(Self::Senso4sDOO),
            2509 => Ok(Self::Blyott),
            2510 => Ok(Self::JuliusBlumGmbH),
            2511 => Ok(Self::BlueStreakIoTLLC),
            2512 => Ok(Self::ChessWiseBV),
            2513 => Ok(Self::ABLEPAYTECHNOLOGIESAS),
            2514 => Ok(Self::TemperatureSensitiveSolutionsSystemsSwedenAB),
            2515 => Ok(Self::HeartHeroInc),
            2516 => Ok(Self::ORBISInc),
            2517 => Ok(Self::GEARRADIOELECTRONICSCORP),
            2518 => Ok(Self::EARTEKNIKISITMEVEODIOMETRICIHAZLARISANAYIVETICARETANONIMSIRKETI),
            2519 => Ok(Self::Coyotta),
            2520 => Ok(Self::SynergyTecnologiaEmSistemasLtda),
            2521 => Ok(Self::VivoSensMedicalGmbH),
            2522 => Ok(Self::NagravisionSA),
            2523 => Ok(Self::BionicAvionicsInc),
            2524 => Ok(Self::AON2Ltd),
            2525 => Ok(Self::InnowareDevelopmentAB),
            2526 => Ok(Self::JLDTechnologySolutionsLLC),
            2527 => Ok(Self::MagnusTechnologySdnBhd),
            2528 => Ok(Self::PreddioTechnologiesInc),
            2529 => Ok(Self::TagNTracInc),
            2530 => Ok(Self::WuhanLinptechCoLtd),
            2531 => Ok(Self::FridayHomeAps),
            2532 => Ok(Self::CPSAS),
            2533 => Ok(Self::Mobilogix),
            2534 => Ok(Self::MasoniteCorporation),
            2535 => Ok(Self::KabushikigaishaHANERON),
            2536 => Ok(Self::MelangeSystemsPvtLtd),
            2537 => Ok(Self::LumenRadioAB),
            2538 => Ok(Self::AthlosOy),
            2539 => Ok(Self::KEANELECTRONICSPTYLTD),
            2540 => Ok(Self::YukonAdvancedOpticsWorldwideUAB),
            2541 => Ok(Self::SibelInc),
            2542 => Ok(Self::OJMARSA),
            2543 => Ok(Self::SteinelSolutionsAG),
            2544 => Ok(Self::WatchGasBV),
            2545 => Ok(Self::OMDigitalSolutionsCorporation),
            2546 => Ok(Self::AudearaPtyLtd),
            2547 => Ok(Self::BeijingZeroZeroInfinityTechnologyCoLtd),
            2548 => Ok(Self::SpectrumTechnologiesInc),
            2549 => Ok(Self::OKIElectricIndustryCoLtd),
            2550 => Ok(Self::MobileActionTechnologyInc),
            2551 => Ok(Self::SENSATECCoLtd),
            2552 => Ok(Self::ROSRL),
            2553 => Ok(Self::HangzhouYaguanTechnologyCoLTD),
            2554 => Ok(Self::ListenTechnologiesCorporation),
            2555 => Ok(Self::TOITUCOLTD),
            2556 => Ok(Self::Confidex),
            2557 => Ok(Self::KeepTechnologiesInc),
            2558 => Ok(Self::LichtvisionEngineeringGmbH),
            2559 => Ok(Self::AIRSTAR),
            2560 => Ok(Self::AmplerBikesOU),
            2561 => Ok(Self::CleveronAS),
            2562 => Ok(Self::AyxonDynamicsGmbH),
            2563 => Ok(Self::DonutroboticsCoLtd),
            2564 => Ok(Self::FlosonicsMedical),
            2565 => Ok(Self::SouthwireCompanyLLC),
            2566 => Ok(Self::ShanghaiWuqiMicroelectronicsCoLtd),
            2567 => Ok(Self::ReflowPtyLtd),
            2568 => Ok(Self::OrasOy),
            2569 => Ok(Self::ECCT),
            2570 => Ok(Self::VolanTechnologyInc),
            2571 => Ok(Self::SIANASystems),
            2572 => Ok(Self::ShanghaiYidianIntelligentTechnologyCoLtd),
            2573 => Ok(Self::BluePeacockGmbH),
            2574 => Ok(Self::RolandCorporation),
            2575 => Ok(Self::LIXILCorporation),
            2576 => Ok(Self::SUBARUCorporation),
            2577 => Ok(Self::Sensolus),
            2578 => Ok(Self::DysonTechnologyLimited),
            2579 => Ok(Self::Tec4medLifeScienceGmbH),
            2580 => Ok(Self::CROXELINC),
            2581 => Ok(Self::SyngInc),
            2582 => Ok(Self::RIDEVISIONLTD),
            2583 => Ok(Self::PlumeDesignInc),
            2584 => Ok(Self::CambridgeAnimalTechnologiesLtd),
            2585 => Ok(Self::MaxellLtd),
            2586 => Ok(Self::LinkLabsInc),
            2587 => Ok(Self::EmbravaPtyLtd),
            2588 => Ok(Self::INPEAKSC),
            2589 => Ok(Self::APIK),
            2590 => Ok(Self::CombiQAB),
            2591 => Ok(Self::DeVilbissHealthcareLLC),
            2592 => Ok(Self::JiangxiInnotechTechnologyCoLtd),
            2593 => Ok(Self::ApollogicSpZOO),
            2594 => Ok(Self::DAIICHIKOSHOCOLTD),
            2595 => Ok(Self::BIXOLONCOLTD),
            2596 => Ok(Self::AtmosicTechnologiesInc),
            2597 => Ok(Self::EranFinancialServicesLLC),
            2598 => Ok(Self::LouisVuitton),
            2599 => Ok(Self::AYUDEVICESPRIVATELIMITED),
            2600 => Ok(Self::NanoFlex),
            2601 => Ok(Self::WorthcloudTechnologyCoLtd),
            2602 => Ok(Self::YamahaCorporation),
            2603 => Ok(Self::PaceBaitIVS),
            2604 => Ok(Self::ShenzhenHTIntelligentControlCoLtd),
            2605 => Ok(Self::ShenzhenFeasycomTechnologyCoLtd),
            2606 => Ok(Self::ZumaArrayLimited),
            2607 => Ok(Self::InstamicInc),
            2608 => Ok(Self::AirWeigh),
            2609 => Ok(Self::NevroCorp),
            2610 => Ok(Self::PinnacleTechnologyInc),
            2611 => Ok(Self::WMFAG),
            2612 => Ok(Self::LuxerCorporation),
            2613 => Ok(Self::SafectoryGmbH),
            2614 => Ok(Self::NGKSPARKPLUGCOLTD),
            2615 => Ok(Self::N2587702OntarioInc),
            2616 => Ok(Self::BouffaloLabNanjingLtd),
            2617 => Ok(Self::BLUETICKETINGSRL),
            2618 => Ok(Self::IncotexCoLtd),
            2619 => Ok(Self::GalileoTechnologyLimited),
            2620 => Ok(Self::SitecoGmbH),
            2621 => Ok(Self::DELABIE),
            2622 => Ok(Self::HefeiYunlianSemiconductorCoLtd),
            2623 => Ok(Self::ShenzhenYopeakOptoelectronicsTechnologyCoLtd),
            2624 => Ok(Self::GEWISSSPA),
            2625 => Ok(Self::OPEXCorporation),
            2626 => Ok(Self::MotionalysisInc),
            2627 => Ok(Self::BuschSystemsInternationalInc),
            2628 => Ok(Self::NovidanInc),
            2629 => Ok(Self::N3SISecuritySystemsInc),
            2630 => Ok(Self::BeijingHCInfiniteTechnologyLimited),
            2631 => Ok(Self::TheWandCompanyLtd),
            2632 => Ok(Self::JRCMobilityInc),
            2633 => Ok(Self::VentureResearchInc),
            2634 => Ok(Self::MapLargeInc),
            2635 => Ok(Self::MistyWestEnergyAndTransportLtd),
            2636 => Ok(Self::SiFliTechnologiesShanghaiInc),
            2637 => Ok(Self::LocknTechnologiesPrivateLimited),
            2638 => Ok(Self::ToytecCorporation),
            2639 => Ok(Self::VANMOOFGlobalHoldingBV),
            2640 => Ok(Self::NextscapeInc),
            2641 => Ok(Self::CSIRO),
            2642 => Ok(Self::FollowSenseEuropeBV),
            2643 => Ok(Self::KKMCOMPANYLIMITED),
            2644 => Ok(Self::SQLTechnologiesCorp),
            2645 => Ok(Self::InugoSystemsLimited),
            2646 => Ok(Self::Ambie),
            2647 => Ok(Self::MeizhouGuoWeiElectronicsCoLtd),
            2648 => Ok(Self::IndigoDiabetes),
            2649 => Ok(Self::TourBuiltLLC),
            2650 => Ok(Self::SontheimIndustrieElektronikGmbH),
            2651 => Ok(Self::LEGICIdentsystemsAG),
            2652 => Ok(Self::InnovativeDesignLabsInc),
            2653 => Ok(Self::MGEnergySystemsBV),
            2654 => Ok(Self::LaceClipsLlc),
            2655 => Ok(Self::Stryker),
            2656 => Ok(Self::DATANGSEMICONDUCTORTECHNOLOGYCOLTD),
            2657 => Ok(Self::SmartParksBV),
            2658 => Ok(Self::MOKOTECHNOLOGYLtd),
            2659 => Ok(Self::GremsyJSC),
            2660 => Ok(Self::GeopalSystemAS),
            2661 => Ok(Self::LytxINC),
            2662 => Ok(Self::JUSTMORPHPTELTD),
            2663 => Ok(Self::BeijingSuperHexaCenturyTechnologyCOLtd),
            2664 => Ok(Self::FocusIngenieriaSRL),
            2665 => Ok(Self::HAPPIESTBABYINC),
            2666 => Ok(Self::ScribbleDesignInc),
            2667 => Ok(Self::OlympicOphthalmicsInc),
            2668 => Ok(Self::Pokkels),
            2669 => Ok(Self::KUUKANJYOKINCoLtd),
            2670 => Ok(Self::PacSaneLimited),
            2671 => Ok(Self::WarnerBros),
            2672 => Ok(Self::Ooma),
            2673 => Ok(Self::SenquipPtyLtd),
            2674 => Ok(Self::JumoGmbHCoKG),
            2675 => Ok(Self::InnohomeOy),
            2676 => Ok(Self::MICROSONSA),
            2677 => Ok(Self::DeltaCycleCorporation),
            2678 => Ok(Self::SynapticsIncorporated),
            2679 => Ok(Self::JMDPACIFICPTELTD),
            2680 => Ok(Self::ShenzhenSunricherTechnologyLimited),
            2681 => Ok(Self::WebastoSE),
            2682 => Ok(Self::EmlidLimited),
            2683 => Ok(Self::UniqAirOy),
            2684 => Ok(Self::WAFERLOCK),
            2685 => Ok(Self::FreedmanElectronicsPtyLtd),
            2686 => Ok(Self::KebaAG),
            2687 => Ok(Self::IntuityMedical),
            2688 => Ok(Self::CleerLimited),
            2689 => Ok(Self::UniversalBiosensorsPtyLtd),
            2690 => Ok(Self::Corsair),
            2691 => Ok(Self::RivataInc),
            2692 => Ok(Self::GreennoteInc),
            2693 => Ok(Self::SnowballTechnologyCoLtd),
            2694 => Ok(Self::ALIZENTInternational),
            2695 => Ok(Self::ShanghaiSmartSystemTechnologyCoLtd),
            2696 => Ok(Self::PSAPeugeotCitroen),
            2697 => Ok(Self::SESImagotag),
            2698 => Ok(Self::HAINBUCHSPANNENDETECHNIK),
            2699 => Ok(Self::SANlightGmbH),
            2700 => Ok(Self::DelpSysSRO),
            2701 => Ok(Self::JCMTECHNOLOGIESSA),
            2702 => Ok(Self::PerfectCompany),
            2703 => Ok(Self::TOTOLTD),
            2704 => Ok(Self::ShenzhenGrandsunElectronicCoLtd),
            2705 => Ok(Self::MonarchInternationalInc),
            2706 => Ok(Self::CarestreamDentalLLC),
            2707 => Ok(Self::GiPStechSRL),
            2708 => Ok(Self::OOBIKInc),
            2709 => Ok(Self::PamexInc),
            2710 => Ok(Self::LightricityLtd),
            2711 => Ok(Self::SensTek),
            2712 => Ok(Self::FoilInc),
            2713 => Ok(Self::ShanghaiHighFlyingElectronicsTechnologyCoLtd),
            2714 => Ok(Self::TEMKINASSOCIATESLLC),
            2715 => Ok(Self::EelloLLC),
            2716 => Ok(Self::XiAnFengyuInformationTechnologyCoLtd),
            2717 => Ok(Self::CanonFinetechNiscaInc),
            2718 => Ok(Self::LifePlusInc),
            2719 => Ok(Self::IstaInternationalGmbH),
            2720 => Ok(Self::LoyTecElectronicsGmbH),
            2721 => Ok(Self::LINCOGNTECHNOLOGYCOLIMITED),
            2722 => Ok(Self::CareBloomLLC),
            2723 => Ok(Self::DICCorporation),
            2724 => Ok(Self::FAZEPROLLC),
            2725 => Ok(Self::ShenzhenUascentTechnologyCoLtd),
            2726 => Ok(Self::RealityworksInc),
            2727 => Ok(Self::UrbanistaAB),
            2728 => Ok(Self::ZencontrolPtyLtd),
            2729 => Ok(Self::MrinqTechnologiesLLC),
            2730 => Ok(Self::ComputimeInternationalLtd),
            2731 => Ok(Self::AnhuiListenaiCo),
            2732 => Ok(Self::OSMHKLimited),
            2733 => Ok(Self::AdevoConsultingAB),
            2734 => Ok(Self::PSEngineeringInc),
            2735 => Ok(Self::AIAIAIApS),
            2736 => Ok(Self::VisiontronicSRO),
            2737 => Ok(Self::InVueSecurityProductsInc),
            2738 => Ok(Self::TouchTronicsInc),
            2739 => Ok(Self::INNERRANGEPTYLTD),
            2740 => Ok(Self::EllenbyTechnologiesInc),
            2741 => Ok(Self::ElstatLtdFormerlyElstatElectronicsLtd),
            2742 => Ok(Self::XenterInc),
            2743 => Ok(Self::LogTagNorthAmericaInc),
            2744 => Ok(Self::SensAiIncorporated),
            2745 => Ok(Self::STL),
            2746 => Ok(Self::OpenBionicsLtd),
            2747 => Ok(Self::RDASSRO),
            2748 => Ok(Self::KCCSMobileEngineeringCoLtd),
            2749 => Ok(Self::InventasAS),
            2750 => Ok(Self::RobkooInformationTechnologiesCoLtd),
            2751 => Ok(Self::PAULHARTMANNAG),
            2752 => Ok(Self::OmniIDUSAINC),
            2753 => Ok(Self::ShenzhenJingxunTechnologyCoLtd),
            2754 => Ok(Self::RealMegaMicroelectronicsTechnologyShanghaiCoLtd),
            2755 => Ok(Self::KenzenInc),
            2756 => Ok(Self::CODIUM),
            2757 => Ok(Self::FlexoptixGmbH),
            2758 => Ok(Self::BarnesGroupInc),
            2759 => Ok(Self::ChengduAichTechnologyCoLtd),
            2760 => Ok(Self::KeepinCoLtd),
            2761 => Ok(Self::SwedlockAB),
            2762 => Ok(Self::ShenzhenCoolKitTechnologyCoLtd),
            2763 => Ok(Self::IseIndividuelleSoftwareUndElektronikGmbH),
            2764 => Ok(Self::Nuvoton),
            2765 => Ok(Self::VisuallexSportInternationalLimited),
            2766 => Ok(Self::KOBATAGAUGEMFGCOLTD),
            2767 => Ok(Self::CACITechnologies),
            2768 => Ok(Self::NordicStrongApS),
            2769 => Ok(Self::EAGLEKINGDOMTECHNOLOGIESLIMITED),
            2770 => Ok(Self::LautsprecherTeufelGmbH),
            2771 => Ok(Self::SSVSoftwareSystemsGmbH),
            2772 => Ok(Self::ZhuhaiPantumElectroniscCoLtd),
            2773 => Ok(Self::StreamitBV),
            2774 => Ok(Self::NymeaGmbH),
            2775 => Ok(Self::ALKOGeraeteGmbH),
            2776 => Ok(Self::FranzKaldeweiGmbHCoKG),
            2777 => Ok(Self::ShenzhenAimoreCoLtd),
            2778 => Ok(Self::CodefabrikGmbH),
            2779 => Ok(Self::ReelablesInc),
            2780 => Ok(Self::DuravitAG),
            2781 => Ok(Self::BossAudio),
            2782 => Ok(Self::VoceraCommunicationsInc),
            2783 => Ok(Self::DouglasDynamicsLLC),
            2784 => Ok(Self::ViceroyDevicesCorporation),
            2785 => Ok(Self::ChengDuForThinkTechnologyCoLtd),
            2786 => Ok(Self::IMATRIXSYSTEMSINC),
            2787 => Ok(Self::GlobalMed),
            2788 => Ok(Self::DALIAlliance),
            2789 => Ok(Self::UnuGmbH),
            2790 => Ok(Self::Hexology),
            2791 => Ok(Self::SunplusTechnologyCoLtd),
            2792 => Ok(Self::LEVELSRO),
            2793 => Ok(Self::FLIRSystemsAB),
            2794 => Ok(Self::BordaTechnology),
            2795 => Ok(Self::SquareInc),
            2796 => Ok(Self::FUTEKADVANCEDSENSORTECHNOLOGYINC),
            2797 => Ok(Self::SaxonarGmbH),
            2798 => Ok(Self::VelentiumLLC),
            2799 => Ok(Self::GLPGermanLightProductsGmbH),
            2800 => Ok(Self::LeupoldStevensInc),
            2801 => Ok(Self::CRADERSCOLTD),
            2802 => Ok(Self::ShanghaiAllLinkMicroelectronicsCoLtd),
            2803 => Ok(Self::N701xInc),
            2804 => Ok(Self::RadioworksMicroelectronicsPTYLTD),
            2805 => Ok(Self::UnitechElectronicInc),
            2806 => Ok(Self::AMETEKInc),
            2807 => Ok(Self::Irdeto),
            2808 => Ok(Self::FirstDesignSystemInc),
            2809 => Ok(Self::UnistoAG),
            2810 => Ok(Self::ChengduAmbitTechnologyCoLtd),
            2811 => Ok(Self::SMTELEKTRONIKGmbH),
            2812 => Ok(Self::CerebrumSensorTechnologiesInc),
            2813 => Ok(Self::WeberSensorsLLC),
            2814 => Ok(Self::EardaTechnologiesCoLtd),
            2815 => Ok(Self::FUSEAWARELIMITED),
            2816 => Ok(Self::FlaircommMicroelectronicsInc),
            2817 => Ok(Self::RESIDEOTECHNOLOGIESINC),
            2818 => Ok(Self::IORATechnologyDevelopmentLtdSti),
            2819 => Ok(Self::PrecisionTriathlonSystemsLimited),
            2820 => Ok(Self::IPERCUT),
            2821 => Ok(Self::MarquardtGmbH),
            2822 => Ok(Self::FAZUAGmbH),
            2823 => Ok(Self::WorkaroundGmbh),
            2824 => Ok(Self::ShenzhenQianfenyiIntelligentTechnologyCoLTD),
            2825 => Ok(Self::Soonisys),
            2826 => Ok(Self::BelunTechnologyCompanyLimited),
            2827 => Ok(Self::SanistaalAS),
            2828 => Ok(Self::BluPeak),
            2829 => Ok(Self::SANYODENKOCoLtd),
            2830 => Ok(Self::HondaLockMfgCoLtd),
            2831 => Ok(Self::BEASA),
            2832 => Ok(Self::AlfaLavalCorporateAB),
            2833 => Ok(Self::ThermoWorksInc),
            2834 => Ok(Self::ToughBuiltIndustriesLLC),
            2835 => Ok(Self::IOTOOLS),
            2836 => Ok(Self::Olumee),
            2837 => Ok(Self::NAOSJAPANKK),
            2838 => Ok(Self::GuardRFIDSolutionsInc),
            2839 => Ok(Self::SIGSAUERINC),
            2840 => Ok(Self::DECATHLONSE),
            2841 => Ok(Self::WBSPROJECTHPTYLTD),
            2842 => Ok(Self::RocaSanitarioSA),
            2843 => Ok(Self::EnerpacToolGroupCorp),
            2844 => Ok(Self::NanoleqAG),
            2845 => Ok(Self::AcceleratedSystems),
            2846 => Ok(Self::PBINC),
            2847 => Ok(Self::BeijingESWINComputingTechnologyCoLtd),
            2848 => Ok(Self::TKHSecurityBV),
            2849 => Ok(Self::AmsAG),
            65535 => Ok(Self::BluetoothSIGSpecificationReservedDefaultVendorIDForRemoteDevicesWithoutDeviceIDServiceRecord),
            _ => Err(code),
        }
    }
}

