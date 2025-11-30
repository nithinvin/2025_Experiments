def bubble_sort_visual(arr):
    n = len(arr)
    print("Initial:", arr)
    for i in range(n):
        print(f"\nPass {i+1}:")
        for j in range(n - i - 1):
            print(f"  Compare {arr[j]} and {arr[j+1]}")
            if arr[j] > arr[j+1]:
                print("   Swap!")
                arr[j], arr[j+1] = arr[j+1], arr[j]
            print("   Current:", arr)
    print("\nFinal:", arr)

#bubble_sort_visual([4, 2, 7, 1])
bubble_sort_visual([9, 7, 5, 3, 1])