
# Define the paths to the light and dark wallpapers
LIGHT_WALLPAPER="/home/zeko/Pictures/dfdfd.jpg"
DARK_WALLPAPER="/home/zeko/Pictures/wlalpa.jpg"

while true; do
  # Get the current hour
  HOUR=$(date +%H)
  echo $HOUR
  # Check if the current hour is between 8 AM and 6 PM
  if [ $HOUR -ge 8 ] && [ $HOUR -lt 18 ]; then
    # Set the light wallpaper
    echo "light"
    gsettings set org.gnome.desktop.background picture-uri-dark $LIGHT_WALLPAPER
  else
    # Set the dark wallpaper
    echo "dark" 
    gsettings set org.gnome.desktop.background picture-uri-dark $DARK_WALLPAPER
  fi

  # Wait for an hour before checking the time again
  sleep 10s
done
