#!/bin/sh
ldapsearch -Q "uid=z*" cn | grep -E "(cn:)" | sed 's/cn: //' | sort -r

