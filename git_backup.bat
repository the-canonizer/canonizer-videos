@echo off
:: Change this path to the exact location of your project folder
cd /d "C:\Users\MainUser\canonizer\canonizer-videos"

:: Stage all modified and new production assets
git add .

:: Commit the files with an automated date and time stamp
git commit -m "Automatic Backup: %date% %time%"

:: Force a background sync of your LFS media assets first
git lfs push origin October2026 --all

:: Push the remaining commit tree changes to GitHub
git push origin October2026