@echo off
echo Generating test cases...
python Gen_test.py

echo Running tests...
del test_results.txt 2>nul

for %%d in (test*.inp) do (
    echo Processing %%d...
    echo === %%d === >> test_results.txt
    echo Input: >> test_results.txt

    QuickSort.exe < %%d >> test_results.txt

    HeapSort.exe < %%d >> test_results.txt

    MergeSort.exe < %%d >> test_results.txt

    C++_Sort.exe < %%d >> test_results.txt

    python PythonSort.py < %%d >> test_results.txt

    echo. >> test_results.txt
)

echo ✅ All tests completed. Results saved in test_results.txt
pause
