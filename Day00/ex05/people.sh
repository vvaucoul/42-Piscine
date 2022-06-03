ldapsearch -Q -LLL uid="z*" cn | grep '^cn:' | sort -r --ignore-case | cut -c5-
