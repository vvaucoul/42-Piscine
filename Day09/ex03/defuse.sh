dd=$(($(date +'%s * 1000 + %-N / 1000000')))
ddmin5=$(($dd - 300000))
echo $ddmin5