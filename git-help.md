## Push local files to a new repository
echo "# tdt-expressjs" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/DasarathanSampath/tdt-expressjs.git
git push -u origin main

## Clone from remote and make changes and push to remote
git clone https://github.com/DasarathanSampath/tdt-expressjs.git
to confugure and push from new device
git init
git add .
git status
config --global user.email "dasarathan.sampath@gmail.com"
git config --global user.nme "DasarathanSampath"
git commit -m "updated ahu-air-side-cooling-load-calculations"
git branch -M main
git remote add origin https://github.com/DasarathanSampath/tdt-expressjs.git
git push -u origin main

## Pull from remote to a local folder merge and push local files to remote
git init
git pull https://github.com/DasarathanSampath/cpp.git
git status
git add .
git status
git commit -m "first commit"
git remote add origin https://github.com/DasarathanSampath/cpp.git
git push -u origin main