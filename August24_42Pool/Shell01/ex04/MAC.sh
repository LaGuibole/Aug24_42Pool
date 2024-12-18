ifconfig | grep -i 'ether' | awk '/ether/ {print $2}'
