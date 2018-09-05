@echo off
echo Updating current repo with the NAU-OSS/CS499-Group01-SiteScribe...
git fetch --all
git pull upstream master
git push
echo Updated local (if everything went according to plan)