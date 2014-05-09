# Imported from oe-core e97d152ca13556b41a236c1a4cfb11e77ff857d7. Can be dropped
# once we move to Yocto 1.6 .

DEFAULTTUNE ?= "armv7a-neon"

require conf/machine/include/arm/arch-armv7a.inc

TUNEVALID[cortexa7] = "Enable Cortex-A7 specific processor optimizations"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "cortexa7", " -mtune=cortex-a7", "", d)}"

# Little Endian base configs
AVAILTUNES += "cortexa7 cortexa7t cortexa7-neon cortexa7t-neon"
ARMPKGARCH_tune-cortexa7 = "cortexa7"
ARMPKGARCH_tune-cortexa7t = "cortexa7"
ARMPKGARCH_tune-cortexa7-neon = "cortexa7"
ARMPKGARCH_tune-cortexa7t-neon = "cortexa7"
TUNE_FEATURES_tune-cortexa7 = "${TUNE_FEATURES_tune-armv7a} cortexa7"
TUNE_FEATURES_tune-cortexa7t = "${TUNE_FEATURES_tune-armv7at} cortexa7"
TUNE_FEATURES_tune-cortexa7-neon = "${TUNE_FEATURES_tune-armv7a-neon} cortexa7"
TUNE_FEATURES_tune-cortexa7t-neon = "${TUNE_FEATURES_tune-armv7at-neon} cortexa7"
PACKAGE_EXTRA_ARCHS_tune-cortexa7 = "${PACKAGE_EXTRA_ARCHS_tune-armv7a} cortexa7-vfp"
PACKAGE_EXTRA_ARCHS_tune-cortexa7t = "${PACKAGE_EXTRA_ARCHS_tune-armv7at} cortexa7-vfp cortexa7t2-vfp"
PACKAGE_EXTRA_ARCHS_tune-cortexa7-neon = "${PACKAGE_EXTRA_ARCHS_tune-armv7a-neon} cortexa7-vfp cortexa7-vfp-neon"
PACKAGE_EXTRA_ARCHS_tune-cortexa7t-neon = "${PACKAGE_EXTRA_ARCHS_tune-armv7at-neon} cortexa7-vfp cortexa7-vfp-neon cortexa7t2-vfp cortexa7t2-vfp-neon"

# VFP Tunes
AVAILTUNES += "cortexa7hf cortexa7thf cortexa7hf-neon cortexa7thf-neon cortexa7hf-neon-vfpv4 cortexa7thf-neon-vfpv4"
ARMPKGARCH_tune-cortexa7hf = "cortexa7"
ARMPKGARCH_tune-cortexa7thf = "cortexa7"
ARMPKGARCH_tune-cortexa7hf-neon = "cortexa7"
ARMPKGARCH_tune-cortexa7thf-neon = "cortexa7"
ARMPKGARCH_tune-cortexa7hf-neon-vfpv4 = "cortexa7"
ARMPKGARCH_tune-cortexa7thf-neon-vfpv4 = "cortexa7"
TUNE_FEATURES_tune-cortexa7hf ?= "${TUNE_FEATURES_tune-armv7ahf} cortexa7"
TUNE_FEATURES_tune-cortexa7thf ?= "${TUNE_FEATURES_tune-armv7athf} cortexa7"
TUNE_FEATURES_tune-cortexa7hf-neon ?= "${TUNE_FEATURES_tune-armv7ahf-neon} cortexa7"
TUNE_FEATURES_tune-cortexa7thf-neon ?= "${TUNE_FEATURES_tune-armv7athf-neon} cortexa7"
TUNE_FEATURES_tune-cortexa7hf-neon-vfpv4 ?= "${TUNE_FEATURES_tune-armv7ahf-neon-vfpv4} cortexa7"
TUNE_FEATURES_tune-cortexa7thf-neon-vfpv4 ?= "${TUNE_FEATURES_tune-armv7athf-neon-vfpv4} cortexa7"
PACKAGE_EXTRA_ARCHS_tune-cortexa7hf = "${PACKAGE_EXTRA_ARCHS_tune-armv7ahf} cortexa7hf-vfp"
PACKAGE_EXTRA_ARCHS_tune-cortexa7thf = "${PACKAGE_EXTRA_ARCHS_tune-armv7athf} cortexa7hf-vfp cortexa7t2hf-vfp"
PACKAGE_EXTRA_ARCHS_tune-cortexa7hf-neon = "${PACKAGE_EXTRA_ARCHS_tune-armv7ahf-neon} cortexa7hf-vfp cortexa7hf-vfp-neon"
PACKAGE_EXTRA_ARCHS_tune-cortexa7thf-neon = "${PACKAGE_EXTRA_ARCHS_tune-armv7athf-neon} cortexa7hf-vfp cortexa7hf-vfp-neon cortexa7t2hf-vfp cortexa7t2hf-vfp-neon"
PACKAGE_EXTRA_ARCHS_tune-cortexa7hf-neon-vfpv4 = "${PACKAGE_EXTRA_ARCHS_tune-armv7ahf-neon-vfpv4} cortexa7hf-vfp cortexa7hf-vfp-neon cortexa7hf-vfp-vfpv4-neon"
PACKAGE_EXTRA_ARCHS_tune-cortexa7thf-neon-vfpv4 = "${PACKAGE_EXTRA_ARCHS_tune-armv7athf-neon-vfpv4} cortexa7hf-vfp cortexa7hf-vfp-neon cortexa7t2hf-vfp cortexa7t2hf-vfp-neon cortexa7hf-vfp-vfpv4-neon cortexa7t2hf-vfp-vfpv4-neon"