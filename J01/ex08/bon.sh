ldapsearch -Q | grep ^cn | cut -c5- | cut -d ' ' -f 2,3,4 | grep -i bon | wc -l | bc
