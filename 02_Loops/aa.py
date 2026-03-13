import os

# Mapping from current filenames to desired new names
rename_map = {
    # For-loop exercises (now 01–11)
    "1forloop.cpp": "01_Alphabet_ASCII.cpp",
    "2-prime.cpp": "02_Prime_Numbers.cpp",
    "3-length.cpp": "03_Number_Length.cpp",
    "forloopq1.cpp": "04_Odd_Numbers.cpp",
    "forloopq2.cpp": "05_Count_Digits.cpp",
    "forloopq3.cpp": "06_Sum_of_Digits.cpp",
    "forloopq4.cpp": "07_Reverse_Number.cpp",
    "forloopq5.cpp": "08_Alternating_Series_Sum.cpp",
    "forloopq6.cpp": "09_Factorial.cpp",
    "forloopq7.cpp": "10_Fibonacci.cpp",
    "forloopq8.cpp": "11_Power.cpp",

    # Pattern programs (now 12–30)
    "01_Solid-Rectangle.cpp": "12_Solid_Rectangle.cpp",
    "02_Solid-Square.cpp": "13_Solid_Square.cpp",
    "03_Number-Square.cpp": "14_Number_Square.cpp",
    "04_Alphabet-Square.cpp": "15_Alphabet_Square.cpp",
    "05_Star-Triangle.cpp": "16_Star_Triangle.cpp",
    "06_Reverse_Star_Triangle.cpp": "17_Reverse_Star_Triangle.cpp",
    "07_Number_Triangle.cpp": "18_Number_Triangle.cpp",
    "08_Reverse_Number_Triangle.cpp": "19_Reverse_Number_Triangle.cpp",
    "09_Odd_Number_Triangle.cpp": "20_Odd_Number_Triangle.cpp",
    "10_Star_Plus.cpp": "21_Star_Plus.cpp",
    "11_Star_Cross.cpp": "22_Star_Cross.cpp",
    "12_Floyds_Triangle.cpp": "23_Floyds_Triangle.cpp",
    "13_0-1_Triangle.cpp": "24_0-1_Triangle.cpp",
    "14_Solid_Rhombus.cpp": "25_Solid_Rhombus.cpp",
    "15_Odd_Star_Pyramid.cpp": "26_Odd_Star_Pyramid.cpp",
    "16_Number_Pyramid_Palindrome.cpp": "27_Number_Pyramid_Palindrome.cpp",
    "17_Star_Diamond.cpp": "28_Star_Diamond.cpp",
    "18_Star_Bridge.cpp": "29_Star_Bridge.cpp",
    "19_butterfly.cpp": "30_Butterfly.cpp"
}


def main():
    for old_name, new_name in rename_map.items():
        if not os.path.exists(old_name):
            print(f"Warning: {old_name} not found, skipping.")
            continue
        if old_name == new_name:
            print(f"{old_name} is already correctly named.")
            continue
        # Avoid overwriting existing files
        if os.path.exists(new_name):
            print(f"Error: {new_name} already exists. Rename manually or delete it.")
            continue
        os.rename(old_name, new_name)
        print(f"Renamed: {old_name} -> {new_name}")

if __name__ == "__main__":
    main()
