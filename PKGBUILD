# Maintainer: Your Name <your.email@example.com>

pkgname=aic8800-dkms
pkgver=1.0.0
pkgrel=1
pkgdesc="AIC8800 WiFi driver and firmware"
arch=('x86_64')
url="https://github.com/friddle/arch-aic8800-6.12"
license=('GPL2')
depends=('dkms' 'linux-headers')
makedepends=('linux-headers' 'git')
source=("git+${url}.git")
md5sums=('SKIP')

prepare() {
    cd "${srcdir}"
    # No need to extract since git clone handles it
}

package() {
    # Install udev rules
    install -Dm644 "${srcdir}/aic.rules" "${pkgdir}/usr/lib/udev/rules.d/99-aic.rules"

    # Install firmware
    install -dm755 "${pkgdir}/usr/lib/firmware/aic8800DC"
    cp -r "${srcdir}/fw/aic8800DC/"* "${pkgdir}/usr/lib/firmware/aic8800DC/"

    # Install DKMS source
    install -dm755 "${pkgdir}/usr/src/${pkgname}-${pkgver}"
    cp -r "${srcdir}/drivers" "${pkgdir}/usr/src/${pkgname}-${pkgver}/"
    cp -r "${srcdir}/aicrf_test" "${pkgdir}/usr/src/${pkgname}-${pkgver}/"

    # Create dkms.conf
    cat > "${pkgdir}/usr/src/${pkgname}-${pkgver}/dkms.conf" << EOF
PACKAGE_NAME="aic8800"
PACKAGE_VERSION="${pkgver}"
BUILT_MODULE_NAME[0]="aic_load_fw"
BUILT_MODULE_NAME[1]="aic8800_fdrv"
DEST_MODULE_LOCATION[0]="/kernel/drivers/net/wireless"
DEST_MODULE_LOCATION[1]="/kernel/drivers/net/wireless"
MAKE[0]="make -C \${kernel_source_dir} M=\${dkms_tree}/\${PACKAGE_NAME}/\${PACKAGE_VERSION}/build/aic8800/aic_load_fw modules"
MAKE[1]="make -C \${kernel_source_dir} M=\${dkms_tree}/\${PACKAGE_NAME}/\${PACKAGE_VERSION}/build/aic8800/aic8800_fdrv modules"
CLEAN="make -C \${kernel_source_dir} M=\${dkms_tree}/\${PACKAGE_NAME}/\${PACKAGE_VERSION}/build/aic8800/aic_load_fw clean"
CLEAN="make -C \${kernel_source_dir} M=\${dkms_tree}/\${PACKAGE_NAME}/\${PACKAGE_VERSION}/build/aic8800/aic8800_fdrv clean"
AUTOINSTALL="yes"
EOF

    # Install test tools
    install -dm755 "${pkgdir}/usr/bin"
    install -m755 "${srcdir}/aicrf_test/aicrf_test" "${pkgdir}/usr/bin/"
} 