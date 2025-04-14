<div align="center">
  <img width="175" src="https://img.shields.io/badge/Grade-100%25-00dd13?style=for-the-badge&logo=42"/>
</div>

<div align="center">
  <h1 align="center">ft_printf</h1>
</div>

<p direction="auto">
 ft_printf is a 42 Madrid Common Core project in which you have to recode the <code>libc</code> library <code>printf</code> function.
</p>

## About the project
<p direction="auto">
  ft_printf is a variadic function that will allow you to format any input and send it through the terminal standard output <code>stdout</code>. It means that this function must take a dynamic number of variables and get their values.  
</p>
<h3>Mandatory parts</h3>
<ul>
  <li>Function protoype: <code>int ft_printf(char const *, ...);</code></li>
  <li>It's not necessary to implement the original <code>printf</code> buffer management.</li>
  <li>Your function will be compared to the original <code>printf</code>.</li>
  <li>To create your library you must use the <code>ar</code> command. <code>libtool</code> is forbidden.</li>
  <li>Your <code>libftprintf.a</code> file must be created in the root folder of the project.</li>
</ul>
<h3>Conversions</h3>
<ul>
  <li><code>%c</code> for characters.</li>
  <li><code>%s</code> for strings.</li>
  <li><code>%p</code> for <code>void *</code> pointers.</li>
  <li><code>%d</code> for base 10 decimal numbers.</li>
  <li><code>%i</code> for base 10 integers numbers.</li>
  <li><code>%u</code> for base 10 unsigned decimal numbers.</li>
  <li><code>%x</code> for base 16 lowercase hexadecimal numbers.</li>
  <li><code>%x</code> for base 16 uppercase hexadecimal numbers.</li>
  <li><code>%%</code> for the % character.</li>
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
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>git clone https://github.com/RaulSoftDev/ft_printf.git</samp></pre>
</div>
</li>
<li>
<p dir="auto">Build the project:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>make</samp></pre>
</div>
</li>
<li>
<p dir="auto">Use the library in your project:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre>#include "ft_printf/libftprintf.h"</pre>
</div>
</li>
<li>
<p dir="auto">Compile your project:</p>
<div class="highlight highlight-source-shell notranslate position-relative overflow-auto" dir="auto"><pre><samp>gcc -Wall -Wextra -Werror *.c ft_printf/libftprintf.a</samp></pre>
</div>
</li>
</ol>

