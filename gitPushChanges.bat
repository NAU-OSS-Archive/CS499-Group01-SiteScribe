@echo off

if [%1]==[] goto usage

echo Checking for changes with NAU-OSS/CS499-Group01-SiteScribe
git fetch --all
git pull upstream master

echo Getting fork changes and committing changes
git add *
git commit -m %1
git push
echo Updated local (if everything went according to plan)
echo Ready to create pull request. Go to your repo on GitHub.
goto :eof

:usage
@echo Usage: %0 "<Message in quotes>"
exit /B 1