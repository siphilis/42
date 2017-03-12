cat /etc/passwd | grep -v "^#" | cut -d : -f 1 | sed -n 'n;p' | rev | tail -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' '%' | sed 's/%/, /g' | sed 's/, $/./g'
