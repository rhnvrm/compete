#CPPNotes

##Accurate value of PI

```double pi = 2 * acos(0.0);```

##Manipulating Fieldwidth

here n is the number of digits after decimal

```printf("%.*lf\n", n, pi);```

##Using ALL template

```#define ALL(x) x.begin(), x.end()```


##Given n random integers, print the distinct (unique) integers in sorted order.

```
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
int main() {
int a[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
vector<int> v(a, a + 9);
sort(ALL(v)); UNIQUE(v);
for (int i = 0; i < (int)v.size(); i++) printf("%d\n", v[i]);
}
```

###Notes about Unique and resize

Unique cannot modify size of the container, so resize must be called on the size of new container.

#### Distance function

You can also use for resizing:

```
vector::iterator<int> it;
v.resize(distance(v.begin, it));
```

##Pairs
Simple Pairs: 
```typedef pair<int, int> ii;```

Pair of int and Pair: 
```typedef pair<int, ii> iii;```

###Sorting dates in ascending order

Make pair using:
```iii A = make_pair(ii(5, 24), -1982)```

then create a vector of iii and sort ALL(x);

##Binary Search

```
int main() {
int n = 5, L[] = {10, 7, 5, 20, 8}, v = 7;
sort(L, L + n);
printf("%d\n", binary_search(L, L + n, v));
}
```

##next_permutation

p is an array, n is size of array.

```while (next_permutation(p, p + N));```

## Generate all possible subsets of {0, 1, 2, . . . , N-1}, for N = 20

```
int main() {
int p[20], N = 20;
for (int i = 0; i < N; i++) p[i] = i;
for (int i = 0; i < (1 << N); i++) {
for (int j = 0; j < N; j++)
if (i & (1 << j))
// if bit j is on
printf("%d ", p[j]);
// this is part of set
printf("\n");
} }

```

## builtin GCD

```__gcd()```

##Cheating using Javascript (Java)

``` 
// Java code for task 11, assuming all necessary imports have been done
class Main {
public static void main(String[] args) throws Exception {
ScriptEngineManager mgr = new ScriptEngineManager();
ScriptEngine engine = mgr.getEngineByName("JavaScript");
// "cheat"
Scanner sc = new Scanner(System.in);
while (sc.hasNextLine()) System.out.println(engine.eval(sc.nextLine()));
} }
```