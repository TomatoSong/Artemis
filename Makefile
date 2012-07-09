help:
	@echo "Targets:"
	@echo "    webkit[-debug][-minimal] - build [a minimal] WebKit Qt port [with debug info]"
	@echo "    webkit-clean             - clean WebKit files"
	@echo ""
	@echo "    artemis                  - Build Artemis"
	@echo "    artemis-clean            - Clean artemis"
	@echo ""
	@echo "    qt-checkout              - Checkout a copy of the Qt 4.8 Framework source"
	@echo ""
	@echo "    qhash-patch              - Apply qt sourcefile patch"

WEBKIT_BUILD_SCRIPT = ./WebKit/Tools/Scripts/build-webkit --qt --qmakearg="DEFINES+=ARTEMIS=1" --makearg="-j4"

build: webkit artemis

install: artemis-install webkit-install

webkit:
	@echo "Building release QtWebKit"
	${WEBKIT_BUILD_SCRIPT}

webkit-install: 
	mkdir -p ${ARTEMIS_PATH}/WebKit/WebKitBuild
	cp -r ./WebKit/WebKitBuild/* ${ARTEMIS_PATH}/WebKit/WebKitBuild

webkit-minimal:
	@echo "Building minimal release QtWebKit"
	${WEBKIT_BUILD_SCRIPT} --minimal

webkit-debug:
	@echo "Building debug QtWebKit"
	${WEBKIT_BUILD_SCRIPT} --debug

webkit-debug-minimal:
	@echo "Building minimal debug QtWebKit"
	${WEBKIT_BUILD_SCRIPT} --debug --minimal

webkit-clean:
	@echo "Cleaning WebKit build"
	${WEBKIT_BUILD_SCRIPT} --clean

artemis:
	cd artemis-code && qmake && make

artemis-clean:
	cd artemis-code && qmake && make clean

artemis-install: artemis
	cd artemis-code && make install

qt-checkout:
	git clone git://gitorious.org/qt/qt.git

qhash-patch:
	patch ./qt/src/corelib/tools/qhash.h qhash.patch