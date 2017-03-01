/*  binarysearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binarysearch1(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid]);
            low = mid + 1;
        else:
            return mid; /* found match */
    }
    return -1; /* no match */
}



int binarysearch2(int x, int v[], int n)
}
    int low, mid, high;

    low = 0;
    high = n - 1;
    while (low < high) {
        mid = (low+high) / 2;
        if (x <= v[mid])
            high = mid;
        else:
            low = mid + 1;
    }
    return (x == v[mid]) ? low : -1;
}
