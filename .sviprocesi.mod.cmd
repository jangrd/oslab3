savedcmd_/home/user/lab3/sviprocesi.mod := printf '%s\n'   sviprocesi.o | awk '!x[$$0]++ { print("/home/user/lab3/"$$0) }' > /home/user/lab3/sviprocesi.mod
