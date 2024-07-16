TEMPLATE = subdirs

SUBDIRS += manage \
		    source

subdir1.file = $$PWD/SMMS_3_3/SMMS_3_3.pro
subdir2.file = $$PWD/abc/abc.pro

QT += core gui sql widgets
CONFIG += c++17
CONFIG += debug


