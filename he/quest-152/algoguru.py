import sys

def main():
    numCases = int(sys.stdin.readline())

    for case_number in range(numCases):
        list_length, expected_sum = [int(x) for x in sys.stdin.readline().split()]

        list_elements = set([int(x) for x in sys.stdin.readline().split() if int(x) <= expected_sum])

        if any([x == expected_sum for x in list_elements]):
            print expected_sum
            continue

        if any([expected_sum % x == 0 for x in list_elements]):
            print expected_sum
            continue

        print 0


if __name__ == '__main__':
    main()

