savedcmd_/home/user/lab3/mojmodul.mod := printf '%s\n'   mojmodul.o | awk '!x[$$0]++ { print("/home/user/lab3/"$$0) }' > /home/user/lab3/mojmodul.mod
