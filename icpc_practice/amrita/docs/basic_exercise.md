###Exercise 1.2.3: Produce working code that is as concise as possible for the following tasks:

1. Using Java, read in a double
(e.g. 1.4732, 15.324547327, etc.)
echo it, but with a minimum field width of 7 and 3 digits after the decimal point
(e.g. ss1.473 (where ‘s’ denotes a space), s15.325, etc.)

2. Given an integer n (n ≤ 15), print π to n digits after the decimal point (rounded).
(e.g. for n = 2, print 3.14; for n = 4, print 3.1416; for n = 5, prints 3.14159.)

3. Given a date, determine the day of the week (Monday, . . . , Sunday) on that day.
(e.g. 9 August 2010—the launch date of the first edition of this book—is a Monday.)

4. Given n random integers, print the distinct (unique) integers in sorted order.

5. Given the distinct and valid birthdates of n people as triples (DD, MM, YYYY), order
them first by ascending birth months (MM), then by ascending birth dates (DD), and
finally by ascending age.

6. Given a list of sorted integers L of size up to 1M items, determine whether a value v
exists in L with no more than 20 comparisons (more details in Section 2.2).

7. Generate all possible permutations of {‘A’, ‘B’, ‘C’, . . . , ‘J’}, the first N = 10 letters
in the alphabet (see Section 3.2.1).

8. Generate all possible subsets of {0, 1, 2, . . . , N-1}, for N = 20 (see Section 3.2.1).

9. Given a string that represents a base X number, convert it to an equivalent string in
base Y, 2 ≤ X, Y ≤ 36. For example: “FF” in base X = 16 (hexadecimal) is “255” in
base Y 1 = 10 (decimal) and “11111111” in base Y 2 = 2 (binary). See Section 5.3.2.


10. Let’s define a ‘special word’ as a lowercase alphabet followed by two consecutive digits.
Given a string, replace all ‘special words’ of length 3 with 3 stars “***”, e.g.
S = “line: a70 and z72 will be replaced, aa24 and a872 will not”
should be transformed into:
S = “line: *** and *** will be replaced, aa24 and a872 will not”.

11. Given a valid mathematical expression involving ‘+’, ‘-’, ‘*’, ‘/’, ‘(’, and ‘)’ in a single
line, evaluate that expression. (e.g. a rather complicated but valid expression 3 + (8 -
7.5) * 10 / 5 - (2 + 5 * 7) should produce -33.0 when evaluated with standard
operator precedence.)



##Solutions
```
// Java code for task 1, assuming all necessary imports have been done
class Main {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
double d = sc.nextDouble();
System.out.printf("%7.3f\n", d);
// yes, Java has printf too!
} }
// C++ code for task 2, assuming all necessary includes have been done
int main() {
double pi = 2 * acos(0.0);
// this is a more accurate way to compute pi
int n; scanf("%d", &n);
printf("%.*lf\n", n, pi);
// this is the way to manipulate field width
}
// Java code for task 3, assuming all necessary imports have been done
class Main {
public static void main(String[] args) {
String[] names = new String[]
{ "", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
Calendar calendar = new GregorianCalendar(2010, 7, 9); // 9 August 2010
// note that month starts from 0, so we need to put 7 instead of 8
System.out.println(names[calendar.get(Calendar.DAY_OF_WEEK)]); // "Wed"
} }
// C++ code for task 4, assuming all necessary includes have been done
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
int main() {
int a[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
vector<int> v(a, a + 9);
sort(ALL(v)); UNIQUE(v);
for (int i = 0; i < (int)v.size(); i++) printf("%d\n", v[i]);
}
// C++ code for task 5, assuming all necessary includes have been done
typedef pair<int, int> ii;
// we will utilize the natural sort order
typedef pair<int, ii> iii;
// of the primitive data types that we paired
int main() {
iii A = make_pair(ii(5, 24), -1982);
// reorder DD/MM/YYYY
iii B = make_pair(ii(5, 24), -1980);
// to MM, DD,
iii C = make_pair(ii(11, 13), -1983);
// and then use NEGATIVE YYYY
vector<iii> birthdays;
birthdays.push_back(A); birthdays.push_back(B); birthdays.push_back(C);
sort(birthdays.begin(), birthdays.end());
// that’s all :)
}

// C++ code for task 6, assuming all necessary includes have been done
int main() {
int n = 5, L[] = {10, 7, 5, 20, 8}, v = 7;
sort(L, L + n);
printf("%d\n", binary_search(L, L + n, v));
}
// C++ code for task 7, assuming all necessary includes have been done
int main() {
int p[10], N = 10; for (int i = 0; i < N; i++) p[i] = i;
do {
for (int i = 0; i < N; i++) printf("%c ", ’A’ + p[i]);
printf("\n");
}
while (next_permutation(p, p + N));
}
// C++ code for task 8, assuming all necessary includes have been done
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
// Java code for task 9, assuming all necessary imports have been done
class Main {
public static void main(String[] args) {
String str = "FF"; int X = 16, Y = 10;
System.out.println(new BigInteger(str, X).toString(Y));
} }
// Java code for task 10, assuming all necessary imports have been done
class Main {
public static void main(String[] args) {
String S = "line: a70 and z72 will be replaced, aa24 and a872 will not";
System.out.println(S.replaceAll("(^| )+[a-z][0-9][0-9]( |$)+", " *** "));
} }
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