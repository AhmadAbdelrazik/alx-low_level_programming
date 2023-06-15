#!/bin/bash

echo '#!/bin/bash' > $1
echo "$2" >> $1
chmod +x $1

git add .
git commit -m "$1"
git push
