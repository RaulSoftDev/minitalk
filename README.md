<div align="center">
  <h1 align="center">Minitalk</h1>
</div>

<p direction="auto">
  Minitalk is a 42 Madrid Common Core project in which you have to code a small server-client data exchange program unsing UNIX signals.
</p>

## About the project
<p direction="auto">
  Minitalk implements a UNIX signals based server-client communication system. The client sends input text converted to binary to the server through the user UNIX signals: <code>SIGUSR1</code> and <code>SIGUSR2</code>.
  The server receive the transmission and decodes the text converting it back from binary and displaying it.
</p>
<h3>Mandatory parts</h3>
<ul>
  <li>The server must be launched first and will show its PID (process identifier).</li>
  <li>The client must receive as arguments the server PID and the string text to be sended.</li>
  <li>The server will receive the string text from the client and displays it almost instantly.</li>
  <li>The server can receive string texts from multiple clients without restarting.</li>
  <li>For the transmission you can only use the custom user UNIX signals: <code>SIGUSR1</code> and <code>SIGUSR2</code>.</li>
</ul>
<h3>Instructions</h3>
<ul>
  <li>The executables must be named <code>server</code> and <code>client</code>.</li>
  <li>There must be a Makefile that will compile the project.</li>
  <li>The program must be coded in C and must comply with 42 Norm.</li>
  <li>The program must compile with the <code>-Wall -Wextra -Werror</code> compiler flags.</li>
  <li>The program must handle possible errors: segmentation fault, bus error, double free, etc...</li>
  <li>The program mustn't have memory leaks.</li>
  <li>The use of global parameters is limited to only two: one for the server and one for the client.</li>
</ul>

## Compilation
<h3>Requirements</h3>
<ul>
  <li>C compiler: <code>gcc</code>, <code>cc</code>, etc...</li>
  <li><code>make</code> utility.</li>
  <li><code>libft</code> library in the project root folder.</li>
</ul>

<h3>Make commands</h3>
<ul>
  <li><code>make</code>: compile project.</li>
  <li><code>make clean</code>: deletes compilation files except the executables.</li>
  <li><code>make fclean</code>: deletes all compilation files.</li>
  <li><code>make re</code>: executes <code>make fclean</code> and <code>make</code>.</li>
</ul>

<h3>Build project</h3>
<ol>
<li>
<p dir="auto">Clone the repository:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>git clone https://github.com/RaulSoftDev/minitalk.git
<span class="pl-c1">cd</span> minitalk/</samp></pre>
</div>
</li>
<li>
<p dir="auto">Build the project:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>make</samp></pre>
</div>
</li>
<li>
<p dir="auto">Execute the server:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>./server</samp></pre>
</div>
</li>
<li>
<p dir="auto">Execute the client:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>./client &ltPID&gt &ltString&gt</samp></pre>
</div>
</li>
</ol>
