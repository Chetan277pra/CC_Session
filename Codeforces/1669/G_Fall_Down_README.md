<h3><a href="https://codeforces.com/contest/1669/problem/G" target="_blank">Fall Down</a></h3>

<div class="header"><div class="title">G. Fall Down</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a grid with $$$n$$$ rows and $$$m$$$ columns, and three types of cells: </p><ul> <li> An empty cell, denoted with '<span class="tex-font-style-tt">.</span>'. </li><li> A stone, denoted with '<span class="tex-font-style-tt">*</span>'. </li><li> An obstacle, denoted with the lowercase Latin letter '<span class="tex-font-style-tt">o</span>'. </li></ul><p>All stones fall down until they meet the floor (the bottom row), an obstacle, or other stone which is already immovable. (In other words, all the stones just fall down as long as they can fall.)</p><p>Simulate the process. What does the resulting grid look like?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 100$$$)&nbsp;— the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 50$$$)&nbsp;— the number of rows and the number of columns in the grid, respectively.</p><p>Then $$$n$$$ lines follow, each containing $$$m$$$ characters. Each of these characters is either '<span class="tex-font-style-tt">.</span>', '<span class="tex-font-style-tt">*</span>', or '<span class="tex-font-style-tt">o</span>'&nbsp;— an empty cell, a stone, or an obstacle, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a grid with $$$n$$$ rows and $$$m$$$ columns, showing the result of the process.</p><p><span class="tex-font-style-bf">You don't need to output a new line after each test, it is in the samples just for clarity.</span></p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005779324676340611" id="id0014368815567064042" class="input-output-copier">Copy</div></div><pre id="id005779324676340611">3
6 10
.*.*....*.
.*.......*
...o....o.
.*.*....*.
..........
.o......o*
2 9
...***ooo
.*o.*o.*o
5 5
*****
*....
*****
....*
*****
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006775085982232384" id="id0014585791518765479" class="input-output-copier">Copy</div></div><pre id="id006775085982232384">..........
...*....*.
.*.o....o.
.*........
.*......**
.o.*....o*

....**ooo
.*o**o.*o

.....
*...*
*****
*****
*****
</pre></div></div></div>