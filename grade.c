const char *outcome_from_grade(int grade)
{
   char *result = "invalid"; // default output

   if (grade >= 1 && grade <= 5)
      result = "fail";
   else
      if (grade >= 5 && grade <= 7)
         result = "pass";
      else
         if (grade >= 8 && grade <= 10)
            result = "distinction";

   return result;
}

