#Run CMake
"C:\Program Files\CMake\bin\CMake.exe" -S "..//src//" 

#Build
"C:\Program Files\CMake\bin\CMake.exe" --build "."

"C:\Program Files\CMake\bin\CMake.exe" -DCMAKE_BUILD_TYPE=Release --build "." 

"C:\Program Files\CMake\bin\CMake.exe" -DCMAKE_BUILD_TYPE=Debug --build "." 

#Run Test 
\bin\Quicksort.Test.exe

#Clean 
"C:\Program Files\CMake\bin\CMake.exe" --build "." --target clean

