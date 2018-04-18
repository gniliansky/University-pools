ldapsearch -Q  "uid=z*" | grep '^cn' | cut -d ':' -f 2 | sed 's/ //' | sort -rf
