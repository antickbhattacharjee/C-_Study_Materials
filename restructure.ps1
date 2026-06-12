$dir = "e:\Protected\C++_class"

# 1. Delete all .exe files
Get-ChildItem -Path $dir -Recurse -Filter *.exe | Remove-Item -Force

# 2. Create new folders
$newFolders = @(
    "Day_1_Variables_Operators_Datatypes",
    "Day_2_Conditional_Statements",
    "Day_3_Loops",
    "Day_4_Array",
    "Day_5_String",
    "Day_6_Function",
    "Day_7_Structure",
    "Day_8_OOP_Theory",
    "Day_9_File_Handling",
    "Day_10_Rest"
)

foreach ($f in $newFolders) {
    $fPath = Join-Path $dir $f
    if (-not (Test-Path $fPath)) { New-Item -ItemType Directory -Path $fPath }
    if (-not (Test-Path (Join-Path $fPath "Learning"))) { New-Item -ItemType Directory -Path (Join-Path $fPath "Learning") }
    if (-not (Test-Path (Join-Path $fPath "Assignments"))) { New-Item -ItemType Directory -Path (Join-Path $fPath "Assignments") }
}

# 3. Move files to appropriate directories
function Move-CdfFiles {
    param($srcFolder, $destFolder)
    $srcPath = Join-Path $dir $srcFolder
    if (Test-Path $srcPath) {
        Get-ChildItem -Path $srcPath | ForEach-Object {
            if ($_.PSIsContainer) {
                # Just move directories as a whole to Learning for simplicity unless it's assignment
                if ($_.Name -like "*assignment*") {
                    Move-Item -Path $_.FullName -Destination (Join-Path $dir "$destFolder\Assignments\") -Force
                } else {
                    Move-Item -Path $_.FullName -Destination (Join-Path $dir "$destFolder\Learning\") -Force
                }
            } else {
                if ($_.Name -like "*assignment*") {
                    Move-Item -Path $_.FullName -Destination (Join-Path $dir "$destFolder\Assignments\") -Force
                } else {
                    Move-Item -Path $_.FullName -Destination (Join-Path $dir "$destFolder\Learning\") -Force
                }
            }
        }
    }
}

Move-CdfFiles -srcFolder "day 1" -destFolder "Day_1_Variables_Operators_Datatypes"
Move-CdfFiles -srcFolder "day 2" -destFolder "Day_1_Variables_Operators_Datatypes"
Move-CdfFiles -srcFolder "day 3" -destFolder "Day_2_Conditional_Statements"
Move-CdfFiles -srcFolder "day 4" -destFolder "Day_3_Loops"
Move-CdfFiles -srcFolder "day 5" -destFolder "Day_4_Array"
Move-CdfFiles -srcFolder "day 6" -destFolder "Day_5_String"
Move-CdfFiles -srcFolder "day 7" -destFolder "Day_6_Function"
Move-CdfFiles -srcFolder "day 8" -destFolder "Day_7_Structure"
Move-CdfFiles -srcFolder "day 9" -destFolder "Day_8_OOP_Theory"
Move-CdfFiles -srcFolder "day 10" -destFolder "Day_9_File_Handling"

# Day 10: rest
$restSrcs = @("OOP_Project", "assignment", "project_class", "b-d.cpp", "project.cpp", "tic_tak_toe.cpp", "C++ Presentation.pdf")
foreach ($r in $restSrcs) {
    $rPath = Join-Path $dir $r
    if (Test-Path $rPath) {
        if ($rPath -match "\.cpp$|\.pdf$") {
            Move-Item -Path $rPath -Destination (Join-Path $dir "Day_10_Rest\Learning\") -Force
        } else {
            Move-Item -Path $rPath -Destination (Join-Path $dir "Day_10_Rest\") -Force
        }
    }
}

# 4. Remove old day folders
1..10 | ForEach-Object {
    $d = Join-Path $dir "day $_"
    if (Test-Path $d) { Remove-Item -Path $d -Recurse -Force }
}

Write-Host "Restructure Complete."
