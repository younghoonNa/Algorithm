# Cpp_source

---
cin >> hex >> result;
-> 백준 1550번 문제를 풀면서 알게 되었는데 <b>cin >> hex >> result</b> <br>
&nbsp; &nbsp; &nbsp; 를 붙이게 되면 자동으로 16진수로 입력하였지만 result에는 10진수가 들어가게 된다.

<p>
### c++에서 날짜 표시하기
  time_t current_time = time(NULL); //time_t는 long time의 자료형 <br>
   struct tm *time = localtime(&current_time); <br>
  여기서 time->tm_year +1900 , time->tm_mon+1 , time->tm_mday 와 같은 형식으로 활용
</p>
