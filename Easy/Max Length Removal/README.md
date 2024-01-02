<h2><a href="https://www.geeksforgeeks.org/problems/max-length-removal0452/1?page=1&category=Strings&difficulty=Easy&sortBy=difficulty">Max Length Removal</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary string (consists of only 0 and 1). If there is “100” as a sub-string in the string, then we can delete this sub-string. The task is to find the length of longest sub-string which can be make removed?</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input  : </strong>
str = "1011100000100"
<strong>Output :</strong>
6
<strong>Explanation :</strong>
Sub-strings present in str that can be make
removed 101{110000}0{100}. First
sub-string 110000--&gt;100--&gt;null, length is = 6.
Second sub-string 100--&gt;null, length is = 3</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input  :</strong>
str = "111011"
<strong>Output :</strong>
0
<strong>Explanation :</strong>
There is no sub-string which can be make null.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>longestNull()</strong>&nbsp;which takes the string <strong>S[]</strong> as inputs and returns the length of the longest string that can be removed.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ string length ≤ 10<sup>4</sup><br>
S[i] = {0, 1}</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;